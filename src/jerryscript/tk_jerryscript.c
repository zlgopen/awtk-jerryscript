/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include "jerryscript.h"
#include "jerryscript-ext/handler.h"
#include "base/types_def.h"
#include "src/awtk_global.h"
#include "base/assets_manager.h"
#include "base/bitmap.h"
#include "base/canvas.h"
#include "base/clip_board.h"
#include "base/events.h"
#include "base/idle.h"
#include "base/image_manager.h"
#include "base/input_method.h"
#include "base/locale_info.h"
#include "base/style.h"
#include "base/timer.h"
#include "base/widget_consts.h"
#include "base/widget.h"
#include "ext_widgets/ext_widgets.h"
#include "tkc/color.h"
#include "tkc/date_time.h"
#include "tkc/event.h"
#include "tkc/rect.h"
#include "tkc/time_now.h"
#include "tkc/types_def.h"
#include "tkc/value.h"
#include "rich_text/rich_text.h"
#include "scroll_view/list_item.h"
#include "scroll_view/list_view_h.h"
#include "scroll_view/list_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/scroll_view.h"
#include "slide_menu/slide_menu.h"
#include "slide_view/slide_view.h"
#include "widgets/tab_control.h"
#include "switch/switch.h"
#include "text_selector/text_selector.h"
#include "time_clock/digit_clock.h"
#include "time_clock/time_clock.h"
#include "widgets/window.h"
#include "base/window_base.h"
#include "base/window_manager.h"
#include "designer_support/style_mutable.h"
#include "canvas_widget/canvas_widget.h"
#include "color_picker/color_picker.h"
#include "widgets/view.h"
#include "guage/guage_pointer.h"
#include "base/image_base.h"
#include "image_animation/image_animation.h"
#include "image_value/image_value.h"
#include "progress_circle/progress_circle.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/check_button.h"
#include "widgets/color_tile.h"
#include "widgets/column.h"
#include "widgets/combo_box_item.h"
#include "widgets/combo_box.h"
#include "widgets/dialog_client.h"
#include "widgets/dialog_title.h"
#include "widgets/dialog.h"
#include "widgets/dragger.h"
#include "widgets/edit.h"
#include "widgets/grid_item.h"
#include "widgets/grid.h"
#include "widgets/group_box.h"
#include "widgets/tab_button.h"
#include "widgets/label.h"
#include "widgets/pages.h"
#include "widgets/popup.h"
#include "widgets/progress_bar.h"
#include "widgets/row.h"
#include "widgets/slider.h"
#include "widgets/tab_button_group.h"
#include "guage/guage.h"
#include "widgets/system_bar.h"
#include "widgets/spin_box.h"
#include "widgets/image.h"
#include "svg_image/svg_image.h"
#include "gif_image/gif_image.h"
#include "custom.c"

jerry_value_t get_ALIGN_V_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ALIGN_V_NONE);
}

jerry_value_t get_ALIGN_V_MIDDLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ALIGN_V_MIDDLE);
}

jerry_value_t get_ALIGN_V_TOP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ALIGN_V_TOP);
}

jerry_value_t get_ALIGN_V_BOTTOM(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ALIGN_V_BOTTOM);
}

ret_t align_v_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_NONE", get_ALIGN_V_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_MIDDLE", get_ALIGN_V_MIDDLE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_TOP", get_ALIGN_V_TOP);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_BOTTOM", get_ALIGN_V_BOTTOM);

 return RET_OK;
}

jerry_value_t wrap_tk_quit(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  ret = (ret_t)tk_quit();

  return jerry_create_number(ret);
}

ret_t tk_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"tk_quit", wrap_tk_quit);

 return RET_OK;
}

jerry_value_t wrap_asset_info_t_get_prop_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  asset_info_t* obj = (asset_info_t*)jerry_get_pointer(args_p[0], "asset_info_t*");

  return jerry_create_number(obj->type);
}

jerry_value_t wrap_asset_info_t_get_prop_subtype(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  asset_info_t* obj = (asset_info_t*)jerry_get_pointer(args_p[0], "asset_info_t*");

  return jerry_create_number(obj->subtype);
}

jerry_value_t wrap_asset_info_t_get_prop_is_in_rom(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  asset_info_t* obj = (asset_info_t*)jerry_get_pointer(args_p[0], "asset_info_t*");

  return jerry_create_number(obj->is_in_rom);
}

jerry_value_t wrap_asset_info_t_get_prop_size(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  asset_info_t* obj = (asset_info_t*)jerry_get_pointer(args_p[0], "asset_info_t*");

  return jerry_create_number(obj->size);
}

jerry_value_t wrap_asset_info_t_get_prop_refcount(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  asset_info_t* obj = (asset_info_t*)jerry_get_pointer(args_p[0], "asset_info_t*");

  return jerry_create_number(obj->refcount);
}

jerry_value_t wrap_asset_info_t_get_prop_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  asset_info_t* obj = (asset_info_t*)jerry_get_pointer(args_p[0], "asset_info_t*");

  return jerry_create_str(obj->name);
}

ret_t asset_info_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_type", wrap_asset_info_t_get_prop_type);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_subtype", wrap_asset_info_t_get_prop_subtype);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_is_in_rom", wrap_asset_info_t_get_prop_is_in_rom);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_size", wrap_asset_info_t_get_prop_size);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_refcount", wrap_asset_info_t_get_prop_refcount);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_name", wrap_asset_info_t_get_prop_name);

 return RET_OK;
}

jerry_value_t wrap_assets_manager(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  assets_manager_t* ret = NULL;
  ret = (assets_manager_t*)assets_manager();

  return jerry_create_pointer(ret, "assets_manager_t*");
}

jerry_value_t wrap_assets_manager_ref(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  asset_info_t* ret = NULL;
  assets_manager_t* rm = (assets_manager_t*)jerry_get_pointer(args_p[0], "assets_manager_t*");
  asset_type_t type = (asset_type_t)jerry_get_number_value(args_p[1]);
  char* name = (char*)jerry_get_utf8_string(args_p[2]);
  ret = (asset_info_t*)assets_manager_ref(rm, type, name);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "asset_info_t*");
}

jerry_value_t wrap_assets_manager_unref(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  assets_manager_t* rm = (assets_manager_t*)jerry_get_pointer(args_p[0], "assets_manager_t*");
  asset_info_t* info = (asset_info_t*)jerry_get_pointer(args_p[1], "asset_info_t*");
  ret = (ret_t)assets_manager_unref(rm, info);

  return jerry_create_number(ret);
}

ret_t assets_manager_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager", wrap_assets_manager);
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager_ref", wrap_assets_manager_ref);
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager_unref", wrap_assets_manager_unref);

 return RET_OK;
}

jerry_value_t get_BITMAP_FMT_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_NONE);
}

jerry_value_t get_BITMAP_FMT_RGBA8888(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_RGBA8888);
}

jerry_value_t get_BITMAP_FMT_ABGR8888(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_ABGR8888);
}

jerry_value_t get_BITMAP_FMT_BGRA8888(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_BGRA8888);
}

jerry_value_t get_BITMAP_FMT_ARGB8888(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_ARGB8888);
}

jerry_value_t get_BITMAP_FMT_RGB565(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_RGB565);
}

jerry_value_t get_BITMAP_FMT_BGR565(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_BGR565);
}

jerry_value_t get_BITMAP_FMT_RGB888(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_RGB888);
}

jerry_value_t get_BITMAP_FMT_BGR888(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FMT_BGR888);
}

ret_t bitmap_format_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_NONE", get_BITMAP_FMT_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_RGBA8888", get_BITMAP_FMT_RGBA8888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_ABGR8888", get_BITMAP_FMT_ABGR8888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_BGRA8888", get_BITMAP_FMT_BGRA8888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_ARGB8888", get_BITMAP_FMT_ARGB8888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_RGB565", get_BITMAP_FMT_RGB565);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_BGR565", get_BITMAP_FMT_BGR565);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_RGB888", get_BITMAP_FMT_RGB888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_BGR888", get_BITMAP_FMT_BGR888);

 return RET_OK;
}

jerry_value_t get_BITMAP_FLAG_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FLAG_NONE);
}

jerry_value_t get_BITMAP_FLAG_OPAQUE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FLAG_OPAQUE);
}

jerry_value_t get_BITMAP_FLAG_IMMUTABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FLAG_IMMUTABLE);
}

jerry_value_t get_BITMAP_FLAG_TEXTURE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FLAG_TEXTURE);
}

jerry_value_t get_BITMAP_FLAG_CHANGED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(BITMAP_FLAG_CHANGED);
}

ret_t bitmap_flag_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_NONE", get_BITMAP_FLAG_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_OPAQUE", get_BITMAP_FLAG_OPAQUE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_IMMUTABLE", get_BITMAP_FLAG_IMMUTABLE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_TEXTURE", get_BITMAP_FLAG_TEXTURE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_CHANGED", get_BITMAP_FLAG_CHANGED);

 return RET_OK;
}

jerry_value_t wrap_bitmap_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bitmap_t* ret = NULL;
  ret = (bitmap_t*)bitmap_create();

  return jerry_create_pointer(ret, "bitmap_t*");
}

jerry_value_t wrap_bitmap_create_ex(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bitmap_t* ret = NULL;
  uint32_t w = (uint32_t)jerry_get_number_value(args_p[0]);
  uint32_t h = (uint32_t)jerry_get_number_value(args_p[1]);
  uint32_t line_length = (uint32_t)jerry_get_number_value(args_p[2]);
  bitmap_format_t format = (bitmap_format_t)jerry_get_number_value(args_p[3]);
  ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);

  return jerry_create_pointer(ret, "bitmap_t*");
}

jerry_value_t wrap_bitmap_get_bpp(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint32_t ret = 0;
  bitmap_t* bitmap = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");
  ret = (uint32_t)bitmap_get_bpp(bitmap);

  return jerry_create_number(ret);
}

jerry_value_t wrap_bitmap_destroy(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  bitmap_t* bitmap = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");
  ret = (ret_t)bitmap_destroy(bitmap);

  return jerry_create_number(ret);
}

jerry_value_t wrap_bitmap_t_get_prop_w(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->w);
}

jerry_value_t wrap_bitmap_t_get_prop_h(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->h);
}

jerry_value_t wrap_bitmap_t_get_prop_line_length(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->line_length);
}

jerry_value_t wrap_bitmap_t_get_prop_flags(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->flags);
}

jerry_value_t wrap_bitmap_t_get_prop_format(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->format);
}

jerry_value_t wrap_bitmap_t_get_prop_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_str(obj->name);
}

ret_t bitmap_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_create", wrap_bitmap_create);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_create_ex", wrap_bitmap_create_ex);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_get_bpp", wrap_bitmap_get_bpp);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_destroy", wrap_bitmap_destroy);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_w", wrap_bitmap_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_h", wrap_bitmap_t_get_prop_h);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_line_length", wrap_bitmap_t_get_prop_line_length);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_flags", wrap_bitmap_t_get_prop_flags);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_format", wrap_bitmap_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_name", wrap_bitmap_t_get_prop_name);

 return RET_OK;
}

jerry_value_t get_IMAGE_DRAW_DEFAULT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_DEFAULT);
}

jerry_value_t get_IMAGE_DRAW_CENTER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_CENTER);
}

jerry_value_t get_IMAGE_DRAW_ICON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_ICON);
}

jerry_value_t get_IMAGE_DRAW_SCALE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_SCALE);
}

jerry_value_t get_IMAGE_DRAW_SCALE_AUTO(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_SCALE_AUTO);
}

jerry_value_t get_IMAGE_DRAW_SCALE_DOWN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_SCALE_DOWN);
}

jerry_value_t get_IMAGE_DRAW_SCALE_W(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_SCALE_W);
}

jerry_value_t get_IMAGE_DRAW_SCALE_H(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_SCALE_H);
}

jerry_value_t get_IMAGE_DRAW_REPEAT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_REPEAT);
}

jerry_value_t get_IMAGE_DRAW_REPEAT_X(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_REPEAT_X);
}

jerry_value_t get_IMAGE_DRAW_REPEAT_Y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_REPEAT_Y);
}

jerry_value_t get_IMAGE_DRAW_PATCH9(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_PATCH9);
}

jerry_value_t get_IMAGE_DRAW_PATCH3_X(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_PATCH3_X);
}

jerry_value_t get_IMAGE_DRAW_PATCH3_Y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_PATCH3_Y);
}

jerry_value_t get_IMAGE_DRAW_PATCH3_X_SCALE_Y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

jerry_value_t get_IMAGE_DRAW_PATCH3_Y_SCALE_X(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

ret_t image_draw_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_DEFAULT", get_IMAGE_DRAW_DEFAULT);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_CENTER", get_IMAGE_DRAW_CENTER);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_ICON", get_IMAGE_DRAW_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE", get_IMAGE_DRAW_SCALE);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_AUTO", get_IMAGE_DRAW_SCALE_AUTO);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_DOWN", get_IMAGE_DRAW_SCALE_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_W", get_IMAGE_DRAW_SCALE_W);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_H", get_IMAGE_DRAW_SCALE_H);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT", get_IMAGE_DRAW_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT_X", get_IMAGE_DRAW_REPEAT_X);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT_Y", get_IMAGE_DRAW_REPEAT_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH9", get_IMAGE_DRAW_PATCH9);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_X", get_IMAGE_DRAW_PATCH3_X);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_Y", get_IMAGE_DRAW_PATCH3_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_X_SCALE_Y", get_IMAGE_DRAW_PATCH3_X_SCALE_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_Y_SCALE_X", get_IMAGE_DRAW_PATCH3_Y_SCALE_X);

 return RET_OK;
}

jerry_value_t wrap_canvas_get_width(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wh_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  ret = (wh_t)canvas_get_width(c);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_get_height(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wh_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  ret = (wh_t)canvas_get_height(c);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_get_clip_rect(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  rect_t* r = (rect_t*)jerry_get_pointer(args_p[1], "rect_t*");
  ret = (ret_t)canvas_get_clip_rect(c, r);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_set_clip_rect(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const rect_t* r = (const rect_t*)jerry_get_pointer(args_p[1], "const rect_t*");
  ret = (ret_t)canvas_set_clip_rect(c, r);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_set_clip_rect_ex(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const rect_t* r = (const rect_t*)jerry_get_pointer(args_p[1], "const rect_t*");
  bool_t translate = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_set_fill_color_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const char* color = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)canvas_set_fill_color_str(c, color);
  TKMEM_FREE(color);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_set_text_color_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const char* color = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)canvas_set_text_color_str(c, color);
  TKMEM_FREE(color);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_set_stroke_color_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const char* color = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)canvas_set_stroke_color_str(c, color);
  TKMEM_FREE(color);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_set_global_alpha(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  uint8_t alpha = (uint8_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)canvas_set_global_alpha(c, alpha);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_translate(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  xy_t dx = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t dy = (xy_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)canvas_translate(c, dx, dy);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_untranslate(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  xy_t dx = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t dy = (xy_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)canvas_untranslate(c, dx, dy);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_draw_vline(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)canvas_draw_vline(c, x, y, h);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_draw_hline(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)canvas_draw_hline(c, x, y, w);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_fill_rect(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (ret_t)canvas_fill_rect(c, x, y, w, h);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_stroke_rect(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_set_font(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  font_size_t size = (font_size_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)canvas_set_font(c, name, size);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_measure_utf8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const char* str = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)canvas_measure_utf8(c, str);
  TKMEM_FREE(str);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_draw_utf8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const char* str = (const char*)jerry_get_utf8_string(args_p[1]);
  xy_t x = (xy_t)jerry_get_number_value(args_p[2]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)canvas_draw_utf8(c, str, x, y);
  TKMEM_FREE(str);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_draw_utf8_in_rect(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  const char* str = (const char*)jerry_get_utf8_string(args_p[1]);
  const rect_t* r = (const rect_t*)jerry_get_pointer(args_p[2], "const rect_t*");
  ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
  TKMEM_FREE(str);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_draw_icon(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jerry_get_pointer(args_p[1], "bitmap_t*");
  xy_t cx = (xy_t)jerry_get_number_value(args_p[2]);
  xy_t cy = (xy_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)canvas_draw_icon(c, img, cx, cy);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_draw_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jerry_get_pointer(args_p[1], "bitmap_t*");
  rect_t* src = (rect_t*)jerry_get_pointer(args_p[2], "rect_t*");
  rect_t* dst = (rect_t*)jerry_get_pointer(args_p[3], "rect_t*");
  ret = (ret_t)canvas_draw_image(c, img, src, dst);

  return jerry_create_number(ret);
}

jerry_value_t wrap_canvas_get_vgcanvas(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  vgcanvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  ret = (vgcanvas_t*)canvas_get_vgcanvas(c);

  return jerry_create_pointer(ret, "canvas_t*");
}

jerry_value_t wrap_canvas_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  canvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jerry_get_pointer(args_p[0], "canvas_t*");
  ret = (canvas_t*)canvas_cast(c);

  return jerry_create_pointer(ret, "canvas_t*");
}

ret_t canvas_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_width", wrap_canvas_get_width);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_height", wrap_canvas_get_height);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_clip_rect", wrap_canvas_get_clip_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_clip_rect", wrap_canvas_set_clip_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_clip_rect_ex", wrap_canvas_set_clip_rect_ex);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_fill_color_str", wrap_canvas_set_fill_color_str);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_text_color_str", wrap_canvas_set_text_color_str);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_stroke_color_str", wrap_canvas_set_stroke_color_str);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_global_alpha", wrap_canvas_set_global_alpha);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_translate", wrap_canvas_translate);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_untranslate", wrap_canvas_untranslate);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_vline", wrap_canvas_draw_vline);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_hline", wrap_canvas_draw_hline);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_fill_rect", wrap_canvas_fill_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_stroke_rect", wrap_canvas_stroke_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_font", wrap_canvas_set_font);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_measure_utf8", wrap_canvas_measure_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_utf8", wrap_canvas_draw_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_utf8_in_rect", wrap_canvas_draw_utf8_in_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_icon", wrap_canvas_draw_icon);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_image", wrap_canvas_draw_image);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_vgcanvas", wrap_canvas_get_vgcanvas);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_cast", wrap_canvas_cast);

 return RET_OK;
}

jerry_value_t get_CLIP_BOARD_DATA_TYPE_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(CLIP_BOARD_DATA_TYPE_NONE);
}

jerry_value_t get_CLIP_BOARD_DATA_TYPE_TEXT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(CLIP_BOARD_DATA_TYPE_TEXT);
}

ret_t clip_board_data_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"CLIP_BOARD_DATA_TYPE_NONE", get_CLIP_BOARD_DATA_TYPE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"CLIP_BOARD_DATA_TYPE_TEXT", get_CLIP_BOARD_DATA_TYPE_TEXT);

 return RET_OK;
}

jerry_value_t wrap_clip_board_set_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  const char* text = (const char*)jerry_get_utf8_string(args_p[0]);
  ret = (ret_t)clip_board_set_text(text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_clip_board_get_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  const char* ret = NULL;
  ret = (const char*)clip_board_get_text();

  return jerry_create_str(ret);
}

ret_t clip_board_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"clip_board_set_text", wrap_clip_board_set_text);
  jerryx_handler_register_global((const jerry_char_t*)"clip_board_get_text", wrap_clip_board_get_text);

 return RET_OK;
}

jerry_value_t get_EVT_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_NONE);
}

jerry_value_t get_EVT_POINTER_DOWN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_POINTER_DOWN);
}

jerry_value_t get_EVT_POINTER_DOWN_ABORT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_POINTER_DOWN_ABORT);
}

jerry_value_t get_EVT_POINTER_MOVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_POINTER_MOVE);
}

jerry_value_t get_EVT_POINTER_UP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_POINTER_UP);
}

jerry_value_t get_EVT_WHEEL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_WHEEL);
}

jerry_value_t get_EVT_CONTEXT_MENU(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_CONTEXT_MENU);
}

jerry_value_t get_EVT_POINTER_ENTER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_POINTER_ENTER);
}

jerry_value_t get_EVT_POINTER_LEAVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_POINTER_LEAVE);
}

jerry_value_t get_EVT_LONG_PRESS(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_LONG_PRESS);
}

jerry_value_t get_EVT_CLICK(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_CLICK);
}

jerry_value_t get_EVT_FOCUS(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_FOCUS);
}

jerry_value_t get_EVT_BLUR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_BLUR);
}

jerry_value_t get_EVT_KEY_DOWN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_KEY_DOWN);
}

jerry_value_t get_EVT_KEY_REPEAT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_KEY_REPEAT);
}

jerry_value_t get_EVT_KEY_UP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_KEY_UP);
}

jerry_value_t get_EVT_DESTROY(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_DESTROY);
}

jerry_value_t get_EVT_WILL_MOVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_WILL_MOVE);
}

jerry_value_t get_EVT_MOVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_MOVE);
}

jerry_value_t get_EVT_WILL_RESIZE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_WILL_RESIZE);
}

jerry_value_t get_EVT_RESIZE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_RESIZE);
}

jerry_value_t get_EVT_WILL_MOVE_RESIZE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_WILL_MOVE_RESIZE);
}

jerry_value_t get_EVT_MOVE_RESIZE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_MOVE_RESIZE);
}

jerry_value_t get_EVT_PROP_WILL_CHANGE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_PROP_WILL_CHANGE);
}

jerry_value_t get_EVT_PROP_CHANGED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_PROP_CHANGED);
}

jerry_value_t get_EVT_VALUE_WILL_CHANGE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_VALUE_WILL_CHANGE);
}

jerry_value_t get_EVT_VALUE_CHANGED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_VALUE_CHANGED);
}

jerry_value_t get_EVT_VALUE_CHANGING(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_VALUE_CHANGING);
}

jerry_value_t get_EVT_PAINT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_PAINT);
}

jerry_value_t get_EVT_BEFORE_PAINT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_BEFORE_PAINT);
}

jerry_value_t get_EVT_AFTER_PAINT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_AFTER_PAINT);
}

jerry_value_t get_EVT_LOCALE_CHANGED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_LOCALE_CHANGED);
}

jerry_value_t get_EVT_ANIM_START(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_ANIM_START);
}

jerry_value_t get_EVT_ANIM_STOP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_ANIM_STOP);
}

jerry_value_t get_EVT_ANIM_PAUSE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_ANIM_PAUSE);
}

jerry_value_t get_EVT_ANIM_ONCE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_ANIM_ONCE);
}

jerry_value_t get_EVT_ANIM_END(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_ANIM_END);
}

jerry_value_t get_EVT_WINDOW_LOAD(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_WINDOW_LOAD);
}

jerry_value_t get_EVT_WINDOW_WILL_OPEN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_WINDOW_WILL_OPEN);
}

jerry_value_t get_EVT_WINDOW_OPEN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_WINDOW_OPEN);
}

jerry_value_t get_EVT_WINDOW_CLOSE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_WINDOW_CLOSE);
}

jerry_value_t get_EVT_REQUEST_CLOSE_WINDOW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_REQUEST_CLOSE_WINDOW);
}

jerry_value_t get_EVT_TOP_WINDOW_CHANGED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_TOP_WINDOW_CHANGED);
}

jerry_value_t get_EVT_IM_COMMIT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_IM_COMMIT);
}

jerry_value_t get_EVT_IM_SHOW_CANDIDATES(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_IM_SHOW_CANDIDATES);
}

jerry_value_t get_EVT_IM_ACTION(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_IM_ACTION);
}

jerry_value_t get_EVT_IM_ACTION_INFO(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_IM_ACTION_INFO);
}

jerry_value_t get_EVT_DRAG_START(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_DRAG_START);
}

jerry_value_t get_EVT_DRAG(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_DRAG);
}

jerry_value_t get_EVT_DRAG_END(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_DRAG_END);
}

jerry_value_t get_EVT_REQ_START(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_REQ_START);
}

jerry_value_t get_EVT_USER_START(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(EVT_USER_START);
}

ret_t event_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"EVT_NONE", get_EVT_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_DOWN", get_EVT_POINTER_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_DOWN_ABORT", get_EVT_POINTER_DOWN_ABORT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_MOVE", get_EVT_POINTER_MOVE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_UP", get_EVT_POINTER_UP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WHEEL", get_EVT_WHEEL);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_CONTEXT_MENU", get_EVT_CONTEXT_MENU);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_ENTER", get_EVT_POINTER_ENTER);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_LEAVE", get_EVT_POINTER_LEAVE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_LONG_PRESS", get_EVT_LONG_PRESS);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_CLICK", get_EVT_CLICK);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_FOCUS", get_EVT_FOCUS);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_BLUR", get_EVT_BLUR);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_DOWN", get_EVT_KEY_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_REPEAT", get_EVT_KEY_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_UP", get_EVT_KEY_UP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DESTROY", get_EVT_DESTROY);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WILL_MOVE", get_EVT_WILL_MOVE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_MOVE", get_EVT_MOVE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WILL_RESIZE", get_EVT_WILL_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_RESIZE", get_EVT_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WILL_MOVE_RESIZE", get_EVT_WILL_MOVE_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_MOVE_RESIZE", get_EVT_MOVE_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROP_WILL_CHANGE", get_EVT_PROP_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROP_CHANGED", get_EVT_PROP_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_WILL_CHANGE", get_EVT_VALUE_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_CHANGED", get_EVT_VALUE_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_CHANGING", get_EVT_VALUE_CHANGING);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PAINT", get_EVT_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_BEFORE_PAINT", get_EVT_BEFORE_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_AFTER_PAINT", get_EVT_AFTER_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_LOCALE_CHANGED", get_EVT_LOCALE_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_START", get_EVT_ANIM_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_STOP", get_EVT_ANIM_STOP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_PAUSE", get_EVT_ANIM_PAUSE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_ONCE", get_EVT_ANIM_ONCE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_END", get_EVT_ANIM_END);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_LOAD", get_EVT_WINDOW_LOAD);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_WILL_OPEN", get_EVT_WINDOW_WILL_OPEN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_OPEN", get_EVT_WINDOW_OPEN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_CLOSE", get_EVT_WINDOW_CLOSE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_REQUEST_CLOSE_WINDOW", get_EVT_REQUEST_CLOSE_WINDOW);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_TOP_WINDOW_CHANGED", get_EVT_TOP_WINDOW_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_COMMIT", get_EVT_IM_COMMIT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_SHOW_CANDIDATES", get_EVT_IM_SHOW_CANDIDATES);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_ACTION", get_EVT_IM_ACTION);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_ACTION_INFO", get_EVT_IM_ACTION_INFO);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG_START", get_EVT_DRAG_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG", get_EVT_DRAG);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG_END", get_EVT_DRAG_END);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_REQ_START", get_EVT_REQ_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_USER_START", get_EVT_USER_START);

 return RET_OK;
}

jerry_value_t wrap_idle_remove(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  uint32_t idle_id = (uint32_t)jerry_get_number_value(args_p[0]);
  ret = (ret_t)idle_remove(idle_id);

  return jerry_create_number(ret);
}

ret_t idle_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"idle_add", wrap_idle_add);
  jerryx_handler_register_global((const jerry_char_t*)"idle_remove", wrap_idle_remove);

 return RET_OK;
}

jerry_value_t wrap_image_manager(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_manager_t* ret = NULL;
  ret = (image_manager_t*)image_manager();

  return jerry_create_pointer(ret, "image_manager_t*");
}

jerry_value_t wrap_image_manager_get_bitmap(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  image_manager_t* imm = (image_manager_t*)jerry_get_pointer(args_p[0], "image_manager_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  bitmap_t* image = (bitmap_t*)jerry_get_pointer(args_p[2], "bitmap_t*");
  ret = (ret_t)image_manager_get_bitmap(imm, name, image);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

ret_t image_manager_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"image_manager", wrap_image_manager);
  jerryx_handler_register_global((const jerry_char_t*)"image_manager_get_bitmap", wrap_image_manager_get_bitmap);

 return RET_OK;
}

jerry_value_t get_INPUT_TEXT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_TEXT);
}

jerry_value_t get_INPUT_INT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_INT);
}

jerry_value_t get_INPUT_UINT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_UINT);
}

jerry_value_t get_INPUT_HEX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_HEX);
}

jerry_value_t get_INPUT_FLOAT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_FLOAT);
}

jerry_value_t get_INPUT_UFLOAT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_UFLOAT);
}

jerry_value_t get_INPUT_EMAIL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_EMAIL);
}

jerry_value_t get_INPUT_PASSWORD(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_PASSWORD);
}

jerry_value_t get_INPUT_PHONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(INPUT_PHONE);
}

ret_t input_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_TEXT", get_INPUT_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_INT", get_INPUT_INT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_UINT", get_INPUT_UINT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_HEX", get_INPUT_HEX);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_FLOAT", get_INPUT_FLOAT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_UFLOAT", get_INPUT_UFLOAT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_EMAIL", get_INPUT_EMAIL);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_PASSWORD", get_INPUT_PASSWORD);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_PHONE", get_INPUT_PHONE);

 return RET_OK;
}

jerry_value_t wrap_locale_info(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  locale_info_t* ret = NULL;
  ret = (locale_info_t*)locale_info();

  return jerry_create_pointer(ret, "locale_info_t*");
}

jerry_value_t wrap_locale_info_tr(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  char* ret = NULL;
  locale_info_t* locale_info = (locale_info_t*)jerry_get_pointer(args_p[0], "locale_info_t*");
  char* text = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (char*)locale_info_tr(locale_info, text);
  TKMEM_FREE(text);

  return jerry_create_str(ret);
}

jerry_value_t wrap_locale_info_change(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  locale_info_t* locale_info = (locale_info_t*)jerry_get_pointer(args_p[0], "locale_info_t*");
  char* language = (char*)jerry_get_utf8_string(args_p[1]);
  char* country = (char*)jerry_get_utf8_string(args_p[2]);
  ret = (ret_t)locale_info_change(locale_info, language, country);
  TKMEM_FREE(language);
  TKMEM_FREE(country);

  return jerry_create_number(ret);
}

jerry_value_t wrap_locale_info_off(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  locale_info_t* locale_info = (locale_info_t*)jerry_get_pointer(args_p[0], "locale_info_t*");
  uint32_t id = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)locale_info_off(locale_info, id);

  return jerry_create_number(ret);
}

ret_t locale_info_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"locale_info", wrap_locale_info);
  jerryx_handler_register_global((const jerry_char_t*)"locale_info_tr", wrap_locale_info_tr);
  jerryx_handler_register_global((const jerry_char_t*)"locale_info_change", wrap_locale_info_change);
  jerryx_handler_register_global((const jerry_char_t*)"locale_info_on", wrap_locale_info_on);
  jerryx_handler_register_global((const jerry_char_t*)"locale_info_off", wrap_locale_info_off);

 return RET_OK;
}

jerry_value_t get_STYLE_ID_BG_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_BG_COLOR);
}

jerry_value_t get_STYLE_ID_FG_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_FG_COLOR);
}

jerry_value_t get_STYLE_ID_MASK_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_MASK_COLOR);
}

jerry_value_t get_STYLE_ID_FONT_NAME(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_FONT_NAME);
}

jerry_value_t get_STYLE_ID_FONT_SIZE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_FONT_SIZE);
}

jerry_value_t get_STYLE_ID_FONT_STYLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_FONT_STYLE);
}

jerry_value_t get_STYLE_ID_TEXT_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_TEXT_COLOR);
}

jerry_value_t get_STYLE_ID_TIPS_TEXT_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_TIPS_TEXT_COLOR);
}

jerry_value_t get_STYLE_ID_TEXT_ALIGN_H(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_TEXT_ALIGN_H);
}

jerry_value_t get_STYLE_ID_TEXT_ALIGN_V(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_TEXT_ALIGN_V);
}

jerry_value_t get_STYLE_ID_BORDER_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_BORDER_COLOR);
}

jerry_value_t get_STYLE_ID_BORDER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_BORDER);
}

jerry_value_t get_STYLE_ID_BG_IMAGE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_BG_IMAGE);
}

jerry_value_t get_STYLE_ID_BG_IMAGE_DRAW_TYPE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_BG_IMAGE_DRAW_TYPE);
}

jerry_value_t get_STYLE_ID_ICON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_ICON);
}

jerry_value_t get_STYLE_ID_FG_IMAGE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_FG_IMAGE);
}

jerry_value_t get_STYLE_ID_FG_IMAGE_DRAW_TYPE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_FG_IMAGE_DRAW_TYPE);
}

jerry_value_t get_STYLE_ID_MARGIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_MARGIN);
}

jerry_value_t get_STYLE_ID_ICON_AT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_ICON_AT);
}

jerry_value_t get_STYLE_ID_ACTIVE_ICON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_ACTIVE_ICON);
}

jerry_value_t get_STYLE_ID_X_OFFSET(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_X_OFFSET);
}

jerry_value_t get_STYLE_ID_Y_OFFSET(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_Y_OFFSET);
}

jerry_value_t get_STYLE_ID_SELECTED_BG_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_SELECTED_BG_COLOR);
}

jerry_value_t get_STYLE_ID_SELECTED_FG_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_SELECTED_FG_COLOR);
}

jerry_value_t get_STYLE_ID_SELECTED_TEXT_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_SELECTED_TEXT_COLOR);
}

jerry_value_t get_STYLE_ID_ROUND_RADIUS(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(STYLE_ID_ROUND_RADIUS);
}

ret_t style_id_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BG_COLOR", get_STYLE_ID_BG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FG_COLOR", get_STYLE_ID_FG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_MASK_COLOR", get_STYLE_ID_MASK_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FONT_NAME", get_STYLE_ID_FONT_NAME);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FONT_SIZE", get_STYLE_ID_FONT_SIZE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FONT_STYLE", get_STYLE_ID_FONT_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_TEXT_COLOR", get_STYLE_ID_TEXT_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_TIPS_TEXT_COLOR", get_STYLE_ID_TIPS_TEXT_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_TEXT_ALIGN_H", get_STYLE_ID_TEXT_ALIGN_H);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_TEXT_ALIGN_V", get_STYLE_ID_TEXT_ALIGN_V);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BORDER_COLOR", get_STYLE_ID_BORDER_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BORDER", get_STYLE_ID_BORDER);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BG_IMAGE", get_STYLE_ID_BG_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BG_IMAGE_DRAW_TYPE", get_STYLE_ID_BG_IMAGE_DRAW_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ICON", get_STYLE_ID_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FG_IMAGE", get_STYLE_ID_FG_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FG_IMAGE_DRAW_TYPE", get_STYLE_ID_FG_IMAGE_DRAW_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_MARGIN", get_STYLE_ID_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ICON_AT", get_STYLE_ID_ICON_AT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ACTIVE_ICON", get_STYLE_ID_ACTIVE_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_X_OFFSET", get_STYLE_ID_X_OFFSET);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_Y_OFFSET", get_STYLE_ID_Y_OFFSET);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SELECTED_BG_COLOR", get_STYLE_ID_SELECTED_BG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SELECTED_FG_COLOR", get_STYLE_ID_SELECTED_FG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SELECTED_TEXT_COLOR", get_STYLE_ID_SELECTED_TEXT_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ROUND_RADIUS", get_STYLE_ID_ROUND_RADIUS);

 return RET_OK;
}

jerry_value_t wrap_style_notify_widget_state_changed(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  style_t* s = (style_t*)jerry_get_pointer(args_p[0], "style_t*");
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[1], "widget_t*");
  ret = (ret_t)style_notify_widget_state_changed(s, widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_style_is_valid(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bool_t ret = 0;
  style_t* s = (style_t*)jerry_get_pointer(args_p[0], "style_t*");
  ret = (bool_t)style_is_valid(s);

  return jerry_create_boolean(ret);
}

jerry_value_t wrap_style_get_int(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  style_t* s = (style_t*)jerry_get_pointer(args_p[0], "style_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  int32_t defval = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (int32_t)style_get_int(s, name, defval);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_style_get_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  const char* ret = NULL;
  style_t* s = (style_t*)jerry_get_pointer(args_p[0], "style_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  const char* defval = (const char*)jerry_get_utf8_string(args_p[2]);
  ret = (const char*)style_get_str(s, name, defval);
  TKMEM_FREE(name);
  TKMEM_FREE(defval);

  return jerry_create_str(ret);
}

ret_t style_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"style_notify_widget_state_changed", wrap_style_notify_widget_state_changed);
  jerryx_handler_register_global((const jerry_char_t*)"style_is_valid", wrap_style_is_valid);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_int", wrap_style_get_int);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_str", wrap_style_get_str);

 return RET_OK;
}

jerry_value_t wrap_timer_remove(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jerry_get_number_value(args_p[0]);
  ret = (ret_t)timer_remove(timer_id);

  return jerry_create_number(ret);
}

ret_t timer_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"timer_add", wrap_timer_add);
  jerryx_handler_register_global((const jerry_char_t*)"timer_remove", wrap_timer_remove);

 return RET_OK;
}

jerry_value_t get_ALIGN_H_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ALIGN_H_NONE);
}

jerry_value_t get_ALIGN_H_CENTER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ALIGN_H_CENTER);
}

jerry_value_t get_ALIGN_H_LEFT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ALIGN_H_LEFT);
}

jerry_value_t get_ALIGN_H_RIGHT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ALIGN_H_RIGHT);
}

ret_t align_h_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_NONE", get_ALIGN_H_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_CENTER", get_ALIGN_H_CENTER);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_LEFT", get_ALIGN_H_LEFT);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_RIGHT", get_ALIGN_H_RIGHT);

 return RET_OK;
}

jerry_value_t get_WIDGET_PROP_X(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_X);
}

jerry_value_t get_WIDGET_PROP_Y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_Y);
}

jerry_value_t get_WIDGET_PROP_W(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_W);
}

jerry_value_t get_WIDGET_PROP_H(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_H);
}

jerry_value_t get_WIDGET_PROP_OPACITY(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_OPACITY);
}

jerry_value_t get_WIDGET_PROP_MIN_W(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_MIN_W);
}

jerry_value_t get_WIDGET_PROP_MAX_W(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_MAX_W);
}

jerry_value_t get_WIDGET_PROP_CHILDREN_LAYOUT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_CHILDREN_LAYOUT);
}

jerry_value_t get_WIDGET_PROP_LAYOUT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_LAYOUT);
}

jerry_value_t get_WIDGET_PROP_SELF_LAYOUT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SELF_LAYOUT);
}

jerry_value_t get_WIDGET_PROP_LAYOUT_W(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_LAYOUT_W);
}

jerry_value_t get_WIDGET_PROP_LAYOUT_H(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_LAYOUT_H);
}

jerry_value_t get_WIDGET_PROP_VIRTUAL_W(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_VIRTUAL_W);
}

jerry_value_t get_WIDGET_PROP_VIRTUAL_H(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_VIRTUAL_H);
}

jerry_value_t get_WIDGET_PROP_NAME(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_NAME);
}

jerry_value_t get_WIDGET_PROP_CLOSABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_CLOSABLE);
}

jerry_value_t get_WIDGET_PROP_CURSOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_CURSOR);
}

jerry_value_t get_WIDGET_PROP_VALUE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_VALUE);
}

jerry_value_t get_WIDGET_PROP_LENGTH(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_LENGTH);
}

jerry_value_t get_WIDGET_PROP_TEXT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_TEXT);
}

jerry_value_t get_WIDGET_PROP_TR_TEXT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_TR_TEXT);
}

jerry_value_t get_WIDGET_PROP_STYLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_STYLE);
}

jerry_value_t get_WIDGET_PROP_ENABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ENABLE);
}

jerry_value_t get_WIDGET_PROP_FLOATING(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_FLOATING);
}

jerry_value_t get_WIDGET_PROP_MARGIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_MARGIN);
}

jerry_value_t get_WIDGET_PROP_SPACING(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SPACING);
}

jerry_value_t get_WIDGET_PROP_LEFT_MARGIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_LEFT_MARGIN);
}

jerry_value_t get_WIDGET_PROP_RIGHT_MARGIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_RIGHT_MARGIN);
}

jerry_value_t get_WIDGET_PROP_TOP_MARGIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_TOP_MARGIN);
}

jerry_value_t get_WIDGET_PROP_BOTTOM_MARGIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_BOTTOM_MARGIN);
}

jerry_value_t get_WIDGET_PROP_STEP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_STEP);
}

jerry_value_t get_WIDGET_PROP_VISIBLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_VISIBLE);
}

jerry_value_t get_WIDGET_PROP_SENSITIVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SENSITIVE);
}

jerry_value_t get_WIDGET_PROP_ANIMATION(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ANIMATION);
}

jerry_value_t get_WIDGET_PROP_ANIM_HINT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ANIM_HINT);
}

jerry_value_t get_WIDGET_PROP_OPEN_ANIM_HINT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_OPEN_ANIM_HINT);
}

jerry_value_t get_WIDGET_PROP_CLOSE_ANIM_HINT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_CLOSE_ANIM_HINT);
}

jerry_value_t get_WIDGET_PROP_MIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_MIN);
}

jerry_value_t get_WIDGET_PROP_TIPS(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_TIPS);
}

jerry_value_t get_WIDGET_PROP_INPUT_TYPE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_INPUT_TYPE);
}

jerry_value_t get_WIDGET_PROP_READONLY(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_READONLY);
}

jerry_value_t get_WIDGET_PROP_PASSWORD_VISIBLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_PASSWORD_VISIBLE);
}

jerry_value_t get_WIDGET_PROP_ACTIVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ACTIVE);
}

jerry_value_t get_WIDGET_PROP_VERTICAL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_VERTICAL);
}

jerry_value_t get_WIDGET_PROP_SHOW_TEXT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SHOW_TEXT);
}

jerry_value_t get_WIDGET_PROP_XOFFSET(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_XOFFSET);
}

jerry_value_t get_WIDGET_PROP_YOFFSET(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_YOFFSET);
}

jerry_value_t get_WIDGET_PROP_ALIGN_V(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ALIGN_V);
}

jerry_value_t get_WIDGET_PROP_ALIGN_H(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ALIGN_H);
}

jerry_value_t get_WIDGET_PROP_AUTO_PLAY(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_AUTO_PLAY);
}

jerry_value_t get_WIDGET_PROP_AUTO_FIX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_AUTO_FIX);
}

jerry_value_t get_WIDGET_PROP_X_MIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_X_MIN);
}

jerry_value_t get_WIDGET_PROP_X_MAX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_X_MAX);
}

jerry_value_t get_WIDGET_PROP_Y_MIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_Y_MIN);
}

jerry_value_t get_WIDGET_PROP_Y_MAX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_Y_MAX);
}

jerry_value_t get_WIDGET_PROP_MAX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_MAX);
}

jerry_value_t get_WIDGET_PROP_ROW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ROW);
}

jerry_value_t get_WIDGET_PROP_STATE_FOR_STYLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_STATE_FOR_STYLE);
}

jerry_value_t get_WIDGET_PROP_THEME(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_THEME);
}

jerry_value_t get_WIDGET_PROP_STAGE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_STAGE);
}

jerry_value_t get_WIDGET_PROP_IMAGE_MANAGER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_IMAGE_MANAGER);
}

jerry_value_t get_WIDGET_PROP_ASSETS_MANAGER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ASSETS_MANAGER);
}

jerry_value_t get_WIDGET_PROP_FONT_MANAGER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_FONT_MANAGER);
}

jerry_value_t get_WIDGET_PROP_THEME_OBJ(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_THEME_OBJ);
}

jerry_value_t get_WIDGET_PROP_DEFAULT_THEME_OBJ(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_DEFAULT_THEME_OBJ);
}

jerry_value_t get_WIDGET_PROP_SCRIPT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SCRIPT);
}

jerry_value_t get_WIDGET_PROP_ITEM_WIDTH(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ITEM_WIDTH);
}

jerry_value_t get_WIDGET_PROP_ITEM_HEIGHT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ITEM_HEIGHT);
}

jerry_value_t get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

jerry_value_t get_WIDGET_PROP_XSLIDABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_XSLIDABLE);
}

jerry_value_t get_WIDGET_PROP_YSLIDABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_YSLIDABLE);
}

jerry_value_t get_WIDGET_PROP_REPEAT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_REPEAT);
}

jerry_value_t get_WIDGET_PROP_ANIMATABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ANIMATABLE);
}

jerry_value_t get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

jerry_value_t get_WIDGET_PROP_IMAGE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_IMAGE);
}

jerry_value_t get_WIDGET_PROP_FORMAT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_FORMAT);
}

jerry_value_t get_WIDGET_PROP_DRAW_TYPE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_DRAW_TYPE);
}

jerry_value_t get_WIDGET_PROP_SELECTABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SELECTABLE);
}

jerry_value_t get_WIDGET_PROP_CLICKABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_CLICKABLE);
}

jerry_value_t get_WIDGET_PROP_SCALE_X(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SCALE_X);
}

jerry_value_t get_WIDGET_PROP_SCALE_Y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SCALE_Y);
}

jerry_value_t get_WIDGET_PROP_ANCHOR_X(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ANCHOR_X);
}

jerry_value_t get_WIDGET_PROP_ANCHOR_Y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ANCHOR_Y);
}

jerry_value_t get_WIDGET_PROP_ROTATION(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ROTATION);
}

jerry_value_t get_WIDGET_PROP_COMPACT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_COMPACT);
}

jerry_value_t get_WIDGET_PROP_ICON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ICON);
}

jerry_value_t get_WIDGET_PROP_OPTIONS(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_OPTIONS);
}

jerry_value_t get_WIDGET_PROP_SELECTED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SELECTED);
}

jerry_value_t get_WIDGET_PROP_CHECKED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_CHECKED);
}

jerry_value_t get_WIDGET_PROP_ACTIVE_ICON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_ACTIVE_ICON);
}

jerry_value_t get_WIDGET_PROP_OPEN_WINDOW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_OPEN_WINDOW);
}

jerry_value_t get_WIDGET_PROP_SELECTED_INDEX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_SELECTED_INDEX);
}

jerry_value_t get_WIDGET_PROP_CLOSE_WHEN_CLICK(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_CLOSE_WHEN_CLICK);
}

jerry_value_t get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

jerry_value_t get_WIDGET_PROP_LINE_GAP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_LINE_GAP);
}

jerry_value_t get_WIDGET_PROP_BG_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_BG_COLOR);
}

jerry_value_t get_WIDGET_PROP_BORDER_COLOR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_BORDER_COLOR);
}

jerry_value_t get_WIDGET_PROP_DELAY(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_PROP_DELAY);
}

ret_t widget_prop_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X", get_WIDGET_PROP_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y", get_WIDGET_PROP_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_W", get_WIDGET_PROP_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_H", get_WIDGET_PROP_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPACITY", get_WIDGET_PROP_OPACITY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MIN_W", get_WIDGET_PROP_MIN_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MAX_W", get_WIDGET_PROP_MAX_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CHILDREN_LAYOUT", get_WIDGET_PROP_CHILDREN_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LAYOUT", get_WIDGET_PROP_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELF_LAYOUT", get_WIDGET_PROP_SELF_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LAYOUT_W", get_WIDGET_PROP_LAYOUT_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LAYOUT_H", get_WIDGET_PROP_LAYOUT_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VIRTUAL_W", get_WIDGET_PROP_VIRTUAL_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VIRTUAL_H", get_WIDGET_PROP_VIRTUAL_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_NAME", get_WIDGET_PROP_NAME);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSABLE", get_WIDGET_PROP_CLOSABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CURSOR", get_WIDGET_PROP_CURSOR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VALUE", get_WIDGET_PROP_VALUE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LENGTH", get_WIDGET_PROP_LENGTH);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TEXT", get_WIDGET_PROP_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TR_TEXT", get_WIDGET_PROP_TR_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STYLE", get_WIDGET_PROP_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ENABLE", get_WIDGET_PROP_ENABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FLOATING", get_WIDGET_PROP_FLOATING);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MARGIN", get_WIDGET_PROP_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SPACING", get_WIDGET_PROP_SPACING);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LEFT_MARGIN", get_WIDGET_PROP_LEFT_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_RIGHT_MARGIN", get_WIDGET_PROP_RIGHT_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TOP_MARGIN", get_WIDGET_PROP_TOP_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_BOTTOM_MARGIN", get_WIDGET_PROP_BOTTOM_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STEP", get_WIDGET_PROP_STEP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VISIBLE", get_WIDGET_PROP_VISIBLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SENSITIVE", get_WIDGET_PROP_SENSITIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIMATION", get_WIDGET_PROP_ANIMATION);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIM_HINT", get_WIDGET_PROP_ANIM_HINT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPEN_ANIM_HINT", get_WIDGET_PROP_OPEN_ANIM_HINT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_ANIM_HINT", get_WIDGET_PROP_CLOSE_ANIM_HINT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MIN", get_WIDGET_PROP_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TIPS", get_WIDGET_PROP_TIPS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_INPUT_TYPE", get_WIDGET_PROP_INPUT_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_READONLY", get_WIDGET_PROP_READONLY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_PASSWORD_VISIBLE", get_WIDGET_PROP_PASSWORD_VISIBLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ACTIVE", get_WIDGET_PROP_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VERTICAL", get_WIDGET_PROP_VERTICAL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SHOW_TEXT", get_WIDGET_PROP_SHOW_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_XOFFSET", get_WIDGET_PROP_XOFFSET);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_YOFFSET", get_WIDGET_PROP_YOFFSET);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ALIGN_V", get_WIDGET_PROP_ALIGN_V);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ALIGN_H", get_WIDGET_PROP_ALIGN_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_PLAY", get_WIDGET_PROP_AUTO_PLAY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_FIX", get_WIDGET_PROP_AUTO_FIX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X_MIN", get_WIDGET_PROP_X_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X_MAX", get_WIDGET_PROP_X_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y_MIN", get_WIDGET_PROP_Y_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y_MAX", get_WIDGET_PROP_Y_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MAX", get_WIDGET_PROP_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ROW", get_WIDGET_PROP_ROW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STATE_FOR_STYLE", get_WIDGET_PROP_STATE_FOR_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_THEME", get_WIDGET_PROP_THEME);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STAGE", get_WIDGET_PROP_STAGE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_IMAGE_MANAGER", get_WIDGET_PROP_IMAGE_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ASSETS_MANAGER", get_WIDGET_PROP_ASSETS_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FONT_MANAGER", get_WIDGET_PROP_FONT_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_THEME_OBJ", get_WIDGET_PROP_THEME_OBJ);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DEFAULT_THEME_OBJ", get_WIDGET_PROP_DEFAULT_THEME_OBJ);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SCRIPT", get_WIDGET_PROP_SCRIPT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ITEM_WIDTH", get_WIDGET_PROP_ITEM_WIDTH);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ITEM_HEIGHT", get_WIDGET_PROP_ITEM_HEIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DEFAULT_ITEM_HEIGHT", get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_XSLIDABLE", get_WIDGET_PROP_XSLIDABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_YSLIDABLE", get_WIDGET_PROP_YSLIDABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_REPEAT", get_WIDGET_PROP_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIMATABLE", get_WIDGET_PROP_ANIMATABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_HIDE_SCROLL_BAR", get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_IMAGE", get_WIDGET_PROP_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FORMAT", get_WIDGET_PROP_FORMAT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DRAW_TYPE", get_WIDGET_PROP_DRAW_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELECTABLE", get_WIDGET_PROP_SELECTABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLICKABLE", get_WIDGET_PROP_CLICKABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SCALE_X", get_WIDGET_PROP_SCALE_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SCALE_Y", get_WIDGET_PROP_SCALE_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANCHOR_X", get_WIDGET_PROP_ANCHOR_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANCHOR_Y", get_WIDGET_PROP_ANCHOR_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ROTATION", get_WIDGET_PROP_ROTATION);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_COMPACT", get_WIDGET_PROP_COMPACT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ICON", get_WIDGET_PROP_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPTIONS", get_WIDGET_PROP_OPTIONS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELECTED", get_WIDGET_PROP_SELECTED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CHECKED", get_WIDGET_PROP_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ACTIVE_ICON", get_WIDGET_PROP_ACTIVE_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPEN_WINDOW", get_WIDGET_PROP_OPEN_WINDOW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELECTED_INDEX", get_WIDGET_PROP_SELECTED_INDEX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_WHEN_CLICK", get_WIDGET_PROP_CLOSE_WHEN_CLICK);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE", get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LINE_GAP", get_WIDGET_PROP_LINE_GAP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_BG_COLOR", get_WIDGET_PROP_BG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_BORDER_COLOR", get_WIDGET_PROP_BORDER_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DELAY", get_WIDGET_PROP_DELAY);

 return RET_OK;
}

jerry_value_t get_WIDGET_TYPE_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_NONE);
}

jerry_value_t get_WIDGET_TYPE_WINDOW_MANAGER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_WINDOW_MANAGER);
}

jerry_value_t get_WIDGET_TYPE_NORMAL_WINDOW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_NORMAL_WINDOW);
}

jerry_value_t get_WIDGET_TYPE_TOOL_BAR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_TOOL_BAR);
}

jerry_value_t get_WIDGET_TYPE_DIALOG(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_DIALOG);
}

jerry_value_t get_WIDGET_TYPE_POPUP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_POPUP);
}

jerry_value_t get_WIDGET_TYPE_SYSTEM_BAR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SYSTEM_BAR);
}

jerry_value_t get_WIDGET_TYPE_SPRITE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SPRITE);
}

jerry_value_t get_WIDGET_TYPE_KEYBOARD(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_KEYBOARD);
}

jerry_value_t get_WIDGET_TYPE_DND(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_DND);
}

jerry_value_t get_WIDGET_TYPE_LABEL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_LABEL);
}

jerry_value_t get_WIDGET_TYPE_BUTTON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_BUTTON);
}

jerry_value_t get_WIDGET_TYPE_IMAGE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_IMAGE);
}

jerry_value_t get_WIDGET_TYPE_EDIT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_EDIT);
}

jerry_value_t get_WIDGET_TYPE_PROGRESS_BAR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_PROGRESS_BAR);
}

jerry_value_t get_WIDGET_TYPE_GROUP_BOX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_GROUP_BOX);
}

jerry_value_t get_WIDGET_TYPE_CHECK_BUTTON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_CHECK_BUTTON);
}

jerry_value_t get_WIDGET_TYPE_RADIO_BUTTON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_RADIO_BUTTON);
}

jerry_value_t get_WIDGET_TYPE_DIALOG_TITLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_DIALOG_TITLE);
}

jerry_value_t get_WIDGET_TYPE_DIALOG_CLIENT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_DIALOG_CLIENT);
}

jerry_value_t get_WIDGET_TYPE_SLIDER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SLIDER);
}

jerry_value_t get_WIDGET_TYPE_VIEW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_VIEW);
}

jerry_value_t get_WIDGET_TYPE_COMBO_BOX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_COMBO_BOX);
}

jerry_value_t get_WIDGET_TYPE_COMBO_BOX_ITEM(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_COMBO_BOX_ITEM);
}

jerry_value_t get_WIDGET_TYPE_SLIDE_VIEW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SLIDE_VIEW);
}

jerry_value_t get_WIDGET_TYPE_PAGES(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_PAGES);
}

jerry_value_t get_WIDGET_TYPE_TAB_BUTTON(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_TAB_BUTTON);
}

jerry_value_t get_WIDGET_TYPE_TAB_CONTROL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_TAB_CONTROL);
}

jerry_value_t get_WIDGET_TYPE_TAB_BUTTON_GROUP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_TAB_BUTTON_GROUP);
}

jerry_value_t get_WIDGET_TYPE_BUTTON_GROUP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_BUTTON_GROUP);
}

jerry_value_t get_WIDGET_TYPE_CANDIDATES(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_CANDIDATES);
}

jerry_value_t get_WIDGET_TYPE_SPIN_BOX(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SPIN_BOX);
}

jerry_value_t get_WIDGET_TYPE_DRAGGER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_DRAGGER);
}

jerry_value_t get_WIDGET_TYPE_SCROLL_BAR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SCROLL_BAR);
}

jerry_value_t get_WIDGET_TYPE_SCROLL_BAR_DESKTOP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

jerry_value_t get_WIDGET_TYPE_SCROLL_BAR_MOBILE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

jerry_value_t get_WIDGET_TYPE_SCROLL_VIEW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_SCROLL_VIEW);
}

jerry_value_t get_WIDGET_TYPE_LIST_VIEW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_LIST_VIEW);
}

jerry_value_t get_WIDGET_TYPE_LIST_VIEW_H(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_LIST_VIEW_H);
}

jerry_value_t get_WIDGET_TYPE_LIST_ITEM(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_LIST_ITEM);
}

jerry_value_t get_WIDGET_TYPE_COLOR_PICKER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_COLOR_PICKER);
}

jerry_value_t get_WIDGET_TYPE_COLOR_COMPONENT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_COLOR_COMPONENT);
}

jerry_value_t get_WIDGET_TYPE_COLOR_TILE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_COLOR_TILE);
}

jerry_value_t get_WIDGET_TYPE_RICH_TEXT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_RICH_TEXT);
}

jerry_value_t get_WIDGET_TYPE_APP_BAR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_APP_BAR);
}

jerry_value_t get_WIDGET_TYPE_GRID(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_GRID);
}

jerry_value_t get_WIDGET_TYPE_GRID_ITEM(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_GRID_ITEM);
}

jerry_value_t get_WIDGET_TYPE_ROW(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_ROW);
}

jerry_value_t get_WIDGET_TYPE_COLUMN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_COLUMN);
}

jerry_value_t get_WIDGET_TYPE_CALIBRATION_WIN(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_TYPE_CALIBRATION_WIN);
}

ret_t widget_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_NONE", get_WIDGET_TYPE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_WINDOW_MANAGER", get_WIDGET_TYPE_WINDOW_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_NORMAL_WINDOW", get_WIDGET_TYPE_NORMAL_WINDOW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TOOL_BAR", get_WIDGET_TYPE_TOOL_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DIALOG", get_WIDGET_TYPE_DIALOG);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_POPUP", get_WIDGET_TYPE_POPUP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SYSTEM_BAR", get_WIDGET_TYPE_SYSTEM_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SPRITE", get_WIDGET_TYPE_SPRITE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_KEYBOARD", get_WIDGET_TYPE_KEYBOARD);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DND", get_WIDGET_TYPE_DND);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_LABEL", get_WIDGET_TYPE_LABEL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_BUTTON", get_WIDGET_TYPE_BUTTON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_IMAGE", get_WIDGET_TYPE_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_EDIT", get_WIDGET_TYPE_EDIT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_PROGRESS_BAR", get_WIDGET_TYPE_PROGRESS_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_GROUP_BOX", get_WIDGET_TYPE_GROUP_BOX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_CHECK_BUTTON", get_WIDGET_TYPE_CHECK_BUTTON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_RADIO_BUTTON", get_WIDGET_TYPE_RADIO_BUTTON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DIALOG_TITLE", get_WIDGET_TYPE_DIALOG_TITLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DIALOG_CLIENT", get_WIDGET_TYPE_DIALOG_CLIENT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SLIDER", get_WIDGET_TYPE_SLIDER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_VIEW", get_WIDGET_TYPE_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COMBO_BOX", get_WIDGET_TYPE_COMBO_BOX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COMBO_BOX_ITEM", get_WIDGET_TYPE_COMBO_BOX_ITEM);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SLIDE_VIEW", get_WIDGET_TYPE_SLIDE_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_PAGES", get_WIDGET_TYPE_PAGES);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TAB_BUTTON", get_WIDGET_TYPE_TAB_BUTTON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TAB_CONTROL", get_WIDGET_TYPE_TAB_CONTROL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TAB_BUTTON_GROUP", get_WIDGET_TYPE_TAB_BUTTON_GROUP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_BUTTON_GROUP", get_WIDGET_TYPE_BUTTON_GROUP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_CANDIDATES", get_WIDGET_TYPE_CANDIDATES);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SPIN_BOX", get_WIDGET_TYPE_SPIN_BOX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DRAGGER", get_WIDGET_TYPE_DRAGGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SCROLL_BAR", get_WIDGET_TYPE_SCROLL_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SCROLL_BAR_DESKTOP", get_WIDGET_TYPE_SCROLL_BAR_DESKTOP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SCROLL_BAR_MOBILE", get_WIDGET_TYPE_SCROLL_BAR_MOBILE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SCROLL_VIEW", get_WIDGET_TYPE_SCROLL_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_LIST_VIEW", get_WIDGET_TYPE_LIST_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_LIST_VIEW_H", get_WIDGET_TYPE_LIST_VIEW_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_LIST_ITEM", get_WIDGET_TYPE_LIST_ITEM);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COLOR_PICKER", get_WIDGET_TYPE_COLOR_PICKER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COLOR_COMPONENT", get_WIDGET_TYPE_COLOR_COMPONENT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COLOR_TILE", get_WIDGET_TYPE_COLOR_TILE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_RICH_TEXT", get_WIDGET_TYPE_RICH_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_APP_BAR", get_WIDGET_TYPE_APP_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_GRID", get_WIDGET_TYPE_GRID);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_GRID_ITEM", get_WIDGET_TYPE_GRID_ITEM);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_ROW", get_WIDGET_TYPE_ROW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COLUMN", get_WIDGET_TYPE_COLUMN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_CALIBRATION_WIN", get_WIDGET_TYPE_CALIBRATION_WIN);

 return RET_OK;
}

jerry_value_t get_WINDOW_STAGE_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(WINDOW_STAGE_NONE);
}

jerry_value_t get_WINDOW_STAGE_CREATED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(WINDOW_STAGE_CREATED);
}

jerry_value_t get_WINDOW_STAGE_OPENED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(WINDOW_STAGE_OPENED);
}

jerry_value_t get_WINDOW_STAGE_CLOSED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(WINDOW_STAGE_CLOSED);
}

ret_t window_stage_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_NONE", get_WINDOW_STAGE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_CREATED", get_WINDOW_STAGE_CREATED);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_OPENED", get_WINDOW_STAGE_OPENED);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_CLOSED", get_WINDOW_STAGE_CLOSED);

 return RET_OK;
}

jerry_value_t get_WINDOW_CLOSABLE_YES(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(WINDOW_CLOSABLE_YES);
}

jerry_value_t get_WINDOW_CLOSABLE_NO(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(WINDOW_CLOSABLE_NO);
}

jerry_value_t get_WINDOW_CLOSABLE_CONFIRM(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(WINDOW_CLOSABLE_CONFIRM);
}

ret_t window_closable_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_CLOSABLE_YES", get_WINDOW_CLOSABLE_YES);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_CLOSABLE_NO", get_WINDOW_CLOSABLE_NO);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_CLOSABLE_CONFIRM", get_WINDOW_CLOSABLE_CONFIRM);

 return RET_OK;
}

jerry_value_t get_WIDGET_STATE_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_NONE);
}

jerry_value_t get_WIDGET_STATE_NORMAL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_NORMAL);
}

jerry_value_t get_WIDGET_STATE_PRESSED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_PRESSED);
}

jerry_value_t get_WIDGET_STATE_OVER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_OVER);
}

jerry_value_t get_WIDGET_STATE_DISABLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_DISABLE);
}

jerry_value_t get_WIDGET_STATE_FOCUSED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_FOCUSED);
}

jerry_value_t get_WIDGET_STATE_CHECKED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_CHECKED);
}

jerry_value_t get_WIDGET_STATE_UNCHECKED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_UNCHECKED);
}

jerry_value_t get_WIDGET_STATE_EMPTY(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_EMPTY);
}

jerry_value_t get_WIDGET_STATE_ERROR(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_ERROR);
}

jerry_value_t get_WIDGET_STATE_SELECTED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_SELECTED);
}

jerry_value_t get_WIDGET_STATE_NORMAL_OF_CHECKED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_NORMAL_OF_CHECKED);
}

jerry_value_t get_WIDGET_STATE_PRESSED_OF_CHECKED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_PRESSED_OF_CHECKED);
}

jerry_value_t get_WIDGET_STATE_OVER_OF_CHECKED(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_OVER_OF_CHECKED);
}

jerry_value_t get_WIDGET_STATE_NORMAL_OF_ACTIVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_NORMAL_OF_ACTIVE);
}

jerry_value_t get_WIDGET_STATE_PRESSED_OF_ACTIVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_PRESSED_OF_ACTIVE);
}

jerry_value_t get_WIDGET_STATE_OVER_OF_ACTIVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_str(WIDGET_STATE_OVER_OF_ACTIVE);
}

ret_t widget_state_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NONE", get_WIDGET_STATE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NORMAL", get_WIDGET_STATE_NORMAL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_PRESSED", get_WIDGET_STATE_PRESSED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_OVER", get_WIDGET_STATE_OVER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_DISABLE", get_WIDGET_STATE_DISABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_FOCUSED", get_WIDGET_STATE_FOCUSED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_CHECKED", get_WIDGET_STATE_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_UNCHECKED", get_WIDGET_STATE_UNCHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_EMPTY", get_WIDGET_STATE_EMPTY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_ERROR", get_WIDGET_STATE_ERROR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_SELECTED", get_WIDGET_STATE_SELECTED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NORMAL_OF_CHECKED", get_WIDGET_STATE_NORMAL_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_PRESSED_OF_CHECKED", get_WIDGET_STATE_PRESSED_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_OVER_OF_CHECKED", get_WIDGET_STATE_OVER_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NORMAL_OF_ACTIVE", get_WIDGET_STATE_NORMAL_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_PRESSED_OF_ACTIVE", get_WIDGET_STATE_PRESSED_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_OVER_OF_ACTIVE", get_WIDGET_STATE_OVER_OF_ACTIVE);

 return RET_OK;
}

jerry_value_t wrap_widget_count_children(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)widget_count_children(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_get_child(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t index = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (widget_t*)widget_get_child(widget, index);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_widget_index_of(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)widget_index_of(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_move(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)widget_move(widget, x, y);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_resize(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  wh_t w = (wh_t)jerry_get_number_value(args_p[1]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)widget_resize(widget, w, h);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_move_resize(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (ret_t)widget_move_resize(widget, x, y, w, h);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)widget_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_animate_value_to(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  uint32_t duration = (uint32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)widget_animate_value_to(widget, value, duration);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_add_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t delta = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)widget_add_value(widget, delta);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_use_style(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* style = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_use_style(widget, style);
  TKMEM_FREE(style);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_text_utf8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* text = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_text_utf8(widget, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_tr_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* text = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_tr_text(widget, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_get_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)widget_get_value(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_get_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wchar_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (wchar_t*)widget_get_text(widget);

  return jerry_create_string_from_wstring(ret);
}

jerry_value_t wrap_widget_set_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_name(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_cursor(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* cursor = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_cursor(widget, cursor);
  TKMEM_FREE(cursor);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_animation(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* animation = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_animation(widget, animation);
  TKMEM_FREE(animation);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_create_animator(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* animation = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_create_animator(widget, animation);
  TKMEM_FREE(animation);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_start_animator(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_start_animator(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_animator_time_scale(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  float_t time_scale = (float_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_pause_animator(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_pause_animator(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_stop_animator(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_stop_animator(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_destroy_animator(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_destroy_animator(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_enable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t enable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)widget_set_enable(widget, enable);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_floating(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t floating = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)widget_set_floating(widget, floating);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_focused(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t focused = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)widget_set_focused(widget, focused);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_child(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (widget_t*)widget_child(widget, name);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_widget_lookup(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  bool_t recursive = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (widget_t*)widget_lookup(widget, name, recursive);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_widget_lookup_by_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* type = (char*)jerry_get_utf8_string(args_p[1]);
  bool_t recursive = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
  TKMEM_FREE(type);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_widget_set_visible(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t visible = (bool_t)jerry_get_boolean_value(args_p[1]);
  bool_t recursive = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (ret_t)widget_set_visible(widget, visible, recursive);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_sensitive(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t sensitive = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)widget_set_sensitive(widget, sensitive);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_off(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t id = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)widget_off(widget, id);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_invalidate_force(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  rect_t* r = (rect_t*)jerry_get_pointer(args_p[1], "rect_t*");
  ret = (ret_t)widget_invalidate_force(widget, r);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_prop_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  const char* v = (const char*)jerry_get_utf8_string(args_p[2]);
  ret = (ret_t)widget_set_prop_str(widget, name, v);
  TKMEM_FREE(name);
  TKMEM_FREE(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_get_prop_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  const char* defval = (const char*)jerry_get_utf8_string(args_p[2]);
  ret = (const char*)widget_get_prop_str(widget, name, defval);
  TKMEM_FREE(name);
  TKMEM_FREE(defval);

  return jerry_create_str(ret);
}

jerry_value_t wrap_widget_set_prop_int(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  int32_t v = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)widget_set_prop_int(widget, name, v);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_get_prop_int(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  int32_t defval = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (int32_t)widget_get_prop_int(widget, name, defval);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_prop_bool(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  bool_t v = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (ret_t)widget_set_prop_bool(widget, name, v);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_get_prop_bool(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  bool_t defval = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (bool_t)widget_get_prop_bool(widget, name, defval);
  TKMEM_FREE(name);

  return jerry_create_boolean(ret);
}

jerry_value_t wrap_widget_is_window_opened(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (bool_t)widget_is_window_opened(widget);

  return jerry_create_boolean(ret);
}

jerry_value_t wrap_widget_get_window(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)widget_get_window(widget);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_widget_get_window_manager(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)widget_get_window_manager(widget);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_widget_get_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  char* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (char*)widget_get_type(widget);

  return jerry_create_str(ret);
}

jerry_value_t wrap_widget_clone(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[1], "widget_t*");
  ret = (widget_t*)widget_clone(widget, parent);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_widget_equal(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  widget_t* other = (widget_t*)jerry_get_pointer(args_p[1], "widget_t*");
  ret = (bool_t)widget_equal(widget, other);

  return jerry_create_boolean(ret);
}

jerry_value_t wrap_widget_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)widget_cast(widget);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_widget_destroy(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)widget_destroy(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_layout(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)widget_layout(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_self_layout(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* params = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_self_layout(widget, params);
  TKMEM_FREE(params);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_children_layout(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* params = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_children_layout(widget, params);
  TKMEM_FREE(params);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_set_self_layout_params(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* x = (const char*)jerry_get_utf8_string(args_p[1]);
  const char* y = (const char*)jerry_get_utf8_string(args_p[2]);
  const char* w = (const char*)jerry_get_utf8_string(args_p[3]);
  const char* h = (const char*)jerry_get_utf8_string(args_p[4]);
  ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
  TKMEM_FREE(x);
  TKMEM_FREE(y);
  TKMEM_FREE(w);
  TKMEM_FREE(h);

  return jerry_create_number(ret);
}

jerry_value_t wrap_widget_t_get_prop_x(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_number(obj->x);
}

jerry_value_t wrap_widget_t_get_prop_y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_number(obj->y);
}

jerry_value_t wrap_widget_t_get_prop_w(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_number(obj->w);
}

jerry_value_t wrap_widget_t_get_prop_h(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_number(obj->h);
}

jerry_value_t wrap_widget_t_get_prop_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_str(obj->name);
}

jerry_value_t wrap_widget_t_get_prop_tr_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_str(obj->tr_text);
}

jerry_value_t wrap_widget_t_get_prop_style(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_str(obj->style);
}

jerry_value_t wrap_widget_t_get_prop_animation(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_str(obj->animation);
}

jerry_value_t wrap_widget_t_get_prop_enable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_boolean(obj->enable);
}

jerry_value_t wrap_widget_t_set_prop_visible(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t visible = (bool_t)jerry_get_boolean_value(args_p[1]);
  obj->visible = visible;
  return jerry_create_number(RET_OK);
};

jerry_value_t wrap_widget_t_get_prop_visible(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_boolean(obj->visible);
}

jerry_value_t wrap_widget_t_set_prop_sensitive(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t sensitive = (bool_t)jerry_get_boolean_value(args_p[1]);
  obj->sensitive = sensitive;
  return jerry_create_number(RET_OK);
};

jerry_value_t wrap_widget_t_get_prop_sensitive(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_boolean(obj->sensitive);
}

jerry_value_t wrap_widget_t_get_prop_floating(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_boolean(obj->floating);
}

ret_t widget_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"widget_count_children", wrap_widget_count_children);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_child", wrap_widget_get_child);
  jerryx_handler_register_global((const jerry_char_t*)"widget_index_of", wrap_widget_index_of);
  jerryx_handler_register_global((const jerry_char_t*)"widget_move", wrap_widget_move);
  jerryx_handler_register_global((const jerry_char_t*)"widget_resize", wrap_widget_resize);
  jerryx_handler_register_global((const jerry_char_t*)"widget_move_resize", wrap_widget_move_resize);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_value", wrap_widget_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_animate_value_to", wrap_widget_animate_value_to);
  jerryx_handler_register_global((const jerry_char_t*)"widget_add_value", wrap_widget_add_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_use_style", wrap_widget_use_style);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_text_utf8", wrap_widget_set_text_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_tr_text", wrap_widget_set_tr_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_value", wrap_widget_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_text", wrap_widget_get_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_name", wrap_widget_set_name);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_cursor", wrap_widget_set_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_animation", wrap_widget_set_animation);
  jerryx_handler_register_global((const jerry_char_t*)"widget_create_animator", wrap_widget_create_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_start_animator", wrap_widget_start_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_animator_time_scale", wrap_widget_set_animator_time_scale);
  jerryx_handler_register_global((const jerry_char_t*)"widget_pause_animator", wrap_widget_pause_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_stop_animator", wrap_widget_stop_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_destroy_animator", wrap_widget_destroy_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_enable", wrap_widget_set_enable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_floating", wrap_widget_set_floating);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_focused", wrap_widget_set_focused);
  jerryx_handler_register_global((const jerry_char_t*)"widget_child", wrap_widget_child);
  jerryx_handler_register_global((const jerry_char_t*)"widget_lookup", wrap_widget_lookup);
  jerryx_handler_register_global((const jerry_char_t*)"widget_lookup_by_type", wrap_widget_lookup_by_type);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_visible", wrap_widget_set_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_sensitive", wrap_widget_set_sensitive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_on", wrap_widget_on);
  jerryx_handler_register_global((const jerry_char_t*)"widget_off", wrap_widget_off);
  jerryx_handler_register_global((const jerry_char_t*)"widget_invalidate_force", wrap_widget_invalidate_force);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_str", wrap_widget_set_prop_str);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_prop_str", wrap_widget_get_prop_str);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_int", wrap_widget_set_prop_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_prop_int", wrap_widget_get_prop_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_bool", wrap_widget_set_prop_bool);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_prop_bool", wrap_widget_get_prop_bool);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_window_opened", wrap_widget_is_window_opened);
  jerryx_handler_register_global((const jerry_char_t*)"widget_foreach", wrap_widget_foreach);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_window", wrap_widget_get_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_window_manager", wrap_widget_get_window_manager);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_type", wrap_widget_get_type);
  jerryx_handler_register_global((const jerry_char_t*)"widget_clone", wrap_widget_clone);
  jerryx_handler_register_global((const jerry_char_t*)"widget_equal", wrap_widget_equal);
  jerryx_handler_register_global((const jerry_char_t*)"widget_cast", wrap_widget_cast);
  jerryx_handler_register_global((const jerry_char_t*)"widget_destroy", wrap_widget_destroy);
  jerryx_handler_register_global((const jerry_char_t*)"widget_layout", wrap_widget_layout);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_self_layout", wrap_widget_set_self_layout);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_children_layout", wrap_widget_set_children_layout);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_self_layout_params", wrap_widget_set_self_layout_params);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_x", wrap_widget_t_get_prop_x);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_y", wrap_widget_t_get_prop_y);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_w", wrap_widget_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_h", wrap_widget_t_get_prop_h);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_name", wrap_widget_t_get_prop_name);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_tr_text", wrap_widget_t_get_prop_tr_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_style", wrap_widget_t_get_prop_style);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_animation", wrap_widget_t_get_prop_animation);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_enable", wrap_widget_t_get_prop_enable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_set_prop_visible", wrap_widget_t_set_prop_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_visible", wrap_widget_t_get_prop_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_set_prop_sensitive", wrap_widget_t_set_prop_sensitive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_sensitive", wrap_widget_t_get_prop_sensitive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_floating", wrap_widget_t_get_prop_floating);

 return RET_OK;
}

jerry_value_t wrap_tk_ext_widgets_init(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  ret = (ret_t)tk_ext_widgets_init();

  return jerry_create_number(ret);
}

jerry_value_t get_ASSET_TYPE_NONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ASSET_TYPE_NONE);
}

jerry_value_t get_ASSET_TYPE_FONT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ASSET_TYPE_FONT);
}

jerry_value_t get_ASSET_TYPE_IMAGE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ASSET_TYPE_IMAGE);
}

jerry_value_t get_ASSET_TYPE_STYLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ASSET_TYPE_STYLE);
}

jerry_value_t get_ASSET_TYPE_UI(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ASSET_TYPE_UI);
}

jerry_value_t get_ASSET_TYPE_XML(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ASSET_TYPE_XML);
}

jerry_value_t get_ASSET_TYPE_STRINGS(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ASSET_TYPE_STRINGS);
}

jerry_value_t get_ASSET_TYPE_DATA(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(ASSET_TYPE_DATA);
}

ret_t asset_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_NONE", get_ASSET_TYPE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_FONT", get_ASSET_TYPE_FONT);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_IMAGE", get_ASSET_TYPE_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_STYLE", get_ASSET_TYPE_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_UI", get_ASSET_TYPE_UI);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_XML", get_ASSET_TYPE_XML);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_STRINGS", get_ASSET_TYPE_STRINGS);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_DATA", get_ASSET_TYPE_DATA);

 return RET_OK;
}

jerry_value_t wrap_color_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  color_t* ret = NULL;
  uint8_t r = (uint8_t)jerry_get_number_value(args_p[0]);
  uint8_t b = (uint8_t)jerry_get_number_value(args_p[1]);
  uint8_t g = (uint8_t)jerry_get_number_value(args_p[2]);
  uint8_t a = (uint8_t)jerry_get_number_value(args_p[3]);
  ret = (color_t*)color_create(r, b, g, a);

  return jerry_create_pointer(ret, "color_t*");
}

jerry_value_t wrap_color_create_with_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  color_t* ret = NULL;
  const char* str = (const char*)jerry_get_utf8_string(args_p[0]);
  ret = (color_t*)color_create_with_str(str);
  TKMEM_FREE(str);

  return jerry_create_pointer(ret, "color_t*");
}

jerry_value_t wrap_color_r(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jerry_get_pointer(args_p[0], "color_t*");
  ret = (uint8_t)color_r(c);

  return jerry_create_number(ret);
}

jerry_value_t wrap_color_g(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jerry_get_pointer(args_p[0], "color_t*");
  ret = (uint8_t)color_g(c);

  return jerry_create_number(ret);
}

jerry_value_t wrap_color_b(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jerry_get_pointer(args_p[0], "color_t*");
  ret = (uint8_t)color_b(c);

  return jerry_create_number(ret);
}

jerry_value_t wrap_color_a(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jerry_get_pointer(args_p[0], "color_t*");
  ret = (uint8_t)color_a(c);

  return jerry_create_number(ret);
}

jerry_value_t wrap_color_destroy(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  color_t* c = (color_t*)jerry_get_pointer(args_p[0], "color_t*");
  ret = (ret_t)color_destroy(c);

  return jerry_create_number(ret);
}

ret_t color_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"color_create", wrap_color_create);
  jerryx_handler_register_global((const jerry_char_t*)"color_create_with_str", wrap_color_create_with_str);
  jerryx_handler_register_global((const jerry_char_t*)"color_r", wrap_color_r);
  jerryx_handler_register_global((const jerry_char_t*)"color_g", wrap_color_g);
  jerryx_handler_register_global((const jerry_char_t*)"color_b", wrap_color_b);
  jerryx_handler_register_global((const jerry_char_t*)"color_a", wrap_color_a);
  jerryx_handler_register_global((const jerry_char_t*)"color_destroy", wrap_color_destroy);

 return RET_OK;
}

jerry_value_t wrap_date_time_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  date_time_t* ret = NULL;
  ret = (date_time_t*)date_time_create();

  return jerry_create_pointer(ret, "date_time_t*");
}

jerry_value_t wrap_date_time_destroy(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jerry_get_pointer(args_p[0], "date_time_t*");
  ret = (ret_t)date_time_destroy(dt);

  return jerry_create_number(ret);
}

ret_t date_time_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"date_time_create", wrap_date_time_create);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_destroy", wrap_date_time_destroy);

 return RET_OK;
}

jerry_value_t wrap_event_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (event_t*)event_cast(event);

  return jerry_create_pointer(ret, "event_t*");
}

jerry_value_t wrap_event_t_get_prop_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  event_t* obj = (event_t*)jerry_get_pointer(args_p[0], "event_t*");

  return jerry_create_number(obj->type);
}

jerry_value_t wrap_event_t_get_prop_time(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  event_t* obj = (event_t*)jerry_get_pointer(args_p[0], "event_t*");

  return jerry_create_number(obj->time);
}

jerry_value_t wrap_event_t_get_prop_target(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  event_t* obj = (event_t*)jerry_get_pointer(args_p[0], "event_t*");

  return jerry_create_pointer(obj->target, "void*");
}

ret_t event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"event_cast", wrap_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_type", wrap_event_t_get_prop_type);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_time", wrap_event_t_get_prop_time);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_target", wrap_event_t_get_prop_target);

 return RET_OK;
}

ret_t point_t_init(void) {

 return RET_OK;
}

jerry_value_t wrap_rect_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  rect_t* ret = NULL;
  xy_t x = (xy_t)jerry_get_number_value(args_p[0]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[1]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[2]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[3]);
  ret = (rect_t*)rect_create(x, y, w, h);

  return jerry_create_pointer(ret, "rect_t*");
}

jerry_value_t wrap_rect_destroy(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  rect_t* r = (rect_t*)jerry_get_pointer(args_p[0], "rect_t*");
  ret = (ret_t)rect_destroy(r);

  return jerry_create_number(ret);
}

ret_t rect_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"rect_create", wrap_rect_create);
  jerryx_handler_register_global((const jerry_char_t*)"rect_destroy", wrap_rect_destroy);

 return RET_OK;
}

jerry_value_t wrap_time_now_s(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint32_t ret = 0;
  ret = (uint32_t)time_now_s();

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_now_ms(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint32_t ret = 0;
  ret = (uint32_t)time_now_ms();

  return jerry_create_number(ret);
}

ret_t time_now_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"time_now_s", wrap_time_now_s);
  jerryx_handler_register_global((const jerry_char_t*)"time_now_ms", wrap_time_now_ms);

 return RET_OK;
}

jerry_value_t get_RET_OK(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_OK);
}

jerry_value_t get_RET_OOM(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_OOM);
}

jerry_value_t get_RET_FAIL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_FAIL);
}

jerry_value_t get_RET_NOT_IMPL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_NOT_IMPL);
}

jerry_value_t get_RET_QUIT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_QUIT);
}

jerry_value_t get_RET_FOUND(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_FOUND);
}

jerry_value_t get_RET_REMOVE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_REMOVE);
}

jerry_value_t get_RET_REPEAT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_REPEAT);
}

jerry_value_t get_RET_NOT_FOUND(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_NOT_FOUND);
}

jerry_value_t get_RET_DONE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_DONE);
}

jerry_value_t get_RET_STOP(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_STOP);
}

jerry_value_t get_RET_CONTINUE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_CONTINUE);
}

jerry_value_t get_RET_BAD_PARAMS(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(RET_BAD_PARAMS);
}

ret_t ret_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"RET_OK", get_RET_OK);
  jerryx_handler_register_global((const jerry_char_t*)"RET_OOM", get_RET_OOM);
  jerryx_handler_register_global((const jerry_char_t*)"RET_FAIL", get_RET_FAIL);
  jerryx_handler_register_global((const jerry_char_t*)"RET_NOT_IMPL", get_RET_NOT_IMPL);
  jerryx_handler_register_global((const jerry_char_t*)"RET_QUIT", get_RET_QUIT);
  jerryx_handler_register_global((const jerry_char_t*)"RET_FOUND", get_RET_FOUND);
  jerryx_handler_register_global((const jerry_char_t*)"RET_REMOVE", get_RET_REMOVE);
  jerryx_handler_register_global((const jerry_char_t*)"RET_REPEAT", get_RET_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"RET_NOT_FOUND", get_RET_NOT_FOUND);
  jerryx_handler_register_global((const jerry_char_t*)"RET_DONE", get_RET_DONE);
  jerryx_handler_register_global((const jerry_char_t*)"RET_STOP", get_RET_STOP);
  jerryx_handler_register_global((const jerry_char_t*)"RET_CONTINUE", get_RET_CONTINUE);
  jerryx_handler_register_global((const jerry_char_t*)"RET_BAD_PARAMS", get_RET_BAD_PARAMS);

 return RET_OK;
}

jerry_value_t get_VALUE_TYPE_INVALID(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_INVALID);
}

jerry_value_t get_VALUE_TYPE_BOOL(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_BOOL);
}

jerry_value_t get_VALUE_TYPE_INT8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_INT8);
}

jerry_value_t get_VALUE_TYPE_UINT8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_UINT8);
}

jerry_value_t get_VALUE_TYPE_INT16(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_INT16);
}

jerry_value_t get_VALUE_TYPE_UINT16(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_UINT16);
}

jerry_value_t get_VALUE_TYPE_INT32(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_INT32);
}

jerry_value_t get_VALUE_TYPE_UINT32(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_UINT32);
}

jerry_value_t get_VALUE_TYPE_INT64(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_INT64);
}

jerry_value_t get_VALUE_TYPE_UINT64(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_UINT64);
}

jerry_value_t get_VALUE_TYPE_POINTER(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_POINTER);
}

jerry_value_t get_VALUE_TYPE_FLOAT(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_FLOAT);
}

jerry_value_t get_VALUE_TYPE_FLOAT32(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_FLOAT32);
}

jerry_value_t get_VALUE_TYPE_DOUBLE(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_DOUBLE);
}

jerry_value_t get_VALUE_TYPE_STRING(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_STRING);
}

jerry_value_t get_VALUE_TYPE_WSTRING(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  return jerry_create_number(VALUE_TYPE_WSTRING);
}

ret_t value_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_INVALID", get_VALUE_TYPE_INVALID);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_BOOL", get_VALUE_TYPE_BOOL);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_INT8", get_VALUE_TYPE_INT8);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_UINT8", get_VALUE_TYPE_UINT8);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_INT16", get_VALUE_TYPE_INT16);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_UINT16", get_VALUE_TYPE_UINT16);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_INT32", get_VALUE_TYPE_INT32);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_UINT32", get_VALUE_TYPE_UINT32);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_INT64", get_VALUE_TYPE_INT64);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_UINT64", get_VALUE_TYPE_UINT64);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_POINTER", get_VALUE_TYPE_POINTER);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_FLOAT", get_VALUE_TYPE_FLOAT);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_FLOAT32", get_VALUE_TYPE_FLOAT32);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_DOUBLE", get_VALUE_TYPE_DOUBLE);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_STRING", get_VALUE_TYPE_STRING);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_WSTRING", get_VALUE_TYPE_WSTRING);

 return RET_OK;
}

jerry_value_t wrap_value_set_bool(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  bool_t value = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (value_t*)value_set_bool(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_bool(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bool_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (bool_t)value_bool(v);

  return jerry_create_boolean(ret);
}

jerry_value_t wrap_value_set_int8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int8_t value = (int8_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int8(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_int8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int8_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int8_t)value_int8(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_uint8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  uint8_t value = (uint8_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_uint8(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_uint8(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int8_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int8_t)value_uint8(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_int16(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int16_t value = (int16_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int16(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_int16(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int16_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int16_t)value_int16(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_uint16(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  uint16_t value = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_uint16(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_uint16(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint16_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (uint16_t)value_uint16(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_int32(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int32(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_int32(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int32_t)value_int32(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_uint32(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  uint32_t value = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_uint32(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_set_int64(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int64_t value = (int64_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int64(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_int64(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int64_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int64_t)value_int64(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_uint64(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  uint64_t value = (uint64_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_uint64(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_uint64(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint64_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (uint64_t)value_uint64(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_float(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  float_t value = (float_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_float(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_float(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  float_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (float_t)value_float(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_float32(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  float value = (float)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_float32(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_float32(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  float ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (float)value_float32(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_double(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  double value = (double)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_double(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_double(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  double ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (double)value_double(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  const char* value = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (value_t*)value_set_str(v, value);
  TKMEM_FREE(value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_str(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  const char* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (const char*)value_str(v);

  return jerry_create_str(ret);
}

jerry_value_t wrap_value_wstr(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  const wchar_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (const wchar_t*)value_wstr(v);

  return jerry_create_string_from_wstring(ret);
}

jerry_value_t wrap_value_is_null(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bool_t ret = 0;
  value_t* value = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (bool_t)value_is_null(value);

  return jerry_create_boolean(ret);
}

jerry_value_t wrap_value_int(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int)value_int(v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_value_set_int(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int(v, value);

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  value_t* ret = NULL;
  ret = (value_t*)value_create();

  return jerry_create_pointer(ret, "value_t*");
}

jerry_value_t wrap_value_destroy(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (ret_t)value_destroy(v);

  return jerry_create_number(ret);
}

ret_t value_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"value_set_bool", wrap_value_set_bool);
  jerryx_handler_register_global((const jerry_char_t*)"value_bool", wrap_value_bool);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_int8", wrap_value_set_int8);
  jerryx_handler_register_global((const jerry_char_t*)"value_int8", wrap_value_int8);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_uint8", wrap_value_set_uint8);
  jerryx_handler_register_global((const jerry_char_t*)"value_uint8", wrap_value_uint8);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_int16", wrap_value_set_int16);
  jerryx_handler_register_global((const jerry_char_t*)"value_int16", wrap_value_int16);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_uint16", wrap_value_set_uint16);
  jerryx_handler_register_global((const jerry_char_t*)"value_uint16", wrap_value_uint16);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_int32", wrap_value_set_int32);
  jerryx_handler_register_global((const jerry_char_t*)"value_int32", wrap_value_int32);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_uint32", wrap_value_set_uint32);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_int64", wrap_value_set_int64);
  jerryx_handler_register_global((const jerry_char_t*)"value_int64", wrap_value_int64);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_uint64", wrap_value_set_uint64);
  jerryx_handler_register_global((const jerry_char_t*)"value_uint64", wrap_value_uint64);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_float", wrap_value_set_float);
  jerryx_handler_register_global((const jerry_char_t*)"value_float", wrap_value_float);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_float32", wrap_value_set_float32);
  jerryx_handler_register_global((const jerry_char_t*)"value_float32", wrap_value_float32);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_double", wrap_value_set_double);
  jerryx_handler_register_global((const jerry_char_t*)"value_double", wrap_value_double);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_str", wrap_value_set_str);
  jerryx_handler_register_global((const jerry_char_t*)"value_str", wrap_value_str);
  jerryx_handler_register_global((const jerry_char_t*)"value_wstr", wrap_value_wstr);
  jerryx_handler_register_global((const jerry_char_t*)"value_is_null", wrap_value_is_null);
  jerryx_handler_register_global((const jerry_char_t*)"value_int", wrap_value_int);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_int", wrap_value_set_int);
  jerryx_handler_register_global((const jerry_char_t*)"value_create", wrap_value_create);
  jerryx_handler_register_global((const jerry_char_t*)"value_destroy", wrap_value_destroy);

 return RET_OK;
}

jerry_value_t wrap_rich_text_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)rich_text_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "rich_text_t*");
}

jerry_value_t wrap_rich_text_set_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* text = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)rich_text_set_text(widget, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_rich_text_t_get_prop_line_gap(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  rich_text_t* obj = (rich_text_t*)jerry_get_pointer(args_p[0], "rich_text_t*");

  return jerry_create_number(obj->line_gap);
}

ret_t rich_text_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_create", wrap_rich_text_create);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_set_text", wrap_rich_text_set_text);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_t_get_prop_line_gap", wrap_rich_text_t_get_prop_line_gap);

 return RET_OK;
}

jerry_value_t wrap_list_item_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)list_item_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "list_item_t*");
}

jerry_value_t wrap_list_item_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)list_item_cast(widget);

  return jerry_create_pointer(ret, "list_item_t*");
}

ret_t list_item_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"list_item_create", wrap_list_item_create);
  jerryx_handler_register_global((const jerry_char_t*)"list_item_cast", wrap_list_item_cast);

 return RET_OK;
}

jerry_value_t wrap_list_view_h_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)list_view_h_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "list_view_h_t*");
}

jerry_value_t wrap_list_view_h_set_item_width(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t item_width = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)list_view_h_set_item_width(widget, item_width);

  return jerry_create_number(ret);
}

jerry_value_t wrap_list_view_h_set_spacing(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t spacing = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)list_view_h_set_spacing(widget, spacing);

  return jerry_create_number(ret);
}

jerry_value_t wrap_list_view_h_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)list_view_h_cast(widget);

  return jerry_create_pointer(ret, "list_view_h_t*");
}

jerry_value_t wrap_list_view_h_t_get_prop_item_width(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  list_view_h_t* obj = (list_view_h_t*)jerry_get_pointer(args_p[0], "list_view_h_t*");

  return jerry_create_number(obj->item_width);
}

jerry_value_t wrap_list_view_h_t_get_prop_spacing(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  list_view_h_t* obj = (list_view_h_t*)jerry_get_pointer(args_p[0], "list_view_h_t*");

  return jerry_create_number(obj->spacing);
}

ret_t list_view_h_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_create", wrap_list_view_h_create);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_set_item_width", wrap_list_view_h_set_item_width);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_set_spacing", wrap_list_view_h_set_spacing);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_cast", wrap_list_view_h_cast);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_t_get_prop_item_width", wrap_list_view_h_t_get_prop_item_width);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_t_get_prop_spacing", wrap_list_view_h_t_get_prop_spacing);

 return RET_OK;
}

jerry_value_t wrap_list_view_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)list_view_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "list_view_t*");
}

jerry_value_t wrap_list_view_set_item_height(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t item_height = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)list_view_set_item_height(widget, item_height);

  return jerry_create_number(ret);
}

jerry_value_t wrap_list_view_set_default_item_height(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t default_item_height = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);

  return jerry_create_number(ret);
}

jerry_value_t wrap_list_view_set_auto_hide_scroll_bar(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t auto_hide_scroll_bar = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);

  return jerry_create_number(ret);
}

jerry_value_t wrap_list_view_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)list_view_cast(widget);

  return jerry_create_pointer(ret, "list_view_t*");
}

jerry_value_t wrap_list_view_t_get_prop_item_height(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  list_view_t* obj = (list_view_t*)jerry_get_pointer(args_p[0], "list_view_t*");

  return jerry_create_number(obj->item_height);
}

jerry_value_t wrap_list_view_t_get_prop_default_item_height(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  list_view_t* obj = (list_view_t*)jerry_get_pointer(args_p[0], "list_view_t*");

  return jerry_create_number(obj->default_item_height);
}

jerry_value_t wrap_list_view_t_get_prop_auto_hide_scroll_bar(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  list_view_t* obj = (list_view_t*)jerry_get_pointer(args_p[0], "list_view_t*");

  return jerry_create_boolean(obj->auto_hide_scroll_bar);
}

ret_t list_view_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"list_view_create", wrap_list_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_item_height", wrap_list_view_set_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_default_item_height", wrap_list_view_set_default_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_auto_hide_scroll_bar", wrap_list_view_set_auto_hide_scroll_bar);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_cast", wrap_list_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_item_height", wrap_list_view_t_get_prop_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_default_item_height", wrap_list_view_t_get_prop_default_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_auto_hide_scroll_bar", wrap_list_view_t_get_prop_auto_hide_scroll_bar);

 return RET_OK;
}

jerry_value_t wrap_scroll_bar_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "scroll_bar_t*");
}

jerry_value_t wrap_scroll_bar_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)scroll_bar_cast(widget);

  return jerry_create_pointer(ret, "scroll_bar_t*");
}

jerry_value_t wrap_scroll_bar_create_mobile(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);

  return jerry_create_pointer(ret, "scroll_bar_t*");
}

jerry_value_t wrap_scroll_bar_create_desktop(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);

  return jerry_create_pointer(ret, "scroll_bar_t*");
}

jerry_value_t wrap_scroll_bar_set_params(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t virtual_size = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t row = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_bar_scroll_to(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t duration = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_bar_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_bar_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_bar_add_delta(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t delta = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_bar_add_delta(widget, delta);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_bar_scroll_delta(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t delta = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_bar_scroll_delta(widget, delta);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_bar_set_value_only(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_bar_set_value_only(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_bar_is_mobile(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (bool_t)scroll_bar_is_mobile(widget);

  return jerry_create_boolean(ret);
}

jerry_value_t wrap_scroll_bar_t_get_prop_virtual_size(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_bar_t* obj = (scroll_bar_t*)jerry_get_pointer(args_p[0], "scroll_bar_t*");

  return jerry_create_number(obj->virtual_size);
}

jerry_value_t wrap_scroll_bar_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_bar_t* obj = (scroll_bar_t*)jerry_get_pointer(args_p[0], "scroll_bar_t*");

  return jerry_create_number(obj->value);
}

jerry_value_t wrap_scroll_bar_t_get_prop_row(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_bar_t* obj = (scroll_bar_t*)jerry_get_pointer(args_p[0], "scroll_bar_t*");

  return jerry_create_number(obj->row);
}

jerry_value_t wrap_scroll_bar_t_get_prop_animatable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_bar_t* obj = (scroll_bar_t*)jerry_get_pointer(args_p[0], "scroll_bar_t*");

  return jerry_create_boolean(obj->animatable);
}

ret_t scroll_bar_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_create", wrap_scroll_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_cast", wrap_scroll_bar_cast);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_create_mobile", wrap_scroll_bar_create_mobile);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_create_desktop", wrap_scroll_bar_create_desktop);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_set_params", wrap_scroll_bar_set_params);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_scroll_to", wrap_scroll_bar_scroll_to);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_set_value", wrap_scroll_bar_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_add_delta", wrap_scroll_bar_add_delta);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_scroll_delta", wrap_scroll_bar_scroll_delta);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_set_value_only", wrap_scroll_bar_set_value_only);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_is_mobile", wrap_scroll_bar_is_mobile);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_virtual_size", wrap_scroll_bar_t_get_prop_virtual_size);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_value", wrap_scroll_bar_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_row", wrap_scroll_bar_t_get_prop_row);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_animatable", wrap_scroll_bar_t_get_prop_animatable);

 return RET_OK;
}

jerry_value_t wrap_scroll_view_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)scroll_view_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "scroll_view_t*");
}

jerry_value_t wrap_scroll_view_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)scroll_view_cast(widget);

  return jerry_create_pointer(ret, "scroll_view_t*");
}

jerry_value_t wrap_scroll_view_set_virtual_w(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  wh_t w = (wh_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_view_set_virtual_w(widget, w);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_view_set_virtual_h(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  wh_t h = (wh_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_view_set_virtual_h(widget, h);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_view_set_xslidable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t xslidable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_view_set_yslidable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t yslidable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_view_set_offset(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t xoffset = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t yoffset = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_view_scroll_to(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t xoffset_end = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t yoffset_end = (int32_t)jerry_get_number_value(args_p[2]);
  int32_t duration = (int32_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);

  return jerry_create_number(ret);
}

jerry_value_t wrap_scroll_view_t_get_prop_virtual_w(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_number(obj->virtual_w);
}

jerry_value_t wrap_scroll_view_t_get_prop_virtual_h(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_number(obj->virtual_h);
}

jerry_value_t wrap_scroll_view_t_get_prop_xoffset(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_number(obj->xoffset);
}

jerry_value_t wrap_scroll_view_t_get_prop_yoffset(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_number(obj->yoffset);
}

jerry_value_t wrap_scroll_view_t_get_prop_xslidable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_boolean(obj->xslidable);
}

jerry_value_t wrap_scroll_view_t_get_prop_yslidable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_boolean(obj->yslidable);
}

ret_t scroll_view_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_create", wrap_scroll_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_cast", wrap_scroll_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_virtual_w", wrap_scroll_view_set_virtual_w);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_virtual_h", wrap_scroll_view_set_virtual_h);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_xslidable", wrap_scroll_view_set_xslidable);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_yslidable", wrap_scroll_view_set_yslidable);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_offset", wrap_scroll_view_set_offset);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_scroll_to", wrap_scroll_view_scroll_to);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_virtual_w", wrap_scroll_view_t_get_prop_virtual_w);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_virtual_h", wrap_scroll_view_t_get_prop_virtual_h);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_xoffset", wrap_scroll_view_t_get_prop_xoffset);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_yoffset", wrap_scroll_view_t_get_prop_yoffset);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_xslidable", wrap_scroll_view_t_get_prop_xslidable);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_yslidable", wrap_scroll_view_t_get_prop_yslidable);

 return RET_OK;
}

jerry_value_t wrap_slide_menu_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)slide_menu_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "slide_menu_t*");
}

jerry_value_t wrap_slide_menu_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)slide_menu_cast(widget);

  return jerry_create_pointer(ret, "slide_menu_t*");
}

jerry_value_t wrap_slide_menu_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t value = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slide_menu_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slide_menu_set_align_v(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  align_v_t align_v = (align_v_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slide_menu_set_align_v(widget, align_v);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slide_menu_set_min_scale(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t min_scale = (float_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slide_menu_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slide_menu_t* obj = (slide_menu_t*)jerry_get_pointer(args_p[0], "slide_menu_t*");

  return jerry_create_number(obj->value);
}

jerry_value_t wrap_slide_menu_t_get_prop_align_v(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slide_menu_t* obj = (slide_menu_t*)jerry_get_pointer(args_p[0], "slide_menu_t*");

  return jerry_create_number(obj->align_v);
}

jerry_value_t wrap_slide_menu_t_get_prop_min_scale(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slide_menu_t* obj = (slide_menu_t*)jerry_get_pointer(args_p[0], "slide_menu_t*");

  return jerry_create_number(obj->min_scale);
}

ret_t slide_menu_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_create", wrap_slide_menu_create);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_cast", wrap_slide_menu_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_set_value", wrap_slide_menu_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_set_align_v", wrap_slide_menu_set_align_v);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_set_min_scale", wrap_slide_menu_set_min_scale);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_t_get_prop_value", wrap_slide_menu_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_t_get_prop_align_v", wrap_slide_menu_t_get_prop_align_v);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_t_get_prop_min_scale", wrap_slide_menu_t_get_prop_min_scale);

 return RET_OK;
}

jerry_value_t wrap_slide_view_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)slide_view_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "slide_view_t*");
}

jerry_value_t wrap_slide_view_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)slide_view_cast(widget);

  return jerry_create_pointer(ret, "slide_view_t*");
}

jerry_value_t wrap_slide_view_set_auto_play(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t auto_play = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slide_view_set_auto_play(widget, auto_play);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slide_view_set_active(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t index = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slide_view_set_active(widget, index);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slide_view_set_vertical(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t vertical = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)slide_view_set_vertical(widget, vertical);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slide_view_t_get_prop_vertical(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slide_view_t* obj = (slide_view_t*)jerry_get_pointer(args_p[0], "slide_view_t*");

  return jerry_create_boolean(obj->vertical);
}

jerry_value_t wrap_slide_view_t_get_prop_auto_play(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slide_view_t* obj = (slide_view_t*)jerry_get_pointer(args_p[0], "slide_view_t*");

  return jerry_create_number(obj->auto_play);
}

ret_t slide_view_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_create", wrap_slide_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_cast", wrap_slide_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_auto_play", wrap_slide_view_set_auto_play);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_active", wrap_slide_view_set_active);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_vertical", wrap_slide_view_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_t_get_prop_vertical", wrap_slide_view_t_get_prop_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_t_get_prop_auto_play", wrap_slide_view_t_get_prop_auto_play);

 return RET_OK;
}

jerry_value_t wrap_tab_control_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)tab_control_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "tab_control_t*");
}

jerry_value_t wrap_tab_control_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)tab_control_cast(widget);

  return jerry_create_pointer(ret, "tab_control_t*");
}

ret_t tab_control_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_control_create", wrap_tab_control_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_control_cast", wrap_tab_control_cast);

 return RET_OK;
}

jerry_value_t wrap_switch_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)switch_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "switch_t*");
}

jerry_value_t wrap_switch_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t value = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)switch_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_switch_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)switch_cast(widget);

  return jerry_create_pointer(ret, "switch_t*");
}

jerry_value_t wrap_switch_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  switch_t* obj = (switch_t*)jerry_get_pointer(args_p[0], "switch_t*");

  return jerry_create_boolean(obj->value);
}

jerry_value_t wrap_switch_t_get_prop_max_xoffset_ratio(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  switch_t* obj = (switch_t*)jerry_get_pointer(args_p[0], "switch_t*");

  return jerry_create_number(obj->max_xoffset_ratio);
}

jerry_value_t wrap_switch_t_get_prop_round_radius(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  switch_t* obj = (switch_t*)jerry_get_pointer(args_p[0], "switch_t*");

  return jerry_create_number(obj->round_radius);
}

ret_t switch_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"switch_create", wrap_switch_create);
  jerryx_handler_register_global((const jerry_char_t*)"switch_set_value", wrap_switch_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"switch_cast", wrap_switch_cast);
  jerryx_handler_register_global((const jerry_char_t*)"switch_t_get_prop_value", wrap_switch_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"switch_t_get_prop_max_xoffset_ratio", wrap_switch_t_get_prop_max_xoffset_ratio);
  jerryx_handler_register_global((const jerry_char_t*)"switch_t_get_prop_round_radius", wrap_switch_t_get_prop_round_radius);

 return RET_OK;
}

jerry_value_t wrap_text_selector_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)text_selector_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "text_selector_t*");
}

jerry_value_t wrap_text_selector_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)text_selector_cast(widget);

  return jerry_create_pointer(ret, "text_selector_t*");
}

jerry_value_t wrap_text_selector_reset_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)text_selector_reset_options(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_count_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)text_selector_count_options(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_append_option(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  char* text = (char*)jerry_get_utf8_string(args_p[2]);
  ret = (ret_t)text_selector_append_option(widget, value, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_set_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* options = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)text_selector_set_options(widget, options);
  TKMEM_FREE(options);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_set_range_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t start = (int32_t)jerry_get_number_value(args_p[1]);
  uint32_t nr = (uint32_t)jerry_get_number_value(args_p[2]);
  int32_t step = (int32_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_get_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)text_selector_get_value(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)text_selector_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_get_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  char* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (char*)text_selector_get_text(widget);

  return jerry_create_str(ret);
}

jerry_value_t wrap_text_selector_set_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* text = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)text_selector_set_text(widget, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_set_selected_index(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t index = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)text_selector_set_selected_index(widget, index);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_set_visible_nr(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t visible_nr = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);

  return jerry_create_number(ret);
}

jerry_value_t wrap_text_selector_t_get_prop_visible_nr(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  text_selector_t* obj = (text_selector_t*)jerry_get_pointer(args_p[0], "text_selector_t*");

  return jerry_create_number(obj->visible_nr);
}

jerry_value_t wrap_text_selector_t_get_prop_selected_index(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  text_selector_t* obj = (text_selector_t*)jerry_get_pointer(args_p[0], "text_selector_t*");

  return jerry_create_number(obj->selected_index);
}

jerry_value_t wrap_text_selector_t_get_prop_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  text_selector_t* obj = (text_selector_t*)jerry_get_pointer(args_p[0], "text_selector_t*");

  return jerry_create_str(obj->options);
}

ret_t text_selector_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_create", wrap_text_selector_create);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_cast", wrap_text_selector_cast);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_reset_options", wrap_text_selector_reset_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_count_options", wrap_text_selector_count_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_append_option", wrap_text_selector_append_option);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_options", wrap_text_selector_set_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_range_options", wrap_text_selector_set_range_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_get_value", wrap_text_selector_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_value", wrap_text_selector_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_get_text", wrap_text_selector_get_text);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_text", wrap_text_selector_set_text);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_selected_index", wrap_text_selector_set_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_visible_nr", wrap_text_selector_set_visible_nr);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_visible_nr", wrap_text_selector_t_get_prop_visible_nr);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_selected_index", wrap_text_selector_t_get_prop_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_options", wrap_text_selector_t_get_prop_options);

 return RET_OK;
}

jerry_value_t wrap_digit_clock_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)digit_clock_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "digit_clock_t*");
}

jerry_value_t wrap_digit_clock_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)digit_clock_cast(widget);

  return jerry_create_pointer(ret, "digit_clock_t*");
}

jerry_value_t wrap_digit_clock_set_format(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* format = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)digit_clock_set_format(widget, format);
  TKMEM_FREE(format);

  return jerry_create_number(ret);
}

jerry_value_t wrap_digit_clock_t_get_prop_format(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  digit_clock_t* obj = (digit_clock_t*)jerry_get_pointer(args_p[0], "digit_clock_t*");

  return jerry_create_str(obj->format);
}

ret_t digit_clock_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"digit_clock_create", wrap_digit_clock_create);
  jerryx_handler_register_global((const jerry_char_t*)"digit_clock_cast", wrap_digit_clock_cast);
  jerryx_handler_register_global((const jerry_char_t*)"digit_clock_set_format", wrap_digit_clock_set_format);
  jerryx_handler_register_global((const jerry_char_t*)"digit_clock_t_get_prop_format", wrap_digit_clock_t_get_prop_format);

 return RET_OK;
}

jerry_value_t wrap_time_clock_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)time_clock_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "time_clock_t*");
}

jerry_value_t wrap_time_clock_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)time_clock_cast(widget);

  return jerry_create_pointer(ret, "time_clock_t*");
}

jerry_value_t wrap_time_clock_set_hour(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t hour = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)time_clock_set_hour(widget, hour);

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_clock_set_minute(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t minute = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)time_clock_set_minute(widget, minute);

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_clock_set_second(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t second = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)time_clock_set_second(widget, second);

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_clock_set_hour_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* hour = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)time_clock_set_hour_image(widget, hour);
  TKMEM_FREE(hour);

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_clock_set_minute_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* minute_image = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
  TKMEM_FREE(minute_image);

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_clock_set_second_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* second_image = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)time_clock_set_second_image(widget, second_image);
  TKMEM_FREE(second_image);

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_clock_set_bg_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* bg_image = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
  TKMEM_FREE(bg_image);

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_clock_set_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* image = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)time_clock_set_image(widget, image);
  TKMEM_FREE(image);

  return jerry_create_number(ret);
}

jerry_value_t wrap_time_clock_t_get_prop_hour(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  time_clock_t* obj = (time_clock_t*)jerry_get_pointer(args_p[0], "time_clock_t*");

  return jerry_create_number(obj->hour);
}

jerry_value_t wrap_time_clock_t_get_prop_minute(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  time_clock_t* obj = (time_clock_t*)jerry_get_pointer(args_p[0], "time_clock_t*");

  return jerry_create_number(obj->minute);
}

jerry_value_t wrap_time_clock_t_get_prop_second(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  time_clock_t* obj = (time_clock_t*)jerry_get_pointer(args_p[0], "time_clock_t*");

  return jerry_create_number(obj->second);
}

jerry_value_t wrap_time_clock_t_get_prop_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  time_clock_t* obj = (time_clock_t*)jerry_get_pointer(args_p[0], "time_clock_t*");

  return jerry_create_str(obj->image);
}

jerry_value_t wrap_time_clock_t_get_prop_bg_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  time_clock_t* obj = (time_clock_t*)jerry_get_pointer(args_p[0], "time_clock_t*");

  return jerry_create_str(obj->bg_image);
}

jerry_value_t wrap_time_clock_t_get_prop_hour_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  time_clock_t* obj = (time_clock_t*)jerry_get_pointer(args_p[0], "time_clock_t*");

  return jerry_create_str(obj->hour_image);
}

jerry_value_t wrap_time_clock_t_get_prop_minute_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  time_clock_t* obj = (time_clock_t*)jerry_get_pointer(args_p[0], "time_clock_t*");

  return jerry_create_str(obj->minute_image);
}

jerry_value_t wrap_time_clock_t_get_prop_second_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  time_clock_t* obj = (time_clock_t*)jerry_get_pointer(args_p[0], "time_clock_t*");

  return jerry_create_str(obj->second_image);
}

ret_t time_clock_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_create", wrap_time_clock_create);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_cast", wrap_time_clock_cast);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_hour", wrap_time_clock_set_hour);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_minute", wrap_time_clock_set_minute);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_second", wrap_time_clock_set_second);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_hour_image", wrap_time_clock_set_hour_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_minute_image", wrap_time_clock_set_minute_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_second_image", wrap_time_clock_set_second_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_bg_image", wrap_time_clock_set_bg_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_image", wrap_time_clock_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_hour", wrap_time_clock_t_get_prop_hour);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_minute", wrap_time_clock_t_get_prop_minute);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_second", wrap_time_clock_t_get_prop_second);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_image", wrap_time_clock_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_bg_image", wrap_time_clock_t_get_prop_bg_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_hour_image", wrap_time_clock_t_get_prop_hour_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_minute_image", wrap_time_clock_t_get_prop_minute_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_second_image", wrap_time_clock_t_get_prop_second_image);

 return RET_OK;
}

jerry_value_t wrap_window_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)window_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "window_t*");
}

jerry_value_t wrap_window_open(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  char* name = (char*)jerry_get_utf8_string(args_p[0]);
  ret = (widget_t*)window_open(name);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "window_t*");
}

jerry_value_t wrap_window_open_and_close(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  char* name = (char*)jerry_get_utf8_string(args_p[0]);
  widget_t* to_close = (widget_t*)jerry_get_pointer(args_p[1], "widget_t*");
  ret = (widget_t*)window_open_and_close(name, to_close);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "window_t*");
}

jerry_value_t wrap_window_close(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)window_close(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_window_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)window_cast(widget);

  return jerry_create_pointer(ret, "window_t*");
}

ret_t window_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"window_create", wrap_window_create);
  jerryx_handler_register_global((const jerry_char_t*)"window_open", wrap_window_open);
  jerryx_handler_register_global((const jerry_char_t*)"window_open_and_close", wrap_window_open_and_close);
  jerryx_handler_register_global((const jerry_char_t*)"window_close", wrap_window_close);
  jerryx_handler_register_global((const jerry_char_t*)"window_cast", wrap_window_cast);

 return RET_OK;
}

jerry_value_t wrap_wheel_event_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wheel_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (wheel_event_t*)wheel_event_cast(event);

  return jerry_create_pointer(ret, "wheel_event_t*");
}

jerry_value_t wrap_wheel_event_t_get_prop_dx(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_number(obj->dx);
}

jerry_value_t wrap_wheel_event_t_get_prop_dy(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_number(obj->dy);
}

jerry_value_t wrap_wheel_event_t_get_prop_alt(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_boolean(obj->alt);
}

jerry_value_t wrap_wheel_event_t_get_prop_ctrl(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_boolean(obj->ctrl);
}

jerry_value_t wrap_wheel_event_t_get_prop_shift(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_boolean(obj->shift);
}

ret_t wheel_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_cast", wrap_wheel_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_dx", wrap_wheel_event_t_get_prop_dx);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_dy", wrap_wheel_event_t_get_prop_dy);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_alt", wrap_wheel_event_t_get_prop_alt);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_ctrl", wrap_wheel_event_t_get_prop_ctrl);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_shift", wrap_wheel_event_t_get_prop_shift);

 return RET_OK;
}

jerry_value_t wrap_prop_change_event_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  prop_change_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (prop_change_event_t*)prop_change_event_cast(event);

  return jerry_create_pointer(ret, "prop_change_event_t*");
}

jerry_value_t wrap_prop_change_event_t_get_prop_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  prop_change_event_t* obj = (prop_change_event_t*)jerry_get_pointer(args_p[0], "prop_change_event_t*");

  return jerry_create_str(obj->name);
}

jerry_value_t wrap_prop_change_event_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  prop_change_event_t* obj = (prop_change_event_t*)jerry_get_pointer(args_p[0], "prop_change_event_t*");

  return jerry_create_pointer(obj->value, "value_t*");
}

ret_t prop_change_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_cast", wrap_prop_change_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_t_get_prop_name", wrap_prop_change_event_t_get_prop_name);
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_t_get_prop_value", wrap_prop_change_event_t_get_prop_value);

 return RET_OK;
}

jerry_value_t wrap_pointer_event_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pointer_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (pointer_event_t*)pointer_event_cast(event);

  return jerry_create_pointer(ret, "pointer_event_t*");
}

jerry_value_t wrap_pointer_event_t_get_prop_x(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_number(obj->x);
}

jerry_value_t wrap_pointer_event_t_get_prop_y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_number(obj->y);
}

jerry_value_t wrap_pointer_event_t_get_prop_button(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_number(obj->button);
}

jerry_value_t wrap_pointer_event_t_get_prop_pressed(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_boolean(obj->pressed);
}

jerry_value_t wrap_pointer_event_t_get_prop_alt(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_boolean(obj->alt);
}

jerry_value_t wrap_pointer_event_t_get_prop_ctrl(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_boolean(obj->ctrl);
}

jerry_value_t wrap_pointer_event_t_get_prop_shift(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_boolean(obj->shift);
}

ret_t pointer_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_cast", wrap_pointer_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_x", wrap_pointer_event_t_get_prop_x);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_y", wrap_pointer_event_t_get_prop_y);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_button", wrap_pointer_event_t_get_prop_button);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_pressed", wrap_pointer_event_t_get_prop_pressed);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_alt", wrap_pointer_event_t_get_prop_alt);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_ctrl", wrap_pointer_event_t_get_prop_ctrl);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_shift", wrap_pointer_event_t_get_prop_shift);

 return RET_OK;
}

jerry_value_t wrap_key_event_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  key_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (key_event_t*)key_event_cast(event);

  return jerry_create_pointer(ret, "key_event_t*");
}

jerry_value_t wrap_key_event_t_get_prop_key(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_number(obj->key);
}

jerry_value_t wrap_key_event_t_get_prop_alt(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_boolean(obj->alt);
}

jerry_value_t wrap_key_event_t_get_prop_ctrl(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_boolean(obj->ctrl);
}

jerry_value_t wrap_key_event_t_get_prop_shift(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_boolean(obj->shift);
}

jerry_value_t wrap_key_event_t_get_prop_capslock(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_boolean(obj->capslock);
}

ret_t key_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"key_event_cast", wrap_key_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_key", wrap_key_event_t_get_prop_key);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_alt", wrap_key_event_t_get_prop_alt);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_ctrl", wrap_key_event_t_get_prop_ctrl);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_shift", wrap_key_event_t_get_prop_shift);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_capslock", wrap_key_event_t_get_prop_capslock);

 return RET_OK;
}

jerry_value_t wrap_paint_event_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  paint_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (paint_event_t*)paint_event_cast(event);

  return jerry_create_pointer(ret, "paint_event_t*");
}

jerry_value_t wrap_paint_event_t_get_prop_c(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  paint_event_t* obj = (paint_event_t*)jerry_get_pointer(args_p[0], "paint_event_t*");

  return jerry_create_pointer(obj->c, "canvas_t*");
}

ret_t paint_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"paint_event_cast", wrap_paint_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"paint_event_t_get_prop_c", wrap_paint_event_t_get_prop_c);

 return RET_OK;
}

jerry_value_t wrap_window_base_t_get_prop_theme(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  window_base_t* obj = (window_base_t*)jerry_get_pointer(args_p[0], "window_base_t*");

  return jerry_create_str(obj->theme);
}

jerry_value_t wrap_window_base_t_get_prop_closable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  window_base_t* obj = (window_base_t*)jerry_get_pointer(args_p[0], "window_base_t*");

  return jerry_create_number(obj->closable);
}

ret_t window_base_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_theme", wrap_window_base_t_get_prop_theme);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_closable", wrap_window_base_t_get_prop_closable);

 return RET_OK;
}

jerry_value_t wrap_window_manager(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  ret = (widget_t*)window_manager();

  return jerry_create_pointer(ret, "window_manager_t*");
}

jerry_value_t wrap_window_manager_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)window_manager_cast(widget);

  return jerry_create_pointer(ret, "window_manager_t*");
}

jerry_value_t wrap_window_manager_set_show_fps(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t show_fps = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)window_manager_set_show_fps(widget, show_fps);

  return jerry_create_number(ret);
}

jerry_value_t wrap_window_manager_set_cursor(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* cursor = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)window_manager_set_cursor(widget, cursor);
  TKMEM_FREE(cursor);

  return jerry_create_number(ret);
}

jerry_value_t wrap_window_manager_t_get_prop_show_fps(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  window_manager_t* obj = (window_manager_t*)jerry_get_pointer(args_p[0], "window_manager_t*");

  return jerry_create_boolean(obj->show_fps);
}

ret_t window_manager_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"window_manager", wrap_window_manager);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_cast", wrap_window_manager_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_set_show_fps", wrap_window_manager_set_show_fps);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_set_cursor", wrap_window_manager_set_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_t_get_prop_show_fps", wrap_window_manager_t_get_prop_show_fps);

 return RET_OK;
}

jerry_value_t wrap_style_mutable_get_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  const char* ret = NULL;
  style_t* s = (style_t*)jerry_get_pointer(args_p[0], "style_t*");
  ret = (const char*)style_mutable_get_name(s);

  return jerry_create_str(ret);
}

jerry_value_t wrap_style_mutable_set_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  style_t* s = (style_t*)jerry_get_pointer(args_p[0], "style_t*");
  const char* name = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)style_mutable_set_name(s, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_style_mutable_set_int(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  style_t* s = (style_t*)jerry_get_pointer(args_p[0], "style_t*");
  const char* state = (const char*)jerry_get_utf8_string(args_p[1]);
  const char* name = (const char*)jerry_get_utf8_string(args_p[2]);
  int32_t val = (int32_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)style_mutable_set_int(s, state, name, val);
  TKMEM_FREE(state);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_style_mutable_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  style_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (style_t*)style_mutable_create(widget);

  return jerry_create_pointer(ret, "style_mutable_t*");
}

jerry_value_t wrap_style_mutable_t_get_prop_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  style_mutable_t* obj = (style_mutable_t*)jerry_get_pointer(args_p[0], "style_mutable_t*");

  return jerry_create_str(obj->name);
}

ret_t style_mutable_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_get_name", wrap_style_mutable_get_name);
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_set_name", wrap_style_mutable_set_name);
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_set_int", wrap_style_mutable_set_int);
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_create", wrap_style_mutable_create);
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_t_get_prop_name", wrap_style_mutable_t_get_prop_name);

 return RET_OK;
}

jerry_value_t wrap_canvas_widget_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "canvas_widget_t*");
}

jerry_value_t wrap_canvas_widget_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)canvas_widget_cast(widget);

  return jerry_create_pointer(ret, "canvas_widget_t*");
}

ret_t canvas_widget_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"canvas_widget_create", wrap_canvas_widget_create);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_widget_cast", wrap_canvas_widget_cast);

 return RET_OK;
}

jerry_value_t wrap_color_picker_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)color_picker_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "color_picker_t*");
}

jerry_value_t wrap_color_picker_set_color(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* color = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)color_picker_set_color(widget, color);
  TKMEM_FREE(color);

  return jerry_create_number(ret);
}

jerry_value_t wrap_color_picker_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)color_picker_cast(widget);

  return jerry_create_pointer(ret, "color_picker_t*");
}

jerry_value_t wrap_color_picker_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  color_picker_t* obj = (color_picker_t*)jerry_get_pointer(args_p[0], "color_picker_t*");

  return jerry_create_str(obj->value);
}

ret_t color_picker_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"color_picker_create", wrap_color_picker_create);
  jerryx_handler_register_global((const jerry_char_t*)"color_picker_set_color", wrap_color_picker_set_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_picker_cast", wrap_color_picker_cast);
  jerryx_handler_register_global((const jerry_char_t*)"color_picker_t_get_prop_value", wrap_color_picker_t_get_prop_value);

 return RET_OK;
}

jerry_value_t wrap_window_event_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  window_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (window_event_t*)window_event_cast(event);

  return jerry_create_pointer(ret, "window_event_t*");
}

jerry_value_t wrap_window_event_t_get_prop_window(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  window_event_t* obj = (window_event_t*)jerry_get_pointer(args_p[0], "window_event_t*");

  return jerry_create_pointer(obj->window, "widget_t*");
}

ret_t window_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"window_event_cast", wrap_window_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_event_t_get_prop_window", wrap_window_event_t_get_prop_window);

 return RET_OK;
}

jerry_value_t wrap_view_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)view_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "view_t*");
}

jerry_value_t wrap_view_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)view_cast(widget);

  return jerry_create_pointer(ret, "view_t*");
}

ret_t view_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"view_create", wrap_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"view_cast", wrap_view_cast);

 return RET_OK;
}

jerry_value_t wrap_guage_pointer_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)guage_pointer_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "guage_pointer_t*");
}

jerry_value_t wrap_guage_pointer_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)guage_pointer_cast(widget);

  return jerry_create_pointer(ret, "guage_pointer_t*");
}

jerry_value_t wrap_guage_pointer_set_angle(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t angle = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)guage_pointer_set_angle(widget, angle);

  return jerry_create_number(ret);
}

jerry_value_t wrap_guage_pointer_set_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* image = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)guage_pointer_set_image(widget, image);
  TKMEM_FREE(image);

  return jerry_create_number(ret);
}

jerry_value_t wrap_guage_pointer_t_get_prop_angle(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  guage_pointer_t* obj = (guage_pointer_t*)jerry_get_pointer(args_p[0], "guage_pointer_t*");

  return jerry_create_number(obj->angle);
}

jerry_value_t wrap_guage_pointer_t_get_prop_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  guage_pointer_t* obj = (guage_pointer_t*)jerry_get_pointer(args_p[0], "guage_pointer_t*");

  return jerry_create_str(obj->image);
}

ret_t guage_pointer_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_create", wrap_guage_pointer_create);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_cast", wrap_guage_pointer_cast);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_set_angle", wrap_guage_pointer_set_angle);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_set_image", wrap_guage_pointer_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_t_get_prop_angle", wrap_guage_pointer_t_get_prop_angle);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_t_get_prop_image", wrap_guage_pointer_t_get_prop_image);

 return RET_OK;
}

jerry_value_t wrap_image_set_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)image_set_image(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_set_rotation(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t rotation = (float_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)image_set_rotation(widget, rotation);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_set_scale(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t scale_x = (float_t)jerry_get_number_value(args_p[1]);
  float_t scale_y = (float_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)image_set_scale(widget, scale_x, scale_y);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_set_anchor(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t anchor_x = (float_t)jerry_get_number_value(args_p[1]);
  float_t anchor_y = (float_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)image_set_anchor(widget, anchor_x, anchor_y);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_set_selected(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t selected = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)image_set_selected(widget, selected);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_set_selectable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t selectable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)image_set_selectable(widget, selectable);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_set_clickable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t clickable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)image_set_clickable(widget, clickable);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_base_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)image_base_cast(widget);

  return jerry_create_pointer(ret, "image_base_t*");
}

jerry_value_t wrap_image_base_t_get_prop_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_str(obj->image);
}

jerry_value_t wrap_image_base_t_get_prop_anchor_x(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_number(obj->anchor_x);
}

jerry_value_t wrap_image_base_t_get_prop_anchor_y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_number(obj->anchor_y);
}

jerry_value_t wrap_image_base_t_get_prop_scale_x(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_number(obj->scale_x);
}

jerry_value_t wrap_image_base_t_get_prop_scale_y(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_number(obj->scale_y);
}

jerry_value_t wrap_image_base_t_get_prop_rotation(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_number(obj->rotation);
}

jerry_value_t wrap_image_base_t_get_prop_clickable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_boolean(obj->clickable);
}

jerry_value_t wrap_image_base_t_get_prop_selectable(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_boolean(obj->selectable);
}

jerry_value_t wrap_image_base_t_get_prop_selected(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_base_t* obj = (image_base_t*)jerry_get_pointer(args_p[0], "image_base_t*");

  return jerry_create_boolean(obj->selected);
}

ret_t image_base_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"image_set_image", wrap_image_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_rotation", wrap_image_set_rotation);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_scale", wrap_image_set_scale);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_anchor", wrap_image_set_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_selected", wrap_image_set_selected);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_selectable", wrap_image_set_selectable);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_clickable", wrap_image_set_clickable);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_cast", wrap_image_base_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_image", wrap_image_base_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_anchor_x", wrap_image_base_t_get_prop_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_anchor_y", wrap_image_base_t_get_prop_anchor_y);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_scale_x", wrap_image_base_t_get_prop_scale_x);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_scale_y", wrap_image_base_t_get_prop_scale_y);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_rotation", wrap_image_base_t_get_prop_rotation);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_clickable", wrap_image_base_t_get_prop_clickable);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_selectable", wrap_image_base_t_get_prop_selectable);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_selected", wrap_image_base_t_get_prop_selected);

 return RET_OK;
}

jerry_value_t wrap_image_animation_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)image_animation_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "image_animation_t*");
}

jerry_value_t wrap_image_animation_set_loop(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t loop = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)image_animation_set_loop(widget, loop);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_set_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* image = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)image_animation_set_image(widget, image);
  TKMEM_FREE(image);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_set_interval(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t interval = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)image_animation_set_interval(widget, interval);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_set_delay(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t delay = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)image_animation_set_delay(widget, delay);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_set_auto_play(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t auto_play = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)image_animation_set_auto_play(widget, auto_play);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_set_sequence(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* sequence = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)image_animation_set_sequence(widget, sequence);
  TKMEM_FREE(sequence);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_play(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)image_animation_play(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_stop(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)image_animation_stop(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_pause(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)image_animation_pause(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_animation_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)image_animation_cast(widget);

  return jerry_create_pointer(ret, "image_animation_t*");
}

jerry_value_t wrap_image_animation_t_get_prop_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_animation_t* obj = (image_animation_t*)jerry_get_pointer(args_p[0], "image_animation_t*");

  return jerry_create_str(obj->image);
}

jerry_value_t wrap_image_animation_t_get_prop_sequence(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_animation_t* obj = (image_animation_t*)jerry_get_pointer(args_p[0], "image_animation_t*");

  return jerry_create_str(obj->sequence);
}

jerry_value_t wrap_image_animation_t_get_prop_loop(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_animation_t* obj = (image_animation_t*)jerry_get_pointer(args_p[0], "image_animation_t*");

  return jerry_create_boolean(obj->loop);
}

jerry_value_t wrap_image_animation_t_get_prop_auto_play(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_animation_t* obj = (image_animation_t*)jerry_get_pointer(args_p[0], "image_animation_t*");

  return jerry_create_boolean(obj->auto_play);
}

jerry_value_t wrap_image_animation_t_get_prop_interval(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_animation_t* obj = (image_animation_t*)jerry_get_pointer(args_p[0], "image_animation_t*");

  return jerry_create_number(obj->interval);
}

jerry_value_t wrap_image_animation_t_get_prop_delay(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_animation_t* obj = (image_animation_t*)jerry_get_pointer(args_p[0], "image_animation_t*");

  return jerry_create_number(obj->delay);
}

ret_t image_animation_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_create", wrap_image_animation_create);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_loop", wrap_image_animation_set_loop);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_image", wrap_image_animation_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_interval", wrap_image_animation_set_interval);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_delay", wrap_image_animation_set_delay);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_auto_play", wrap_image_animation_set_auto_play);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_sequence", wrap_image_animation_set_sequence);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_play", wrap_image_animation_play);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_stop", wrap_image_animation_stop);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_pause", wrap_image_animation_pause);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_cast", wrap_image_animation_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_image", wrap_image_animation_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_sequence", wrap_image_animation_t_get_prop_sequence);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_loop", wrap_image_animation_t_get_prop_loop);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_auto_play", wrap_image_animation_t_get_prop_auto_play);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_interval", wrap_image_animation_t_get_prop_interval);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_delay", wrap_image_animation_t_get_prop_delay);

 return RET_OK;
}

jerry_value_t wrap_image_value_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)image_value_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "image_value_t*");
}

jerry_value_t wrap_image_value_set_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* image = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)image_value_set_image(widget, image);
  TKMEM_FREE(image);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_value_set_format(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* format = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)image_value_set_format(widget, format);
  TKMEM_FREE(format);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_value_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t value = (float_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)image_value_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_value_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)image_value_cast(widget);

  return jerry_create_pointer(ret, "image_value_t*");
}

jerry_value_t wrap_image_value_t_get_prop_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_value_t* obj = (image_value_t*)jerry_get_pointer(args_p[0], "image_value_t*");

  return jerry_create_str(obj->image);
}

jerry_value_t wrap_image_value_t_get_prop_format(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_value_t* obj = (image_value_t*)jerry_get_pointer(args_p[0], "image_value_t*");

  return jerry_create_str(obj->format);
}

jerry_value_t wrap_image_value_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_value_t* obj = (image_value_t*)jerry_get_pointer(args_p[0], "image_value_t*");

  return jerry_create_number(obj->value);
}

ret_t image_value_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"image_value_create", wrap_image_value_create);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_image", wrap_image_value_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_format", wrap_image_value_set_format);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_value", wrap_image_value_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_cast", wrap_image_value_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_image", wrap_image_value_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_format", wrap_image_value_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_value", wrap_image_value_t_get_prop_value);

 return RET_OK;
}

jerry_value_t wrap_progress_circle_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)progress_circle_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "progress_circle_t*");
}

jerry_value_t wrap_progress_circle_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)progress_circle_cast(widget);

  return jerry_create_pointer(ret, "progress_circle_t*");
}

jerry_value_t wrap_progress_circle_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t value = (float_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)progress_circle_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_circle_set_max(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t max = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)progress_circle_set_max(widget, max);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_circle_set_line_width(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t line_width = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)progress_circle_set_line_width(widget, line_width);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_circle_set_start_angle(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t start_angle = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_circle_set_unit(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* unit = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)progress_circle_set_unit(widget, unit);
  TKMEM_FREE(unit);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_circle_set_show_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t show_text = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)progress_circle_set_show_text(widget, show_text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_circle_set_counter_clock_wise(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t counter_clock_wise = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_circle_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_circle_t* obj = (progress_circle_t*)jerry_get_pointer(args_p[0], "progress_circle_t*");

  return jerry_create_number(obj->value);
}

jerry_value_t wrap_progress_circle_t_get_prop_max(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_circle_t* obj = (progress_circle_t*)jerry_get_pointer(args_p[0], "progress_circle_t*");

  return jerry_create_number(obj->max);
}

jerry_value_t wrap_progress_circle_t_get_prop_start_angle(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_circle_t* obj = (progress_circle_t*)jerry_get_pointer(args_p[0], "progress_circle_t*");

  return jerry_create_number(obj->start_angle);
}

jerry_value_t wrap_progress_circle_t_get_prop_line_width(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_circle_t* obj = (progress_circle_t*)jerry_get_pointer(args_p[0], "progress_circle_t*");

  return jerry_create_number(obj->line_width);
}

jerry_value_t wrap_progress_circle_t_get_prop_unit(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_circle_t* obj = (progress_circle_t*)jerry_get_pointer(args_p[0], "progress_circle_t*");

  return jerry_create_str(obj->unit);
}

jerry_value_t wrap_progress_circle_t_get_prop_counter_clock_wise(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_circle_t* obj = (progress_circle_t*)jerry_get_pointer(args_p[0], "progress_circle_t*");

  return jerry_create_boolean(obj->counter_clock_wise);
}

jerry_value_t wrap_progress_circle_t_get_prop_show_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_circle_t* obj = (progress_circle_t*)jerry_get_pointer(args_p[0], "progress_circle_t*");

  return jerry_create_boolean(obj->show_text);
}

ret_t progress_circle_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_create", wrap_progress_circle_create);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_cast", wrap_progress_circle_cast);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_value", wrap_progress_circle_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_max", wrap_progress_circle_set_max);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_line_width", wrap_progress_circle_set_line_width);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_start_angle", wrap_progress_circle_set_start_angle);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_unit", wrap_progress_circle_set_unit);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_show_text", wrap_progress_circle_set_show_text);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_counter_clock_wise", wrap_progress_circle_set_counter_clock_wise);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_value", wrap_progress_circle_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_max", wrap_progress_circle_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_start_angle", wrap_progress_circle_t_get_prop_start_angle);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_line_width", wrap_progress_circle_t_get_prop_line_width);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_unit", wrap_progress_circle_t_get_prop_unit);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_counter_clock_wise", wrap_progress_circle_t_get_prop_counter_clock_wise);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_show_text", wrap_progress_circle_t_get_prop_show_text);

 return RET_OK;
}

jerry_value_t wrap_app_bar_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)app_bar_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "app_bar_t*");
}

jerry_value_t wrap_app_bar_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)app_bar_cast(widget);

  return jerry_create_pointer(ret, "app_bar_t*");
}

ret_t app_bar_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"app_bar_create", wrap_app_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"app_bar_cast", wrap_app_bar_cast);

 return RET_OK;
}

jerry_value_t wrap_button_group_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)button_group_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "button_group_t*");
}

jerry_value_t wrap_button_group_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)button_group_cast(widget);

  return jerry_create_pointer(ret, "button_group_t*");
}

ret_t button_group_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"button_group_create", wrap_button_group_create);
  jerryx_handler_register_global((const jerry_char_t*)"button_group_cast", wrap_button_group_cast);

 return RET_OK;
}

jerry_value_t wrap_button_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)button_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "button_t*");
}

jerry_value_t wrap_button_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)button_cast(widget);

  return jerry_create_pointer(ret, "button_t*");
}

jerry_value_t wrap_button_set_repeat(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t repeat = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)button_set_repeat(widget, repeat);

  return jerry_create_number(ret);
}

jerry_value_t wrap_button_t_get_prop_repeat(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  button_t* obj = (button_t*)jerry_get_pointer(args_p[0], "button_t*");

  return jerry_create_number(obj->repeat);
}

ret_t button_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"button_create", wrap_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"button_cast", wrap_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"button_set_repeat", wrap_button_set_repeat);
  jerryx_handler_register_global((const jerry_char_t*)"button_t_get_prop_repeat", wrap_button_t_get_prop_repeat);

 return RET_OK;
}

jerry_value_t wrap_check_button_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)check_button_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "check_button_t*");
}

jerry_value_t wrap_check_button_create_radio(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);

  return jerry_create_pointer(ret, "check_button_t*");
}

jerry_value_t wrap_check_button_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t value = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)check_button_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_check_button_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)check_button_cast(widget);

  return jerry_create_pointer(ret, "check_button_t*");
}

jerry_value_t wrap_check_button_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  check_button_t* obj = (check_button_t*)jerry_get_pointer(args_p[0], "check_button_t*");

  return jerry_create_boolean(obj->value);
}

ret_t check_button_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"check_button_create", wrap_check_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"check_button_create_radio", wrap_check_button_create_radio);
  jerryx_handler_register_global((const jerry_char_t*)"check_button_set_value", wrap_check_button_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"check_button_cast", wrap_check_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"check_button_t_get_prop_value", wrap_check_button_t_get_prop_value);

 return RET_OK;
}

jerry_value_t wrap_color_tile_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)color_tile_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "color_tile_t*");
}

jerry_value_t wrap_color_tile_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)color_tile_cast(widget);

  return jerry_create_pointer(ret, "color_tile_t*");
}

jerry_value_t wrap_color_tile_set_bg_color(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* color = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)color_tile_set_bg_color(widget, color);
  TKMEM_FREE(color);

  return jerry_create_number(ret);
}

jerry_value_t wrap_color_tile_t_get_prop_bg_color(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  color_tile_t* obj = (color_tile_t*)jerry_get_pointer(args_p[0], "color_tile_t*");

  return jerry_create_str(obj->bg_color);
}

jerry_value_t wrap_color_tile_t_get_prop_border_color(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  color_tile_t* obj = (color_tile_t*)jerry_get_pointer(args_p[0], "color_tile_t*");

  return jerry_create_str(obj->border_color);
}

ret_t color_tile_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_create", wrap_color_tile_create);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_cast", wrap_color_tile_cast);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_set_bg_color", wrap_color_tile_set_bg_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_t_get_prop_bg_color", wrap_color_tile_t_get_prop_bg_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_t_get_prop_border_color", wrap_color_tile_t_get_prop_border_color);

 return RET_OK;
}

jerry_value_t wrap_column_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)column_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "column_t*");
}

jerry_value_t wrap_column_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)column_cast(widget);

  return jerry_create_pointer(ret, "column_t*");
}

ret_t column_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"column_create", wrap_column_create);
  jerryx_handler_register_global((const jerry_char_t*)"column_cast", wrap_column_cast);

 return RET_OK;
}

jerry_value_t wrap_combo_box_item_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "combo_box_item_t*");
}

jerry_value_t wrap_combo_box_item_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)combo_box_item_cast(widget);

  return jerry_create_pointer(ret, "combo_box_item_t*");
}

jerry_value_t wrap_combo_box_item_set_checked(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t checked = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)combo_box_item_set_checked(widget, checked);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_item_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)combo_box_item_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_item_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  combo_box_item_t* obj = (combo_box_item_t*)jerry_get_pointer(args_p[0], "combo_box_item_t*");

  return jerry_create_number(obj->value);
}

jerry_value_t wrap_combo_box_item_t_get_prop_checked(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  combo_box_item_t* obj = (combo_box_item_t*)jerry_get_pointer(args_p[0], "combo_box_item_t*");

  return jerry_create_boolean(obj->checked);
}

ret_t combo_box_item_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_create", wrap_combo_box_item_create);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_cast", wrap_combo_box_item_cast);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_set_checked", wrap_combo_box_item_set_checked);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_set_value", wrap_combo_box_item_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_t_get_prop_value", wrap_combo_box_item_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_t_get_prop_checked", wrap_combo_box_item_t_get_prop_checked);

 return RET_OK;
}

jerry_value_t wrap_combo_box_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)combo_box_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "combo_box_t*");
}

jerry_value_t wrap_combo_box_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)combo_box_cast(widget);

  return jerry_create_pointer(ret, "combo_box_t*");
}

jerry_value_t wrap_combo_box_set_open_window(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* open_window = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)combo_box_set_open_window(widget, open_window);
  TKMEM_FREE(open_window);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_reset_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)combo_box_reset_options(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_count_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)combo_box_count_options(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_set_selected_index(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t index = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)combo_box_set_selected_index(widget, index);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_append_option(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  const char* text = (const char*)jerry_get_utf8_string(args_p[2]);
  ret = (ret_t)combo_box_append_option(widget, value, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_set_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  const char* options = (const char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)combo_box_set_options(widget, options);
  TKMEM_FREE(options);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_get_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)combo_box_get_value(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_combo_box_get_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (const char*)combo_box_get_text(widget);

  return jerry_create_str(ret);
}

jerry_value_t wrap_combo_box_t_get_prop_open_window(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  combo_box_t* obj = (combo_box_t*)jerry_get_pointer(args_p[0], "combo_box_t*");

  return jerry_create_str(obj->open_window);
}

jerry_value_t wrap_combo_box_t_get_prop_selected_index(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  combo_box_t* obj = (combo_box_t*)jerry_get_pointer(args_p[0], "combo_box_t*");

  return jerry_create_number(obj->selected_index);
}

jerry_value_t wrap_combo_box_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  combo_box_t* obj = (combo_box_t*)jerry_get_pointer(args_p[0], "combo_box_t*");

  return jerry_create_number(obj->value);
}

jerry_value_t wrap_combo_box_t_get_prop_options(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  combo_box_t* obj = (combo_box_t*)jerry_get_pointer(args_p[0], "combo_box_t*");

  return jerry_create_str(obj->options);
}

ret_t combo_box_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_create", wrap_combo_box_create);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_cast", wrap_combo_box_cast);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_open_window", wrap_combo_box_set_open_window);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_reset_options", wrap_combo_box_reset_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_count_options", wrap_combo_box_count_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_selected_index", wrap_combo_box_set_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_append_option", wrap_combo_box_append_option);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_options", wrap_combo_box_set_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_get_value", wrap_combo_box_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_get_text", wrap_combo_box_get_text);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_open_window", wrap_combo_box_t_get_prop_open_window);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_selected_index", wrap_combo_box_t_get_prop_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_value", wrap_combo_box_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_options", wrap_combo_box_t_get_prop_options);

 return RET_OK;
}

jerry_value_t wrap_dialog_client_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dialog_client_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dialog_client_t*");
}

jerry_value_t wrap_dialog_client_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_client_cast(widget);

  return jerry_create_pointer(ret, "dialog_client_t*");
}

ret_t dialog_client_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"dialog_client_create", wrap_dialog_client_create);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_client_cast", wrap_dialog_client_cast);

 return RET_OK;
}

jerry_value_t wrap_dialog_title_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dialog_title_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dialog_title_t*");
}

jerry_value_t wrap_dialog_title_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_title_cast(widget);

  return jerry_create_pointer(ret, "dialog_title_t*");
}

ret_t dialog_title_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"dialog_title_create", wrap_dialog_title_create);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_title_cast", wrap_dialog_title_cast);

 return RET_OK;
}

jerry_value_t wrap_dialog_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dialog_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dialog_t*");
}

jerry_value_t wrap_dialog_create_simple(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dialog_t*");
}

jerry_value_t wrap_dialog_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_cast(widget);

  return jerry_create_pointer(ret, "dialog_t*");
}

jerry_value_t wrap_dialog_get_title(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_get_title(widget);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_dialog_get_client(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_get_client(widget);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_dialog_open(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  const char* name = (const char*)jerry_get_utf8_string(args_p[0]);
  ret = (widget_t*)dialog_open(name);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "dialog_t*");
}

jerry_value_t wrap_dialog_set_title(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* title = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)dialog_set_title(widget, title);
  TKMEM_FREE(title);

  return jerry_create_number(ret);
}

jerry_value_t wrap_dialog_modal(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)dialog_modal(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_dialog_quit(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t code = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)dialog_quit(widget, code);

  return jerry_create_number(ret);
}

ret_t dialog_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"dialog_create", wrap_dialog_create);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_create_simple", wrap_dialog_create_simple);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_cast", wrap_dialog_cast);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_get_title", wrap_dialog_get_title);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_get_client", wrap_dialog_get_client);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_open", wrap_dialog_open);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_set_title", wrap_dialog_set_title);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_modal", wrap_dialog_modal);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_quit", wrap_dialog_quit);

 return RET_OK;
}

jerry_value_t wrap_dragger_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dragger_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dragger_t*");
}

jerry_value_t wrap_dragger_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dragger_cast(widget);

  return jerry_create_pointer(ret, "dragger_t*");
}

jerry_value_t wrap_dragger_set_range(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x_min = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y_min = (xy_t)jerry_get_number_value(args_p[2]);
  xy_t x_max = (xy_t)jerry_get_number_value(args_p[3]);
  xy_t y_max = (xy_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dragger_set_range(widget, x_min, y_min, x_max, y_max);

  return jerry_create_pointer(ret, "widget_t*");
}

jerry_value_t wrap_dragger_t_get_prop_x_min(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  dragger_t* obj = (dragger_t*)jerry_get_pointer(args_p[0], "dragger_t*");

  return jerry_create_number(obj->x_min);
}

jerry_value_t wrap_dragger_t_get_prop_y_min(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  dragger_t* obj = (dragger_t*)jerry_get_pointer(args_p[0], "dragger_t*");

  return jerry_create_number(obj->y_min);
}

jerry_value_t wrap_dragger_t_get_prop_x_max(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  dragger_t* obj = (dragger_t*)jerry_get_pointer(args_p[0], "dragger_t*");

  return jerry_create_number(obj->x_max);
}

jerry_value_t wrap_dragger_t_get_prop_y_max(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  dragger_t* obj = (dragger_t*)jerry_get_pointer(args_p[0], "dragger_t*");

  return jerry_create_number(obj->y_max);
}

ret_t dragger_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"dragger_create", wrap_dragger_create);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_cast", wrap_dragger_cast);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_set_range", wrap_dragger_set_range);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_t_get_prop_x_min", wrap_dragger_t_get_prop_x_min);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_t_get_prop_y_min", wrap_dragger_t_get_prop_y_min);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_t_get_prop_x_max", wrap_dragger_t_get_prop_x_max);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_t_get_prop_y_max", wrap_dragger_t_get_prop_y_max);

 return RET_OK;
}

jerry_value_t wrap_edit_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)edit_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "edit_t*");
}

jerry_value_t wrap_edit_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)edit_cast(widget);

  return jerry_create_pointer(ret, "edit_t*");
}

jerry_value_t wrap_edit_get_int(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)edit_get_int(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_get_double(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  double ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (double)edit_get_double(widget);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_int(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)edit_set_int(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_double(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  double value = (double)jerry_get_number_value(args_p[1]);
  ret = (ret_t)edit_set_double(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_text_limit(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t min = (uint32_t)jerry_get_number_value(args_p[1]);
  uint32_t max = (uint32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)edit_set_text_limit(widget, min, max);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_int_limit(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t min = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t max = (int32_t)jerry_get_number_value(args_p[2]);
  int32_t step = (int32_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)edit_set_int_limit(widget, min, max, step);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_float_limit(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  double min = (double)jerry_get_number_value(args_p[1]);
  double max = (double)jerry_get_number_value(args_p[2]);
  double step = (double)jerry_get_number_value(args_p[3]);
  ret = (ret_t)edit_set_float_limit(widget, min, max, step);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_readonly(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t readonly = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)edit_set_readonly(widget, readonly);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_auto_fix(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t auto_fix = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)edit_set_auto_fix(widget, auto_fix);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_input_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  input_type_t type = (input_type_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)edit_set_input_type(widget, type);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_input_tips(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* tips = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)edit_set_input_tips(widget, tips);
  TKMEM_FREE(tips);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_set_password_visible(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t password_visible = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)edit_set_password_visible(widget, password_visible);

  return jerry_create_number(ret);
}

jerry_value_t wrap_edit_t_get_prop_readonly(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_boolean(obj->readonly);
}

jerry_value_t wrap_edit_t_get_prop_password_visible(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_boolean(obj->password_visible);
}

jerry_value_t wrap_edit_t_get_prop_auto_fix(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_boolean(obj->auto_fix);
}

jerry_value_t wrap_edit_t_get_prop_top_margin(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_number(obj->top_margin);
}

jerry_value_t wrap_edit_t_get_prop_bottom_margin(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_number(obj->bottom_margin);
}

jerry_value_t wrap_edit_t_get_prop_left_margin(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_number(obj->left_margin);
}

jerry_value_t wrap_edit_t_get_prop_right_margin(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_number(obj->right_margin);
}

jerry_value_t wrap_edit_t_get_prop_tips(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_str(obj->tips);
}

ret_t edit_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"edit_create", wrap_edit_create);
  jerryx_handler_register_global((const jerry_char_t*)"edit_cast", wrap_edit_cast);
  jerryx_handler_register_global((const jerry_char_t*)"edit_get_int", wrap_edit_get_int);
  jerryx_handler_register_global((const jerry_char_t*)"edit_get_double", wrap_edit_get_double);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_int", wrap_edit_set_int);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_double", wrap_edit_set_double);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_text_limit", wrap_edit_set_text_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_int_limit", wrap_edit_set_int_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_float_limit", wrap_edit_set_float_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_readonly", wrap_edit_set_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_auto_fix", wrap_edit_set_auto_fix);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_input_type", wrap_edit_set_input_type);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_input_tips", wrap_edit_set_input_tips);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_password_visible", wrap_edit_set_password_visible);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_readonly", wrap_edit_t_get_prop_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_password_visible", wrap_edit_t_get_prop_password_visible);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_auto_fix", wrap_edit_t_get_prop_auto_fix);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_top_margin", wrap_edit_t_get_prop_top_margin);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_bottom_margin", wrap_edit_t_get_prop_bottom_margin);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_left_margin", wrap_edit_t_get_prop_left_margin);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_right_margin", wrap_edit_t_get_prop_right_margin);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_tips", wrap_edit_t_get_prop_tips);

 return RET_OK;
}

jerry_value_t wrap_grid_item_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)grid_item_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "grid_item_t*");
}

jerry_value_t wrap_grid_item_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)grid_item_cast(widget);

  return jerry_create_pointer(ret, "grid_item_t*");
}

ret_t grid_item_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"grid_item_create", wrap_grid_item_create);
  jerryx_handler_register_global((const jerry_char_t*)"grid_item_cast", wrap_grid_item_cast);

 return RET_OK;
}

jerry_value_t wrap_grid_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)grid_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "grid_t*");
}

jerry_value_t wrap_grid_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)grid_cast(widget);

  return jerry_create_pointer(ret, "grid_t*");
}

ret_t grid_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"grid_create", wrap_grid_create);
  jerryx_handler_register_global((const jerry_char_t*)"grid_cast", wrap_grid_cast);

 return RET_OK;
}

jerry_value_t wrap_group_box_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)group_box_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "group_box_t*");
}

jerry_value_t wrap_group_box_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)group_box_cast(widget);

  return jerry_create_pointer(ret, "group_box_t*");
}

ret_t group_box_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"group_box_create", wrap_group_box_create);
  jerryx_handler_register_global((const jerry_char_t*)"group_box_cast", wrap_group_box_cast);

 return RET_OK;
}

jerry_value_t wrap_tab_button_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)tab_button_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "tab_button_t*");
}

jerry_value_t wrap_tab_button_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)tab_button_cast(widget);

  return jerry_create_pointer(ret, "tab_button_t*");
}

jerry_value_t wrap_tab_button_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t value = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)tab_button_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_tab_button_set_icon(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)tab_button_set_icon(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_tab_button_set_active_icon(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)tab_button_set_active_icon(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_tab_button_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  tab_button_t* obj = (tab_button_t*)jerry_get_pointer(args_p[0], "tab_button_t*");

  return jerry_create_boolean(obj->value);
}

jerry_value_t wrap_tab_button_t_get_prop_active_icon(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  tab_button_t* obj = (tab_button_t*)jerry_get_pointer(args_p[0], "tab_button_t*");

  return jerry_create_str(obj->active_icon);
}

jerry_value_t wrap_tab_button_t_get_prop_icon(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  tab_button_t* obj = (tab_button_t*)jerry_get_pointer(args_p[0], "tab_button_t*");

  return jerry_create_str(obj->icon);
}

ret_t tab_button_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_create", wrap_tab_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_cast", wrap_tab_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_value", wrap_tab_button_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_icon", wrap_tab_button_set_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_active_icon", wrap_tab_button_set_active_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_value", wrap_tab_button_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_active_icon", wrap_tab_button_t_get_prop_active_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_icon", wrap_tab_button_t_get_prop_icon);

 return RET_OK;
}

jerry_value_t wrap_label_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)label_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "label_t*");
}

jerry_value_t wrap_label_set_length(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t length = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)label_set_length(widget, length);

  return jerry_create_number(ret);
}

jerry_value_t wrap_label_t_get_prop_length(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  label_t* obj = (label_t*)jerry_get_pointer(args_p[0], "label_t*");

  return jerry_create_number(obj->length);
}

ret_t label_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"label_create", wrap_label_create);
  jerryx_handler_register_global((const jerry_char_t*)"label_set_length", wrap_label_set_length);
  jerryx_handler_register_global((const jerry_char_t*)"label_t_get_prop_length", wrap_label_t_get_prop_length);

 return RET_OK;
}

jerry_value_t wrap_pages_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)pages_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "pages_t*");
}

jerry_value_t wrap_pages_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)pages_cast(widget);

  return jerry_create_pointer(ret, "pages_t*");
}

jerry_value_t wrap_pages_set_active(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t index = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)pages_set_active(widget, index);

  return jerry_create_number(ret);
}

jerry_value_t wrap_pages_set_active_by_name(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)pages_set_active_by_name(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_pages_t_get_prop_active(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  pages_t* obj = (pages_t*)jerry_get_pointer(args_p[0], "pages_t*");

  return jerry_create_number(obj->active);
}

ret_t pages_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"pages_create", wrap_pages_create);
  jerryx_handler_register_global((const jerry_char_t*)"pages_cast", wrap_pages_cast);
  jerryx_handler_register_global((const jerry_char_t*)"pages_set_active", wrap_pages_set_active);
  jerryx_handler_register_global((const jerry_char_t*)"pages_set_active_by_name", wrap_pages_set_active_by_name);
  jerryx_handler_register_global((const jerry_char_t*)"pages_t_get_prop_active", wrap_pages_t_get_prop_active);

 return RET_OK;
}

jerry_value_t wrap_popup_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)popup_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "popup_t*");
}

jerry_value_t wrap_popup_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)popup_cast(widget);

  return jerry_create_pointer(ret, "popup_t*");
}

jerry_value_t wrap_popup_set_close_when_click(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t close_when_click = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)popup_set_close_when_click(widget, close_when_click);

  return jerry_create_number(ret);
}

jerry_value_t wrap_popup_set_close_when_click_outside(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t close_when_click_outside = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);

  return jerry_create_number(ret);
}

jerry_value_t wrap_popup_t_get_prop_close_when_click(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  popup_t* obj = (popup_t*)jerry_get_pointer(args_p[0], "popup_t*");

  return jerry_create_boolean(obj->close_when_click);
}

jerry_value_t wrap_popup_t_get_prop_close_when_click_outside(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  popup_t* obj = (popup_t*)jerry_get_pointer(args_p[0], "popup_t*");

  return jerry_create_boolean(obj->close_when_click_outside);
}

ret_t popup_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"popup_create", wrap_popup_create);
  jerryx_handler_register_global((const jerry_char_t*)"popup_cast", wrap_popup_cast);
  jerryx_handler_register_global((const jerry_char_t*)"popup_set_close_when_click", wrap_popup_set_close_when_click);
  jerryx_handler_register_global((const jerry_char_t*)"popup_set_close_when_click_outside", wrap_popup_set_close_when_click_outside);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_click", wrap_popup_t_get_prop_close_when_click);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_click_outside", wrap_popup_t_get_prop_close_when_click_outside);

 return RET_OK;
}

jerry_value_t wrap_progress_bar_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)progress_bar_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "progress_bar_t*");
}

jerry_value_t wrap_progress_bar_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)progress_bar_cast(widget);

  return jerry_create_pointer(ret, "progress_bar_t*");
}

jerry_value_t wrap_progress_bar_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint8_t value = (uint8_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)progress_bar_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_bar_set_vertical(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t vertical = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)progress_bar_set_vertical(widget, vertical);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_bar_set_show_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t show_text = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)progress_bar_set_show_text(widget, show_text);

  return jerry_create_number(ret);
}

jerry_value_t wrap_progress_bar_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_bar_t* obj = (progress_bar_t*)jerry_get_pointer(args_p[0], "progress_bar_t*");

  return jerry_create_number(obj->value);
}

jerry_value_t wrap_progress_bar_t_get_prop_vertical(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_bar_t* obj = (progress_bar_t*)jerry_get_pointer(args_p[0], "progress_bar_t*");

  return jerry_create_boolean(obj->vertical);
}

jerry_value_t wrap_progress_bar_t_get_prop_show_text(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  progress_bar_t* obj = (progress_bar_t*)jerry_get_pointer(args_p[0], "progress_bar_t*");

  return jerry_create_boolean(obj->show_text);
}

ret_t progress_bar_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_create", wrap_progress_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_cast", wrap_progress_bar_cast);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_value", wrap_progress_bar_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_vertical", wrap_progress_bar_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_show_text", wrap_progress_bar_set_show_text);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_value", wrap_progress_bar_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_vertical", wrap_progress_bar_t_get_prop_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_show_text", wrap_progress_bar_t_get_prop_show_text);

 return RET_OK;
}

jerry_value_t wrap_row_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)row_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "row_t*");
}

jerry_value_t wrap_row_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)row_cast(widget);

  return jerry_create_pointer(ret, "row_t*");
}

ret_t row_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"row_create", wrap_row_create);
  jerryx_handler_register_global((const jerry_char_t*)"row_cast", wrap_row_cast);

 return RET_OK;
}

jerry_value_t wrap_slider_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)slider_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "slider_t*");
}

jerry_value_t wrap_slider_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)slider_cast(widget);

  return jerry_create_pointer(ret, "slider_t*");
}

jerry_value_t wrap_slider_set_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t value = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slider_set_value(widget, value);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slider_set_min(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t min = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slider_set_min(widget, min);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slider_set_max(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t max = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slider_set_max(widget, max);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slider_set_step(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t step = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slider_set_step(widget, step);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slider_set_vertical(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t vertical = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)slider_set_vertical(widget, vertical);

  return jerry_create_number(ret);
}

jerry_value_t wrap_slider_t_get_prop_value(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_number(obj->value);
}

jerry_value_t wrap_slider_t_get_prop_min(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_number(obj->min);
}

jerry_value_t wrap_slider_t_get_prop_max(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_number(obj->max);
}

jerry_value_t wrap_slider_t_get_prop_step(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_number(obj->step);
}

jerry_value_t wrap_slider_t_get_prop_vertical(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_boolean(obj->vertical);
}

ret_t slider_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"slider_create", wrap_slider_create);
  jerryx_handler_register_global((const jerry_char_t*)"slider_cast", wrap_slider_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_value", wrap_slider_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_min", wrap_slider_set_min);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_max", wrap_slider_set_max);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_step", wrap_slider_set_step);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_vertical", wrap_slider_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_value", wrap_slider_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_min", wrap_slider_t_get_prop_min);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_max", wrap_slider_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_step", wrap_slider_t_get_prop_step);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_vertical", wrap_slider_t_get_prop_vertical);

 return RET_OK;
}

jerry_value_t wrap_tab_button_group_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "tab_button_group_t*");
}

jerry_value_t wrap_tab_button_group_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)tab_button_group_cast(widget);

  return jerry_create_pointer(ret, "tab_button_group_t*");
}

jerry_value_t wrap_tab_button_group_t_get_prop_compact(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  tab_button_group_t* obj = (tab_button_group_t*)jerry_get_pointer(args_p[0], "tab_button_group_t*");

  return jerry_create_boolean(obj->compact);
}

ret_t tab_button_group_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_create", wrap_tab_button_group_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_cast", wrap_tab_button_group_cast);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_t_get_prop_compact", wrap_tab_button_group_t_get_prop_compact);

 return RET_OK;
}

jerry_value_t wrap_guage_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)guage_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "guage_t*");
}

jerry_value_t wrap_guage_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)guage_cast(widget);

  return jerry_create_pointer(ret, "guage_t*");
}

jerry_value_t wrap_guage_set_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)guage_set_image(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
}

jerry_value_t wrap_guage_set_draw_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)guage_set_draw_type(widget, draw_type);

  return jerry_create_number(ret);
}

jerry_value_t wrap_guage_t_get_prop_image(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  guage_t* obj = (guage_t*)jerry_get_pointer(args_p[0], "guage_t*");

  return jerry_create_str(obj->image);
}

jerry_value_t wrap_guage_t_get_prop_draw_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  guage_t* obj = (guage_t*)jerry_get_pointer(args_p[0], "guage_t*");

  return jerry_create_number(obj->draw_type);
}

ret_t guage_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"guage_create", wrap_guage_create);
  jerryx_handler_register_global((const jerry_char_t*)"guage_cast", wrap_guage_cast);
  jerryx_handler_register_global((const jerry_char_t*)"guage_set_image", wrap_guage_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"guage_set_draw_type", wrap_guage_set_draw_type);
  jerryx_handler_register_global((const jerry_char_t*)"guage_t_get_prop_image", wrap_guage_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"guage_t_get_prop_draw_type", wrap_guage_t_get_prop_draw_type);

 return RET_OK;
}

jerry_value_t wrap_system_bar_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)system_bar_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "system_bar_t*");
}

jerry_value_t wrap_system_bar_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)system_bar_cast(widget);

  return jerry_create_pointer(ret, "system_bar_t*");
}

ret_t system_bar_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"system_bar_create", wrap_system_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"system_bar_cast", wrap_system_bar_cast);

 return RET_OK;
}

jerry_value_t wrap_spin_box_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)spin_box_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "spin_box_t*");
}

jerry_value_t wrap_spin_box_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)spin_box_cast(widget);

  return jerry_create_pointer(ret, "spin_box_t*");
}

ret_t spin_box_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"spin_box_create", wrap_spin_box_create);
  jerryx_handler_register_global((const jerry_char_t*)"spin_box_cast", wrap_spin_box_cast);

 return RET_OK;
}

jerry_value_t wrap_image_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)image_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "image_t*");
}

jerry_value_t wrap_image_set_draw_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)image_set_draw_type(widget, draw_type);

  return jerry_create_number(ret);
}

jerry_value_t wrap_image_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)image_cast(widget);

  return jerry_create_pointer(ret, "image_t*");
}

jerry_value_t wrap_image_t_get_prop_draw_type(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  image_t* obj = (image_t*)jerry_get_pointer(args_p[0], "image_t*");

  return jerry_create_number(obj->draw_type);
}

ret_t image_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"image_create", wrap_image_create);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_draw_type", wrap_image_set_draw_type);
  jerryx_handler_register_global((const jerry_char_t*)"image_cast", wrap_image_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_t_get_prop_draw_type", wrap_image_t_get_prop_draw_type);

 return RET_OK;
}

jerry_value_t wrap_svg_image_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)svg_image_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "svg_image_t*");
}

jerry_value_t wrap_svg_image_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)svg_image_cast(widget);

  return jerry_create_pointer(ret, "svg_image_t*");
}

ret_t svg_image_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"svg_image_create", wrap_svg_image_create);
  jerryx_handler_register_global((const jerry_char_t*)"svg_image_cast", wrap_svg_image_cast);

 return RET_OK;
}

jerry_value_t wrap_gif_image_create(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)gif_image_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "gif_image_t*");
}

jerry_value_t wrap_gif_image_cast(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)gif_image_cast(widget);

  return jerry_create_pointer(ret, "gif_image_t*");
}

ret_t gif_image_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_create", wrap_gif_image_create);
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_cast", wrap_gif_image_cast);

 return RET_OK;
}

ret_t awtk_js_init(void) {
  align_v_t_init();
  tk_t_init();
  asset_info_t_init();
  assets_manager_t_init();
  bitmap_format_t_init();
  bitmap_flag_t_init();
  bitmap_t_init();
  image_draw_type_t_init();
  canvas_t_init();
  clip_board_data_type_t_init();
  clip_board_t_init();
  event_type_t_init();
  idle_t_init();
  image_manager_t_init();
  input_type_t_init();
  locale_info_t_init();
  style_id_t_init();
  style_t_init();
  timer_t_init();
  align_h_t_init();
  widget_prop_t_init();
  widget_type_t_init();
  window_stage_t_init();
  window_closable_t_init();
  widget_state_t_init();
  widget_t_init();
  asset_type_t_init();
  color_t_init();
  date_time_t_init();
  event_t_init();
  point_t_init();
  rect_t_init();
  time_now_t_init();
  ret_t_init();
  value_type_t_init();
  value_t_init();
  rich_text_t_init();
  list_item_t_init();
  list_view_h_t_init();
  list_view_t_init();
  scroll_bar_t_init();
  scroll_view_t_init();
  slide_menu_t_init();
  slide_view_t_init();
  tab_control_t_init();
  switch_t_init();
  text_selector_t_init();
  digit_clock_t_init();
  time_clock_t_init();
  window_t_init();
  wheel_event_t_init();
  prop_change_event_t_init();
  pointer_event_t_init();
  key_event_t_init();
  paint_event_t_init();
  window_base_t_init();
  window_manager_t_init();
  style_mutable_t_init();
  canvas_widget_t_init();
  color_picker_t_init();
  window_event_t_init();
  view_t_init();
  guage_pointer_t_init();
  image_base_t_init();
  image_animation_t_init();
  image_value_t_init();
  progress_circle_t_init();
  app_bar_t_init();
  button_group_t_init();
  button_t_init();
  check_button_t_init();
  color_tile_t_init();
  column_t_init();
  combo_box_item_t_init();
  combo_box_t_init();
  dialog_client_t_init();
  dialog_title_t_init();
  dialog_t_init();
  dragger_t_init();
  edit_t_init();
  grid_item_t_init();
  grid_t_init();
  group_box_t_init();
  tab_button_t_init();
  label_t_init();
  pages_t_init();
  popup_t_init();
  progress_bar_t_init();
  row_t_init();
  slider_t_init();
  tab_button_group_t_init();
  guage_t_init();
  system_bar_t_init();
  spin_box_t_init();
  image_t_init();
  svg_image_t_init();
  gif_image_t_init();

  return RET_OK;
}

