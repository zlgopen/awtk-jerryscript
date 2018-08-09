#include <string.h>
#include "jerryscript.h"
#include "jerryscript-ext/handler.h"
#include "jerryscript_helper.h"

#include "awtk.h"
#include "base/fs.h"
#include "base/mem.h"
#include "demos/resource.h"

ret_t awtk_js_init(void);

static void test_register(void) {
  jerry_value_t obj = jerry_get_global_object ();
//  jerry_value_t obj = jerryx_handler_register_obj((const jerry_char_t*)"WidgetType");

  jerryx_obj_register_const_string(obj, (const jerry_char_t*)"BUTTON", (const jerry_char_t*)"button");
  jerryx_obj_register_const_int(obj, (const jerry_char_t*)"SCALE", 123);

  jerry_release_value (obj);

  return;
}

static jerry_value_t parse_file(const char* filename) {
  char* script = NULL;
  const char* awtk_js = "src/awtk.js";
  int32_t awtk_size = fs_file_size(awtk_js);
  int32_t file_size = fs_file_size(filename);
  int32_t script_size = awtk_size +  file_size;
  jerry_value_t parsed_code = jerry_create_undefined();

  return_value_if_fail(awtk_size > 0 && file_size > 0, parsed_code);
  script = TKMEM_ALLOC(awtk_size + file_size + 1);
  return_value_if_fail(script != NULL, parsed_code);

  fs_read_file_part(awtk_js, script, awtk_size, 0);
  fs_read_file_part(filename, script+awtk_size, file_size, 0);
  script[script_size] = '\0';
  
  parsed_code = jerry_parse (NULL, 0, (jerry_char_t*)script, script_size, JERRY_PARSE_NO_OPTS);

  return parsed_code;
}

int main(int argc, char* argv[]) {
  const char* script_file = argc == 2 ? argv[1] : "./demos/demo.js";
  
  tk_init(320, 480);
  resource_init();

  jerry_init (JERRY_INIT_EMPTY);
  jerryx_handler_register_global ((const jerry_char_t *) "print", jerryx_handler_print);
  test_register();
  awtk_js_init();
  jerry_value_t parsed_code = parse_file(script_file);

  if (!jerry_value_is_error (parsed_code))
  {
    jerry_value_t ret_value = jerry_run (parsed_code);
    jerry_release_value (ret_value);
  
    tk_run();
  }

  jerry_release_value (parsed_code);
  jerry_cleanup ();

  return 0;
}

