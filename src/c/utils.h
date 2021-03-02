
#include "jerryscript-ext/handler.h"

#ifndef JERRY_UITLS_H
#define JERRY_UITLS_H

jerry_value_t jerryx_handler_my_gc(const jerry_call_info_t *call_info_p, /**< function object */
                                   const jerry_value_t args_p[],     /**< function arguments */
                                   const jerry_length_t args_cnt);
jerry_value_t jerryx_handler_my_print(const jerry_call_info_t *call_info_p, /**< function object */
                                      const jerry_value_t args_p[],     /**< function arguments */
                                      const jerry_length_t args_cnt);

#endif /*JERRY_UITLS_H*/
