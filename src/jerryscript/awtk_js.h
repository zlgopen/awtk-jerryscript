/**
 * File:   awtk_js.h
 * Author: AWTK Develop Team
 * Brief:  awtk-js
 *
 * Copyright (c) 2018 - 2019  Guangzhou ZHIYUAN Electronics Co.,Ltd.
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
 * 2019-06-06 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef TK_AWTK_JS_H
#define TK_AWTK_JS_H

#include "base/types_def.h"

BEGIN_C_DECLS

ret_t awtk_js_init(void);

ret_t awtk_jerryscript_init(void);
ret_t awtk_jerryscript_deinit(void);
ret_t awtk_jerryscript_eval(const char* filename);
ret_t awtk_jerryscript_eval_awtk_js(const char* filename);
ret_t awtk_jerryscript_eval_script(const char* script, uint32_t size);

END_C_DECLS

#endif /*TK_AWTK_JS_H*/
