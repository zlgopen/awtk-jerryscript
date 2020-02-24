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


#include "awtk.h"
#include "awtk_js.h"

#define STR_BOOT_JS "var exports = {};\n"

const char* script_file = NULL;

static ret_t on_cmd_line(int argc, char* argv[]) {
  script_file = argc == 2 ? argv[1] : "./demos/demoui.js";

  return RET_OK;
}

static ret_t application_init() {
  awtk_jerryscript_init();
  awtk_jerryscript_eval_script(STR_BOOT_JS, strlen(STR_BOOT_JS));
  return_value_if_fail(awtk_jerryscript_eval_awtk_js("src/js/awtk.js") == RET_OK, RET_FAIL);
  return_value_if_fail(awtk_jerryscript_eval(script_file) == RET_OK, RET_FAIL);

  return RET_OK;
}

static ret_t application_exit() {
  awtk_jerryscript_deinit();

  return RET_OK;
}

#define ON_CMD_LINE on_cmd_line

#include "awtk_main.inc"
