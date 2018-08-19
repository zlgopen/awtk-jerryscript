/**
 * File:   run_js.c
 * Author: AWTK Develop Team
 * Brief:  entry of javascript awtk
 *
 * Copyright (c) 2018 - 2018  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-08-08 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include <string.h>
#include "jerryscript.h"
#include "jerryscript-port.h"
#include "jerryscript-ext/handler.h"

#include "awtk.h"
#include "ext_widgets/ext_widgets.h"

#include "base/fs.h"
#include "base/mem.h"
#include "demos/resource.h"

extern ret_t awtk_js_init(void);

#define JERRY_BUFFER_SIZE (1048576)
#define SYNTAX_ERROR_CONTEXT_SIZE 2
#define JERRY_SNAPSHOT_BUFFER_SIZE (JERRY_BUFFER_SIZE / sizeof(uint32_t))

static uint8_t buffer[JERRY_BUFFER_SIZE];

static void print_unhandled_exception(jerry_value_t error_value) /**< error value */
{
  assert(!jerry_value_is_error(error_value));

  jerry_char_t err_str_buf[256];

  if (jerry_value_is_object(error_value)) {
    jerry_value_t stack_str = jerry_create_string((const jerry_char_t*)"stack");
    jerry_value_t backtrace_val = jerry_get_property(error_value, stack_str);
    jerry_release_value(stack_str);

    if (!jerry_value_is_error(backtrace_val) && jerry_value_is_array(backtrace_val)) {
      printf("Exception backtrace:\n");

      uint32_t length = jerry_get_array_length(backtrace_val);

      /* This length should be enough. */
      if (length > 32) {
        length = 32;
      }

      for (uint32_t i = 0; i < length; i++) {
        jerry_value_t item_val = jerry_get_property_by_index(backtrace_val, i);

        if (!jerry_value_is_error(item_val) && jerry_value_is_string(item_val)) {
          jerry_size_t str_size = jerry_get_string_size(item_val);

          if (str_size >= 256) {
            printf("%3u: [Backtrace string too long]\n", i);
          } else {
            jerry_size_t string_end = jerry_string_to_char_buffer(item_val, err_str_buf, str_size);
            assert(string_end == str_size);
            err_str_buf[string_end] = 0;

            printf("%3u: %s\n", i, err_str_buf);
          }
        }

        jerry_release_value(item_val);
      }
    }
    jerry_release_value(backtrace_val);
  }

  jerry_value_t err_str_val = jerry_value_to_string(error_value);
  jerry_size_t err_str_size = jerry_get_string_size(err_str_val);

  if (err_str_size >= 256) {
    const char msg[] = "[Error message too long]";
    err_str_size = sizeof(msg) / sizeof(char) - 1;
    memcpy(err_str_buf, msg, err_str_size + 1);
  } else {
    jerry_size_t string_end = jerry_string_to_char_buffer(err_str_val, err_str_buf, err_str_size);
    assert(string_end == err_str_size);
    err_str_buf[string_end] = 0;

    if (jerry_is_feature_enabled(JERRY_FEATURE_ERROR_MESSAGES) &&
        jerry_get_error_type(error_value) == JERRY_ERROR_SYNTAX) {
      unsigned int err_line = 0;
      unsigned int err_col = 0;

      /* 1. parse column and line information */
      for (jerry_size_t i = 0; i < string_end; i++) {
        if (!strncmp((char*)(err_str_buf + i), "[line: ", 7)) {
          i += 7;

          char num_str[8];
          unsigned int j = 0;

          while (i < string_end && err_str_buf[i] != ',') {
            num_str[j] = (char)err_str_buf[i];
            j++;
            i++;
          }
          num_str[j] = '\0';

          err_line = (unsigned int)strtol(num_str, NULL, 10);

          if (strncmp((char*)(err_str_buf + i), ", column: ", 10)) {
            break; /* wrong position info format */
          }

          i += 10;
          j = 0;

          while (i < string_end && err_str_buf[i] != ']') {
            num_str[j] = (char)err_str_buf[i];
            j++;
            i++;
          }
          num_str[j] = '\0';

          err_col = (unsigned int)strtol(num_str, NULL, 10);
          break;
        }
      } /* for */

      if (err_line != 0 && err_col != 0) {
        unsigned int curr_line = 1;

        bool is_printing_context = false;
        unsigned int pos = 0;

        /* 2. seek and print */
        while (buffer[pos] != '\0') {
          if (buffer[pos] == '\n') {
            curr_line++;
          }

          if (err_line < SYNTAX_ERROR_CONTEXT_SIZE ||
              (err_line >= curr_line && (err_line - curr_line) <= SYNTAX_ERROR_CONTEXT_SIZE)) {
            /* context must be printed */
            is_printing_context = true;
          }

          if (curr_line > err_line) {
            break;
          }

          if (is_printing_context) {
            jerry_port_log(JERRY_LOG_LEVEL_ERROR, "%c", buffer[pos]);
          }

          pos++;
        }

        jerry_port_log(JERRY_LOG_LEVEL_ERROR, "\n");

        while (--err_col) {
          jerry_port_log(JERRY_LOG_LEVEL_ERROR, "~");
        }

        jerry_port_log(JERRY_LOG_LEVEL_ERROR, "^\n");
      }
    }
  }

  jerry_port_log(JERRY_LOG_LEVEL_ERROR, "Script Error: %s\n", err_str_buf);
  jerry_release_value(err_str_val);
} /* print_unhandled_exception */

static jerry_value_t parse_file(const char* filename) {
  char* script = NULL;
  const char* awtk_js = "src/awtk.js";
  int32_t awtk_size = fs_file_size(awtk_js);
  int32_t file_size = fs_file_size(filename);
  int32_t script_size = awtk_size + file_size;
  jerry_value_t parsed_code = jerry_create_undefined();

  return_value_if_fail(awtk_size > 0 && file_size > 0, parsed_code);
  script = TKMEM_ALLOC(script_size + 1);
  return_value_if_fail(script != NULL, parsed_code);

  fs_read_file_part(awtk_js, script, awtk_size, 0);
  script[awtk_size] = '\n';

  fs_read_file_part(filename, script + awtk_size + 1, file_size, 0);
  script[script_size + 1] = '\0';

  parsed_code = jerry_parse(NULL, 0, (jerry_char_t*)script, script_size, JERRY_PARSE_NO_OPTS);

  fs_write_file("awtk_all.js", script, script_size);
  TKMEM_FREE(script);

  return parsed_code;
}

int main(int argc, char* argv[]) {
  const char* script_file = argc == 2 ? argv[1] : "./demos/demoui.js";

  tk_init(320, 480, APP_SIMULATOR, NULL, RES_ROOT);
  resource_init();

  jerry_init(JERRY_INIT_EMPTY);
  jerryx_handler_register_global((const jerry_char_t*)"print", jerryx_handler_print);

  awtk_js_init();
  tk_ext_widgets_init();
  jerry_value_t parsed_code = parse_file(script_file);

  if (!jerry_value_is_error(parsed_code)) {
    jerry_value_t ret_value = jerry_run(parsed_code);
    if (jerry_value_is_error(ret_value)) {
      ret_value = jerry_get_value_from_error(ret_value, true);
      print_unhandled_exception(ret_value);
    }

    jerry_release_value(ret_value);

    tk_run();
  } else {
    parsed_code = jerry_get_value_from_error(parsed_code, true);
    print_unhandled_exception(parsed_code);
  }

  jerry_release_value(parsed_code);
  jerry_cleanup();

  return 0;
}
