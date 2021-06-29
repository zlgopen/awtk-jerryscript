/**
 * File:   jerry_script_helper.h
 * Author: AWTK Develop Team
 * Brief:  jerry_script_helper
 *
 * Copyright (c) 2020 - 2020  Guangzhou ZHIYUAN Electronics Co.,Ltd.
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
 * 2020-05-03 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "tkc/utils.h"
#include "jerryscript.h"
#include "jerryscript-core.h"
#include "jerryscript-ext/handler.h"

#ifndef JERRY_SCRIPT_HELPER_H
#define JERRY_SCRIPT_HELPER_H

BEGIN_C_DECLS

ret_t jerry_script_register_builtins(void);
void jerry_script_print_error(jerry_value_t error_value);

ret_t jerry_value_check(jerry_value_t value);
ret_t jerry_script_eval_file(const char* filename, bool_t global);
ret_t jerry_script_eval_buff(const char* script, uint32_t size, const char* filename,
                             bool_t global);

#define jerry_get_boolean_value(v) jerry_value_to_boolean(v)

#if JERRY_API_MAJOR_VERSION == 2
#define HANDLER_PROTO(func_name)                                                          \
  jerry_value_t func_name(const jerry_value_t function_obj, const jerry_value_t this_val, \
                          const jerry_value_t argv[], const jerry_length_t argc)
#define JERRY_PARSE(code, size, name) jerry_parse(name, tk_strlen(name), code, size, 0)
#else
#define HANDLER_PROTO(func_name)                                                            \
  jerry_value_t func_name(const jerry_call_info_t* call_info_p, const jerry_value_t argv[], \
                          const jerry_length_t argc)
#define JERRY_PARSE(code, size, name) jerry_parse(code, size, name)
#endif /*JERRY_API_MAJOR_VERSION*/

END_C_DECLS

#endif /*JERRY_SCRIPT_HELPER_H*/
