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

#include "tkc/fs.h"
#include "tkc/mem.h"
#include "demos/assets.h"

#include "awtk.h"
#include "awtk_js.h"
#include "ext_widgets/ext_widgets.h"

int main(int argc, char* argv[]) {
  const char* script_file = argc == 2 ? argv[1] : "./demos/demoui.js";

  tk_init(320, 480, APP_SIMULATOR, NULL, RES_ROOT);

  assets_init();
  tk_ext_widgets_init();

  awtk_jerryscript_init();
  return_value_if_fail(awtk_jerryscript_eval_awtk_js("src/awtk.js") == RET_OK, 0);
  return_value_if_fail(awtk_jerryscript_eval(script_file) == RET_OK, 0);

  tk_run();

  awtk_jerryscript_deinit();

  return 0;
}
