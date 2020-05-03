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

#include <string.h>
#include "jerryscript.h"
#include "jerryscript-port.h"
#include "jerryscript-core.h"
#include "jerryscript-ext/handler.h"
#include "awtk_js.h"

#include "tkc/fs.h"
#include "tkc/str.h"
#include "tkc/mem.h"

ret_t awtk_iotjs_jerryscript_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"gc", jerryx_handler_gc);
  jerryx_handler_register_global((const jerry_char_t*)"print", jerryx_handler_print);
  awtk_js_init();

  return RET_OK;
}

ret_t awtk_jerryscript_deinit(void) {
  jerry_cleanup();

  return RET_OK;
}

ret_t awtk_jerryscript_init(void) {
  jerry_init(JERRY_INIT_EMPTY);
  jerry_script_register_builtins();

  awtk_js_init();

  return RET_OK;
}
