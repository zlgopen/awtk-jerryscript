/**
 * File:   utils.c
 * Author: AWTK Develop Team
 * Brief:  utils
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

#include "jerryscript-ext/handler.h"

/**
 * Expose garbage collector to scripts.
 *
 * @return undefined.
 */
jerry_value_t jerryx_handler_my_gc(
    const jerry_call_info_t *call_info_p, /**< function object */
    const jerry_value_t args_p[],     /**< function arguments */
    const jerry_length_t args_cnt)    /**< number of function arguments */
{

  jerry_gc_mode_t mode =
      ((args_cnt > 0 && jerry_value_to_boolean(args_p[0])) ? JERRY_GC_PRESSURE_HIGH
                                                           : JERRY_GC_PRESSURE_LOW);

  jerry_gc(mode);
  return jerry_create_undefined();
} /* jerryx_handler_gc */

#include "jerryscript-ext/handler.h"
#include "jerryscript-port.h"
#include "jerryscript-debugger.h"

/**
 * Provide a 'print' implementation for scripts.
 *
 * The routine converts all of its arguments to strings and outputs them
 * char-by-char using jerry_port_print_char.
 *
 * The NUL character is output as "\u0000", other characters are output
 * bytewise.
 *
 * Note:
 *      This implementation does not use standard C `printf` to print its
 *      output. This allows more flexibility but also extends the core
 *      JerryScript engine port API. Applications that want to use
 *      `jerryx_handler_print` must ensure that their port implementation also
 *      provides `jerry_port_print_char`.
 *
 * @return undefined - if all arguments could be converted to strings,
 *         error - otherwise.
 */
jerry_value_t jerryx_handler_my_print(
    const jerry_call_info_t *call_info_p, /**< function object */
    const jerry_value_t args_p[],     /**< function arguments */
    const jerry_length_t args_cnt)    /**< number of function arguments */
{
  const char* const null_str = "\\u0000";

  jerry_value_t ret_val = jerry_create_undefined();

  for (jerry_length_t arg_index = 0; arg_index < args_cnt; arg_index++) {
    jerry_value_t str_val;

    if (jerry_value_is_symbol(args_p[arg_index])) {
      str_val = jerry_get_symbol_descriptive_string(args_p[arg_index]);
    } else {
      str_val = jerry_value_to_string(args_p[arg_index]);
    }

    if (jerry_value_is_error(str_val)) {
      /* There is no need to free the undefined value. */
      ret_val = str_val;
      break;
    }

    jerry_length_t length = jerry_get_utf8_string_length(str_val);
    jerry_length_t substr_pos = 0;
    jerry_char_t substr_buf[256];

    do {
      jerry_size_t substr_size =
          jerry_substring_to_utf8_char_buffer(str_val, substr_pos, length, substr_buf, 256 - 1);

      jerry_char_t* buf_end_p = substr_buf + substr_size;

      /* Update start position by the number of utf-8 characters. */
      for (jerry_char_t* buf_p = substr_buf; buf_p < buf_end_p; buf_p++) {
        /* Skip intermediate utf-8 octets. */
        if ((*buf_p & 0xc0) != 0x80) {
          substr_pos++;
        }
      }

      if (substr_pos == length) {
        *buf_end_p++ = (arg_index < args_cnt - 1) ? ' ' : '\n';
      }

      for (jerry_char_t* buf_p = substr_buf; buf_p < buf_end_p; buf_p++) {
        char chr = (char)*buf_p;

        if (chr != '\0') {
          jerry_port_print_char(chr);
          continue;
        }

        for (jerry_size_t null_index = 0; null_str[null_index] != '\0'; null_index++) {
          jerry_port_print_char(null_str[null_index]);
        }
      }
    } while (substr_pos < length);

    jerry_release_value(str_val);
  }

  if (args_cnt == 0 || jerry_value_is_error(ret_val)) {
    jerry_port_print_char('\n');
  }

  return ret_val;
} /* jerryx_handler_print */
