#include <string.h>
#include "jerryscript.h"
#include "jerryscript-ext/handler.h"
#include "jerryscript_helper.h"

jerry_value_t
jerryx_obj_register_const_string (jerry_value_t obj, const jerry_char_t *name_p,
                                const jerry_char_t *value_p)
{
  jerry_value_t name_val = jerry_create_string (name_p);
  jerry_value_t value_val = jerry_create_string (value_p);

  jerry_value_t result_val = jerry_set_property (obj, name_val, value_val);

  jerry_release_value (value_val);
  jerry_release_value (name_val);

  return result_val;
} 

jerry_value_t
jerryx_obj_register_const_int(jerry_value_t obj, const jerry_char_t *name_p,
                                int32_t value)
{
  jerry_value_t name_val = jerry_create_string (name_p);
  jerry_value_t value_val = jerry_create_number(value);

  jerry_value_t result_val = jerry_set_property (obj, name_val, value_val);

  jerry_release_value (value_val);
  jerry_release_value (name_val);

  return result_val;
} 

jerry_value_t
jerryx_obj_register_func(jerry_value_t obj, const jerry_char_t *name_p, /**< name of the function */
                                jerry_external_handler_t handler_p) /**< function callback */
{
  jerry_value_t function_name_val = jerry_create_string (name_p);
  jerry_value_t function_val = jerry_create_external_function (handler_p);

  jerry_value_t result_val = jerry_set_property (obj, function_name_val, function_val);

  jerry_release_value (function_val);
  jerry_release_value (function_name_val);

  return result_val;
} /* jerryx_handler_register_global */

jerry_value_t
jerryx_handler_register_obj(const jerry_char_t *name_p)
{
  jerry_value_t obj = jerry_get_global_object ();
  jerry_value_t name_val = jerry_create_string (name_p);
  jerry_value_t value_val = jerry_create_object();

  jerry_value_t result_val = jerry_set_property (obj, name_val, value_val);

  jerry_release_value (value_val);
  jerry_release_value (name_val);
  jerry_release_value (obj);

  return result_val;
} 

