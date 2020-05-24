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
#include "jerry_script_helper.h"

const char* script_file = NULL;

static ret_t on_cmd_line(int argc, char* argv[]) {
  script_file = argc == 2 ? argv[1] : "demoui";

  return RET_OK;
}

static ret_t application_init() {
  awtk_jerryscript_init();
  return_value_if_fail(jerry_script_eval_file("awtk", TRUE) == RET_OK, RET_FAIL);
  return_value_if_fail(jerry_script_eval_file(script_file, FALSE) == RET_OK, RET_FAIL);

  return RET_OK;
}

static ret_t application_exit() {
  awtk_jerryscript_deinit();

  return RET_OK;
}

#define APP_NAME "AWTK-JS"
#define ON_CMD_LINE on_cmd_line
#define APP_DEFAULT_FONT "default_full"

#include "awtk_main.inc"
