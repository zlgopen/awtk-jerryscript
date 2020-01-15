/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "jerryscript.h"
#include "jerryscript-ext/handler.h"
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include "tkc/event.h"
#include "tkc/rect.h"
#include "tkc/emitter.h"
#include "base/bitmap.h"
#include "tkc/value.h"
#include "tkc/object.h"
#include "src/awtk_global.h"
#include "base/dialog.h"
#include "base/events.h"
#include "base/font_manager.h"
#include "base/font.h"
#include "base/idle.h"
#include "base/image_manager.h"
#include "base/input_method.h"
#include "base/keys.h"
#include "base/locale_info.h"
#include "base/style.h"
#include "base/theme.h"
#include "base/timer.h"
#include "base/types_def.h"
#include "base/vgcanvas.h"
#include "base/widget_consts.h"
#include "base/widget.h"
#include "tkc/types_def.h"
#include "tkc/timer_manager.h"
#include "tkc/time_now.h"
#include "base/canvas.h"
#include "tkc/named_value.h"
#include "tkc/mime_types.h"
#include "tkc/idle_manager.h"
#include "slide_view/slide_indicator.h"
#include "base/clip_board.h"
#include "tkc/easing.h"
#include "tkc/date_time.h"
#include "tkc/color.h"
#include "tkc/asset_info.h"
#include "base/assets_manager.h"
#include "color_picker/color_component.h"
#include "time_clock/time_clock.h"
#include "text_selector/text_selector.h"
#include "switch/switch.h"
#include "widgets/view.h"
#include "slide_view/slide_view.h"
#include "slide_menu/slide_menu.h"
#include "scroll_view/scroll_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/list_view.h"
#include "widgets/tab_control.h"
#include "scroll_view/list_view_h.h"
#include "scroll_view/list_item.h"
#include "widgets/tab_button.h"
#include "widgets/tab_button_group.h"
#include "scroll_label/hscroll_label.h"
#include "rich_text/rich_text.h"
#include "progress_circle/progress_circle.h"
#include "widgets/slider.h"
#include "mledit/mledit.h"
#include "mledit/line_number.h"
#include "widgets/row.h"
#include "widgets/progress_bar.h"
#include "widgets/pages.h"
#include "widgets/overlay.h"
#include "keyboard/candidates.h"
#include "image_value/image_value.h"
#include "image_animation/image_animation.h"
#include "guage/guage.h"
#include "guage/guage_pointer.h"
#include "widgets/label.h"
#include "file_browser/file_chooser.h"
#include "file_browser/file_browser_view.h"
#include "features/draggable.h"
#include "color_picker/color_picker.h"
#include "canvas_widget/canvas_widget.h"
#include "widgets/group_box.h"
#include "widgets/grid.h"
#include "base/window_manager.h"
#include "base/window_base.h"
#include "widgets/grid_item.h"
#include "base/style_mutable.h"
#include "widgets/edit.h"
#include "base/image_base.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/dragger.h"
#include "widgets/check_button.h"
#include "widgets/clip_view.h"
#include "widgets/color_tile.h"
#include "widgets/column.h"
#include "widgets/combo_box_item.h"
#include "widgets/digit_clock.h"
#include "widgets/dialog_client.h"
#include "widgets/dialog_title.h"
#include "tkc/object_default.h"
#include "widgets/combo_box.h"
#include "base/window.h"
#include "tkc/timer_info.h"
#include "widgets/image.h"
#include "gif_image/gif_image.h"
#include "keyboard/keyboard.h"
#include "widgets/popup.h"
#include "widgets/calibration_win.h"
#include "tkc/object_array.h"
#include "mutable_image/mutable_image.h"
#include "widgets/spin_box.h"
#include "widgets/system_bar.h"
#include "tkc/idle_info.h"
#include "svg_image/svg_image.h"
#include "combo_box_ex/combo_box_ex.h"
#include "custom.c"

static jerry_object_native_info_t s_event_destroy_info = {
    (jerry_object_native_free_callback_t)event_destroy};
static jerry_object_native_info_t s_rect_destroy_info = {
    (jerry_object_native_free_callback_t)rect_destroy};
static jerry_object_native_info_t s_emitter_destroy_info = {
    (jerry_object_native_free_callback_t)emitter_destroy};
static jerry_object_native_info_t s_bitmap_destroy_info = {
    (jerry_object_native_free_callback_t)bitmap_destroy};
static jerry_object_native_info_t s_value_destroy_info = {
    (jerry_object_native_free_callback_t)value_destroy};
static jerry_object_native_info_t s_object_unref_info = {
    (jerry_object_native_free_callback_t)object_unref};
static jerry_object_native_info_t s_named_value_destroy_info = {
    (jerry_object_native_free_callback_t)named_value_destroy};
static jerry_object_native_info_t s_date_time_destroy_info = {
    (jerry_object_native_free_callback_t)date_time_destroy};
static jerry_object_native_info_t s_color_destroy_info = {
    (jerry_object_native_free_callback_t)color_destroy};
static jerry_object_native_info_t s_object_default_unref_info = {
    (jerry_object_native_free_callback_t)object_default_unref};
static jerry_object_native_info_t s_object_array_unref_info = {
    (jerry_object_native_free_callback_t)object_array_unref};
jsvalue_t wrap_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (event_t*)event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "event_t*");
  }
  return jret;
}

jsvalue_t wrap_event_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    event_t* ret = NULL;
    uint32_t type = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (event_t*)event_create(type);

    jret = jsvalue_create_object(ctx, ret, "event_t*", &s_event_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_event_t_get_prop_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->type);
  return jret;
}

jsvalue_t wrap_event_t_get_prop_time(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->time);
  return jret;
}

jsvalue_t wrap_event_t_get_prop_target(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_pointer(ctx, obj->target, "void*");
  return jret;
}

ret_t event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"event_cast", wrap_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"event_create", wrap_event_create);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_type",
                                 wrap_event_t_get_prop_type);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_time",
                                 wrap_event_t_get_prop_time);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_target",
                                 wrap_event_t_get_prop_target);

  return RET_OK;
}

jsvalue_t wrap_rect_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    rect_t* ret = NULL;
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[0]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (rect_t*)rect_create(x, y, w, h);

    jret = jsvalue_create_object(ctx, ret, "rect_t*", &s_rect_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_rect_set(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    rect_t* ret = NULL;
    rect_t* rect = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (rect_t*)rect_set(rect, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "rect_t*");
  }
  return jret;
}

jsvalue_t wrap_rect_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    rect_t* ret = NULL;
    rect_t* rect = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");
    ret = (rect_t*)rect_cast(rect);

    jret = jsvalue_create_pointer(ctx, ret, "rect_t*");
  }
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_x(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_w(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_h(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

ret_t rect_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"rect_create", wrap_rect_create);
  jerryx_handler_register_global((const jerry_char_t*)"rect_set", wrap_rect_set);
  jerryx_handler_register_global((const jerry_char_t*)"rect_cast", wrap_rect_cast);
  jerryx_handler_register_global((const jerry_char_t*)"rect_t_get_prop_x", wrap_rect_t_get_prop_x);
  jerryx_handler_register_global((const jerry_char_t*)"rect_t_get_prop_y", wrap_rect_t_get_prop_y);
  jerryx_handler_register_global((const jerry_char_t*)"rect_t_get_prop_w", wrap_rect_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"rect_t_get_prop_h", wrap_rect_t_get_prop_h);

  return RET_OK;
}

ret_t pointf_t_init(JSContext* ctx) {
  return RET_OK;
}

ret_t point_t_init(JSContext* ctx) {
  return RET_OK;
}

jsvalue_t wrap_emitter_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    emitter_t* ret = NULL;
    ret = (emitter_t*)emitter_create();

    jret = jsvalue_create_object(ctx, ret, "emitter_t*", &s_emitter_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_emitter_dispatch(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
    event_t* e = (event_t*)jsvalue_get_pointer(ctx, argv[1], "event_t*");
    ret = (ret_t)emitter_dispatch(emitter, e);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_dispatch_simple_event(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
    event_type_t type = (event_type_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)emitter_dispatch_simple_event(emitter, type);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_off(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
    uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)emitter_off(emitter, id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_enable(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
    ret = (ret_t)emitter_enable(emitter);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_disable(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
    ret = (ret_t)emitter_disable(emitter);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_size(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
    ret = (uint32_t)emitter_size(emitter);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    emitter_t* ret = NULL;
    emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
    ret = (emitter_t*)emitter_cast(emitter);

    jret = jsvalue_create_pointer(ctx, ret, "emitter_t*");
  }
  return jret;
}

ret_t emitter_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"emitter_create", wrap_emitter_create);
  jerryx_handler_register_global((const jerry_char_t*)"emitter_dispatch", wrap_emitter_dispatch);
  jerryx_handler_register_global((const jerry_char_t*)"emitter_dispatch_simple_event",
                                 wrap_emitter_dispatch_simple_event);
  jerryx_handler_register_global((const jerry_char_t*)"emitter_on", wrap_emitter_on);
  jerryx_handler_register_global((const jerry_char_t*)"emitter_off", wrap_emitter_off);
  jerryx_handler_register_global((const jerry_char_t*)"emitter_enable", wrap_emitter_enable);
  jerryx_handler_register_global((const jerry_char_t*)"emitter_disable", wrap_emitter_disable);
  jerryx_handler_register_global((const jerry_char_t*)"emitter_size", wrap_emitter_size);
  jerryx_handler_register_global((const jerry_char_t*)"emitter_cast", wrap_emitter_cast);

  return RET_OK;
}

jsvalue_t wrap_bitmap_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    bitmap_t* ret = NULL;
    ret = (bitmap_t*)bitmap_create();

    jret = jsvalue_create_object(ctx, ret, "bitmap_t*", &s_bitmap_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_bitmap_create_ex(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    bitmap_t* ret = NULL;
    uint32_t w = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    uint32_t h = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t line_length = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    bitmap_format_t format = (bitmap_format_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);

    jret = jsvalue_create_object(ctx, ret, "bitmap_t*", &s_bitmap_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_bitmap_get_bpp(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    bitmap_t* bitmap = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");
    ret = (uint32_t)bitmap_get_bpp(bitmap);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_w(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_h(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_line_length(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->line_length);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_flags(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->flags);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_format(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_name(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t bitmap_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_create", wrap_bitmap_create);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_create_ex", wrap_bitmap_create_ex);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_get_bpp", wrap_bitmap_get_bpp);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_w",
                                 wrap_bitmap_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_h",
                                 wrap_bitmap_t_get_prop_h);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_line_length",
                                 wrap_bitmap_t_get_prop_line_length);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_flags",
                                 wrap_bitmap_t_get_prop_flags);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_format",
                                 wrap_bitmap_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_name",
                                 wrap_bitmap_t_get_prop_name);

  return RET_OK;
}

jsvalue_t wrap_value_set_bool(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (value_t*)value_set_bool(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_bool(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (bool_t)value_bool(v);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    int8_t value = (int8_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int8(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int8_t ret = (int8_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (int8_t)value_int8(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    uint8_t value = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_uint8(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int8_t ret = (int8_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (int8_t)value_uint8(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    int16_t value = (int16_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int16(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int16_t ret = (int16_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (int16_t)value_int16(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    uint16_t value = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_uint16(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint16_t ret = (uint16_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (uint16_t)value_uint16(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int32(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (int32_t)value_int32(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_uint32(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_int64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    int64_t value = (int64_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int64(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int64_t ret = (int64_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (int64_t)value_int64(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    uint64_t value = (uint64_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_uint64(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint64_t ret = (uint64_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (uint64_t)value_uint64(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_float(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (value_t*)value_set_float(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_float32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    float ret = (float)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (float)value_float32(v);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_double(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    double value = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (value_t*)value_set_double(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_double(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    double ret = (double)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (double)value_double(v);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_dup_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (value_t*)value_dup_str(v, value);
    TKMEM_FREE(value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (const char*)value_str(v);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_is_null(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (bool_t)value_is_null(value);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_object(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
    ret = (value_t*)value_set_object(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_object(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    object_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (object_t*)value_object(v);

    jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_token(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_token(v, value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_token(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (uint32_t)value_token(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    value_t* ret = NULL;
    ret = (value_t*)value_create();

    jret = jsvalue_create_object(ctx, ret, "value_t*", &s_value_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_value_reset(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (ret_t)value_reset(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    value_t* ret = NULL;
    value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    ret = (value_t*)value_cast(value);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

ret_t value_t_init(JSContext* ctx) {
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
  jerryx_handler_register_global((const jerry_char_t*)"value_float32", wrap_value_float32);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_double", wrap_value_set_double);
  jerryx_handler_register_global((const jerry_char_t*)"value_double", wrap_value_double);
  jerryx_handler_register_global((const jerry_char_t*)"value_dup_str", wrap_value_dup_str);
  jerryx_handler_register_global((const jerry_char_t*)"value_str", wrap_value_str);
  jerryx_handler_register_global((const jerry_char_t*)"value_is_null", wrap_value_is_null);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_int", wrap_value_set_int);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_object", wrap_value_set_object);
  jerryx_handler_register_global((const jerry_char_t*)"value_object", wrap_value_object);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_token", wrap_value_set_token);
  jerryx_handler_register_global((const jerry_char_t*)"value_token", wrap_value_token);
  jerryx_handler_register_global((const jerry_char_t*)"value_create", wrap_value_create);
  jerryx_handler_register_global((const jerry_char_t*)"value_reset", wrap_value_reset);
  jerryx_handler_register_global((const jerry_char_t*)"value_cast", wrap_value_cast);

  return RET_OK;
}

jsvalue_t wrap_object_ref(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    object_t* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    ret = (object_t*)object_ref(obj);

    jret = jsvalue_create_object(ctx, ret, "object_t*", &s_object_unref_info);
  }
  return jret;
}

jsvalue_t wrap_object_get_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    ret = (const char*)object_get_type(obj);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_desc(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    ret = (const char*)object_get_desc(obj);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_size(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    ret = (uint32_t)object_get_size(obj);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_is_collection(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    ret = (bool_t)object_is_collection(obj);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_name(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)object_set_name(obj, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_compare(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    int ret = (int)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    object_t* other = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
    ret = (int)object_compare(obj, other);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
    ret = (ret_t)object_get_prop(obj, name, v);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    const char* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (const char*)object_get_prop_str(obj, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_pointer(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    void* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (void*)object_get_prop_pointer(obj, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "void*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_object(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    object_t* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (object_t*)object_get_prop_object(obj, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = (int32_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int32_t)object_get_prop_int(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_bool(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = (bool_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (bool_t)object_get_prop_bool(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_float(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    float_t ret = (float_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (float_t)object_get_prop_float(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_remove_prop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)object_remove_prop(obj, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
    ret = (ret_t)object_set_prop(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)object_set_prop_str(obj, name, value);
    TKMEM_FREE(name);
    TKMEM_FREE(value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_object(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[2], "object_t*");
    ret = (ret_t)object_set_prop_object(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_int(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_bool(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_bool(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_float(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_float(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_copy_prop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    object_t* src = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)object_copy_prop(obj, src, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_has_prop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    bool_t ret = (bool_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (bool_t)object_has_prop(obj, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_eval(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* expr = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
    ret = (ret_t)object_eval(obj, expr, v);
    TKMEM_FREE(expr);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_can_exec(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = (bool_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (bool_t)object_can_exec(obj, name, args);
    TKMEM_FREE(name);
    TKMEM_FREE(args);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_exec(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)object_exec(obj, name, args);
    TKMEM_FREE(name);
    TKMEM_FREE(args);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_notify_changed(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    ret = (ret_t)object_notify_changed(obj);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_str_by_path(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    const char* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (const char*)object_get_prop_str_by_path(obj, path);
    TKMEM_FREE(path);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_pointer_by_path(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    void* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (void*)object_get_prop_pointer_by_path(obj, path);
    TKMEM_FREE(path);

    jret = jsvalue_create_pointer(ctx, ret, "void*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_object_by_path(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    object_t* ret = NULL;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (object_t*)object_get_prop_object_by_path(obj, path);
    TKMEM_FREE(path);

    jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_int_by_path(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = (int32_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int32_t)object_get_prop_int_by_path(obj, path, defval);
    TKMEM_FREE(path);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_bool_by_path(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = (bool_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (bool_t)object_get_prop_bool_by_path(obj, path, defval);
    TKMEM_FREE(path);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_float_by_path(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    float_t ret = (float_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (float_t)object_get_prop_float_by_path(obj, path, defval);
    TKMEM_FREE(path);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_t_get_prop_ref_count(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  jret = jsvalue_create_int(ctx, obj->ref_count);
  return jret;
}

jsvalue_t wrap_object_t_get_prop_name(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t object_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"object_ref", wrap_object_ref);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_type", wrap_object_get_type);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_desc", wrap_object_get_desc);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_size", wrap_object_get_size);
  jerryx_handler_register_global((const jerry_char_t*)"object_is_collection",
                                 wrap_object_is_collection);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_name", wrap_object_set_name);
  jerryx_handler_register_global((const jerry_char_t*)"object_compare", wrap_object_compare);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop", wrap_object_get_prop);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_str",
                                 wrap_object_get_prop_str);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_pointer",
                                 wrap_object_get_prop_pointer);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_object",
                                 wrap_object_get_prop_object);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_int",
                                 wrap_object_get_prop_int);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_bool",
                                 wrap_object_get_prop_bool);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_float",
                                 wrap_object_get_prop_float);
  jerryx_handler_register_global((const jerry_char_t*)"object_remove_prop",
                                 wrap_object_remove_prop);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop", wrap_object_set_prop);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_str",
                                 wrap_object_set_prop_str);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_object",
                                 wrap_object_set_prop_object);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_int",
                                 wrap_object_set_prop_int);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_bool",
                                 wrap_object_set_prop_bool);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_float",
                                 wrap_object_set_prop_float);
  jerryx_handler_register_global((const jerry_char_t*)"object_copy_prop", wrap_object_copy_prop);
  jerryx_handler_register_global((const jerry_char_t*)"object_has_prop", wrap_object_has_prop);
  jerryx_handler_register_global((const jerry_char_t*)"object_eval", wrap_object_eval);
  jerryx_handler_register_global((const jerry_char_t*)"object_can_exec", wrap_object_can_exec);
  jerryx_handler_register_global((const jerry_char_t*)"object_exec", wrap_object_exec);
  jerryx_handler_register_global((const jerry_char_t*)"object_notify_changed",
                                 wrap_object_notify_changed);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_str_by_path",
                                 wrap_object_get_prop_str_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_pointer_by_path",
                                 wrap_object_get_prop_pointer_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_object_by_path",
                                 wrap_object_get_prop_object_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_int_by_path",
                                 wrap_object_get_prop_int_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_bool_by_path",
                                 wrap_object_get_prop_bool_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_float_by_path",
                                 wrap_object_get_prop_float_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_t_get_prop_ref_count",
                                 wrap_object_t_get_prop_ref_count);
  jerryx_handler_register_global((const jerry_char_t*)"object_t_get_prop_name",
                                 wrap_object_t_get_prop_name);

  return RET_OK;
}

jsvalue_t wrap_tk_init(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[0]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
    app_type_t app_type = (app_type_t)jsvalue_get_int_value(ctx, argv[2]);
    const char* app_name = (const char*)jsvalue_get_utf8_string(ctx, argv[3]);
    const char* app_root = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
    ret = (ret_t)tk_init(w, h, app_type, app_name, app_root);
    TKMEM_FREE(app_name);
    TKMEM_FREE(app_root);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_run(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = (ret_t)0;
    ret = (ret_t)tk_run();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_quit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = (ret_t)0;
    ret = (ret_t)tk_quit();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_get_pointer_x(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    int32_t ret = (int32_t)0;
    ret = (int32_t)tk_get_pointer_x();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_get_pointer_y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    int32_t ret = (int32_t)0;
    ret = (int32_t)tk_get_pointer_y();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_is_pointer_pressed(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    bool_t ret = (bool_t)0;
    ret = (bool_t)tk_is_pointer_pressed();

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

ret_t global_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"tk_init", wrap_tk_init);
  jerryx_handler_register_global((const jerry_char_t*)"tk_run", wrap_tk_run);
  jerryx_handler_register_global((const jerry_char_t*)"tk_quit", wrap_tk_quit);
  jerryx_handler_register_global((const jerry_char_t*)"tk_get_pointer_x", wrap_tk_get_pointer_x);
  jerryx_handler_register_global((const jerry_char_t*)"tk_get_pointer_y", wrap_tk_get_pointer_y);
  jerryx_handler_register_global((const jerry_char_t*)"tk_is_pointer_pressed",
                                 wrap_tk_is_pointer_pressed);

  return RET_OK;
}

jsvalue_t get_DIALOG_QUIT_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_NONE);
}

jsvalue_t get_DIALOG_QUIT_OK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_OK);
}

jsvalue_t get_DIALOG_QUIT_YES(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_YES);
}

jsvalue_t get_DIALOG_QUIT_CANCEL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_CANCEL);
}

jsvalue_t get_DIALOG_QUIT_NO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_NO);
}

jsvalue_t get_DIALOG_QUIT_OTHER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_OTHER);
}

ret_t dialog_quit_code_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"DIALOG_QUIT_NONE", get_DIALOG_QUIT_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"DIALOG_QUIT_OK", get_DIALOG_QUIT_OK);
  jerryx_handler_register_global((const jerry_char_t*)"DIALOG_QUIT_YES", get_DIALOG_QUIT_YES);
  jerryx_handler_register_global((const jerry_char_t*)"DIALOG_QUIT_CANCEL", get_DIALOG_QUIT_CANCEL);
  jerryx_handler_register_global((const jerry_char_t*)"DIALOG_QUIT_NO", get_DIALOG_QUIT_NO);
  jerryx_handler_register_global((const jerry_char_t*)"DIALOG_QUIT_OTHER", get_DIALOG_QUIT_OTHER);

  return RET_OK;
}

jsvalue_t get_EVT_POINTER_DOWN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN);
}

jsvalue_t get_EVT_POINTER_DOWN_BEFORE_CHILDREN(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_MOVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_MOVE);
}

jsvalue_t get_EVT_POINTER_MOVE_BEFORE_CHILDREN(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_MOVE_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_UP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_UP);
}

jsvalue_t get_EVT_POINTER_UP_BEFORE_CHILDREN(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_UP_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_WHEEL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WHEEL);
}

jsvalue_t get_EVT_WHEEL_BEFORE_CHILDREN(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WHEEL_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_DOWN_ABORT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN_ABORT);
}

jsvalue_t get_EVT_CONTEXT_MENU(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_CONTEXT_MENU);
}

jsvalue_t get_EVT_POINTER_ENTER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_ENTER);
}

jsvalue_t get_EVT_POINTER_LEAVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_LEAVE);
}

jsvalue_t get_EVT_LONG_PRESS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_LONG_PRESS);
}

jsvalue_t get_EVT_CLICK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_CLICK);
}

jsvalue_t get_EVT_FOCUS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_FOCUS);
}

jsvalue_t get_EVT_BLUR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_BLUR);
}

jsvalue_t get_EVT_KEY_DOWN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_DOWN);
}

jsvalue_t get_EVT_KEY_DOWN_BEFORE_CHILDREN(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_DOWN_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_KEY_REPEAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_REPEAT);
}

jsvalue_t get_EVT_KEY_UP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_UP);
}

jsvalue_t get_EVT_KEY_UP_BEFORE_CHILDREN(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_UP_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_WILL_MOVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WILL_MOVE);
}

jsvalue_t get_EVT_MOVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_MOVE);
}

jsvalue_t get_EVT_WILL_RESIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WILL_RESIZE);
}

jsvalue_t get_EVT_RESIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_RESIZE);
}

jsvalue_t get_EVT_WILL_MOVE_RESIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WILL_MOVE_RESIZE);
}

jsvalue_t get_EVT_MOVE_RESIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_MOVE_RESIZE);
}

jsvalue_t get_EVT_VALUE_WILL_CHANGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VALUE_WILL_CHANGE);
}

jsvalue_t get_EVT_VALUE_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VALUE_CHANGED);
}

jsvalue_t get_EVT_VALUE_CHANGING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VALUE_CHANGING);
}

jsvalue_t get_EVT_PAINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PAINT);
}

jsvalue_t get_EVT_BEFORE_PAINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_BEFORE_PAINT);
}

jsvalue_t get_EVT_AFTER_PAINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_AFTER_PAINT);
}

jsvalue_t get_EVT_PAINT_DONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PAINT_DONE);
}

jsvalue_t get_EVT_LOCALE_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_LOCALE_CHANGED);
}

jsvalue_t get_EVT_ANIM_START(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_START);
}

jsvalue_t get_EVT_ANIM_STOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_STOP);
}

jsvalue_t get_EVT_ANIM_PAUSE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_PAUSE);
}

jsvalue_t get_EVT_ANIM_ONCE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_ONCE);
}

jsvalue_t get_EVT_ANIM_END(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_END);
}

jsvalue_t get_EVT_WINDOW_LOAD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_LOAD);
}

jsvalue_t get_EVT_WIDGET_LOAD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WIDGET_LOAD);
}

jsvalue_t get_EVT_WINDOW_WILL_OPEN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_WILL_OPEN);
}

jsvalue_t get_EVT_WINDOW_OPEN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_OPEN);
}

jsvalue_t get_EVT_WINDOW_TO_BACKGROUND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_TO_BACKGROUND);
}

jsvalue_t get_EVT_WINDOW_TO_FOREGROUND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_TO_FOREGROUND);
}

jsvalue_t get_EVT_WINDOW_CLOSE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_CLOSE);
}

jsvalue_t get_EVT_REQUEST_CLOSE_WINDOW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_REQUEST_CLOSE_WINDOW);
}

jsvalue_t get_EVT_TOP_WINDOW_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_TOP_WINDOW_CHANGED);
}

jsvalue_t get_EVT_IM_COMMIT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_COMMIT);
}

jsvalue_t get_EVT_IM_SHOW_CANDIDATES(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_SHOW_CANDIDATES);
}

jsvalue_t get_EVT_IM_ACTION(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_ACTION);
}

jsvalue_t get_EVT_IM_ACTION_INFO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_ACTION_INFO);
}

jsvalue_t get_EVT_DRAG_START(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DRAG_START);
}

jsvalue_t get_EVT_DRAG(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DRAG);
}

jsvalue_t get_EVT_DRAG_END(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DRAG_END);
}

jsvalue_t get_EVT_SCREEN_SAVER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_SCREEN_SAVER);
}

jsvalue_t get_EVT_LOW_MEMORY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_LOW_MEMORY);
}

jsvalue_t get_EVT_OUT_OF_MEMORY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_OUT_OF_MEMORY);
}

jsvalue_t get_EVT_ORIENTATION_WILL_CHANGED(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ORIENTATION_WILL_CHANGED);
}

jsvalue_t get_EVT_ORIENTATION_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ORIENTATION_CHANGED);
}

jsvalue_t get_EVT_WIDGET_CREATED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WIDGET_CREATED);
}

jsvalue_t get_EVT_REQUEST_QUIT_APP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_REQUEST_QUIT_APP);
}

jsvalue_t get_EVT_THEME_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_THEME_CHANGED);
}

jsvalue_t get_EVT_WIDGET_ADD_CHILD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WIDGET_ADD_CHILD);
}

jsvalue_t get_EVT_WIDGET_REMOVE_CHILD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WIDGET_REMOVE_CHILD);
}

jsvalue_t get_EVT_REQ_START(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_REQ_START);
}

jsvalue_t get_EVT_USER_START(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_USER_START);
}

jsvalue_t get_EVT_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_NONE);
}

jsvalue_t get_EVT_PROP_WILL_CHANGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PROP_WILL_CHANGE);
}

jsvalue_t get_EVT_PROP_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PROP_CHANGED);
}

jsvalue_t get_EVT_ITEMS_WILL_CHANGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ITEMS_WILL_CHANGE);
}

jsvalue_t get_EVT_ITEMS_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ITEMS_CHANGED);
}

jsvalue_t get_EVT_PROPS_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PROPS_CHANGED);
}

jsvalue_t get_EVT_PROGRESS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PROGRESS);
}

jsvalue_t get_EVT_DONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DONE);
}

jsvalue_t get_EVT_DESTROY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DESTROY);
}

ret_t event_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_DOWN", get_EVT_POINTER_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_DOWN_BEFORE_CHILDREN",
                                 get_EVT_POINTER_DOWN_BEFORE_CHILDREN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_MOVE", get_EVT_POINTER_MOVE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_MOVE_BEFORE_CHILDREN",
                                 get_EVT_POINTER_MOVE_BEFORE_CHILDREN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_UP", get_EVT_POINTER_UP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_UP_BEFORE_CHILDREN",
                                 get_EVT_POINTER_UP_BEFORE_CHILDREN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WHEEL", get_EVT_WHEEL);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WHEEL_BEFORE_CHILDREN",
                                 get_EVT_WHEEL_BEFORE_CHILDREN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_DOWN_ABORT",
                                 get_EVT_POINTER_DOWN_ABORT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_CONTEXT_MENU", get_EVT_CONTEXT_MENU);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_ENTER", get_EVT_POINTER_ENTER);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_LEAVE", get_EVT_POINTER_LEAVE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_LONG_PRESS", get_EVT_LONG_PRESS);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_CLICK", get_EVT_CLICK);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_FOCUS", get_EVT_FOCUS);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_BLUR", get_EVT_BLUR);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_DOWN", get_EVT_KEY_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_DOWN_BEFORE_CHILDREN",
                                 get_EVT_KEY_DOWN_BEFORE_CHILDREN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_REPEAT", get_EVT_KEY_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_UP", get_EVT_KEY_UP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_UP_BEFORE_CHILDREN",
                                 get_EVT_KEY_UP_BEFORE_CHILDREN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WILL_MOVE", get_EVT_WILL_MOVE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_MOVE", get_EVT_MOVE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WILL_RESIZE", get_EVT_WILL_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_RESIZE", get_EVT_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WILL_MOVE_RESIZE",
                                 get_EVT_WILL_MOVE_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_MOVE_RESIZE", get_EVT_MOVE_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_WILL_CHANGE",
                                 get_EVT_VALUE_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_CHANGED", get_EVT_VALUE_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_CHANGING", get_EVT_VALUE_CHANGING);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PAINT", get_EVT_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_BEFORE_PAINT", get_EVT_BEFORE_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_AFTER_PAINT", get_EVT_AFTER_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PAINT_DONE", get_EVT_PAINT_DONE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_LOCALE_CHANGED", get_EVT_LOCALE_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_START", get_EVT_ANIM_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_STOP", get_EVT_ANIM_STOP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_PAUSE", get_EVT_ANIM_PAUSE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_ONCE", get_EVT_ANIM_ONCE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_END", get_EVT_ANIM_END);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_LOAD", get_EVT_WINDOW_LOAD);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WIDGET_LOAD", get_EVT_WIDGET_LOAD);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_WILL_OPEN",
                                 get_EVT_WINDOW_WILL_OPEN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_OPEN", get_EVT_WINDOW_OPEN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_TO_BACKGROUND",
                                 get_EVT_WINDOW_TO_BACKGROUND);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_TO_FOREGROUND",
                                 get_EVT_WINDOW_TO_FOREGROUND);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_CLOSE", get_EVT_WINDOW_CLOSE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_REQUEST_CLOSE_WINDOW",
                                 get_EVT_REQUEST_CLOSE_WINDOW);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_TOP_WINDOW_CHANGED",
                                 get_EVT_TOP_WINDOW_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_COMMIT", get_EVT_IM_COMMIT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_SHOW_CANDIDATES",
                                 get_EVT_IM_SHOW_CANDIDATES);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_ACTION", get_EVT_IM_ACTION);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_ACTION_INFO", get_EVT_IM_ACTION_INFO);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG_START", get_EVT_DRAG_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG", get_EVT_DRAG);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG_END", get_EVT_DRAG_END);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_SCREEN_SAVER", get_EVT_SCREEN_SAVER);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_LOW_MEMORY", get_EVT_LOW_MEMORY);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_OUT_OF_MEMORY", get_EVT_OUT_OF_MEMORY);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ORIENTATION_WILL_CHANGED",
                                 get_EVT_ORIENTATION_WILL_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ORIENTATION_CHANGED",
                                 get_EVT_ORIENTATION_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WIDGET_CREATED", get_EVT_WIDGET_CREATED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_REQUEST_QUIT_APP",
                                 get_EVT_REQUEST_QUIT_APP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_THEME_CHANGED", get_EVT_THEME_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WIDGET_ADD_CHILD",
                                 get_EVT_WIDGET_ADD_CHILD);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WIDGET_REMOVE_CHILD",
                                 get_EVT_WIDGET_REMOVE_CHILD);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_REQ_START", get_EVT_REQ_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_USER_START", get_EVT_USER_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_NONE", get_EVT_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROP_WILL_CHANGE",
                                 get_EVT_PROP_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROP_CHANGED", get_EVT_PROP_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ITEMS_WILL_CHANGE",
                                 get_EVT_ITEMS_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ITEMS_CHANGED", get_EVT_ITEMS_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROPS_CHANGED", get_EVT_PROPS_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROGRESS", get_EVT_PROGRESS);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DONE", get_EVT_DONE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DESTROY", get_EVT_DESTROY);

  return RET_OK;
}

jsvalue_t wrap_font_manager_unload_font(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    font_size_t size = (font_size_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)font_manager_unload_font(fm, name, size);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_font_manager_unload_all(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
    ret = (ret_t)font_manager_unload_all(fm);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t font_manager_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"font_manager_unload_font",
                                 wrap_font_manager_unload_font);
  jerryx_handler_register_global((const jerry_char_t*)"font_manager_unload_all",
                                 wrap_font_manager_unload_all);

  return RET_OK;
}

jsvalue_t get_GLYPH_FMT_ALPHA(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, GLYPH_FMT_ALPHA);
}

jsvalue_t get_GLYPH_FMT_MONO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, GLYPH_FMT_MONO);
}

jsvalue_t get_GLYPH_FMT_RGBA(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, GLYPH_FMT_RGBA);
}

ret_t glyph_format_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"GLYPH_FMT_ALPHA", get_GLYPH_FMT_ALPHA);
  jerryx_handler_register_global((const jerry_char_t*)"GLYPH_FMT_MONO", get_GLYPH_FMT_MONO);
  jerryx_handler_register_global((const jerry_char_t*)"GLYPH_FMT_RGBA", get_GLYPH_FMT_RGBA);

  return RET_OK;
}

jsvalue_t wrap_idle_remove(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    uint32_t idle_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (ret_t)idle_remove(idle_id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t idle_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"idle_add", wrap_idle_add);
  jerryx_handler_register_global((const jerry_char_t*)"idle_remove", wrap_idle_remove);

  return RET_OK;
}

jsvalue_t wrap_image_manager(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    image_manager_t* ret = NULL;
    ret = (image_manager_t*)image_manager();

    jret = jsvalue_create_pointer(ctx, ret, "image_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_image_manager_get_bitmap(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    image_manager_t* imm = (image_manager_t*)jsvalue_get_pointer(ctx, argv[0], "image_manager_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bitmap_t* image = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
    ret = (ret_t)image_manager_get_bitmap(imm, name, image);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_manager_preload(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    image_manager_t* imm = (image_manager_t*)jsvalue_get_pointer(ctx, argv[0], "image_manager_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_manager_preload(imm, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t image_manager_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"image_manager", wrap_image_manager);
  jerryx_handler_register_global((const jerry_char_t*)"image_manager_get_bitmap",
                                 wrap_image_manager_get_bitmap);
  jerryx_handler_register_global((const jerry_char_t*)"image_manager_preload",
                                 wrap_image_manager_preload);

  return RET_OK;
}

jsvalue_t get_INPUT_TEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_TEXT);
}

jsvalue_t get_INPUT_INT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_INT);
}

jsvalue_t get_INPUT_UINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_UINT);
}

jsvalue_t get_INPUT_HEX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_HEX);
}

jsvalue_t get_INPUT_FLOAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_FLOAT);
}

jsvalue_t get_INPUT_UFLOAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_UFLOAT);
}

jsvalue_t get_INPUT_EMAIL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_EMAIL);
}

jsvalue_t get_INPUT_PASSWORD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_PASSWORD);
}

jsvalue_t get_INPUT_PHONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_PHONE);
}

jsvalue_t get_INPUT_CUSTOM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_CUSTOM);
}

jsvalue_t get_INPUT_CUSTOM_PASSWORD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_CUSTOM_PASSWORD);
}

ret_t input_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_TEXT", get_INPUT_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_INT", get_INPUT_INT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_UINT", get_INPUT_UINT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_HEX", get_INPUT_HEX);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_FLOAT", get_INPUT_FLOAT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_UFLOAT", get_INPUT_UFLOAT);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_EMAIL", get_INPUT_EMAIL);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_PASSWORD", get_INPUT_PASSWORD);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_PHONE", get_INPUT_PHONE);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_CUSTOM", get_INPUT_CUSTOM);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_CUSTOM_PASSWORD",
                                 get_INPUT_CUSTOM_PASSWORD);

  return RET_OK;
}

jsvalue_t get_VALUE_TYPE_INVALID(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INVALID);
}

jsvalue_t get_VALUE_TYPE_BOOL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_BOOL);
}

jsvalue_t get_VALUE_TYPE_INT8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INT8);
}

jsvalue_t get_VALUE_TYPE_UINT8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT8);
}

jsvalue_t get_VALUE_TYPE_INT16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INT16);
}

jsvalue_t get_VALUE_TYPE_UINT16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT16);
}

jsvalue_t get_VALUE_TYPE_INT32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INT32);
}

jsvalue_t get_VALUE_TYPE_UINT32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT32);
}

jsvalue_t get_VALUE_TYPE_INT64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INT64);
}

jsvalue_t get_VALUE_TYPE_UINT64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT64);
}

jsvalue_t get_VALUE_TYPE_POINTER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_POINTER);
}

jsvalue_t get_VALUE_TYPE_FLOAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_FLOAT);
}

jsvalue_t get_VALUE_TYPE_FLOAT32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_FLOAT32);
}

jsvalue_t get_VALUE_TYPE_DOUBLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_DOUBLE);
}

jsvalue_t get_VALUE_TYPE_STRING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_STRING);
}

jsvalue_t get_VALUE_TYPE_WSTRING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_WSTRING);
}

jsvalue_t get_VALUE_TYPE_OBJECT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_OBJECT);
}

jsvalue_t get_VALUE_TYPE_SIZED_STRING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_SIZED_STRING);
}

jsvalue_t get_VALUE_TYPE_BINARY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_BINARY);
}

jsvalue_t get_VALUE_TYPE_UBJSON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UBJSON);
}

jsvalue_t get_VALUE_TYPE_TOKEN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_TOKEN);
}

ret_t value_type_t_init(JSContext* ctx) {
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
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_OBJECT", get_VALUE_TYPE_OBJECT);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_SIZED_STRING",
                                 get_VALUE_TYPE_SIZED_STRING);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_BINARY", get_VALUE_TYPE_BINARY);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_UBJSON", get_VALUE_TYPE_UBJSON);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_TOKEN", get_VALUE_TYPE_TOKEN);

  return RET_OK;
}

jsvalue_t wrap_input_method_commit_text(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)input_method_commit_text(im, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_input_method_dispatch_key(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    uint32_t key = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)input_method_dispatch_key(im, key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_input_method(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    input_method_t* ret = NULL;
    ret = (input_method_t*)input_method();

    jret = jsvalue_create_pointer(ctx, ret, "input_method_t*");
  }
  return jret;
}

ret_t input_method_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"input_method_commit_text",
                                 wrap_input_method_commit_text);
  jerryx_handler_register_global((const jerry_char_t*)"input_method_dispatch_key",
                                 wrap_input_method_dispatch_key);
  jerryx_handler_register_global((const jerry_char_t*)"input_method", wrap_input_method);

  return RET_OK;
}

jsvalue_t get_TK_KEY_RETURN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RETURN);
}

jsvalue_t get_TK_KEY_ESCAPE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_ESCAPE);
}

jsvalue_t get_TK_KEY_BACKSPACE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_BACKSPACE);
}

jsvalue_t get_TK_KEY_TAB(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_TAB);
}

jsvalue_t get_TK_KEY_SPACE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_SPACE);
}

jsvalue_t get_TK_KEY_EXCLAIM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_EXCLAIM);
}

jsvalue_t get_TK_KEY_QUOTEDBL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_QUOTEDBL);
}

jsvalue_t get_TK_KEY_HASH(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_HASH);
}

jsvalue_t get_TK_KEY_PERCENT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PERCENT);
}

jsvalue_t get_TK_KEY_DOLLAR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_DOLLAR);
}

jsvalue_t get_TK_KEY_AMPERSAND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_AMPERSAND);
}

jsvalue_t get_TK_KEY_QUOTE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_QUOTE);
}

jsvalue_t get_TK_KEY_LEFTPAREN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LEFTPAREN);
}

jsvalue_t get_TK_KEY_RIGHTPAREN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RIGHTPAREN);
}

jsvalue_t get_TK_KEY_ASTERISK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_ASTERISK);
}

jsvalue_t get_TK_KEY_PLUS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PLUS);
}

jsvalue_t get_TK_KEY_COMMA(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_COMMA);
}

jsvalue_t get_TK_KEY_MINUS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_MINUS);
}

jsvalue_t get_TK_KEY_PERIOD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PERIOD);
}

jsvalue_t get_TK_KEY_SLASH(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_SLASH);
}

jsvalue_t get_TK_KEY_0(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_0);
}

jsvalue_t get_TK_KEY_1(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_1);
}

jsvalue_t get_TK_KEY_2(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_2);
}

jsvalue_t get_TK_KEY_3(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_3);
}

jsvalue_t get_TK_KEY_4(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_4);
}

jsvalue_t get_TK_KEY_5(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_5);
}

jsvalue_t get_TK_KEY_6(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_6);
}

jsvalue_t get_TK_KEY_7(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_7);
}

jsvalue_t get_TK_KEY_8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_8);
}

jsvalue_t get_TK_KEY_9(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_9);
}

jsvalue_t get_TK_KEY_COLON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_COLON);
}

jsvalue_t get_TK_KEY_SEMICOLON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_SEMICOLON);
}

jsvalue_t get_TK_KEY_LESS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LESS);
}

jsvalue_t get_TK_KEY_EQUAL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_EQUAL);
}

jsvalue_t get_TK_KEY_GREATER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_GREATER);
}

jsvalue_t get_TK_KEY_QUESTION(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_QUESTION);
}

jsvalue_t get_TK_KEY_AT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_AT);
}

jsvalue_t get_TK_KEY_LEFTBRACKET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LEFTBRACKET);
}

jsvalue_t get_TK_KEY_BACKSLASH(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_BACKSLASH);
}

jsvalue_t get_TK_KEY_RIGHTBRACKET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RIGHTBRACKET);
}

jsvalue_t get_TK_KEY_CARET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_CARET);
}

jsvalue_t get_TK_KEY_UNDERSCORE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_UNDERSCORE);
}

jsvalue_t get_TK_KEY_BACKQUOTE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_BACKQUOTE);
}

jsvalue_t get_TK_KEY_a(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_a);
}

jsvalue_t get_TK_KEY_b(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_b);
}

jsvalue_t get_TK_KEY_c(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_c);
}

jsvalue_t get_TK_KEY_d(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_d);
}

jsvalue_t get_TK_KEY_e(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_e);
}

jsvalue_t get_TK_KEY_f(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_f);
}

jsvalue_t get_TK_KEY_g(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_g);
}

jsvalue_t get_TK_KEY_h(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_h);
}

jsvalue_t get_TK_KEY_i(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_i);
}

jsvalue_t get_TK_KEY_j(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_j);
}

jsvalue_t get_TK_KEY_k(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_k);
}

jsvalue_t get_TK_KEY_l(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_l);
}

jsvalue_t get_TK_KEY_m(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_m);
}

jsvalue_t get_TK_KEY_n(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_n);
}

jsvalue_t get_TK_KEY_o(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_o);
}

jsvalue_t get_TK_KEY_p(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_p);
}

jsvalue_t get_TK_KEY_q(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_q);
}

jsvalue_t get_TK_KEY_r(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_r);
}

jsvalue_t get_TK_KEY_s(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_s);
}

jsvalue_t get_TK_KEY_t(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_t);
}

jsvalue_t get_TK_KEY_u(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_u);
}

jsvalue_t get_TK_KEY_v(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_v);
}

jsvalue_t get_TK_KEY_w(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_w);
}

jsvalue_t get_TK_KEY_x(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_x);
}

jsvalue_t get_TK_KEY_y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_y);
}

jsvalue_t get_TK_KEY_z(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_z);
}

jsvalue_t get_TK_KEY_A(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_A);
}

jsvalue_t get_TK_KEY_B(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_B);
}

jsvalue_t get_TK_KEY_C(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_C);
}

jsvalue_t get_TK_KEY_D(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_D);
}

jsvalue_t get_TK_KEY_E(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_E);
}

jsvalue_t get_TK_KEY_F(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F);
}

jsvalue_t get_TK_KEY_G(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_G);
}

jsvalue_t get_TK_KEY_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_H);
}

jsvalue_t get_TK_KEY_I(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_I);
}

jsvalue_t get_TK_KEY_J(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_J);
}

jsvalue_t get_TK_KEY_K(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_K);
}

jsvalue_t get_TK_KEY_L(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_L);
}

jsvalue_t get_TK_KEY_M(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_M);
}

jsvalue_t get_TK_KEY_N(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_N);
}

jsvalue_t get_TK_KEY_O(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_O);
}

jsvalue_t get_TK_KEY_P(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_P);
}

jsvalue_t get_TK_KEY_Q(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_Q);
}

jsvalue_t get_TK_KEY_R(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_R);
}

jsvalue_t get_TK_KEY_S(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_S);
}

jsvalue_t get_TK_KEY_T(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_T);
}

jsvalue_t get_TK_KEY_U(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_U);
}

jsvalue_t get_TK_KEY_V(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_V);
}

jsvalue_t get_TK_KEY_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_W);
}

jsvalue_t get_TK_KEY_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_X);
}

jsvalue_t get_TK_KEY_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_Y);
}

jsvalue_t get_TK_KEY_Z(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_Z);
}

jsvalue_t get_TK_KEY_DOT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_DOT);
}

jsvalue_t get_TK_KEY_DELETE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_DELETE);
}

jsvalue_t get_TK_KEY_LEFTBRACE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LEFTBRACE);
}

jsvalue_t get_TK_KEY_RIGHTBRACE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RIGHTBRACE);
}

jsvalue_t get_TK_KEY_LSHIFT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LSHIFT);
}

jsvalue_t get_TK_KEY_RSHIFT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RSHIFT);
}

jsvalue_t get_TK_KEY_LCTRL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LCTRL);
}

jsvalue_t get_TK_KEY_RCTRL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RCTRL);
}

jsvalue_t get_TK_KEY_LALT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LALT);
}

jsvalue_t get_TK_KEY_RALT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RALT);
}

jsvalue_t get_TK_KEY_CAPSLOCK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_CAPSLOCK);
}

jsvalue_t get_TK_KEY_HOME(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_HOME);
}

jsvalue_t get_TK_KEY_END(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_END);
}

jsvalue_t get_TK_KEY_INSERT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_INSERT);
}

jsvalue_t get_TK_KEY_UP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_UP);
}

jsvalue_t get_TK_KEY_DOWN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_DOWN);
}

jsvalue_t get_TK_KEY_LEFT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LEFT);
}

jsvalue_t get_TK_KEY_RIGHT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RIGHT);
}

jsvalue_t get_TK_KEY_PAGEUP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PAGEUP);
}

jsvalue_t get_TK_KEY_PAGEDOWN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PAGEDOWN);
}

jsvalue_t get_TK_KEY_F1(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F1);
}

jsvalue_t get_TK_KEY_F2(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F2);
}

jsvalue_t get_TK_KEY_F3(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F3);
}

jsvalue_t get_TK_KEY_F4(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F4);
}

jsvalue_t get_TK_KEY_F5(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F5);
}

jsvalue_t get_TK_KEY_F6(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F6);
}

jsvalue_t get_TK_KEY_F7(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F7);
}

jsvalue_t get_TK_KEY_F8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F8);
}

jsvalue_t get_TK_KEY_F9(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F9);
}

jsvalue_t get_TK_KEY_F10(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F10);
}

jsvalue_t get_TK_KEY_F11(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F11);
}

jsvalue_t get_TK_KEY_F12(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F12);
}

jsvalue_t get_TK_KEY_MENU(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_MENU);
}

jsvalue_t get_TK_KEY_COMMAND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_COMMAND);
}

jsvalue_t get_TK_KEY_BACK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_BACK);
}

jsvalue_t get_TK_KEY_CANCEL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_CANCEL);
}

ret_t key_code_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_RETURN", get_TK_KEY_RETURN);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_ESCAPE", get_TK_KEY_ESCAPE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_BACKSPACE", get_TK_KEY_BACKSPACE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_TAB", get_TK_KEY_TAB);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_SPACE", get_TK_KEY_SPACE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_EXCLAIM", get_TK_KEY_EXCLAIM);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_QUOTEDBL", get_TK_KEY_QUOTEDBL);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_HASH", get_TK_KEY_HASH);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_PERCENT", get_TK_KEY_PERCENT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_DOLLAR", get_TK_KEY_DOLLAR);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_AMPERSAND", get_TK_KEY_AMPERSAND);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_QUOTE", get_TK_KEY_QUOTE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_LEFTPAREN", get_TK_KEY_LEFTPAREN);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_RIGHTPAREN", get_TK_KEY_RIGHTPAREN);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_ASTERISK", get_TK_KEY_ASTERISK);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_PLUS", get_TK_KEY_PLUS);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_COMMA", get_TK_KEY_COMMA);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_MINUS", get_TK_KEY_MINUS);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_PERIOD", get_TK_KEY_PERIOD);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_SLASH", get_TK_KEY_SLASH);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_0", get_TK_KEY_0);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_1", get_TK_KEY_1);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_2", get_TK_KEY_2);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_3", get_TK_KEY_3);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_4", get_TK_KEY_4);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_5", get_TK_KEY_5);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_6", get_TK_KEY_6);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_7", get_TK_KEY_7);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_8", get_TK_KEY_8);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_9", get_TK_KEY_9);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_COLON", get_TK_KEY_COLON);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_SEMICOLON", get_TK_KEY_SEMICOLON);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_LESS", get_TK_KEY_LESS);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_EQUAL", get_TK_KEY_EQUAL);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_GREATER", get_TK_KEY_GREATER);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_QUESTION", get_TK_KEY_QUESTION);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_AT", get_TK_KEY_AT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_LEFTBRACKET", get_TK_KEY_LEFTBRACKET);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_BACKSLASH", get_TK_KEY_BACKSLASH);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_RIGHTBRACKET",
                                 get_TK_KEY_RIGHTBRACKET);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_CARET", get_TK_KEY_CARET);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_UNDERSCORE", get_TK_KEY_UNDERSCORE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_BACKQUOTE", get_TK_KEY_BACKQUOTE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_a", get_TK_KEY_a);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_b", get_TK_KEY_b);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_c", get_TK_KEY_c);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_d", get_TK_KEY_d);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_e", get_TK_KEY_e);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_f", get_TK_KEY_f);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_g", get_TK_KEY_g);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_h", get_TK_KEY_h);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_i", get_TK_KEY_i);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_j", get_TK_KEY_j);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_k", get_TK_KEY_k);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_l", get_TK_KEY_l);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_m", get_TK_KEY_m);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_n", get_TK_KEY_n);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_o", get_TK_KEY_o);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_p", get_TK_KEY_p);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_q", get_TK_KEY_q);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_r", get_TK_KEY_r);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_s", get_TK_KEY_s);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_t", get_TK_KEY_t);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_u", get_TK_KEY_u);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_v", get_TK_KEY_v);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_w", get_TK_KEY_w);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_x", get_TK_KEY_x);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_y", get_TK_KEY_y);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_z", get_TK_KEY_z);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_A", get_TK_KEY_A);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_B", get_TK_KEY_B);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_C", get_TK_KEY_C);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_D", get_TK_KEY_D);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_E", get_TK_KEY_E);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F", get_TK_KEY_F);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_G", get_TK_KEY_G);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_H", get_TK_KEY_H);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_I", get_TK_KEY_I);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_J", get_TK_KEY_J);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_K", get_TK_KEY_K);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_L", get_TK_KEY_L);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_M", get_TK_KEY_M);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_N", get_TK_KEY_N);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_O", get_TK_KEY_O);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_P", get_TK_KEY_P);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_Q", get_TK_KEY_Q);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_R", get_TK_KEY_R);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_S", get_TK_KEY_S);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_T", get_TK_KEY_T);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_U", get_TK_KEY_U);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_V", get_TK_KEY_V);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_W", get_TK_KEY_W);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_X", get_TK_KEY_X);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_Y", get_TK_KEY_Y);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_Z", get_TK_KEY_Z);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_DOT", get_TK_KEY_DOT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_DELETE", get_TK_KEY_DELETE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_LEFTBRACE", get_TK_KEY_LEFTBRACE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_RIGHTBRACE", get_TK_KEY_RIGHTBRACE);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_LSHIFT", get_TK_KEY_LSHIFT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_RSHIFT", get_TK_KEY_RSHIFT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_LCTRL", get_TK_KEY_LCTRL);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_RCTRL", get_TK_KEY_RCTRL);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_LALT", get_TK_KEY_LALT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_RALT", get_TK_KEY_RALT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_CAPSLOCK", get_TK_KEY_CAPSLOCK);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_HOME", get_TK_KEY_HOME);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_END", get_TK_KEY_END);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_INSERT", get_TK_KEY_INSERT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_UP", get_TK_KEY_UP);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_DOWN", get_TK_KEY_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_LEFT", get_TK_KEY_LEFT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_RIGHT", get_TK_KEY_RIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_PAGEUP", get_TK_KEY_PAGEUP);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_PAGEDOWN", get_TK_KEY_PAGEDOWN);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F1", get_TK_KEY_F1);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F2", get_TK_KEY_F2);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F3", get_TK_KEY_F3);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F4", get_TK_KEY_F4);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F5", get_TK_KEY_F5);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F6", get_TK_KEY_F6);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F7", get_TK_KEY_F7);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F8", get_TK_KEY_F8);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F9", get_TK_KEY_F9);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F10", get_TK_KEY_F10);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F11", get_TK_KEY_F11);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_F12", get_TK_KEY_F12);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_MENU", get_TK_KEY_MENU);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_COMMAND", get_TK_KEY_COMMAND);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_BACK", get_TK_KEY_BACK);
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_CANCEL", get_TK_KEY_CANCEL);

  return RET_OK;
}

jsvalue_t wrap_locale_info(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    locale_info_t* ret = NULL;
    ret = (locale_info_t*)locale_info();

    jret = jsvalue_create_pointer(ctx, ret, "locale_info_t*");
  }
  return jret;
}

jsvalue_t wrap_locale_info_tr(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    const char* ret = NULL;
    locale_info_t* locale_info =
        (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (const char*)locale_info_tr(locale_info, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_locale_info_change(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    locale_info_t* locale_info =
        (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
    char* language = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    char* country = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)locale_info_change(locale_info, language, country);
    TKMEM_FREE(language);
    TKMEM_FREE(country);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_locale_info_off(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    locale_info_t* locale_info =
        (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
    uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)locale_info_off(locale_info, id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t locale_info_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"locale_info", wrap_locale_info);
  jerryx_handler_register_global((const jerry_char_t*)"locale_info_tr", wrap_locale_info_tr);
  jerryx_handler_register_global((const jerry_char_t*)"locale_info_change",
                                 wrap_locale_info_change);
  jerryx_handler_register_global((const jerry_char_t*)"locale_info_off", wrap_locale_info_off);

  return RET_OK;
}

jsvalue_t get_STYLE_ID_BG_COLOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BG_COLOR);
}

jsvalue_t get_STYLE_ID_FG_COLOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FG_COLOR);
}

jsvalue_t get_STYLE_ID_MASK_COLOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MASK_COLOR);
}

jsvalue_t get_STYLE_ID_FONT_NAME(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FONT_NAME);
}

jsvalue_t get_STYLE_ID_FONT_SIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FONT_SIZE);
}

jsvalue_t get_STYLE_ID_FONT_STYLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FONT_STYLE);
}

jsvalue_t get_STYLE_ID_TEXT_COLOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_TIPS_TEXT_COLOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_TIPS_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_TEXT_ALIGN_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_ALIGN_H);
}

jsvalue_t get_STYLE_ID_TEXT_ALIGN_V(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_ALIGN_V);
}

jsvalue_t get_STYLE_ID_BORDER_COLOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BORDER_COLOR);
}

jsvalue_t get_STYLE_ID_BORDER_WIDTH(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BORDER_WIDTH);
}

jsvalue_t get_STYLE_ID_BORDER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BORDER);
}

jsvalue_t get_STYLE_ID_BG_IMAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BG_IMAGE);
}

jsvalue_t get_STYLE_ID_BG_IMAGE_DRAW_TYPE(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BG_IMAGE_DRAW_TYPE);
}

jsvalue_t get_STYLE_ID_ICON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ICON);
}

jsvalue_t get_STYLE_ID_FG_IMAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FG_IMAGE);
}

jsvalue_t get_STYLE_ID_FG_IMAGE_DRAW_TYPE(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FG_IMAGE_DRAW_TYPE);
}

jsvalue_t get_STYLE_ID_SPACER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SPACER);
}

jsvalue_t get_STYLE_ID_MARGIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN);
}

jsvalue_t get_STYLE_ID_MARGIN_LEFT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_LEFT);
}

jsvalue_t get_STYLE_ID_MARGIN_RIGHT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_RIGHT);
}

jsvalue_t get_STYLE_ID_MARGIN_TOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_TOP);
}

jsvalue_t get_STYLE_ID_MARGIN_BOTTOM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_BOTTOM);
}

jsvalue_t get_STYLE_ID_ICON_AT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ICON_AT);
}

jsvalue_t get_STYLE_ID_ACTIVE_ICON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ACTIVE_ICON);
}

jsvalue_t get_STYLE_ID_X_OFFSET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_X_OFFSET);
}

jsvalue_t get_STYLE_ID_Y_OFFSET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_Y_OFFSET);
}

jsvalue_t get_STYLE_ID_SELECTED_BG_COLOR(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_BG_COLOR);
}

jsvalue_t get_STYLE_ID_SELECTED_FG_COLOR(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_FG_COLOR);
}

jsvalue_t get_STYLE_ID_SELECTED_TEXT_COLOR(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_ROUND_RADIUS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ROUND_RADIUS);
}

jsvalue_t get_STYLE_ID_CHILDREN_LAYOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_CHILDREN_LAYOUT);
}

jsvalue_t get_STYLE_ID_SELF_LAYOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SELF_LAYOUT);
}

ret_t style_id_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BG_COLOR", get_STYLE_ID_BG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FG_COLOR", get_STYLE_ID_FG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_MASK_COLOR",
                                 get_STYLE_ID_MASK_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FONT_NAME", get_STYLE_ID_FONT_NAME);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FONT_SIZE", get_STYLE_ID_FONT_SIZE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FONT_STYLE",
                                 get_STYLE_ID_FONT_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_TEXT_COLOR",
                                 get_STYLE_ID_TEXT_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_TIPS_TEXT_COLOR",
                                 get_STYLE_ID_TIPS_TEXT_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_TEXT_ALIGN_H",
                                 get_STYLE_ID_TEXT_ALIGN_H);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_TEXT_ALIGN_V",
                                 get_STYLE_ID_TEXT_ALIGN_V);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BORDER_COLOR",
                                 get_STYLE_ID_BORDER_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BORDER_WIDTH",
                                 get_STYLE_ID_BORDER_WIDTH);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BORDER", get_STYLE_ID_BORDER);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BG_IMAGE", get_STYLE_ID_BG_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_BG_IMAGE_DRAW_TYPE",
                                 get_STYLE_ID_BG_IMAGE_DRAW_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ICON", get_STYLE_ID_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FG_IMAGE", get_STYLE_ID_FG_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FG_IMAGE_DRAW_TYPE",
                                 get_STYLE_ID_FG_IMAGE_DRAW_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SPACER", get_STYLE_ID_SPACER);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_MARGIN", get_STYLE_ID_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_MARGIN_LEFT",
                                 get_STYLE_ID_MARGIN_LEFT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_MARGIN_RIGHT",
                                 get_STYLE_ID_MARGIN_RIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_MARGIN_TOP",
                                 get_STYLE_ID_MARGIN_TOP);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_MARGIN_BOTTOM",
                                 get_STYLE_ID_MARGIN_BOTTOM);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ICON_AT", get_STYLE_ID_ICON_AT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ACTIVE_ICON",
                                 get_STYLE_ID_ACTIVE_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_X_OFFSET", get_STYLE_ID_X_OFFSET);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_Y_OFFSET", get_STYLE_ID_Y_OFFSET);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SELECTED_BG_COLOR",
                                 get_STYLE_ID_SELECTED_BG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SELECTED_FG_COLOR",
                                 get_STYLE_ID_SELECTED_FG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SELECTED_TEXT_COLOR",
                                 get_STYLE_ID_SELECTED_TEXT_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ROUND_RADIUS",
                                 get_STYLE_ID_ROUND_RADIUS);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_CHILDREN_LAYOUT",
                                 get_STYLE_ID_CHILDREN_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SELF_LAYOUT",
                                 get_STYLE_ID_SELF_LAYOUT);

  return RET_OK;
}

jsvalue_t wrap_style_notify_widget_state_changed(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
    ret = (ret_t)style_notify_widget_state_changed(s, widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_is_valid(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    ret = (bool_t)style_is_valid(s);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_get_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = (int32_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int32_t)style_get_int(s, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_get_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    const char* ret = NULL;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (const char*)style_get_str(s, name, defval);
    TKMEM_FREE(name);
    TKMEM_FREE(defval);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_set(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    const value_t* value = (const value_t*)jsvalue_get_pointer(ctx, argv[3], "const value_t*");
    ret = (ret_t)style_set(s, state, name, value);
    TKMEM_FREE(state);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_is_mutable(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    ret = (bool_t)style_is_mutable(s);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

ret_t style_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"style_notify_widget_state_changed",
                                 wrap_style_notify_widget_state_changed);
  jerryx_handler_register_global((const jerry_char_t*)"style_is_valid", wrap_style_is_valid);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_int", wrap_style_get_int);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_str", wrap_style_get_str);
  jerryx_handler_register_global((const jerry_char_t*)"style_set", wrap_style_set);
  jerryx_handler_register_global((const jerry_char_t*)"style_is_mutable", wrap_style_is_mutable);

  return RET_OK;
}

jsvalue_t wrap_theme(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    theme_t* ret = NULL;
    ret = (theme_t*)theme();

    jret = jsvalue_create_pointer(ctx, ret, "theme_t*");
  }
  return jret;
}

ret_t theme_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"theme", wrap_theme);

  return RET_OK;
}

jsvalue_t wrap_timer_remove(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (ret_t)timer_remove(timer_id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_timer_reset(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (ret_t)timer_reset(timer_id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_timer_modify(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)timer_modify(timer_id, duration);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t timer_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"timer_add", wrap_timer_add);
  jerryx_handler_register_global((const jerry_char_t*)"timer_remove", wrap_timer_remove);
  jerryx_handler_register_global((const jerry_char_t*)"timer_reset", wrap_timer_reset);
  jerryx_handler_register_global((const jerry_char_t*)"timer_modify", wrap_timer_modify);

  return RET_OK;
}

jsvalue_t get_ALIGN_V_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_V_NONE);
}

jsvalue_t get_ALIGN_V_MIDDLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_V_MIDDLE);
}

jsvalue_t get_ALIGN_V_TOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_V_TOP);
}

jsvalue_t get_ALIGN_V_BOTTOM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_V_BOTTOM);
}

ret_t align_v_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_NONE", get_ALIGN_V_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_MIDDLE", get_ALIGN_V_MIDDLE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_TOP", get_ALIGN_V_TOP);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_BOTTOM", get_ALIGN_V_BOTTOM);

  return RET_OK;
}

jsvalue_t get_ALIGN_H_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_H_NONE);
}

jsvalue_t get_ALIGN_H_CENTER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_H_CENTER);
}

jsvalue_t get_ALIGN_H_LEFT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_H_LEFT);
}

jsvalue_t get_ALIGN_H_RIGHT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_H_RIGHT);
}

ret_t align_h_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_NONE", get_ALIGN_H_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_CENTER", get_ALIGN_H_CENTER);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_LEFT", get_ALIGN_H_LEFT);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_RIGHT", get_ALIGN_H_RIGHT);

  return RET_OK;
}

jsvalue_t get_APP_MOBILE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, APP_MOBILE);
}

jsvalue_t get_APP_SIMULATOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, APP_SIMULATOR);
}

jsvalue_t get_APP_DESKTOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, APP_DESKTOP);
}

ret_t app_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"APP_MOBILE", get_APP_MOBILE);
  jerryx_handler_register_global((const jerry_char_t*)"APP_SIMULATOR", get_APP_SIMULATOR);
  jerryx_handler_register_global((const jerry_char_t*)"APP_DESKTOP", get_APP_DESKTOP);

  return RET_OK;
}

jsvalue_t get_BITMAP_FMT_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_NONE);
}

jsvalue_t get_BITMAP_FMT_RGBA8888(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_RGBA8888);
}

jsvalue_t get_BITMAP_FMT_ABGR8888(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_ABGR8888);
}

jsvalue_t get_BITMAP_FMT_BGRA8888(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_BGRA8888);
}

jsvalue_t get_BITMAP_FMT_ARGB8888(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_ARGB8888);
}

jsvalue_t get_BITMAP_FMT_RGB565(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_RGB565);
}

jsvalue_t get_BITMAP_FMT_BGR565(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_BGR565);
}

jsvalue_t get_BITMAP_FMT_RGB888(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_RGB888);
}

jsvalue_t get_BITMAP_FMT_BGR888(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_BGR888);
}

jsvalue_t get_BITMAP_FMT_GRAY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_GRAY);
}

jsvalue_t get_BITMAP_FMT_MONO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_MONO);
}

ret_t bitmap_format_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_NONE", get_BITMAP_FMT_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_RGBA8888",
                                 get_BITMAP_FMT_RGBA8888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_ABGR8888",
                                 get_BITMAP_FMT_ABGR8888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_BGRA8888",
                                 get_BITMAP_FMT_BGRA8888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_ARGB8888",
                                 get_BITMAP_FMT_ARGB8888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_RGB565", get_BITMAP_FMT_RGB565);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_BGR565", get_BITMAP_FMT_BGR565);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_RGB888", get_BITMAP_FMT_RGB888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_BGR888", get_BITMAP_FMT_BGR888);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_GRAY", get_BITMAP_FMT_GRAY);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_MONO", get_BITMAP_FMT_MONO);

  return RET_OK;
}

jsvalue_t get_BITMAP_FLAG_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_NONE);
}

jsvalue_t get_BITMAP_FLAG_OPAQUE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_OPAQUE);
}

jsvalue_t get_BITMAP_FLAG_IMMUTABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_IMMUTABLE);
}

jsvalue_t get_BITMAP_FLAG_TEXTURE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_TEXTURE);
}

jsvalue_t get_BITMAP_FLAG_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_CHANGED);
}

jsvalue_t get_BITMAP_FLAG_PREMULTI_ALPHA(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_PREMULTI_ALPHA);
}

ret_t bitmap_flag_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_NONE", get_BITMAP_FLAG_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_OPAQUE", get_BITMAP_FLAG_OPAQUE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_IMMUTABLE",
                                 get_BITMAP_FLAG_IMMUTABLE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_TEXTURE",
                                 get_BITMAP_FLAG_TEXTURE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_CHANGED",
                                 get_BITMAP_FLAG_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_PREMULTI_ALPHA",
                                 get_BITMAP_FLAG_PREMULTI_ALPHA);

  return RET_OK;
}

jsvalue_t wrap_vgcanvas_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    vgcanvas_t* ret = NULL;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (vgcanvas_t*)vgcanvas_cast(vg);

    jret = jsvalue_create_pointer(ctx, ret, "vgcanvas_t*");
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_flush(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_flush(vg);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_begin_path(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_begin_path(vg);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_move_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)vgcanvas_move_to(vg, x, y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_line_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)vgcanvas_line_to(vg, x, y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_quad_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t cpx = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t cpy = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_quad_to(vg, cpx, cpy, x, y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_bezier_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 7) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t cp1x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t cp1y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t cp2x = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t cp2y = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[5]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[6]);
    ret = (ret_t)vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_arc_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 6) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x1 = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y1 = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t x2 = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t y2 = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    float_t r = (float_t)jsvalue_get_number_value(ctx, argv[5]);
    ret = (ret_t)vgcanvas_arc_to(vg, x1, y1, x2, y2, r);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_arc(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 7) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t r = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t start_angle = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    float_t end_angle = (float_t)jsvalue_get_number_value(ctx, argv[5]);
    bool_t ccw = (bool_t)jsvalue_get_boolean_value(ctx, argv[6]);
    ret = (ret_t)vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_is_point_in_path(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = (bool_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (bool_t)vgcanvas_is_point_in_path(vg, x, y);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rect(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_rect(vg, x, y, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rounded_rect(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 6) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    float_t r = (float_t)jsvalue_get_number_value(ctx, argv[5]);
    ret = (ret_t)vgcanvas_rounded_rect(vg, x, y, w, h, r);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_ellipse(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t rx = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t ry = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_ellipse(vg, x, y, rx, ry);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_close_path(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_close_path(vg);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_path_winding(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bool_t dir = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_path_winding(vg, dir);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rotate(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t rad = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_rotate(vg, rad);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_scale(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)vgcanvas_scale(vg, x, y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_translate(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)vgcanvas_translate(vg, x, y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_transform(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 7) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t a = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t b = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t c = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t d = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    float_t e = (float_t)jsvalue_get_number_value(ctx, argv[5]);
    float_t f = (float_t)jsvalue_get_number_value(ctx, argv[6]);
    ret = (ret_t)vgcanvas_transform(vg, a, b, c, d, e, f);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_transform(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 7) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t a = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t b = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t c = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t d = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    float_t e = (float_t)jsvalue_get_number_value(ctx, argv[5]);
    float_t f = (float_t)jsvalue_get_number_value(ctx, argv[6]);
    ret = (ret_t)vgcanvas_set_transform(vg, a, b, c, d, e, f);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_clip_rect(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_clip_rect(vg, x, y, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_fill(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_fill(vg);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_stroke(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_stroke(vg);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_paint(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bool_t stroke = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
    ret = (ret_t)vgcanvas_paint(vg, stroke, img);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_font(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* font = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_font(vg, font);
    TKMEM_FREE(font);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_font_size(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t font = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_font_size(vg, font);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_text_align(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_text_align(vg, value);
    TKMEM_FREE(value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_text_baseline(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_text_baseline(vg, value);
    TKMEM_FREE(value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_fill_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t max_width = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_fill_text(vg, text, x, y, max_width);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_measure_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    float_t ret = (float_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (float_t)vgcanvas_measure_text(vg, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_draw_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 10) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
    float_t sx = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t sy = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t sw = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    float_t sh = (float_t)jsvalue_get_number_value(ctx, argv[5]);
    float_t dx = (float_t)jsvalue_get_number_value(ctx, argv[6]);
    float_t dy = (float_t)jsvalue_get_number_value(ctx, argv[7]);
    float_t dw = (float_t)jsvalue_get_number_value(ctx, argv[8]);
    float_t dh = (float_t)jsvalue_get_number_value(ctx, argv[9]);
    ret = (ret_t)vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_draw_icon(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 10) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
    float_t sx = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t sy = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t sw = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    float_t sh = (float_t)jsvalue_get_number_value(ctx, argv[5]);
    float_t dx = (float_t)jsvalue_get_number_value(ctx, argv[6]);
    float_t dy = (float_t)jsvalue_get_number_value(ctx, argv[7]);
    float_t dw = (float_t)jsvalue_get_number_value(ctx, argv[8]);
    float_t dh = (float_t)jsvalue_get_number_value(ctx, argv[9]);
    ret = (ret_t)vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_antialias(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_antialias(vg, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_global_alpha(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t alpha = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_global_alpha(vg, alpha);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_width(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_line_width(vg, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_fill_color_str(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_fill_color_str(vg, color);
    TKMEM_FREE(color);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_stroke_color_str(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_stroke_color_str(vg, color);
    TKMEM_FREE(color);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_cap(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_line_cap(vg, value);
    TKMEM_FREE(value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_join(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_line_join(vg, value);
    TKMEM_FREE(value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_miter_limit(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_miter_limit(vg, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_save(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_save(vg);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_restore(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_restore(vg);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_w(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_h(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_stride(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->stride);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_ratio(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->ratio);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_anti_alias(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_bool(ctx, obj->anti_alias);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_width(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->line_width);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_global_alpha(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->global_alpha);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_miter_limit(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->miter_limit);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_cap(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->line_cap);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_join(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->line_join);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_font(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->font);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_font_size(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->font_size);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_text_align(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->text_align);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_text_baseline(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->text_baseline);
  return jret;
}

ret_t vgcanvas_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_cast", wrap_vgcanvas_cast);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_flush", wrap_vgcanvas_flush);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_begin_path",
                                 wrap_vgcanvas_begin_path);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_move_to", wrap_vgcanvas_move_to);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_line_to", wrap_vgcanvas_line_to);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_quad_to", wrap_vgcanvas_quad_to);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_bezier_to",
                                 wrap_vgcanvas_bezier_to);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_arc_to", wrap_vgcanvas_arc_to);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_arc", wrap_vgcanvas_arc);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_is_point_in_path",
                                 wrap_vgcanvas_is_point_in_path);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_rect", wrap_vgcanvas_rect);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_rounded_rect",
                                 wrap_vgcanvas_rounded_rect);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_ellipse", wrap_vgcanvas_ellipse);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_close_path",
                                 wrap_vgcanvas_close_path);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_path_winding",
                                 wrap_vgcanvas_path_winding);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_rotate", wrap_vgcanvas_rotate);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_scale", wrap_vgcanvas_scale);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_translate",
                                 wrap_vgcanvas_translate);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_transform",
                                 wrap_vgcanvas_transform);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_transform",
                                 wrap_vgcanvas_set_transform);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_clip_rect",
                                 wrap_vgcanvas_clip_rect);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_fill", wrap_vgcanvas_fill);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_stroke", wrap_vgcanvas_stroke);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_paint", wrap_vgcanvas_paint);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_font", wrap_vgcanvas_set_font);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_font_size",
                                 wrap_vgcanvas_set_font_size);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_text_align",
                                 wrap_vgcanvas_set_text_align);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_text_baseline",
                                 wrap_vgcanvas_set_text_baseline);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_fill_text",
                                 wrap_vgcanvas_fill_text);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_measure_text",
                                 wrap_vgcanvas_measure_text);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_draw_image",
                                 wrap_vgcanvas_draw_image);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_draw_icon",
                                 wrap_vgcanvas_draw_icon);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_antialias",
                                 wrap_vgcanvas_set_antialias);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_global_alpha",
                                 wrap_vgcanvas_set_global_alpha);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_line_width",
                                 wrap_vgcanvas_set_line_width);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_fill_color_str",
                                 wrap_vgcanvas_set_fill_color_str);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_stroke_color_str",
                                 wrap_vgcanvas_set_stroke_color_str);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_line_cap",
                                 wrap_vgcanvas_set_line_cap);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_line_join",
                                 wrap_vgcanvas_set_line_join);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_set_miter_limit",
                                 wrap_vgcanvas_set_miter_limit);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_save", wrap_vgcanvas_save);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_restore", wrap_vgcanvas_restore);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_w",
                                 wrap_vgcanvas_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_h",
                                 wrap_vgcanvas_t_get_prop_h);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_stride",
                                 wrap_vgcanvas_t_get_prop_stride);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_ratio",
                                 wrap_vgcanvas_t_get_prop_ratio);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_anti_alias",
                                 wrap_vgcanvas_t_get_prop_anti_alias);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_line_width",
                                 wrap_vgcanvas_t_get_prop_line_width);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_global_alpha",
                                 wrap_vgcanvas_t_get_prop_global_alpha);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_miter_limit",
                                 wrap_vgcanvas_t_get_prop_miter_limit);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_line_cap",
                                 wrap_vgcanvas_t_get_prop_line_cap);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_line_join",
                                 wrap_vgcanvas_t_get_prop_line_join);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_font",
                                 wrap_vgcanvas_t_get_prop_font);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_font_size",
                                 wrap_vgcanvas_t_get_prop_font_size);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_text_align",
                                 wrap_vgcanvas_t_get_prop_text_align);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_t_get_prop_text_baseline",
                                 wrap_vgcanvas_t_get_prop_text_baseline);

  return RET_OK;
}

jsvalue_t get_WIDGET_PROP_EXEC(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_EXEC);
}

jsvalue_t get_WIDGET_PROP_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_X);
}

jsvalue_t get_WIDGET_PROP_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_Y);
}

jsvalue_t get_WIDGET_PROP_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_W);
}

jsvalue_t get_WIDGET_PROP_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_H);
}

jsvalue_t get_WIDGET_PROP_DIRTY_RECT_TOLERANCE(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DIRTY_RECT_TOLERANCE);
}

jsvalue_t get_WIDGET_PROP_CANVAS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CANVAS);
}

jsvalue_t get_WIDGET_PROP_LOCALIZE_OPTIONS(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LOCALIZE_OPTIONS);
}

jsvalue_t get_WIDGET_PROP_NATIVE_WINDOW(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_NATIVE_WINDOW);
}

jsvalue_t get_WIDGET_PROP_HIGHLIGHT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_HIGHLIGHT);
}

jsvalue_t get_WIDGET_PROP_BAR_SIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BAR_SIZE);
}

jsvalue_t get_WIDGET_PROP_OPACITY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPACITY);
}

jsvalue_t get_WIDGET_PROP_MIN_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MIN_W);
}

jsvalue_t get_WIDGET_PROP_MAX_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX_W);
}

jsvalue_t get_WIDGET_PROP_CHILDREN_LAYOUT(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CHILDREN_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_LAYOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_SELF_LAYOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELF_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_LAYOUT_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT_W);
}

jsvalue_t get_WIDGET_PROP_LAYOUT_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT_H);
}

jsvalue_t get_WIDGET_PROP_VIRTUAL_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VIRTUAL_W);
}

jsvalue_t get_WIDGET_PROP_VIRTUAL_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VIRTUAL_H);
}

jsvalue_t get_WIDGET_PROP_NAME(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_NAME);
}

jsvalue_t get_WIDGET_PROP_TYPE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TYPE);
}

jsvalue_t get_WIDGET_PROP_CLOSABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSABLE);
}

jsvalue_t get_WIDGET_PROP_CURSOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CURSOR);
}

jsvalue_t get_WIDGET_PROP_VALUE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VALUE);
}

jsvalue_t get_WIDGET_PROP_LENGTH(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LENGTH);
}

jsvalue_t get_WIDGET_PROP_TEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TEXT);
}

jsvalue_t get_WIDGET_PROP_TR_TEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TR_TEXT);
}

jsvalue_t get_WIDGET_PROP_STYLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STYLE);
}

jsvalue_t get_WIDGET_PROP_ENABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ENABLE);
}

jsvalue_t get_WIDGET_PROP_FEEDBACK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FEEDBACK);
}

jsvalue_t get_WIDGET_PROP_FLOATING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FLOATING);
}

jsvalue_t get_WIDGET_PROP_MARGIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MARGIN);
}

jsvalue_t get_WIDGET_PROP_SPACING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SPACING);
}

jsvalue_t get_WIDGET_PROP_LEFT_MARGIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LEFT_MARGIN);
}

jsvalue_t get_WIDGET_PROP_RIGHT_MARGIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_RIGHT_MARGIN);
}

jsvalue_t get_WIDGET_PROP_TOP_MARGIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TOP_MARGIN);
}

jsvalue_t get_WIDGET_PROP_BOTTOM_MARGIN(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BOTTOM_MARGIN);
}

jsvalue_t get_WIDGET_PROP_STEP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STEP);
}

jsvalue_t get_WIDGET_PROP_VISIBLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VISIBLE);
}

jsvalue_t get_WIDGET_PROP_SENSITIVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SENSITIVE);
}

jsvalue_t get_WIDGET_PROP_ANIMATION(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIMATION);
}

jsvalue_t get_WIDGET_PROP_ANIM_HINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_FULLSCREEN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FULLSCREEN);
}

jsvalue_t get_WIDGET_PROP_OPEN_ANIM_HINT(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_CLOSE_ANIM_HINT(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_MIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MIN);
}

jsvalue_t get_WIDGET_PROP_TIPS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TIPS);
}

jsvalue_t get_WIDGET_PROP_INPUT_TYPE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_INPUT_TYPE);
}

jsvalue_t get_WIDGET_PROP_READONLY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_READONLY);
}

jsvalue_t get_WIDGET_PROP_PASSWORD_VISIBLE(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_PASSWORD_VISIBLE);
}

jsvalue_t get_WIDGET_PROP_ACTIVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTIVE);
}

jsvalue_t get_WIDGET_PROP_VERTICAL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VERTICAL);
}

jsvalue_t get_WIDGET_PROP_SHOW_TEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SHOW_TEXT);
}

jsvalue_t get_WIDGET_PROP_XOFFSET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_XOFFSET);
}

jsvalue_t get_WIDGET_PROP_YOFFSET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_YOFFSET);
}

jsvalue_t get_WIDGET_PROP_ALIGN_V(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ALIGN_V);
}

jsvalue_t get_WIDGET_PROP_ALIGN_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ALIGN_H);
}

jsvalue_t get_WIDGET_PROP_AUTO_PLAY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_PLAY);
}

jsvalue_t get_WIDGET_PROP_LOOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LOOP);
}

jsvalue_t get_WIDGET_PROP_AUTO_FIX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_FIX);
}

jsvalue_t get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_IM_WHEN_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_X_MIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_X_MIN);
}

jsvalue_t get_WIDGET_PROP_X_MAX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_X_MAX);
}

jsvalue_t get_WIDGET_PROP_Y_MIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_Y_MIN);
}

jsvalue_t get_WIDGET_PROP_Y_MAX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_Y_MAX);
}

jsvalue_t get_WIDGET_PROP_MAX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX);
}

jsvalue_t get_WIDGET_PROP_GRAB_KEYS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_GRAB_KEYS);
}

jsvalue_t get_WIDGET_PROP_ROW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ROW);
}

jsvalue_t get_WIDGET_PROP_STATE_FOR_STYLE(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STATE_FOR_STYLE);
}

jsvalue_t get_WIDGET_PROP_THEME(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_THEME);
}

jsvalue_t get_WIDGET_PROP_STAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STAGE);
}

jsvalue_t get_WIDGET_PROP_IMAGE_MANAGER(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_IMAGE_MANAGER);
}

jsvalue_t get_WIDGET_PROP_ASSETS_MANAGER(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ASSETS_MANAGER);
}

jsvalue_t get_WIDGET_PROP_LOCALE_INFO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LOCALE_INFO);
}

jsvalue_t get_WIDGET_PROP_FONT_MANAGER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FONT_MANAGER);
}

jsvalue_t get_WIDGET_PROP_THEME_OBJ(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_THEME_OBJ);
}

jsvalue_t get_WIDGET_PROP_DEFAULT_THEME_OBJ(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_THEME_OBJ);
}

jsvalue_t get_WIDGET_PROP_ITEM_WIDTH(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ITEM_WIDTH);
}

jsvalue_t get_WIDGET_PROP_ITEM_HEIGHT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ITEM_HEIGHT);
}

jsvalue_t get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

jsvalue_t get_WIDGET_PROP_XSLIDABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_XSLIDABLE);
}

jsvalue_t get_WIDGET_PROP_YSLIDABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_YSLIDABLE);
}

jsvalue_t get_WIDGET_PROP_REPEAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_REPEAT);
}

jsvalue_t get_WIDGET_PROP_ENABLE_LONG_PRESS(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ENABLE_LONG_PRESS);
}

jsvalue_t get_WIDGET_PROP_ANIMATABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIMATABLE);
}

jsvalue_t get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

jsvalue_t get_WIDGET_PROP_IMAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_IMAGE);
}

jsvalue_t get_WIDGET_PROP_FORMAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FORMAT);
}

jsvalue_t get_WIDGET_PROP_DRAW_TYPE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DRAW_TYPE);
}

jsvalue_t get_WIDGET_PROP_SELECTABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTABLE);
}

jsvalue_t get_WIDGET_PROP_CLICKABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLICKABLE);
}

jsvalue_t get_WIDGET_PROP_SCALE_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SCALE_X);
}

jsvalue_t get_WIDGET_PROP_SCALE_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SCALE_Y);
}

jsvalue_t get_WIDGET_PROP_ANCHOR_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANCHOR_X);
}

jsvalue_t get_WIDGET_PROP_ANCHOR_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANCHOR_Y);
}

jsvalue_t get_WIDGET_PROP_ROTATION(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ROTATION);
}

jsvalue_t get_WIDGET_PROP_COMPACT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_COMPACT);
}

jsvalue_t get_WIDGET_PROP_SCROLLABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SCROLLABLE);
}

jsvalue_t get_WIDGET_PROP_ICON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ICON);
}

jsvalue_t get_WIDGET_PROP_OPTIONS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPTIONS);
}

jsvalue_t get_WIDGET_PROP_SELECTED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTED);
}

jsvalue_t get_WIDGET_PROP_CHECKED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CHECKED);
}

jsvalue_t get_WIDGET_PROP_ACTIVE_ICON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTIVE_ICON);
}

jsvalue_t get_WIDGET_PROP_LOAD_UI(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LOAD_UI);
}

jsvalue_t get_WIDGET_PROP_OPEN_WINDOW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_WINDOW);
}

jsvalue_t get_WIDGET_PROP_SELECTED_INDEX(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTED_INDEX);
}

jsvalue_t get_WIDGET_PROP_CLOSE_WHEN_CLICK(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK);
}

jsvalue_t get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

jsvalue_t get_WIDGET_PROP_LINE_GAP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LINE_GAP);
}

jsvalue_t get_WIDGET_PROP_BG_COLOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BG_COLOR);
}

jsvalue_t get_WIDGET_PROP_BORDER_COLOR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BORDER_COLOR);
}

jsvalue_t get_WIDGET_PROP_DELAY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DELAY);
}

jsvalue_t get_WIDGET_PROP_IS_KEYBOARD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_IS_KEYBOARD);
}

jsvalue_t get_WIDGET_PROP_FOCUSED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_FOCUS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUS);
}

jsvalue_t get_WIDGET_PROP_FOCUSABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUSABLE);
}

jsvalue_t get_WIDGET_PROP_WITH_FOCUS_STATE(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_WITH_FOCUS_STATE);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_UP_KEY(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_UP_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_DOWN_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_LEFT_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY);
}

ret_t widget_prop_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_EXEC", get_WIDGET_PROP_EXEC);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X", get_WIDGET_PROP_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y", get_WIDGET_PROP_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_W", get_WIDGET_PROP_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_H", get_WIDGET_PROP_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DIRTY_RECT_TOLERANCE",
                                 get_WIDGET_PROP_DIRTY_RECT_TOLERANCE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CANVAS", get_WIDGET_PROP_CANVAS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LOCALIZE_OPTIONS",
                                 get_WIDGET_PROP_LOCALIZE_OPTIONS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_NATIVE_WINDOW",
                                 get_WIDGET_PROP_NATIVE_WINDOW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_HIGHLIGHT",
                                 get_WIDGET_PROP_HIGHLIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_BAR_SIZE",
                                 get_WIDGET_PROP_BAR_SIZE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPACITY",
                                 get_WIDGET_PROP_OPACITY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MIN_W", get_WIDGET_PROP_MIN_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MAX_W", get_WIDGET_PROP_MAX_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CHILDREN_LAYOUT",
                                 get_WIDGET_PROP_CHILDREN_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LAYOUT", get_WIDGET_PROP_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELF_LAYOUT",
                                 get_WIDGET_PROP_SELF_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LAYOUT_W",
                                 get_WIDGET_PROP_LAYOUT_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LAYOUT_H",
                                 get_WIDGET_PROP_LAYOUT_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VIRTUAL_W",
                                 get_WIDGET_PROP_VIRTUAL_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VIRTUAL_H",
                                 get_WIDGET_PROP_VIRTUAL_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_NAME", get_WIDGET_PROP_NAME);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TYPE", get_WIDGET_PROP_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSABLE",
                                 get_WIDGET_PROP_CLOSABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CURSOR", get_WIDGET_PROP_CURSOR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VALUE", get_WIDGET_PROP_VALUE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LENGTH", get_WIDGET_PROP_LENGTH);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TEXT", get_WIDGET_PROP_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TR_TEXT",
                                 get_WIDGET_PROP_TR_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STYLE", get_WIDGET_PROP_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ENABLE", get_WIDGET_PROP_ENABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FEEDBACK",
                                 get_WIDGET_PROP_FEEDBACK);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FLOATING",
                                 get_WIDGET_PROP_FLOATING);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MARGIN", get_WIDGET_PROP_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SPACING",
                                 get_WIDGET_PROP_SPACING);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LEFT_MARGIN",
                                 get_WIDGET_PROP_LEFT_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_RIGHT_MARGIN",
                                 get_WIDGET_PROP_RIGHT_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TOP_MARGIN",
                                 get_WIDGET_PROP_TOP_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_BOTTOM_MARGIN",
                                 get_WIDGET_PROP_BOTTOM_MARGIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STEP", get_WIDGET_PROP_STEP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VISIBLE",
                                 get_WIDGET_PROP_VISIBLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SENSITIVE",
                                 get_WIDGET_PROP_SENSITIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIMATION",
                                 get_WIDGET_PROP_ANIMATION);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIM_HINT",
                                 get_WIDGET_PROP_ANIM_HINT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FULLSCREEN",
                                 get_WIDGET_PROP_FULLSCREEN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPEN_ANIM_HINT",
                                 get_WIDGET_PROP_OPEN_ANIM_HINT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_ANIM_HINT",
                                 get_WIDGET_PROP_CLOSE_ANIM_HINT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MIN", get_WIDGET_PROP_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TIPS", get_WIDGET_PROP_TIPS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_INPUT_TYPE",
                                 get_WIDGET_PROP_INPUT_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_READONLY",
                                 get_WIDGET_PROP_READONLY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_PASSWORD_VISIBLE",
                                 get_WIDGET_PROP_PASSWORD_VISIBLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ACTIVE", get_WIDGET_PROP_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VERTICAL",
                                 get_WIDGET_PROP_VERTICAL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SHOW_TEXT",
                                 get_WIDGET_PROP_SHOW_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_XOFFSET",
                                 get_WIDGET_PROP_XOFFSET);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_YOFFSET",
                                 get_WIDGET_PROP_YOFFSET);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ALIGN_V",
                                 get_WIDGET_PROP_ALIGN_V);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ALIGN_H",
                                 get_WIDGET_PROP_ALIGN_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_PLAY",
                                 get_WIDGET_PROP_AUTO_PLAY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LOOP", get_WIDGET_PROP_LOOP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_FIX",
                                 get_WIDGET_PROP_AUTO_FIX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED",
                                 get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPEN_IM_WHEN_FOCUSED",
                                 get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X_MIN", get_WIDGET_PROP_X_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X_MAX", get_WIDGET_PROP_X_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y_MIN", get_WIDGET_PROP_Y_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y_MAX", get_WIDGET_PROP_Y_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MAX", get_WIDGET_PROP_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_GRAB_KEYS",
                                 get_WIDGET_PROP_GRAB_KEYS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ROW", get_WIDGET_PROP_ROW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STATE_FOR_STYLE",
                                 get_WIDGET_PROP_STATE_FOR_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_THEME", get_WIDGET_PROP_THEME);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STAGE", get_WIDGET_PROP_STAGE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_IMAGE_MANAGER",
                                 get_WIDGET_PROP_IMAGE_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ASSETS_MANAGER",
                                 get_WIDGET_PROP_ASSETS_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LOCALE_INFO",
                                 get_WIDGET_PROP_LOCALE_INFO);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FONT_MANAGER",
                                 get_WIDGET_PROP_FONT_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_THEME_OBJ",
                                 get_WIDGET_PROP_THEME_OBJ);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DEFAULT_THEME_OBJ",
                                 get_WIDGET_PROP_DEFAULT_THEME_OBJ);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ITEM_WIDTH",
                                 get_WIDGET_PROP_ITEM_WIDTH);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ITEM_HEIGHT",
                                 get_WIDGET_PROP_ITEM_HEIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DEFAULT_ITEM_HEIGHT",
                                 get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_XSLIDABLE",
                                 get_WIDGET_PROP_XSLIDABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_YSLIDABLE",
                                 get_WIDGET_PROP_YSLIDABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_REPEAT", get_WIDGET_PROP_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ENABLE_LONG_PRESS",
                                 get_WIDGET_PROP_ENABLE_LONG_PRESS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIMATABLE",
                                 get_WIDGET_PROP_ANIMATABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_HIDE_SCROLL_BAR",
                                 get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_IMAGE", get_WIDGET_PROP_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FORMAT", get_WIDGET_PROP_FORMAT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DRAW_TYPE",
                                 get_WIDGET_PROP_DRAW_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELECTABLE",
                                 get_WIDGET_PROP_SELECTABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLICKABLE",
                                 get_WIDGET_PROP_CLICKABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SCALE_X",
                                 get_WIDGET_PROP_SCALE_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SCALE_Y",
                                 get_WIDGET_PROP_SCALE_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANCHOR_X",
                                 get_WIDGET_PROP_ANCHOR_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANCHOR_Y",
                                 get_WIDGET_PROP_ANCHOR_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ROTATION",
                                 get_WIDGET_PROP_ROTATION);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_COMPACT",
                                 get_WIDGET_PROP_COMPACT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SCROLLABLE",
                                 get_WIDGET_PROP_SCROLLABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ICON", get_WIDGET_PROP_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPTIONS",
                                 get_WIDGET_PROP_OPTIONS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELECTED",
                                 get_WIDGET_PROP_SELECTED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CHECKED",
                                 get_WIDGET_PROP_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ACTIVE_ICON",
                                 get_WIDGET_PROP_ACTIVE_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LOAD_UI",
                                 get_WIDGET_PROP_LOAD_UI);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPEN_WINDOW",
                                 get_WIDGET_PROP_OPEN_WINDOW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELECTED_INDEX",
                                 get_WIDGET_PROP_SELECTED_INDEX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_WHEN_CLICK",
                                 get_WIDGET_PROP_CLOSE_WHEN_CLICK);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE",
                                 get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LINE_GAP",
                                 get_WIDGET_PROP_LINE_GAP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_BG_COLOR",
                                 get_WIDGET_PROP_BG_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_BORDER_COLOR",
                                 get_WIDGET_PROP_BORDER_COLOR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DELAY", get_WIDGET_PROP_DELAY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_IS_KEYBOARD",
                                 get_WIDGET_PROP_IS_KEYBOARD);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FOCUSED",
                                 get_WIDGET_PROP_FOCUSED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FOCUS", get_WIDGET_PROP_FOCUS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_FOCUSABLE",
                                 get_WIDGET_PROP_FOCUSABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_WITH_FOCUS_STATE",
                                 get_WIDGET_PROP_WITH_FOCUS_STATE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MOVE_FOCUS_PREV_KEY",
                                 get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MOVE_FOCUS_NEXT_KEY",
                                 get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MOVE_FOCUS_UP_KEY",
                                 get_WIDGET_PROP_MOVE_FOCUS_UP_KEY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MOVE_FOCUS_DOWN_KEY",
                                 get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MOVE_FOCUS_LEFT_KEY",
                                 get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY",
                                 get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY);

  return RET_OK;
}

jsvalue_t get_WIDGET_TYPE_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_NONE);
}

jsvalue_t get_WIDGET_TYPE_WINDOW_MANAGER(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_WINDOW_MANAGER);
}

jsvalue_t get_WIDGET_TYPE_NORMAL_WINDOW(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_NORMAL_WINDOW);
}

jsvalue_t get_WIDGET_TYPE_OVERLAY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_OVERLAY);
}

jsvalue_t get_WIDGET_TYPE_TOOL_BAR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_TOOL_BAR);
}

jsvalue_t get_WIDGET_TYPE_DIALOG(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG);
}

jsvalue_t get_WIDGET_TYPE_POPUP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_POPUP);
}

jsvalue_t get_WIDGET_TYPE_SYSTEM_BAR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR);
}

jsvalue_t get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR_BOTTOM);
}

jsvalue_t get_WIDGET_TYPE_SPRITE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SPRITE);
}

jsvalue_t get_WIDGET_TYPE_KEYBOARD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_KEYBOARD);
}

jsvalue_t get_WIDGET_TYPE_DND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DND);
}

jsvalue_t get_WIDGET_TYPE_LABEL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_LABEL);
}

jsvalue_t get_WIDGET_TYPE_BUTTON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_IMAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_IMAGE);
}

jsvalue_t get_WIDGET_TYPE_EDIT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_EDIT);
}

jsvalue_t get_WIDGET_TYPE_PROGRESS_BAR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_PROGRESS_BAR);
}

jsvalue_t get_WIDGET_TYPE_GROUP_BOX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_GROUP_BOX);
}

jsvalue_t get_WIDGET_TYPE_CHECK_BUTTON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_CHECK_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_RADIO_BUTTON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_RADIO_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_DIALOG_TITLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG_TITLE);
}

jsvalue_t get_WIDGET_TYPE_DIALOG_CLIENT(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG_CLIENT);
}

jsvalue_t get_WIDGET_TYPE_SLIDER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDER);
}

jsvalue_t get_WIDGET_TYPE_VIEW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_VIEW);
}

jsvalue_t get_WIDGET_TYPE_COMBO_BOX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COMBO_BOX);
}

jsvalue_t get_WIDGET_TYPE_COMBO_BOX_ITEM(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COMBO_BOX_ITEM);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_VIEW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_VIEW);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_INDICATOR(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_INDICATOR_ARC(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR_ARC);
}

jsvalue_t get_WIDGET_TYPE_PAGES(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_PAGES);
}

jsvalue_t get_WIDGET_TYPE_TAB_BUTTON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_TAB_CONTROL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_CONTROL);
}

jsvalue_t get_WIDGET_TYPE_TAB_BUTTON_GROUP(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_BUTTON_GROUP);
}

jsvalue_t get_WIDGET_TYPE_BUTTON_GROUP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_BUTTON_GROUP);
}

jsvalue_t get_WIDGET_TYPE_CANDIDATES(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_CANDIDATES);
}

jsvalue_t get_WIDGET_TYPE_SPIN_BOX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SPIN_BOX);
}

jsvalue_t get_WIDGET_TYPE_DRAGGER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DRAGGER);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR_DESKTOP(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR_MOBILE(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_VIEW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_VIEW);
}

jsvalue_t get_WIDGET_TYPE_LIST_VIEW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_VIEW);
}

jsvalue_t get_WIDGET_TYPE_LIST_VIEW_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_VIEW_H);
}

jsvalue_t get_WIDGET_TYPE_LIST_ITEM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_ITEM);
}

jsvalue_t get_WIDGET_TYPE_COLOR_PICKER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_PICKER);
}

jsvalue_t get_WIDGET_TYPE_COLOR_COMPONENT(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_COMPONENT);
}

jsvalue_t get_WIDGET_TYPE_COLOR_TILE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_TILE);
}

jsvalue_t get_WIDGET_TYPE_CLIP_VIEW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_CLIP_VIEW);
}

jsvalue_t get_WIDGET_TYPE_RICH_TEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_RICH_TEXT);
}

jsvalue_t get_WIDGET_TYPE_APP_BAR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_APP_BAR);
}

jsvalue_t get_WIDGET_TYPE_GRID(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_GRID);
}

jsvalue_t get_WIDGET_TYPE_GRID_ITEM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_GRID_ITEM);
}

jsvalue_t get_WIDGET_TYPE_ROW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_ROW);
}

jsvalue_t get_WIDGET_TYPE_COLUMN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLUMN);
}

jsvalue_t get_WIDGET_TYPE_CALIBRATION_WIN(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_CALIBRATION_WIN);
}

ret_t widget_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_NONE", get_WIDGET_TYPE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_WINDOW_MANAGER",
                                 get_WIDGET_TYPE_WINDOW_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_NORMAL_WINDOW",
                                 get_WIDGET_TYPE_NORMAL_WINDOW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_OVERLAY",
                                 get_WIDGET_TYPE_OVERLAY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TOOL_BAR",
                                 get_WIDGET_TYPE_TOOL_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DIALOG", get_WIDGET_TYPE_DIALOG);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_POPUP", get_WIDGET_TYPE_POPUP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SYSTEM_BAR",
                                 get_WIDGET_TYPE_SYSTEM_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SYSTEM_BAR_BOTTOM",
                                 get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SPRITE", get_WIDGET_TYPE_SPRITE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_KEYBOARD",
                                 get_WIDGET_TYPE_KEYBOARD);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DND", get_WIDGET_TYPE_DND);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_LABEL", get_WIDGET_TYPE_LABEL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_BUTTON", get_WIDGET_TYPE_BUTTON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_IMAGE", get_WIDGET_TYPE_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_EDIT", get_WIDGET_TYPE_EDIT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_PROGRESS_BAR",
                                 get_WIDGET_TYPE_PROGRESS_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_GROUP_BOX",
                                 get_WIDGET_TYPE_GROUP_BOX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_CHECK_BUTTON",
                                 get_WIDGET_TYPE_CHECK_BUTTON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_RADIO_BUTTON",
                                 get_WIDGET_TYPE_RADIO_BUTTON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DIALOG_TITLE",
                                 get_WIDGET_TYPE_DIALOG_TITLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DIALOG_CLIENT",
                                 get_WIDGET_TYPE_DIALOG_CLIENT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SLIDER", get_WIDGET_TYPE_SLIDER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_VIEW", get_WIDGET_TYPE_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COMBO_BOX",
                                 get_WIDGET_TYPE_COMBO_BOX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COMBO_BOX_ITEM",
                                 get_WIDGET_TYPE_COMBO_BOX_ITEM);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SLIDE_VIEW",
                                 get_WIDGET_TYPE_SLIDE_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SLIDE_INDICATOR",
                                 get_WIDGET_TYPE_SLIDE_INDICATOR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SLIDE_INDICATOR_ARC",
                                 get_WIDGET_TYPE_SLIDE_INDICATOR_ARC);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_PAGES", get_WIDGET_TYPE_PAGES);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TAB_BUTTON",
                                 get_WIDGET_TYPE_TAB_BUTTON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TAB_CONTROL",
                                 get_WIDGET_TYPE_TAB_CONTROL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TAB_BUTTON_GROUP",
                                 get_WIDGET_TYPE_TAB_BUTTON_GROUP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_BUTTON_GROUP",
                                 get_WIDGET_TYPE_BUTTON_GROUP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_CANDIDATES",
                                 get_WIDGET_TYPE_CANDIDATES);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SPIN_BOX",
                                 get_WIDGET_TYPE_SPIN_BOX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DRAGGER",
                                 get_WIDGET_TYPE_DRAGGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SCROLL_BAR",
                                 get_WIDGET_TYPE_SCROLL_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SCROLL_BAR_DESKTOP",
                                 get_WIDGET_TYPE_SCROLL_BAR_DESKTOP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SCROLL_BAR_MOBILE",
                                 get_WIDGET_TYPE_SCROLL_BAR_MOBILE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_SCROLL_VIEW",
                                 get_WIDGET_TYPE_SCROLL_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_LIST_VIEW",
                                 get_WIDGET_TYPE_LIST_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_LIST_VIEW_H",
                                 get_WIDGET_TYPE_LIST_VIEW_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_LIST_ITEM",
                                 get_WIDGET_TYPE_LIST_ITEM);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COLOR_PICKER",
                                 get_WIDGET_TYPE_COLOR_PICKER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COLOR_COMPONENT",
                                 get_WIDGET_TYPE_COLOR_COMPONENT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COLOR_TILE",
                                 get_WIDGET_TYPE_COLOR_TILE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_CLIP_VIEW",
                                 get_WIDGET_TYPE_CLIP_VIEW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_RICH_TEXT",
                                 get_WIDGET_TYPE_RICH_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_APP_BAR",
                                 get_WIDGET_TYPE_APP_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_GRID", get_WIDGET_TYPE_GRID);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_GRID_ITEM",
                                 get_WIDGET_TYPE_GRID_ITEM);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_ROW", get_WIDGET_TYPE_ROW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_COLUMN", get_WIDGET_TYPE_COLUMN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_CALIBRATION_WIN",
                                 get_WIDGET_TYPE_CALIBRATION_WIN);

  return RET_OK;
}

jsvalue_t get_WINDOW_STAGE_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_NONE);
}

jsvalue_t get_WINDOW_STAGE_CREATED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_CREATED);
}

jsvalue_t get_WINDOW_STAGE_OPENED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_OPENED);
}

jsvalue_t get_WINDOW_STAGE_CLOSED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_CLOSED);
}

jsvalue_t get_WINDOW_STAGE_SUSPEND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_SUSPEND);
}

ret_t window_stage_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_NONE", get_WINDOW_STAGE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_CREATED",
                                 get_WINDOW_STAGE_CREATED);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_OPENED",
                                 get_WINDOW_STAGE_OPENED);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_CLOSED",
                                 get_WINDOW_STAGE_CLOSED);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_SUSPEND",
                                 get_WINDOW_STAGE_SUSPEND);

  return RET_OK;
}

jsvalue_t get_WINDOW_CLOSABLE_YES(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_YES);
}

jsvalue_t get_WINDOW_CLOSABLE_NO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_NO);
}

jsvalue_t get_WINDOW_CLOSABLE_CONFIRM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_CONFIRM);
}

ret_t window_closable_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_CLOSABLE_YES",
                                 get_WINDOW_CLOSABLE_YES);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_CLOSABLE_NO", get_WINDOW_CLOSABLE_NO);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_CLOSABLE_CONFIRM",
                                 get_WINDOW_CLOSABLE_CONFIRM);

  return RET_OK;
}

jsvalue_t get_WIDGET_STATE_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_NONE);
}

jsvalue_t get_WIDGET_STATE_NORMAL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL);
}

jsvalue_t get_WIDGET_STATE_PRESSED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED);
}

jsvalue_t get_WIDGET_STATE_OVER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER);
}

jsvalue_t get_WIDGET_STATE_DISABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_DISABLE);
}

jsvalue_t get_WIDGET_STATE_FOCUSED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED);
}

jsvalue_t get_WIDGET_STATE_CHECKED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_CHECKED);
}

jsvalue_t get_WIDGET_STATE_UNCHECKED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_UNCHECKED);
}

jsvalue_t get_WIDGET_STATE_EMPTY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_EMPTY);
}

jsvalue_t get_WIDGET_STATE_EMPTY_FOCUS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_EMPTY_FOCUS);
}

jsvalue_t get_WIDGET_STATE_ERROR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_ERROR);
}

jsvalue_t get_WIDGET_STATE_SELECTED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_SELECTED);
}

jsvalue_t get_WIDGET_STATE_NORMAL_OF_CHECKED(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_PRESSED_OF_CHECKED(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_OVER_OF_CHECKED(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_FOCUSED_OF_CHECKED(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_NORMAL_OF_ACTIVE(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_PRESSED_OF_ACTIVE(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_OVER_OF_ACTIVE(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_FOCUSED_OF_ACTIVE(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED_OF_ACTIVE);
}

ret_t widget_state_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NONE", get_WIDGET_STATE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NORMAL",
                                 get_WIDGET_STATE_NORMAL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_PRESSED",
                                 get_WIDGET_STATE_PRESSED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_OVER", get_WIDGET_STATE_OVER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_DISABLE",
                                 get_WIDGET_STATE_DISABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_FOCUSED",
                                 get_WIDGET_STATE_FOCUSED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_CHECKED",
                                 get_WIDGET_STATE_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_UNCHECKED",
                                 get_WIDGET_STATE_UNCHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_EMPTY", get_WIDGET_STATE_EMPTY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_EMPTY_FOCUS",
                                 get_WIDGET_STATE_EMPTY_FOCUS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_ERROR", get_WIDGET_STATE_ERROR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_SELECTED",
                                 get_WIDGET_STATE_SELECTED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NORMAL_OF_CHECKED",
                                 get_WIDGET_STATE_NORMAL_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_PRESSED_OF_CHECKED",
                                 get_WIDGET_STATE_PRESSED_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_OVER_OF_CHECKED",
                                 get_WIDGET_STATE_OVER_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_FOCUSED_OF_CHECKED",
                                 get_WIDGET_STATE_FOCUSED_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NORMAL_OF_ACTIVE",
                                 get_WIDGET_STATE_NORMAL_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_PRESSED_OF_ACTIVE",
                                 get_WIDGET_STATE_PRESSED_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_OVER_OF_ACTIVE",
                                 get_WIDGET_STATE_OVER_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_FOCUSED_OF_ACTIVE",
                                 get_WIDGET_STATE_FOCUSED_OF_ACTIVE);

  return RET_OK;
}

jsvalue_t wrap_widget_count_children(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)widget_count_children(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_child(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t index = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (widget_t*)widget_get_child(widget, index);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_index_of(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)widget_index_of(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_close_window(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_close_window(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_move(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_move(widget, x, y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_resize(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_resize(widget, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_move_resize(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (ret_t)widget_move_resize(widget, x, y, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_animate_value_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_animate_value_to(widget, value, duration);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_add_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_add_value(widget, delta);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_use_style(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* style = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_use_style(widget, style);
    TKMEM_FREE(style);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_text_utf8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_text_utf8(widget, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_tr_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_tr_text(widget, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)widget_get_value(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const wchar_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const wchar_t*)widget_get_text(widget);

    jret = jsvalue_create_string_from_wstring(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_name(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_name(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_theme(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_theme(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_pointer_cursor(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* cursor = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_pointer_cursor(widget, cursor);
    TKMEM_FREE(cursor);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_animation(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* animation = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_animation(widget, animation);
    TKMEM_FREE(animation);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_create_animator(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* animation = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_create_animator(widget, animation);
    TKMEM_FREE(animation);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_start_animator(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_start_animator(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_animator_time_scale(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    float_t time_scale = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_pause_animator(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_pause_animator(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_stop_animator(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_stop_animator(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_destroy_animator(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_destroy_animator(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_enable(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t enable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_enable(widget, enable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_feedback(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t feedback = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_feedback(widget, feedback);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_floating(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t floating = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_floating(widget, floating);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_focused(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_focused(widget, focused);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_focusable(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t focusable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_focusable(widget, focusable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_state(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_state(widget, state);
    TKMEM_FREE(state);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_opacity(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint8_t opacity = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_set_opacity(widget, opacity);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_dirty_rect_tolerance(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t dirty_rect_tolerance = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_set_dirty_rect_tolerance(widget, dirty_rect_tolerance);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_destroy_children(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_destroy_children(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_add_child(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
    ret = (ret_t)widget_add_child(widget, child);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_remove_child(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
    ret = (ret_t)widget_remove_child(widget, child);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_insert_child(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[2], "widget_t*");
    ret = (ret_t)widget_insert_child(widget, index, child);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_restack(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_restack(widget, index);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_child(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (widget_t*)widget_child(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_lookup(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (widget_t*)widget_lookup(widget, name, recursive);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_lookup_by_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* type = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
    TKMEM_FREE(type);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_set_visible(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)widget_set_visible(widget, visible, recursive);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_visible_only(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_visible_only(widget, visible);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_sensitive(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t sensitive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_sensitive(widget, sensitive);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_off(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t id = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_off(widget, id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_invalidate_force(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    rect_t* r = (rect_t*)jsvalue_get_pointer(ctx, argv[1], "rect_t*");
    ret = (ret_t)widget_invalidate_force(widget, r);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* v = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)widget_set_prop_str(widget, name, v);
    TKMEM_FREE(name);
    TKMEM_FREE(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (const char*)widget_get_prop_str(widget, name, defval);
    TKMEM_FREE(name);
    TKMEM_FREE(defval);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t v = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_set_prop_int(widget, name, v);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int32_t)widget_get_prop_int(widget, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_bool(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t v = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)widget_set_prop_bool(widget, name, v);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_bool(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (bool_t)widget_get_prop_bool(widget, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window_opened(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_window_opened(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_window(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_designing_window(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_designing_window(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window_manager(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_window_manager(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_window(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)widget_get_window(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_get_window_manager(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)widget_get_window_manager(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_get_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const char*)widget_get_type(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_clone(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
    ret = (widget_t*)widget_clone(widget, parent);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_equal(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    widget_t* other = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
    ret = (bool_t)widget_equal(widget, other);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)widget_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_destroy(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_destroy(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_unref(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_unref(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_system_bar(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_system_bar(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_normal_window(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_normal_window(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_dialog(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_dialog(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_popup(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_popup(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_opened_popup(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_opened_popup(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_layout(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_layout(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_self_layout(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* params = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_self_layout(widget, params);
    TKMEM_FREE(params);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_children_layout(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* params = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_children_layout(widget, params);
    TKMEM_FREE(params);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_self_layout_params(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    const char* w = (const char*)jsvalue_get_utf8_string(ctx, argv[3]);
    const char* h = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
    ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
    TKMEM_FREE(x);
    TKMEM_FREE(y);
    TKMEM_FREE(w);
    TKMEM_FREE(h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_set_style_int(widget, state_and_name, value);
    TKMEM_FREE(state_and_name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)widget_set_style_str(widget, state_and_name, value);
    TKMEM_FREE(state_and_name);
    TKMEM_FREE(value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_color(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_set_style_color(widget, state_and_name, value);
    TKMEM_FREE(state_and_name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_x(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_w(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_h(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_name(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_tr_text(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->tr_text);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_style(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->style);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_animation(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->animation);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_enable(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->enable);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_feedback(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->feedback);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_visible(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->visible = visible;

  jret = jsvalue_create_bool(ctx, obj->visible);
  return jret;
};

jsvalue_t wrap_widget_t_get_prop_visible(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->visible);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_sensitive(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sensitive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->sensitive = sensitive;

  jret = jsvalue_create_bool(ctx, obj->sensitive);
  return jret;
};

jsvalue_t wrap_widget_t_get_prop_sensitive(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->sensitive);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_focusable(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focusable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->focusable = focusable;

  jret = jsvalue_create_bool(ctx, obj->focusable);
  return jret;
};

jsvalue_t wrap_widget_t_get_prop_focusable(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->focusable);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_with_focus_state(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t with_focus_state = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->with_focus_state = with_focus_state;

  jret = jsvalue_create_bool(ctx, obj->with_focus_state);
  return jret;
};

jsvalue_t wrap_widget_t_get_prop_with_focus_state(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->with_focus_state);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_floating(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->floating);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_dirty_rect_tolerance(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->dirty_rect_tolerance);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_parent(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_pointer(ctx, obj->parent, "widget_t*");
  return jret;
}

ret_t widget_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"widget_count_children",
                                 wrap_widget_count_children);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_child", wrap_widget_get_child);
  jerryx_handler_register_global((const jerry_char_t*)"widget_index_of", wrap_widget_index_of);
  jerryx_handler_register_global((const jerry_char_t*)"widget_close_window",
                                 wrap_widget_close_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_move", wrap_widget_move);
  jerryx_handler_register_global((const jerry_char_t*)"widget_resize", wrap_widget_resize);
  jerryx_handler_register_global((const jerry_char_t*)"widget_move_resize",
                                 wrap_widget_move_resize);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_value", wrap_widget_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_animate_value_to",
                                 wrap_widget_animate_value_to);
  jerryx_handler_register_global((const jerry_char_t*)"widget_add_value", wrap_widget_add_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_use_style", wrap_widget_use_style);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_text_utf8",
                                 wrap_widget_set_text_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_tr_text",
                                 wrap_widget_set_tr_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_value", wrap_widget_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_text", wrap_widget_get_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_name", wrap_widget_set_name);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_theme", wrap_widget_set_theme);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_pointer_cursor",
                                 wrap_widget_set_pointer_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_animation",
                                 wrap_widget_set_animation);
  jerryx_handler_register_global((const jerry_char_t*)"widget_create_animator",
                                 wrap_widget_create_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_start_animator",
                                 wrap_widget_start_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_animator_time_scale",
                                 wrap_widget_set_animator_time_scale);
  jerryx_handler_register_global((const jerry_char_t*)"widget_pause_animator",
                                 wrap_widget_pause_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_stop_animator",
                                 wrap_widget_stop_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_destroy_animator",
                                 wrap_widget_destroy_animator);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_enable", wrap_widget_set_enable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_feedback",
                                 wrap_widget_set_feedback);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_floating",
                                 wrap_widget_set_floating);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_focused",
                                 wrap_widget_set_focused);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_focusable",
                                 wrap_widget_set_focusable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_state", wrap_widget_set_state);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_opacity",
                                 wrap_widget_set_opacity);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_dirty_rect_tolerance",
                                 wrap_widget_set_dirty_rect_tolerance);
  jerryx_handler_register_global((const jerry_char_t*)"widget_destroy_children",
                                 wrap_widget_destroy_children);
  jerryx_handler_register_global((const jerry_char_t*)"widget_add_child", wrap_widget_add_child);
  jerryx_handler_register_global((const jerry_char_t*)"widget_remove_child",
                                 wrap_widget_remove_child);
  jerryx_handler_register_global((const jerry_char_t*)"widget_insert_child",
                                 wrap_widget_insert_child);
  jerryx_handler_register_global((const jerry_char_t*)"widget_restack", wrap_widget_restack);
  jerryx_handler_register_global((const jerry_char_t*)"widget_child", wrap_widget_child);
  jerryx_handler_register_global((const jerry_char_t*)"widget_lookup", wrap_widget_lookup);
  jerryx_handler_register_global((const jerry_char_t*)"widget_lookup_by_type",
                                 wrap_widget_lookup_by_type);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_visible",
                                 wrap_widget_set_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_visible_only",
                                 wrap_widget_set_visible_only);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_sensitive",
                                 wrap_widget_set_sensitive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_on", wrap_widget_on);
  jerryx_handler_register_global((const jerry_char_t*)"widget_off", wrap_widget_off);
  jerryx_handler_register_global((const jerry_char_t*)"widget_invalidate_force",
                                 wrap_widget_invalidate_force);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_str",
                                 wrap_widget_set_prop_str);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_prop_str",
                                 wrap_widget_get_prop_str);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_int",
                                 wrap_widget_set_prop_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_prop_int",
                                 wrap_widget_get_prop_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_bool",
                                 wrap_widget_set_prop_bool);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_prop_bool",
                                 wrap_widget_get_prop_bool);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_window_opened",
                                 wrap_widget_is_window_opened);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_window", wrap_widget_is_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_designing_window",
                                 wrap_widget_is_designing_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_window_manager",
                                 wrap_widget_is_window_manager);
  jerryx_handler_register_global((const jerry_char_t*)"widget_foreach", wrap_widget_foreach);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_window", wrap_widget_get_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_window_manager",
                                 wrap_widget_get_window_manager);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_type", wrap_widget_get_type);
  jerryx_handler_register_global((const jerry_char_t*)"widget_clone", wrap_widget_clone);
  jerryx_handler_register_global((const jerry_char_t*)"widget_equal", wrap_widget_equal);
  jerryx_handler_register_global((const jerry_char_t*)"widget_cast", wrap_widget_cast);
  jerryx_handler_register_global((const jerry_char_t*)"widget_destroy", wrap_widget_destroy);
  jerryx_handler_register_global((const jerry_char_t*)"widget_unref", wrap_widget_unref);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_system_bar",
                                 wrap_widget_is_system_bar);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_normal_window",
                                 wrap_widget_is_normal_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_dialog", wrap_widget_is_dialog);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_popup", wrap_widget_is_popup);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_opened_popup",
                                 wrap_widget_is_opened_popup);
  jerryx_handler_register_global((const jerry_char_t*)"widget_layout", wrap_widget_layout);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_self_layout",
                                 wrap_widget_set_self_layout);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_children_layout",
                                 wrap_widget_set_children_layout);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_self_layout_params",
                                 wrap_widget_set_self_layout_params);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_style_int",
                                 wrap_widget_set_style_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_style_str",
                                 wrap_widget_set_style_str);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_style_color",
                                 wrap_widget_set_style_color);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_x",
                                 wrap_widget_t_get_prop_x);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_y",
                                 wrap_widget_t_get_prop_y);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_w",
                                 wrap_widget_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_h",
                                 wrap_widget_t_get_prop_h);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_name",
                                 wrap_widget_t_get_prop_name);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_tr_text",
                                 wrap_widget_t_get_prop_tr_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_style",
                                 wrap_widget_t_get_prop_style);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_animation",
                                 wrap_widget_t_get_prop_animation);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_enable",
                                 wrap_widget_t_get_prop_enable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_feedback",
                                 wrap_widget_t_get_prop_feedback);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_set_prop_visible",
                                 wrap_widget_t_set_prop_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_visible",
                                 wrap_widget_t_get_prop_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_set_prop_sensitive",
                                 wrap_widget_t_set_prop_sensitive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_sensitive",
                                 wrap_widget_t_get_prop_sensitive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_set_prop_focusable",
                                 wrap_widget_t_set_prop_focusable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_focusable",
                                 wrap_widget_t_get_prop_focusable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_set_prop_with_focus_state",
                                 wrap_widget_t_set_prop_with_focus_state);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_with_focus_state",
                                 wrap_widget_t_get_prop_with_focus_state);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_floating",
                                 wrap_widget_t_get_prop_floating);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_dirty_rect_tolerance",
                                 wrap_widget_t_get_prop_dirty_rect_tolerance);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_parent",
                                 wrap_widget_t_get_prop_parent);

  return RET_OK;
}

jsvalue_t get_RET_OK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_OK);
}

jsvalue_t get_RET_OOM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_OOM);
}

jsvalue_t get_RET_FAIL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_FAIL);
}

jsvalue_t get_RET_NOT_IMPL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_NOT_IMPL);
}

jsvalue_t get_RET_QUIT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_QUIT);
}

jsvalue_t get_RET_FOUND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_FOUND);
}

jsvalue_t get_RET_BUSY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_BUSY);
}

jsvalue_t get_RET_REMOVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_REMOVE);
}

jsvalue_t get_RET_REPEAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_REPEAT);
}

jsvalue_t get_RET_NOT_FOUND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_NOT_FOUND);
}

jsvalue_t get_RET_DONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_DONE);
}

jsvalue_t get_RET_STOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_STOP);
}

jsvalue_t get_RET_SKIP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_SKIP);
}

jsvalue_t get_RET_CONTINUE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_CONTINUE);
}

jsvalue_t get_RET_OBJECT_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_OBJECT_CHANGED);
}

jsvalue_t get_RET_ITEMS_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_ITEMS_CHANGED);
}

jsvalue_t get_RET_BAD_PARAMS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_BAD_PARAMS);
}

jsvalue_t get_RET_TIMEOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_TIMEOUT);
}

jsvalue_t get_RET_CRC(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_CRC);
}

jsvalue_t get_RET_IO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_IO);
}

jsvalue_t get_RET_EOS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_EOS);
}

ret_t ret_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"RET_OK", get_RET_OK);
  jerryx_handler_register_global((const jerry_char_t*)"RET_OOM", get_RET_OOM);
  jerryx_handler_register_global((const jerry_char_t*)"RET_FAIL", get_RET_FAIL);
  jerryx_handler_register_global((const jerry_char_t*)"RET_NOT_IMPL", get_RET_NOT_IMPL);
  jerryx_handler_register_global((const jerry_char_t*)"RET_QUIT", get_RET_QUIT);
  jerryx_handler_register_global((const jerry_char_t*)"RET_FOUND", get_RET_FOUND);
  jerryx_handler_register_global((const jerry_char_t*)"RET_BUSY", get_RET_BUSY);
  jerryx_handler_register_global((const jerry_char_t*)"RET_REMOVE", get_RET_REMOVE);
  jerryx_handler_register_global((const jerry_char_t*)"RET_REPEAT", get_RET_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"RET_NOT_FOUND", get_RET_NOT_FOUND);
  jerryx_handler_register_global((const jerry_char_t*)"RET_DONE", get_RET_DONE);
  jerryx_handler_register_global((const jerry_char_t*)"RET_STOP", get_RET_STOP);
  jerryx_handler_register_global((const jerry_char_t*)"RET_SKIP", get_RET_SKIP);
  jerryx_handler_register_global((const jerry_char_t*)"RET_CONTINUE", get_RET_CONTINUE);
  jerryx_handler_register_global((const jerry_char_t*)"RET_OBJECT_CHANGED", get_RET_OBJECT_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"RET_ITEMS_CHANGED", get_RET_ITEMS_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"RET_BAD_PARAMS", get_RET_BAD_PARAMS);
  jerryx_handler_register_global((const jerry_char_t*)"RET_TIMEOUT", get_RET_TIMEOUT);
  jerryx_handler_register_global((const jerry_char_t*)"RET_CRC", get_RET_CRC);
  jerryx_handler_register_global((const jerry_char_t*)"RET_IO", get_RET_IO);
  jerryx_handler_register_global((const jerry_char_t*)"RET_EOS", get_RET_EOS);

  return RET_OK;
}

ret_t timer_manager_t_init(JSContext* ctx) {
  return RET_OK;
}

jsvalue_t wrap_time_now_s(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    uint64_t ret = (uint64_t)0;
    ret = (uint64_t)time_now_s();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_now_ms(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    uint64_t ret = (uint64_t)0;
    ret = (uint64_t)time_now_ms();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t time_now_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"time_now_s", wrap_time_now_s);
  jerryx_handler_register_global((const jerry_char_t*)"time_now_ms", wrap_time_now_ms);

  return RET_OK;
}

jsvalue_t get_IMAGE_DRAW_DEFAULT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_DEFAULT);
}

jsvalue_t get_IMAGE_DRAW_CENTER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_CENTER);
}

jsvalue_t get_IMAGE_DRAW_ICON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_ICON);
}

jsvalue_t get_IMAGE_DRAW_SCALE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE);
}

jsvalue_t get_IMAGE_DRAW_SCALE_AUTO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_AUTO);
}

jsvalue_t get_IMAGE_DRAW_SCALE_DOWN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_DOWN);
}

jsvalue_t get_IMAGE_DRAW_SCALE_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_W);
}

jsvalue_t get_IMAGE_DRAW_SCALE_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_H);
}

jsvalue_t get_IMAGE_DRAW_REPEAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_X);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_Y);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_Y_INVERSE(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_Y_INVERSE);
}

jsvalue_t get_IMAGE_DRAW_PATCH9(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH9);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_X);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_Y);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_X_SCALE_Y(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_Y_SCALE_X(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

jsvalue_t get_IMAGE_DRAW_REPEAT9(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT9);
}

jsvalue_t get_IMAGE_DRAW_REPEAT3_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT3_X);
}

jsvalue_t get_IMAGE_DRAW_REPEAT3_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT3_Y);
}

ret_t image_draw_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_DEFAULT", get_IMAGE_DRAW_DEFAULT);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_CENTER", get_IMAGE_DRAW_CENTER);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_ICON", get_IMAGE_DRAW_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE", get_IMAGE_DRAW_SCALE);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_AUTO",
                                 get_IMAGE_DRAW_SCALE_AUTO);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_DOWN",
                                 get_IMAGE_DRAW_SCALE_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_W", get_IMAGE_DRAW_SCALE_W);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_H", get_IMAGE_DRAW_SCALE_H);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT", get_IMAGE_DRAW_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT_X",
                                 get_IMAGE_DRAW_REPEAT_X);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT_Y",
                                 get_IMAGE_DRAW_REPEAT_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT_Y_INVERSE",
                                 get_IMAGE_DRAW_REPEAT_Y_INVERSE);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH9", get_IMAGE_DRAW_PATCH9);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_X",
                                 get_IMAGE_DRAW_PATCH3_X);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_Y",
                                 get_IMAGE_DRAW_PATCH3_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_X_SCALE_Y",
                                 get_IMAGE_DRAW_PATCH3_X_SCALE_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_Y_SCALE_X",
                                 get_IMAGE_DRAW_PATCH3_Y_SCALE_X);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT9", get_IMAGE_DRAW_REPEAT9);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT3_X",
                                 get_IMAGE_DRAW_REPEAT3_X);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT3_Y",
                                 get_IMAGE_DRAW_REPEAT3_Y);

  return RET_OK;
}

jsvalue_t wrap_canvas_get_width(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    wh_t ret = (wh_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (wh_t)canvas_get_width(c);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_height(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    wh_t ret = (wh_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (wh_t)canvas_get_height(c);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_clip_rect(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    rect_t* r = (rect_t*)jsvalue_get_pointer(ctx, argv[1], "rect_t*");
    ret = (ret_t)canvas_get_clip_rect(c, r);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_clip_rect(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
    ret = (ret_t)canvas_set_clip_rect(c, r);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_clip_rect_ex(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
    bool_t translate = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_fill_color_str(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)canvas_set_fill_color_str(c, color);
    TKMEM_FREE(color);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_text_color_str(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)canvas_set_text_color_str(c, color);
    TKMEM_FREE(color);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_stroke_color_str(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)canvas_set_stroke_color_str(c, color);
    TKMEM_FREE(color);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_global_alpha(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    uint8_t alpha = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)canvas_set_global_alpha(c, alpha);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_translate(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t dx = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t dy = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)canvas_translate(c, dx, dy);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_untranslate(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t dx = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t dy = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)canvas_untranslate(c, dx, dy);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_vline(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)canvas_draw_vline(c, x, y, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_hline(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)canvas_draw_hline(c, x, y, w);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_fill_rect(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (ret_t)canvas_fill_rect(c, x, y, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_stroke_rect(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_font(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    font_size_t size = (font_size_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)canvas_set_font(c, name, size);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_measure_utf8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    float_t ret = (float_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (float_t)canvas_measure_utf8(c, str);
    TKMEM_FREE(str);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_utf8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)canvas_draw_utf8(c, str, x, y);
    TKMEM_FREE(str);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_utf8_in_rect(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[2], "const rect_t*");
    ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
    TKMEM_FREE(str);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_icon(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
    xy_t cx = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    xy_t cy = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)canvas_draw_icon(c, img, cx, cy);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
    rect_t* src = (rect_t*)jsvalue_get_pointer(ctx, argv[2], "rect_t*");
    rect_t* dst = (rect_t*)jsvalue_get_pointer(ctx, argv[3], "rect_t*");
    ret = (ret_t)canvas_draw_image(c, img, src, dst);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_image_ex(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
    image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[2]);
    rect_t* dst = (rect_t*)jsvalue_get_pointer(ctx, argv[3], "rect_t*");
    ret = (ret_t)canvas_draw_image_ex(c, img, draw_type, dst);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_vgcanvas(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    vgcanvas_t* ret = NULL;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (vgcanvas_t*)canvas_get_vgcanvas(c);

    jret = jsvalue_create_pointer(ctx, ret, "vgcanvas_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    canvas_t* ret = NULL;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (canvas_t*)canvas_cast(c);

    jret = jsvalue_create_pointer(ctx, ret, "canvas_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_reset(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (ret_t)canvas_reset(c);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_ox(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->ox);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_oy(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->oy);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_font_name(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_string(ctx, obj->font_name);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_font_size(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->font_size);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_global_alpha(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->global_alpha);
  return jret;
}

ret_t canvas_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_width", wrap_canvas_get_width);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_height", wrap_canvas_get_height);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_clip_rect",
                                 wrap_canvas_get_clip_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_clip_rect",
                                 wrap_canvas_set_clip_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_clip_rect_ex",
                                 wrap_canvas_set_clip_rect_ex);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_fill_color_str",
                                 wrap_canvas_set_fill_color_str);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_text_color_str",
                                 wrap_canvas_set_text_color_str);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_stroke_color_str",
                                 wrap_canvas_set_stroke_color_str);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_global_alpha",
                                 wrap_canvas_set_global_alpha);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_translate", wrap_canvas_translate);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_untranslate",
                                 wrap_canvas_untranslate);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_vline", wrap_canvas_draw_vline);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_hline", wrap_canvas_draw_hline);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_fill_rect", wrap_canvas_fill_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_stroke_rect",
                                 wrap_canvas_stroke_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_set_font", wrap_canvas_set_font);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_measure_utf8",
                                 wrap_canvas_measure_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_utf8", wrap_canvas_draw_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_utf8_in_rect",
                                 wrap_canvas_draw_utf8_in_rect);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_icon", wrap_canvas_draw_icon);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_image", wrap_canvas_draw_image);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_image_ex",
                                 wrap_canvas_draw_image_ex);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_vgcanvas",
                                 wrap_canvas_get_vgcanvas);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_cast", wrap_canvas_cast);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_reset", wrap_canvas_reset);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_t_get_prop_ox",
                                 wrap_canvas_t_get_prop_ox);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_t_get_prop_oy",
                                 wrap_canvas_t_get_prop_oy);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_t_get_prop_font_name",
                                 wrap_canvas_t_get_prop_font_name);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_t_get_prop_font_size",
                                 wrap_canvas_t_get_prop_font_size);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_t_get_prop_global_alpha",
                                 wrap_canvas_t_get_prop_global_alpha);

  return RET_OK;
}

jsvalue_t wrap_named_value_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    named_value_t* ret = NULL;
    ret = (named_value_t*)named_value_create();

    jret = jsvalue_create_object(ctx, ret, "named_value_t*", &s_named_value_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_named_value_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    named_value_t* ret = NULL;
    named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
    ret = (named_value_t*)named_value_cast(nv);

    jret = jsvalue_create_pointer(ctx, ret, "named_value_t*");
  }
  return jret;
}

jsvalue_t wrap_named_value_set_name(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)named_value_set_name(nv, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_named_value_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
    const value_t* value = (const value_t*)jsvalue_get_pointer(ctx, argv[1], "const value_t*");
    ret = (ret_t)named_value_set_value(nv, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_named_value_get_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    value_t* ret = NULL;
    named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
    ret = (value_t*)named_value_get_value(nv);

    jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_named_value_t_get_prop_name(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  named_value_t* obj = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t named_value_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"named_value_create",
                                 wrap_named_value_create);
  jerryx_handler_register_global((const jerry_char_t*)"named_value_cast", wrap_named_value_cast);
  jerryx_handler_register_global((const jerry_char_t*)"named_value_set_name",
                                 wrap_named_value_set_name);
  jerryx_handler_register_global((const jerry_char_t*)"named_value_set_value",
                                 wrap_named_value_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"named_value_get_value",
                                 wrap_named_value_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"named_value_t_get_prop_name",
                                 wrap_named_value_t_get_prop_name);

  return RET_OK;
}

jsvalue_t get_MIME_TYPE_APPLICATION_ENVOY(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ENVOY);
}

jsvalue_t get_MIME_TYPE_APPLICATION_FRACTALS(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_FRACTALS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_FUTURESPLASH(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_FUTURESPLASH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_HTA(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_HTA);
}

jsvalue_t get_MIME_TYPE_APPLICATION_JSON(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_JSON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_UBJSON(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_UBJSON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_MAC_BINHEX40(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_MAC_BINHEX40);
}

jsvalue_t get_MIME_TYPE_APPLICATION_MSWORD(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_MSWORD);
}

jsvalue_t get_MIME_TYPE_APPLICATION_OCTET_STREAM(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_OCTET_STREAM);
}

jsvalue_t get_MIME_TYPE_APPLICATION_ODA(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ODA);
}

jsvalue_t get_MIME_TYPE_APPLICATION_OLESCRIPT(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_OLESCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PDF(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PICS_RULES(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PICS_RULES);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PKCS10(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PKCS10);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PKIX_CRL(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PKIX_CRL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_POSTSCRIPT(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_POSTSCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_RTF(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_RTF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_EXCEL(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_EXCEL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_OUTLOOK);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE(const jerry_value_t func_obj_val,
                                                        const jerry_value_t this_p,
                                                        const jerry_value_t argv[],
                                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKISECCAT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKISTL(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKISTL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_POWERPOINT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PROJECT(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PROJECT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_WORKS(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_WORKS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_WINHLP(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_WINHLP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_BCPIO(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_BCPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CDF(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_COMPRESS(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_COMPRESS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_COMPRESSED(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_COMPRESSED);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CPIO(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CSH(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CSH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_DIRECTOR(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_DIRECTOR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_DVI(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_DVI);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_GTAR(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_GTAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_GZIP(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_GZIP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_HDF(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_HDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_IPHONE(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_IPHONE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_JAVASCRIPT(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_JAVASCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_LATEX(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_LATEX);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSACCESS(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSACCESS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSCARDFILE(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSCARDFILE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSCLIP(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSCLIP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSDOWNLOAD);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMEDIAVIEW);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMETAFILE(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMETAFILE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMONEY(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMONEY);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSPUBLISHER(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSPUBLISHER);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSSCHEDULE(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSSCHEDULE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSTERMINAL(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSTERMINAL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSWRITE(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSWRITE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_NETCDF(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_NETCDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_PERFMON(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_PERFMON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_PKCS12(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_PKCS12);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SH(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SHAR(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SHAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_STUFFIT(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_STUFFIT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SV4CPIO(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SV4CPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SV4CRC(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SV4CRC);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TAR(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TCL(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TCL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TEX(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TEX);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TEXINFO(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TEXINFO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TROFF(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TROFF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_USTAR(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_USTAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_ZIP(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ZIP);
}

jsvalue_t get_MIME_TYPE_AUDIO_BASIC(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_BASIC);
}

jsvalue_t get_MIME_TYPE_AUDIO_MID(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_MID);
}

jsvalue_t get_MIME_TYPE_AUDIO_MPEG(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_MPEG);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_AIFF(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_AIFF);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_MPEGURL(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_MPEGURL);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_WAV(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_WAV);
}

jsvalue_t get_MIME_TYPE_IMAGE_BMP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_BMP);
}

jsvalue_t get_MIME_TYPE_IMAGE_CIS_COD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_CIS_COD);
}

jsvalue_t get_MIME_TYPE_IMAGE_GIF(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_GIF);
}

jsvalue_t get_MIME_TYPE_IMAGE_IEF(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_IEF);
}

jsvalue_t get_MIME_TYPE_IMAGE_JPEG(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_JPEG);
}

jsvalue_t get_MIME_TYPE_IMAGE_PIPEG(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_PIPEG);
}

jsvalue_t get_MIME_TYPE_IMAGE_SVG_XML(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_SVG_XML);
}

jsvalue_t get_MIME_TYPE_IMAGE_TIFF(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_TIFF);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_CMX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_CMX);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_ICON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_ICON);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_RGB(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_RGB);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XBITMAP(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XBITMAP);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XPIXMAP(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XPIXMAP);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XWINDOWDUMP(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XWINDOWDUMP);
}

jsvalue_t get_MIME_TYPE_MESSAGE_RFC822(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_MESSAGE_RFC822);
}

jsvalue_t get_MIME_TYPE_TEXT_CSS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_CSS);
}

jsvalue_t get_MIME_TYPE_TEXT_H323(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_H323);
}

jsvalue_t get_MIME_TYPE_TEXT_HTML(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_HTML);
}

jsvalue_t get_MIME_TYPE_TEXT_IULS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_IULS);
}

jsvalue_t get_MIME_TYPE_TEXT_PLAIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_PLAIN);
}

jsvalue_t get_MIME_TYPE_TEXT_RICHTEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_RICHTEXT);
}

jsvalue_t get_MIME_TYPE_TEXT_SCRIPTLET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_SCRIPTLET);
}

jsvalue_t get_MIME_TYPE_TEXT_WEBVIEWHTML(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_WEBVIEWHTML);
}

jsvalue_t get_MIME_TYPE_TEXT_X_COMPONENT(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_COMPONENT);
}

jsvalue_t get_MIME_TYPE_TEXT_X_SETEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_SETEXT);
}

jsvalue_t get_MIME_TYPE_TEXT_X_VCARD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_VCARD);
}

jsvalue_t get_MIME_TYPE_VIDEO_MPEG(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_MPEG);
}

jsvalue_t get_MIME_TYPE_VIDEO_QUICKTIME(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_QUICKTIME);
}

jsvalue_t get_MIME_TYPE_VIDEO_X_MSVIDEO(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_X_MSVIDEO);
}

ret_t MIME_TYPE_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_ENVOY",
                                 get_MIME_TYPE_APPLICATION_ENVOY);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_FRACTALS",
                                 get_MIME_TYPE_APPLICATION_FRACTALS);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_FUTURESPLASH",
                                 get_MIME_TYPE_APPLICATION_FUTURESPLASH);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_HTA",
                                 get_MIME_TYPE_APPLICATION_HTA);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_JSON",
                                 get_MIME_TYPE_APPLICATION_JSON);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_UBJSON",
                                 get_MIME_TYPE_APPLICATION_UBJSON);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_MAC_BINHEX40",
                                 get_MIME_TYPE_APPLICATION_MAC_BINHEX40);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_MSWORD",
                                 get_MIME_TYPE_APPLICATION_MSWORD);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_OCTET_STREAM",
                                 get_MIME_TYPE_APPLICATION_OCTET_STREAM);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_ODA",
                                 get_MIME_TYPE_APPLICATION_ODA);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_OLESCRIPT",
                                 get_MIME_TYPE_APPLICATION_OLESCRIPT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_PDF",
                                 get_MIME_TYPE_APPLICATION_PDF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_PICS_RULES",
                                 get_MIME_TYPE_APPLICATION_PICS_RULES);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_PKCS10",
                                 get_MIME_TYPE_APPLICATION_PKCS10);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_PKIX_CRL",
                                 get_MIME_TYPE_APPLICATION_PKIX_CRL);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_POSTSCRIPT",
                                 get_MIME_TYPE_APPLICATION_POSTSCRIPT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_RTF",
                                 get_MIME_TYPE_APPLICATION_RTF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_VND_MS_EXCEL",
                                 get_MIME_TYPE_APPLICATION_VND_MS_EXCEL);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_VND_MS_OUTLOOK",
                                 get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE",
                                 get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_VND_MS_PKISECCAT",
                                 get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_VND_MS_PKISTL",
                                 get_MIME_TYPE_APPLICATION_VND_MS_PKISTL);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_VND_MS_POWERPOINT",
                                 get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_VND_MS_PROJECT",
                                 get_MIME_TYPE_APPLICATION_VND_MS_PROJECT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_VND_MS_WORKS",
                                 get_MIME_TYPE_APPLICATION_VND_MS_WORKS);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_WINHLP",
                                 get_MIME_TYPE_APPLICATION_WINHLP);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_BCPIO",
                                 get_MIME_TYPE_APPLICATION_X_BCPIO);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_CDF",
                                 get_MIME_TYPE_APPLICATION_X_CDF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_COMPRESS",
                                 get_MIME_TYPE_APPLICATION_X_COMPRESS);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_COMPRESSED",
                                 get_MIME_TYPE_APPLICATION_X_COMPRESSED);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_CPIO",
                                 get_MIME_TYPE_APPLICATION_X_CPIO);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_CSH",
                                 get_MIME_TYPE_APPLICATION_X_CSH);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_DIRECTOR",
                                 get_MIME_TYPE_APPLICATION_X_DIRECTOR);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_DVI",
                                 get_MIME_TYPE_APPLICATION_X_DVI);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_GTAR",
                                 get_MIME_TYPE_APPLICATION_X_GTAR);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_GZIP",
                                 get_MIME_TYPE_APPLICATION_X_GZIP);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_HDF",
                                 get_MIME_TYPE_APPLICATION_X_HDF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_IPHONE",
                                 get_MIME_TYPE_APPLICATION_X_IPHONE);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_JAVASCRIPT",
                                 get_MIME_TYPE_APPLICATION_X_JAVASCRIPT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_LATEX",
                                 get_MIME_TYPE_APPLICATION_X_LATEX);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSACCESS",
                                 get_MIME_TYPE_APPLICATION_X_MSACCESS);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSCARDFILE",
                                 get_MIME_TYPE_APPLICATION_X_MSCARDFILE);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSCLIP",
                                 get_MIME_TYPE_APPLICATION_X_MSCLIP);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSDOWNLOAD",
                                 get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSMEDIAVIEW",
                                 get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSMETAFILE",
                                 get_MIME_TYPE_APPLICATION_X_MSMETAFILE);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSMONEY",
                                 get_MIME_TYPE_APPLICATION_X_MSMONEY);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSPUBLISHER",
                                 get_MIME_TYPE_APPLICATION_X_MSPUBLISHER);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSSCHEDULE",
                                 get_MIME_TYPE_APPLICATION_X_MSSCHEDULE);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSTERMINAL",
                                 get_MIME_TYPE_APPLICATION_X_MSTERMINAL);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_MSWRITE",
                                 get_MIME_TYPE_APPLICATION_X_MSWRITE);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_NETCDF",
                                 get_MIME_TYPE_APPLICATION_X_NETCDF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_PERFMON",
                                 get_MIME_TYPE_APPLICATION_X_PERFMON);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_PKCS12",
                                 get_MIME_TYPE_APPLICATION_X_PKCS12);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_SH",
                                 get_MIME_TYPE_APPLICATION_X_SH);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_SHAR",
                                 get_MIME_TYPE_APPLICATION_X_SHAR);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH",
                                 get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_STUFFIT",
                                 get_MIME_TYPE_APPLICATION_X_STUFFIT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_SV4CPIO",
                                 get_MIME_TYPE_APPLICATION_X_SV4CPIO);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_SV4CRC",
                                 get_MIME_TYPE_APPLICATION_X_SV4CRC);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_TAR",
                                 get_MIME_TYPE_APPLICATION_X_TAR);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_TCL",
                                 get_MIME_TYPE_APPLICATION_X_TCL);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_TEX",
                                 get_MIME_TYPE_APPLICATION_X_TEX);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_TEXINFO",
                                 get_MIME_TYPE_APPLICATION_X_TEXINFO);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_TROFF",
                                 get_MIME_TYPE_APPLICATION_X_TROFF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_X_USTAR",
                                 get_MIME_TYPE_APPLICATION_X_USTAR);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_APPLICATION_ZIP",
                                 get_MIME_TYPE_APPLICATION_ZIP);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_AUDIO_BASIC",
                                 get_MIME_TYPE_AUDIO_BASIC);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_AUDIO_MID",
                                 get_MIME_TYPE_AUDIO_MID);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_AUDIO_MPEG",
                                 get_MIME_TYPE_AUDIO_MPEG);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_AUDIO_X_AIFF",
                                 get_MIME_TYPE_AUDIO_X_AIFF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_AUDIO_X_MPEGURL",
                                 get_MIME_TYPE_AUDIO_X_MPEGURL);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_AUDIO_X_WAV",
                                 get_MIME_TYPE_AUDIO_X_WAV);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_BMP",
                                 get_MIME_TYPE_IMAGE_BMP);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_CIS_COD",
                                 get_MIME_TYPE_IMAGE_CIS_COD);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_GIF",
                                 get_MIME_TYPE_IMAGE_GIF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_IEF",
                                 get_MIME_TYPE_IMAGE_IEF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_JPEG",
                                 get_MIME_TYPE_IMAGE_JPEG);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_PIPEG",
                                 get_MIME_TYPE_IMAGE_PIPEG);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_SVG_XML",
                                 get_MIME_TYPE_IMAGE_SVG_XML);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_TIFF",
                                 get_MIME_TYPE_IMAGE_TIFF);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_X_CMX",
                                 get_MIME_TYPE_IMAGE_X_CMX);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_X_ICON",
                                 get_MIME_TYPE_IMAGE_X_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_X_RGB",
                                 get_MIME_TYPE_IMAGE_X_RGB);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_X_XBITMAP",
                                 get_MIME_TYPE_IMAGE_X_XBITMAP);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_X_XPIXMAP",
                                 get_MIME_TYPE_IMAGE_X_XPIXMAP);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_IMAGE_X_XWINDOWDUMP",
                                 get_MIME_TYPE_IMAGE_X_XWINDOWDUMP);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_MESSAGE_RFC822",
                                 get_MIME_TYPE_MESSAGE_RFC822);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_CSS", get_MIME_TYPE_TEXT_CSS);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_H323",
                                 get_MIME_TYPE_TEXT_H323);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_HTML",
                                 get_MIME_TYPE_TEXT_HTML);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_IULS",
                                 get_MIME_TYPE_TEXT_IULS);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_PLAIN",
                                 get_MIME_TYPE_TEXT_PLAIN);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_RICHTEXT",
                                 get_MIME_TYPE_TEXT_RICHTEXT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_SCRIPTLET",
                                 get_MIME_TYPE_TEXT_SCRIPTLET);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_WEBVIEWHTML",
                                 get_MIME_TYPE_TEXT_WEBVIEWHTML);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_X_COMPONENT",
                                 get_MIME_TYPE_TEXT_X_COMPONENT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_X_SETEXT",
                                 get_MIME_TYPE_TEXT_X_SETEXT);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_TEXT_X_VCARD",
                                 get_MIME_TYPE_TEXT_X_VCARD);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_VIDEO_MPEG",
                                 get_MIME_TYPE_VIDEO_MPEG);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_VIDEO_QUICKTIME",
                                 get_MIME_TYPE_VIDEO_QUICKTIME);
  jerryx_handler_register_global((const jerry_char_t*)"MIME_TYPE_VIDEO_X_MSVIDEO",
                                 get_MIME_TYPE_VIDEO_X_MSVIDEO);

  return RET_OK;
}

ret_t idle_manager_t_init(JSContext* ctx) {
  return RET_OK;
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_AUTO(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_AUTO);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_FILL_DOT(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_FILL_DOT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_STROKE_DOT(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_STROKE_DOT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_FILL_RECT(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_FILL_RECT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_STROKE_RECT(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_STROKE_RECT);
}

ret_t indicator_default_paint_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"INDICATOR_DEFAULT_PAINT_AUTO",
                                 get_INDICATOR_DEFAULT_PAINT_AUTO);
  jerryx_handler_register_global((const jerry_char_t*)"INDICATOR_DEFAULT_PAINT_FILL_DOT",
                                 get_INDICATOR_DEFAULT_PAINT_FILL_DOT);
  jerryx_handler_register_global((const jerry_char_t*)"INDICATOR_DEFAULT_PAINT_STROKE_DOT",
                                 get_INDICATOR_DEFAULT_PAINT_STROKE_DOT);
  jerryx_handler_register_global((const jerry_char_t*)"INDICATOR_DEFAULT_PAINT_FILL_RECT",
                                 get_INDICATOR_DEFAULT_PAINT_FILL_RECT);
  jerryx_handler_register_global((const jerry_char_t*)"INDICATOR_DEFAULT_PAINT_STROKE_RECT",
                                 get_INDICATOR_DEFAULT_PAINT_STROKE_RECT);

  return RET_OK;
}

jsvalue_t get_CLIP_BOARD_DATA_TYPE_NONE(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, CLIP_BOARD_DATA_TYPE_NONE);
}

jsvalue_t get_CLIP_BOARD_DATA_TYPE_TEXT(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, CLIP_BOARD_DATA_TYPE_TEXT);
}

ret_t clip_board_data_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"CLIP_BOARD_DATA_TYPE_NONE",
                                 get_CLIP_BOARD_DATA_TYPE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"CLIP_BOARD_DATA_TYPE_TEXT",
                                 get_CLIP_BOARD_DATA_TYPE_TEXT);

  return RET_OK;
}

jsvalue_t wrap_clip_board_set_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    ret = (ret_t)clip_board_set_text(text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_clip_board_get_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    const char* ret = NULL;
    ret = (const char*)clip_board_get_text();

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

ret_t clip_board_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"clip_board_set_text",
                                 wrap_clip_board_set_text);
  jerryx_handler_register_global((const jerry_char_t*)"clip_board_get_text",
                                 wrap_clip_board_get_text);

  return RET_OK;
}

jsvalue_t get_EASING_LINEAR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_LINEAR);
}

jsvalue_t get_EASING_QUADRATIC_IN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_QUADRATIC_IN);
}

jsvalue_t get_EASING_QUADRATIC_OUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_QUADRATIC_OUT);
}

jsvalue_t get_EASING_QUADRATIC_INOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_QUADRATIC_INOUT);
}

jsvalue_t get_EASING_CUBIC_IN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CUBIC_IN);
}

jsvalue_t get_EASING_CUBIC_OUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CUBIC_OUT);
}

jsvalue_t get_EASING_SIN_IN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_SIN_IN);
}

jsvalue_t get_EASING_SIN_OUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_SIN_OUT);
}

jsvalue_t get_EASING_SIN_INOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_SIN_INOUT);
}

jsvalue_t get_EASING_POW_IN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_POW_IN);
}

jsvalue_t get_EASING_POW_OUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_POW_OUT);
}

jsvalue_t get_EASING_POW_INOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_POW_INOUT);
}

jsvalue_t get_EASING_CIRCULAR_IN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CIRCULAR_IN);
}

jsvalue_t get_EASING_CIRCULAR_OUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CIRCULAR_OUT);
}

jsvalue_t get_EASING_CIRCULAR_INOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CIRCULAR_INOUT);
}

jsvalue_t get_EASING_ELASTIC_IN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_ELASTIC_IN);
}

jsvalue_t get_EASING_ELASTIC_OUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_ELASTIC_OUT);
}

jsvalue_t get_EASING_ELASTIC_INOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_ELASTIC_INOUT);
}

jsvalue_t get_EASING_BACK_IN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BACK_IN);
}

jsvalue_t get_EASING_BACK_OUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BACK_OUT);
}

jsvalue_t get_EASING_BACK_INOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BACK_INOUT);
}

jsvalue_t get_EASING_BOUNCE_IN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BOUNCE_IN);
}

jsvalue_t get_EASING_BOUNCE_OUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BOUNCE_OUT);
}

jsvalue_t get_EASING_BOUNCE_INOUT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BOUNCE_INOUT);
}

ret_t easing_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"EASING_LINEAR", get_EASING_LINEAR);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_QUADRATIC_IN",
                                 get_EASING_QUADRATIC_IN);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_QUADRATIC_OUT",
                                 get_EASING_QUADRATIC_OUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_QUADRATIC_INOUT",
                                 get_EASING_QUADRATIC_INOUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_CUBIC_IN", get_EASING_CUBIC_IN);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_CUBIC_OUT", get_EASING_CUBIC_OUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_SIN_IN", get_EASING_SIN_IN);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_SIN_OUT", get_EASING_SIN_OUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_SIN_INOUT", get_EASING_SIN_INOUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_POW_IN", get_EASING_POW_IN);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_POW_OUT", get_EASING_POW_OUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_POW_INOUT", get_EASING_POW_INOUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_CIRCULAR_IN", get_EASING_CIRCULAR_IN);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_CIRCULAR_OUT",
                                 get_EASING_CIRCULAR_OUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_CIRCULAR_INOUT",
                                 get_EASING_CIRCULAR_INOUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_ELASTIC_IN", get_EASING_ELASTIC_IN);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_ELASTIC_OUT", get_EASING_ELASTIC_OUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_ELASTIC_INOUT",
                                 get_EASING_ELASTIC_INOUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_BACK_IN", get_EASING_BACK_IN);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_BACK_OUT", get_EASING_BACK_OUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_BACK_INOUT", get_EASING_BACK_INOUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_BOUNCE_IN", get_EASING_BOUNCE_IN);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_BOUNCE_OUT", get_EASING_BOUNCE_OUT);
  jerryx_handler_register_global((const jerry_char_t*)"EASING_BOUNCE_INOUT",
                                 get_EASING_BOUNCE_INOUT);

  return RET_OK;
}

jsvalue_t wrap_date_time_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    date_time_t* ret = NULL;
    ret = (date_time_t*)date_time_create();

    jret = jsvalue_create_object(ctx, ret, "date_time_t*", &s_date_time_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_date_time_set(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    ret = (ret_t)date_time_set(dt);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_date_time_from_time(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    uint64_t time = (uint64_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)date_time_from_time(dt, time);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_second(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->second);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_minute(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->minute);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_hour(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->hour);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_day(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->day);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_wday(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->wday);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_month(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->month);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_year(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->year);
  return jret;
}

ret_t date_time_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"date_time_create", wrap_date_time_create);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_set", wrap_date_time_set);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_from_time",
                                 wrap_date_time_from_time);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_t_get_prop_second",
                                 wrap_date_time_t_get_prop_second);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_t_get_prop_minute",
                                 wrap_date_time_t_get_prop_minute);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_t_get_prop_hour",
                                 wrap_date_time_t_get_prop_hour);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_t_get_prop_day",
                                 wrap_date_time_t_get_prop_day);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_t_get_prop_wday",
                                 wrap_date_time_t_get_prop_wday);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_t_get_prop_month",
                                 wrap_date_time_t_get_prop_month);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_t_get_prop_year",
                                 wrap_date_time_t_get_prop_year);

  return RET_OK;
}

jsvalue_t wrap_color_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    color_t* ret = NULL;
    uint8_t r = (uint8_t)jsvalue_get_int_value(ctx, argv[0]);
    uint8_t b = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
    uint8_t g = (uint8_t)jsvalue_get_int_value(ctx, argv[2]);
    uint8_t a = (uint8_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (color_t*)color_create(r, b, g, a);

    jret = jsvalue_create_object(ctx, ret, "color_t*", &s_color_destroy_info);
  }
  return jret;
}

jsvalue_t wrap_color_from_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    color_t* ret = NULL;
    color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
    const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (color_t*)color_from_str(c, str);
    TKMEM_FREE(str);

    jret = jsvalue_create_pointer(ctx, ret, "color_t*");
  }
  return jret;
}

jsvalue_t wrap_color_r(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint8_t ret = (uint8_t)0;
    color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint8_t)color_r(c);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_g(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint8_t ret = (uint8_t)0;
    color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint8_t)color_g(c);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_b(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint8_t ret = (uint8_t)0;
    color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint8_t)color_b(c);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_a(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint8_t ret = (uint8_t)0;
    color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint8_t)color_a(c);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    color_t* ret = NULL;
    color_t* color = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
    ret = (color_t*)color_cast(color);

    jret = jsvalue_create_pointer(ctx, ret, "color_t*");
  }
  return jret;
}

jsvalue_t wrap_color_t_set_prop_color(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  uint32_t color = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  obj->color = color;

  jret = jsvalue_create_int(ctx, obj->color);
  return jret;
};

jsvalue_t wrap_color_t_get_prop_color(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");

  jret = jsvalue_create_int(ctx, obj->color);
  return jret;
}

ret_t color_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"color_create", wrap_color_create);
  jerryx_handler_register_global((const jerry_char_t*)"color_from_str", wrap_color_from_str);
  jerryx_handler_register_global((const jerry_char_t*)"color_r", wrap_color_r);
  jerryx_handler_register_global((const jerry_char_t*)"color_g", wrap_color_g);
  jerryx_handler_register_global((const jerry_char_t*)"color_b", wrap_color_b);
  jerryx_handler_register_global((const jerry_char_t*)"color_a", wrap_color_a);
  jerryx_handler_register_global((const jerry_char_t*)"color_cast", wrap_color_cast);
  jerryx_handler_register_global((const jerry_char_t*)"color_t_set_prop_color",
                                 wrap_color_t_set_prop_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_t_get_prop_color",
                                 wrap_color_t_get_prop_color);

  return RET_OK;
}

jsvalue_t wrap_asset_info_t_get_prop_type(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->type);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_subtype(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->subtype);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_is_in_rom(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->is_in_rom);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_size(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_refcount(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->refcount);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_name(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t asset_info_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_type",
                                 wrap_asset_info_t_get_prop_type);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_subtype",
                                 wrap_asset_info_t_get_prop_subtype);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_is_in_rom",
                                 wrap_asset_info_t_get_prop_is_in_rom);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_size",
                                 wrap_asset_info_t_get_prop_size);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_refcount",
                                 wrap_asset_info_t_get_prop_refcount);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_t_get_prop_name",
                                 wrap_asset_info_t_get_prop_name);

  return RET_OK;
}

jsvalue_t get_ASSET_TYPE_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_NONE);
}

jsvalue_t get_ASSET_TYPE_FONT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_FONT);
}

jsvalue_t get_ASSET_TYPE_IMAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_IMAGE);
}

jsvalue_t get_ASSET_TYPE_STYLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_STYLE);
}

jsvalue_t get_ASSET_TYPE_UI(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_UI);
}

jsvalue_t get_ASSET_TYPE_XML(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_XML);
}

jsvalue_t get_ASSET_TYPE_STRINGS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_STRINGS);
}

jsvalue_t get_ASSET_TYPE_SCRIPT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_SCRIPT);
}

jsvalue_t get_ASSET_TYPE_DATA(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_DATA);
}

ret_t asset_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_NONE", get_ASSET_TYPE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_FONT", get_ASSET_TYPE_FONT);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_IMAGE", get_ASSET_TYPE_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_STYLE", get_ASSET_TYPE_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_UI", get_ASSET_TYPE_UI);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_XML", get_ASSET_TYPE_XML);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_STRINGS", get_ASSET_TYPE_STRINGS);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_SCRIPT", get_ASSET_TYPE_SCRIPT);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_DATA", get_ASSET_TYPE_DATA);

  return RET_OK;
}

jsvalue_t wrap_assets_manager(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    assets_manager_t* ret = NULL;
    ret = (assets_manager_t*)assets_manager();

    jret = jsvalue_create_pointer(ctx, ret, "assets_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_assets_manager_ref(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    asset_info_t* ret = NULL;
    assets_manager_t* am =
        (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
    asset_type_t type = (asset_type_t)jsvalue_get_int_value(ctx, argv[1]);
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (asset_info_t*)assets_manager_ref(am, type, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "asset_info_t*");
  }
  return jret;
}

jsvalue_t wrap_assets_manager_unref(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    assets_manager_t* am =
        (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
    asset_info_t* info = (asset_info_t*)jsvalue_get_pointer(ctx, argv[1], "asset_info_t*");
    ret = (ret_t)assets_manager_unref(am, info);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t assets_manager_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager", wrap_assets_manager);
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager_ref",
                                 wrap_assets_manager_ref);
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager_unref",
                                 wrap_assets_manager_unref);

  return RET_OK;
}

jsvalue_t wrap_color_component_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)color_component_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "color_component_t*");
  }
  return jret;
}

ret_t color_component_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"color_component_cast",
                                 wrap_color_component_cast);

  return RET_OK;
}

jsvalue_t wrap_time_clock_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)time_clock_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "time_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_time_clock_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)time_clock_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "time_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t hour = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)time_clock_set_hour(widget, hour);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t minute = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)time_clock_set_minute(widget, minute);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t second = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)time_clock_set_second(widget, second);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour_image(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* hour = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_hour_image(widget, hour);
    TKMEM_FREE(hour);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute_image(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* minute_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
    TKMEM_FREE(minute_image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second_image(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* second_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_second_image(widget, second_image);
    TKMEM_FREE(second_image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_bg_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* bg_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
    TKMEM_FREE(bg_image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_image(widget, image);
    TKMEM_FREE(image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour_anchor(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)time_clock_set_hour_anchor(widget, anchor_x, anchor_y);
    TKMEM_FREE(anchor_x);
    TKMEM_FREE(anchor_y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute_anchor(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)time_clock_set_minute_anchor(widget, anchor_x, anchor_y);
    TKMEM_FREE(anchor_x);
    TKMEM_FREE(anchor_y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second_anchor(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)time_clock_set_second_anchor(widget, anchor_x, anchor_y);
    TKMEM_FREE(anchor_x);
    TKMEM_FREE(anchor_y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->hour);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->minute);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->second);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_image(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_bg_image(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->bg_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_image(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_image(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_image(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_anchor_x(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_anchor_y(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_anchor_y);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_anchor_x(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_anchor_y(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_anchor_y);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_anchor_x(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_anchor_y(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_anchor_y);
  return jret;
}

ret_t time_clock_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_create", wrap_time_clock_create);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_cast", wrap_time_clock_cast);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_hour",
                                 wrap_time_clock_set_hour);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_minute",
                                 wrap_time_clock_set_minute);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_second",
                                 wrap_time_clock_set_second);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_hour_image",
                                 wrap_time_clock_set_hour_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_minute_image",
                                 wrap_time_clock_set_minute_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_second_image",
                                 wrap_time_clock_set_second_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_bg_image",
                                 wrap_time_clock_set_bg_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_image",
                                 wrap_time_clock_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_hour_anchor",
                                 wrap_time_clock_set_hour_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_minute_anchor",
                                 wrap_time_clock_set_minute_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_set_second_anchor",
                                 wrap_time_clock_set_second_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_hour",
                                 wrap_time_clock_t_get_prop_hour);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_minute",
                                 wrap_time_clock_t_get_prop_minute);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_second",
                                 wrap_time_clock_t_get_prop_second);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_image",
                                 wrap_time_clock_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_bg_image",
                                 wrap_time_clock_t_get_prop_bg_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_hour_image",
                                 wrap_time_clock_t_get_prop_hour_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_minute_image",
                                 wrap_time_clock_t_get_prop_minute_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_second_image",
                                 wrap_time_clock_t_get_prop_second_image);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_hour_anchor_x",
                                 wrap_time_clock_t_get_prop_hour_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_hour_anchor_y",
                                 wrap_time_clock_t_get_prop_hour_anchor_y);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_minute_anchor_x",
                                 wrap_time_clock_t_get_prop_minute_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_minute_anchor_y",
                                 wrap_time_clock_t_get_prop_minute_anchor_y);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_second_anchor_x",
                                 wrap_time_clock_t_get_prop_second_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"time_clock_t_get_prop_second_anchor_y",
                                 wrap_time_clock_t_get_prop_second_anchor_y);

  return RET_OK;
}

jsvalue_t wrap_text_selector_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)text_selector_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "text_selector_t*");
  }
  return jret;
}

jsvalue_t wrap_text_selector_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)text_selector_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "text_selector_t*");
  }
  return jret;
}

jsvalue_t wrap_text_selector_reset_options(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)text_selector_reset_options(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_count_options(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)text_selector_count_options(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_append_option(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    char* text = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)text_selector_append_option(widget, value, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_options(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* options = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)text_selector_set_options(widget, options);
    TKMEM_FREE(options);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_range_options(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t start = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t nr = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    int32_t step = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_get_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)text_selector_get_value(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_get_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const char*)text_selector_get_text(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)text_selector_set_text(widget, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_selected_index(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_selected_index(widget, index);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_visible_nr(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t visible_nr = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_visible_nr(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->visible_nr);
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_selected_index(const jerry_value_t func_obj_val,
                                                       const jerry_value_t this_p,
                                                       const jerry_value_t argv[],
                                                       const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->selected_index);
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_options(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_string(ctx, obj->options);
  return jret;
}

ret_t text_selector_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_create",
                                 wrap_text_selector_create);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_cast",
                                 wrap_text_selector_cast);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_reset_options",
                                 wrap_text_selector_reset_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_count_options",
                                 wrap_text_selector_count_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_append_option",
                                 wrap_text_selector_append_option);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_options",
                                 wrap_text_selector_set_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_range_options",
                                 wrap_text_selector_set_range_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_get_value",
                                 wrap_text_selector_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_value",
                                 wrap_text_selector_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_get_text",
                                 wrap_text_selector_get_text);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_text",
                                 wrap_text_selector_set_text);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_selected_index",
                                 wrap_text_selector_set_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_visible_nr",
                                 wrap_text_selector_set_visible_nr);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_visible_nr",
                                 wrap_text_selector_t_get_prop_visible_nr);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_selected_index",
                                 wrap_text_selector_t_get_prop_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_options",
                                 wrap_text_selector_t_get_prop_options);

  return RET_OK;
}

jsvalue_t wrap_switch_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)switch_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "switch_t*");
  }
  return jret;
}

jsvalue_t wrap_switch_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)switch_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_switch_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)switch_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "switch_t*");
  }
  return jret;
}

jsvalue_t wrap_switch_t_get_prop_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_switch_t_get_prop_max_xoffset_ratio(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  jret = jsvalue_create_number(ctx, obj->max_xoffset_ratio);
  return jret;
}

ret_t switch_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"switch_create", wrap_switch_create);
  jerryx_handler_register_global((const jerry_char_t*)"switch_set_value", wrap_switch_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"switch_cast", wrap_switch_cast);
  jerryx_handler_register_global((const jerry_char_t*)"switch_t_get_prop_value",
                                 wrap_switch_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"switch_t_get_prop_max_xoffset_ratio",
                                 wrap_switch_t_get_prop_max_xoffset_ratio);

  return RET_OK;
}

jsvalue_t wrap_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)view_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "view_t*");
  }
  return jret;
}

jsvalue_t wrap_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)view_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "view_t*");
  }
  return jret;
}

ret_t view_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"view_create", wrap_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"view_cast", wrap_view_cast);

  return RET_OK;
}

jsvalue_t wrap_prop_change_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    prop_change_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (prop_change_event_t*)prop_change_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "prop_change_event_t*");
  }
  return jret;
}

jsvalue_t wrap_prop_change_event_t_get_prop_name(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  prop_change_event_t* obj =
      (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_prop_change_event_t_get_prop_value(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  prop_change_event_t* obj =
      (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->value, "const value_t*");
  return jret;
}

ret_t prop_change_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_cast",
                                 wrap_prop_change_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_t_get_prop_name",
                                 wrap_prop_change_event_t_get_prop_name);
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_t_get_prop_value",
                                 wrap_prop_change_event_t_get_prop_value);

  return RET_OK;
}

jsvalue_t wrap_progress_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    progress_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (progress_event_t*)progress_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "progress_event_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_event_t_get_prop_percent(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_event_t* obj = (progress_event_t*)jsvalue_get_pointer(ctx, argv[0], "progress_event_t*");

  jret = jsvalue_create_int(ctx, obj->percent);
  return jret;
}

ret_t progress_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"progress_event_cast",
                                 wrap_progress_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"progress_event_t_get_prop_percent",
                                 wrap_progress_event_t_get_prop_percent);

  return RET_OK;
}

jsvalue_t wrap_slide_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_view_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "slide_view_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)slide_view_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "slide_view_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_auto_play(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t auto_play = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_view_set_auto_play(widget, auto_play);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_active(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_view_set_active(widget, index);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_vertical(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)slide_view_set_vertical(widget, vertical);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_anim_hint(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* anim_hint = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)slide_view_set_anim_hint(widget, anim_hint);
    TKMEM_FREE(anim_hint);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_loop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)slide_view_set_loop(widget, loop);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_vertical(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_auto_play(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_int(ctx, obj->auto_play);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_loop(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_anim_hint(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_string(ctx, obj->anim_hint);
  return jret;
}

ret_t slide_view_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_create", wrap_slide_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_cast", wrap_slide_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_auto_play",
                                 wrap_slide_view_set_auto_play);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_active",
                                 wrap_slide_view_set_active);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_vertical",
                                 wrap_slide_view_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_anim_hint",
                                 wrap_slide_view_set_anim_hint);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_loop",
                                 wrap_slide_view_set_loop);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_t_get_prop_vertical",
                                 wrap_slide_view_t_get_prop_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_t_get_prop_auto_play",
                                 wrap_slide_view_t_get_prop_auto_play);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_t_get_prop_loop",
                                 wrap_slide_view_t_get_prop_loop);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_t_get_prop_anim_hint",
                                 wrap_slide_view_t_get_prop_anim_hint);

  return RET_OK;
}

jsvalue_t wrap_slide_indicator_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_indicator_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_create_linear(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_indicator_create_linear(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_create_arc(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_indicator_create_arc(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)slide_indicator_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_value(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_max(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_max(widget, max);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_default_paint(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    indicator_default_paint_t default_paint =
        (indicator_default_paint_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_default_paint(widget, default_paint);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_auto_hide(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t auto_hide = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_auto_hide(widget, auto_hide);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_margin(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_margin(widget, margin);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_spacing(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t spacing = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_spacing(widget, spacing);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_size(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_size(widget, size);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_anchor(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)slide_indicator_set_anchor(widget, anchor_x, anchor_y);
    TKMEM_FREE(anchor_x);
    TKMEM_FREE(anchor_y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_indicated_target(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* indicated_target = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_indicated_target(widget, indicated_target);
    TKMEM_FREE(indicated_target);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_value(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_max(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_default_paint(const jerry_value_t func_obj_val,
                                                        const jerry_value_t this_p,
                                                        const jerry_value_t argv[],
                                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->default_paint);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_auto_hide(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->auto_hide);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_margin(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->margin);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_spacing(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->spacing);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_size(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_anchor_x(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_anchor_y(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_indicated_target(const jerry_value_t func_obj_val,
                                                           const jerry_value_t this_p,
                                                           const jerry_value_t argv[],
                                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_string(ctx, obj->indicated_target);
  return jret;
}

ret_t slide_indicator_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_create",
                                 wrap_slide_indicator_create);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_create_linear",
                                 wrap_slide_indicator_create_linear);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_create_arc",
                                 wrap_slide_indicator_create_arc);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_cast",
                                 wrap_slide_indicator_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_value",
                                 wrap_slide_indicator_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_max",
                                 wrap_slide_indicator_set_max);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_default_paint",
                                 wrap_slide_indicator_set_default_paint);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_auto_hide",
                                 wrap_slide_indicator_set_auto_hide);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_margin",
                                 wrap_slide_indicator_set_margin);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_spacing",
                                 wrap_slide_indicator_set_spacing);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_size",
                                 wrap_slide_indicator_set_size);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_anchor",
                                 wrap_slide_indicator_set_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_indicated_target",
                                 wrap_slide_indicator_set_indicated_target);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_value",
                                 wrap_slide_indicator_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_max",
                                 wrap_slide_indicator_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_default_paint",
                                 wrap_slide_indicator_t_get_prop_default_paint);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_auto_hide",
                                 wrap_slide_indicator_t_get_prop_auto_hide);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_margin",
                                 wrap_slide_indicator_t_get_prop_margin);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_spacing",
                                 wrap_slide_indicator_t_get_prop_spacing);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_size",
                                 wrap_slide_indicator_t_get_prop_size);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_anchor_x",
                                 wrap_slide_indicator_t_get_prop_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_anchor_y",
                                 wrap_slide_indicator_t_get_prop_anchor_y);
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_indicated_target",
                                 wrap_slide_indicator_t_get_prop_indicated_target);

  return RET_OK;
}

jsvalue_t wrap_slide_menu_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_menu_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "slide_menu_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_menu_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)slide_menu_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "slide_menu_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_menu_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_align_v(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    align_v_t align_v = (align_v_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_menu_set_align_v(widget, align_v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_min_scale(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t min_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_value(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_align_v(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_number(ctx, obj->align_v);
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_min_scale(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_number(ctx, obj->min_scale);
  return jret;
}

ret_t slide_menu_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_create", wrap_slide_menu_create);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_cast", wrap_slide_menu_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_set_value",
                                 wrap_slide_menu_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_set_align_v",
                                 wrap_slide_menu_set_align_v);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_set_min_scale",
                                 wrap_slide_menu_set_min_scale);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_t_get_prop_value",
                                 wrap_slide_menu_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_t_get_prop_align_v",
                                 wrap_slide_menu_t_get_prop_align_v);
  jerryx_handler_register_global((const jerry_char_t*)"slide_menu_t_get_prop_min_scale",
                                 wrap_slide_menu_t_get_prop_min_scale);

  return RET_OK;
}

jsvalue_t wrap_scroll_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)scroll_view_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "scroll_view_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)scroll_view_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "scroll_view_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_virtual_w(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_virtual_w(widget, w);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_virtual_h(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_virtual_h(widget, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_xslidable(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t xslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_yslidable(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t yslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_offset(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t xoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    int32_t yoffset = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_speed_scale(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t xspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t yspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)scroll_view_set_speed_scale(widget, xspeed_scale, yspeed_scale);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_scroll_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t xoffset_end = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    int32_t yoffset_end = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_scroll_delta_to(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t xoffset_delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    int32_t yoffset_delta = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)scroll_view_scroll_delta_to(widget, xoffset_delta, yoffset_delta, duration);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_virtual_w(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_w);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_virtual_h(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_h);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xoffset(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->xoffset);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yoffset(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->yoffset);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xspeed_scale(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_number(ctx, obj->xspeed_scale);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yspeed_scale(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_number(ctx, obj->yspeed_scale);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xslidable(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->xslidable);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yslidable(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->yslidable);
  return jret;
}

ret_t scroll_view_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_create",
                                 wrap_scroll_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_cast", wrap_scroll_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_virtual_w",
                                 wrap_scroll_view_set_virtual_w);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_virtual_h",
                                 wrap_scroll_view_set_virtual_h);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_xslidable",
                                 wrap_scroll_view_set_xslidable);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_yslidable",
                                 wrap_scroll_view_set_yslidable);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_offset",
                                 wrap_scroll_view_set_offset);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_speed_scale",
                                 wrap_scroll_view_set_speed_scale);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_scroll_to",
                                 wrap_scroll_view_scroll_to);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_scroll_delta_to",
                                 wrap_scroll_view_scroll_delta_to);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_virtual_w",
                                 wrap_scroll_view_t_get_prop_virtual_w);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_virtual_h",
                                 wrap_scroll_view_t_get_prop_virtual_h);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_xoffset",
                                 wrap_scroll_view_t_get_prop_xoffset);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_yoffset",
                                 wrap_scroll_view_t_get_prop_yoffset);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_xspeed_scale",
                                 wrap_scroll_view_t_get_prop_xspeed_scale);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_yspeed_scale",
                                 wrap_scroll_view_t_get_prop_yspeed_scale);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_xslidable",
                                 wrap_scroll_view_t_get_prop_xslidable);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_yslidable",
                                 wrap_scroll_view_t_get_prop_yslidable);

  return RET_OK;
}

jsvalue_t wrap_scroll_bar_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)scroll_bar_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_create_mobile(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_create_desktop(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_params(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t virtual_size = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    int32_t row = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_scroll_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_add_delta(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_add_delta(widget, delta);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_scroll_delta(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_scroll_delta(widget, delta);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_value_only(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_set_value_only(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_is_mobile(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)scroll_bar_is_mobile(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_virtual_size(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_size);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_value(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_row(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->row);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_animatable(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->animatable);
  return jret;
}

ret_t scroll_bar_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_create", wrap_scroll_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_cast", wrap_scroll_bar_cast);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_create_mobile",
                                 wrap_scroll_bar_create_mobile);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_create_desktop",
                                 wrap_scroll_bar_create_desktop);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_set_params",
                                 wrap_scroll_bar_set_params);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_scroll_to",
                                 wrap_scroll_bar_scroll_to);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_set_value",
                                 wrap_scroll_bar_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_add_delta",
                                 wrap_scroll_bar_add_delta);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_scroll_delta",
                                 wrap_scroll_bar_scroll_delta);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_set_value_only",
                                 wrap_scroll_bar_set_value_only);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_is_mobile",
                                 wrap_scroll_bar_is_mobile);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_virtual_size",
                                 wrap_scroll_bar_t_get_prop_virtual_size);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_value",
                                 wrap_scroll_bar_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_row",
                                 wrap_scroll_bar_t_get_prop_row);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_animatable",
                                 wrap_scroll_bar_t_get_prop_animatable);

  return RET_OK;
}

jsvalue_t wrap_list_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)list_view_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "list_view_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_set_item_height(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t item_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)list_view_set_item_height(widget, item_height);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_set_default_item_height(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t default_item_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_set_auto_hide_scroll_bar(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_hide_scroll_bar = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)list_view_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "list_view_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_reinit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)list_view_reinit(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_item_height(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_int(ctx, obj->item_height);
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_default_item_height(const jerry_value_t func_obj_val,
                                                        const jerry_value_t this_p,
                                                        const jerry_value_t argv[],
                                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_int(ctx, obj->default_item_height);
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_auto_hide_scroll_bar(const jerry_value_t func_obj_val,
                                                         const jerry_value_t this_p,
                                                         const jerry_value_t argv[],
                                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_hide_scroll_bar);
  return jret;
}

ret_t list_view_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"list_view_create", wrap_list_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_item_height",
                                 wrap_list_view_set_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_default_item_height",
                                 wrap_list_view_set_default_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_auto_hide_scroll_bar",
                                 wrap_list_view_set_auto_hide_scroll_bar);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_cast", wrap_list_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_reinit", wrap_list_view_reinit);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_item_height",
                                 wrap_list_view_t_get_prop_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_default_item_height",
                                 wrap_list_view_t_get_prop_default_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_auto_hide_scroll_bar",
                                 wrap_list_view_t_get_prop_auto_hide_scroll_bar);

  return RET_OK;
}

jsvalue_t wrap_tab_control_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)tab_control_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "tab_control_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_control_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)tab_control_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "tab_control_t*");
  }
  return jret;
}

ret_t tab_control_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_control_create",
                                 wrap_tab_control_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_control_cast", wrap_tab_control_cast);

  return RET_OK;
}

jsvalue_t wrap_list_view_h_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)list_view_h_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "list_view_h_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_h_set_item_width(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t item_width = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)list_view_h_set_item_width(widget, item_width);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_h_set_spacing(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t spacing = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)list_view_h_set_spacing(widget, spacing);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_h_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)list_view_h_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "list_view_h_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_h_t_get_prop_item_width(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = jsvalue_create_int(ctx, obj->item_width);
  return jret;
}

jsvalue_t wrap_list_view_h_t_get_prop_spacing(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = jsvalue_create_int(ctx, obj->spacing);
  return jret;
}

ret_t list_view_h_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_create",
                                 wrap_list_view_h_create);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_set_item_width",
                                 wrap_list_view_h_set_item_width);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_set_spacing",
                                 wrap_list_view_h_set_spacing);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_cast", wrap_list_view_h_cast);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_t_get_prop_item_width",
                                 wrap_list_view_h_t_get_prop_item_width);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_h_t_get_prop_spacing",
                                 wrap_list_view_h_t_get_prop_spacing);

  return RET_OK;
}

jsvalue_t wrap_list_item_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)list_item_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "list_item_t*");
  }
  return jret;
}

jsvalue_t wrap_list_item_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)list_item_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "list_item_t*");
  }
  return jret;
}

ret_t list_item_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"list_item_create", wrap_list_item_create);
  jerryx_handler_register_global((const jerry_char_t*)"list_item_cast", wrap_list_item_cast);

  return RET_OK;
}

jsvalue_t wrap_tab_button_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)tab_button_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "tab_button_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)tab_button_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "tab_button_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)tab_button_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_icon(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)tab_button_set_icon(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_active_icon(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)tab_button_set_active_icon(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_load_ui(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)tab_button_set_load_ui(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_value(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_load_ui(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->load_ui);
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_active_icon(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->active_icon);
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_icon(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->icon);
  return jret;
}

ret_t tab_button_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_create", wrap_tab_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_cast", wrap_tab_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_value",
                                 wrap_tab_button_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_icon",
                                 wrap_tab_button_set_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_active_icon",
                                 wrap_tab_button_set_active_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_load_ui",
                                 wrap_tab_button_set_load_ui);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_value",
                                 wrap_tab_button_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_load_ui",
                                 wrap_tab_button_t_get_prop_load_ui);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_active_icon",
                                 wrap_tab_button_t_get_prop_active_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_icon",
                                 wrap_tab_button_t_get_prop_icon);

  return RET_OK;
}

jsvalue_t wrap_tab_button_group_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "tab_button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_set_compact(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t compact = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)tab_button_group_set_compact(widget, compact);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_set_scrollable(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t scrollable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)tab_button_group_set_scrollable(widget, scrollable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)tab_button_group_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "tab_button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_t_get_prop_compact(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_group_t* obj =
      (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = jsvalue_create_bool(ctx, obj->compact);
  return jret;
}

jsvalue_t wrap_tab_button_group_t_get_prop_scrollable(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_group_t* obj =
      (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = jsvalue_create_bool(ctx, obj->scrollable);
  return jret;
}

ret_t tab_button_group_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_create",
                                 wrap_tab_button_group_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_set_compact",
                                 wrap_tab_button_group_set_compact);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_set_scrollable",
                                 wrap_tab_button_group_set_scrollable);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_cast",
                                 wrap_tab_button_group_cast);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_t_get_prop_compact",
                                 wrap_tab_button_group_t_get_prop_compact);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_t_get_prop_scrollable",
                                 wrap_tab_button_group_t_get_prop_scrollable);

  return RET_OK;
}

jsvalue_t wrap_hscroll_label_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)hscroll_label_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "hscroll_label_t*");
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_lull(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t lull = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_lull(widget, lull);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_duration(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_duration(widget, duration);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_only_focus(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t only_focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_only_focus(widget, only_focus);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_only_parent_focus(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t only_parent_focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_only_parent_focus(widget, only_parent_focus);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_loop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_loop(widget, loop);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_yoyo(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t yoyo = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_yoyo(widget, yoyo);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_ellipses(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t ellipses = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_ellipses(widget, ellipses);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_xoffset(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t xoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_xoffset(widget, xoffset);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_start(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)hscroll_label_start(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_stop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)hscroll_label_stop(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)hscroll_label_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "hscroll_label_t*");
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_only_focus(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->only_focus);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_only_parent_focus(const jerry_value_t func_obj_val,
                                                          const jerry_value_t this_p,
                                                          const jerry_value_t argv[],
                                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->only_parent_focus);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_loop(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_yoyo(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->yoyo);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_ellipses(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->ellipses);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_lull(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->lull);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_duration(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->duration);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_xoffset(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->xoffset);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_text_w(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->text_w);
  return jret;
}

ret_t hscroll_label_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_create",
                                 wrap_hscroll_label_create);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_lull",
                                 wrap_hscroll_label_set_lull);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_duration",
                                 wrap_hscroll_label_set_duration);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_only_focus",
                                 wrap_hscroll_label_set_only_focus);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_only_parent_focus",
                                 wrap_hscroll_label_set_only_parent_focus);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_loop",
                                 wrap_hscroll_label_set_loop);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_yoyo",
                                 wrap_hscroll_label_set_yoyo);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_ellipses",
                                 wrap_hscroll_label_set_ellipses);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_xoffset",
                                 wrap_hscroll_label_set_xoffset);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_start",
                                 wrap_hscroll_label_start);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_stop",
                                 wrap_hscroll_label_stop);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_cast",
                                 wrap_hscroll_label_cast);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_only_focus",
                                 wrap_hscroll_label_t_get_prop_only_focus);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_only_parent_focus",
                                 wrap_hscroll_label_t_get_prop_only_parent_focus);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_loop",
                                 wrap_hscroll_label_t_get_prop_loop);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_yoyo",
                                 wrap_hscroll_label_t_get_prop_yoyo);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_ellipses",
                                 wrap_hscroll_label_t_get_prop_ellipses);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_lull",
                                 wrap_hscroll_label_t_get_prop_lull);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_duration",
                                 wrap_hscroll_label_t_get_prop_duration);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_xoffset",
                                 wrap_hscroll_label_t_get_prop_xoffset);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_text_w",
                                 wrap_hscroll_label_t_get_prop_text_w);

  return RET_OK;
}

jsvalue_t wrap_rich_text_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)rich_text_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "rich_text_t*");
  }
  return jret;
}

jsvalue_t wrap_rich_text_set_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)rich_text_set_text(widget, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_rich_text_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)rich_text_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "rich_text_t*");
  }
  return jret;
}

jsvalue_t wrap_rich_text_t_get_prop_line_gap(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  jret = jsvalue_create_int(ctx, obj->line_gap);
  return jret;
}

jsvalue_t wrap_rich_text_t_get_prop_margin(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  jret = jsvalue_create_int(ctx, obj->margin);
  return jret;
}

ret_t rich_text_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_create", wrap_rich_text_create);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_set_text",
                                 wrap_rich_text_set_text);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_cast", wrap_rich_text_cast);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_t_get_prop_line_gap",
                                 wrap_rich_text_t_get_prop_line_gap);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_t_get_prop_margin",
                                 wrap_rich_text_t_get_prop_margin);

  return RET_OK;
}

jsvalue_t wrap_progress_circle_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)progress_circle_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "progress_circle_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_circle_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)progress_circle_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "progress_circle_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_value(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_max(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_max(widget, max);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_line_width(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t line_width = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_line_width(widget, line_width);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_start_angle(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t start_angle = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_unit(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* unit = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_unit(widget, unit);
    TKMEM_FREE(unit);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_show_text(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t show_text = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_show_text(widget, show_text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_counter_clock_wise(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t counter_clock_wise = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_value(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_max(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_start_angle(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->start_angle);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_line_width(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->line_width);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_unit(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_string(ctx, obj->unit);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_counter_clock_wise(const jerry_value_t func_obj_val,
                                                             const jerry_value_t this_p,
                                                             const jerry_value_t argv[],
                                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_bool(ctx, obj->counter_clock_wise);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_show_text(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_bool(ctx, obj->show_text);
  return jret;
}

ret_t progress_circle_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_create",
                                 wrap_progress_circle_create);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_cast",
                                 wrap_progress_circle_cast);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_value",
                                 wrap_progress_circle_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_max",
                                 wrap_progress_circle_set_max);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_line_width",
                                 wrap_progress_circle_set_line_width);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_start_angle",
                                 wrap_progress_circle_set_start_angle);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_unit",
                                 wrap_progress_circle_set_unit);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_show_text",
                                 wrap_progress_circle_set_show_text);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_counter_clock_wise",
                                 wrap_progress_circle_set_counter_clock_wise);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_value",
                                 wrap_progress_circle_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_max",
                                 wrap_progress_circle_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_start_angle",
                                 wrap_progress_circle_t_get_prop_start_angle);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_line_width",
                                 wrap_progress_circle_t_get_prop_line_width);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_unit",
                                 wrap_progress_circle_t_get_prop_unit);
  jerryx_handler_register_global(
      (const jerry_char_t*)"progress_circle_t_get_prop_counter_clock_wise",
      wrap_progress_circle_t_get_prop_counter_clock_wise);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_show_text",
                                 wrap_progress_circle_t_get_prop_show_text);

  return RET_OK;
}

jsvalue_t wrap_slider_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slider_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "slider_t*");
  }
  return jret;
}

jsvalue_t wrap_slider_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)slider_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "slider_t*");
  }
  return jret;
}

jsvalue_t wrap_slider_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double value = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)slider_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_min(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double min = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)slider_set_min(widget, min);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_max(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double max = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)slider_set_max(widget, max);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_step(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double step = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)slider_set_step(widget, step);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_bar_size(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t bar_size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slider_set_bar_size(widget, bar_size);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_vertical(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)slider_set_vertical(widget, vertical);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_min(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_max(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_step(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->step);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_vertical(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_bar_size(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_int(ctx, obj->bar_size);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_dragger_size(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_int(ctx, obj->dragger_size);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_dragger_adapt_to_icon(const jerry_value_t func_obj_val,
                                                       const jerry_value_t this_p,
                                                       const jerry_value_t argv[],
                                                       const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->dragger_adapt_to_icon);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_slide_with_bar(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->slide_with_bar);
  return jret;
}

ret_t slider_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"slider_create", wrap_slider_create);
  jerryx_handler_register_global((const jerry_char_t*)"slider_cast", wrap_slider_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_value", wrap_slider_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_min", wrap_slider_set_min);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_max", wrap_slider_set_max);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_step", wrap_slider_set_step);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_bar_size",
                                 wrap_slider_set_bar_size);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_vertical",
                                 wrap_slider_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_value",
                                 wrap_slider_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_min",
                                 wrap_slider_t_get_prop_min);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_max",
                                 wrap_slider_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_step",
                                 wrap_slider_t_get_prop_step);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_vertical",
                                 wrap_slider_t_get_prop_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_bar_size",
                                 wrap_slider_t_get_prop_bar_size);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_dragger_size",
                                 wrap_slider_t_get_prop_dragger_size);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_dragger_adapt_to_icon",
                                 wrap_slider_t_get_prop_dragger_adapt_to_icon);
  jerryx_handler_register_global((const jerry_char_t*)"slider_t_get_prop_slide_with_bar",
                                 wrap_slider_t_get_prop_slide_with_bar);

  return RET_OK;
}

jsvalue_t wrap_mledit_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)mledit_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "mledit_t*");
  }
  return jret;
}

jsvalue_t wrap_mledit_set_readonly(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t readonly = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_readonly(widget, readonly);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_focus(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_focus(widget, focus);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_wrap_word(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t wrap_word = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_wrap_word(widget, wrap_word);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_max_lines(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max_lines = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_max_lines(widget, max_lines);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_input_tips(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)mledit_set_input_tips(widget, tips);
    TKMEM_FREE(tips);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_cursor(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t cursor = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_cursor(widget, cursor);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_scroll_line(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t scroll_line = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_scroll_line(widget, scroll_line);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)mledit_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "mledit_t*");
  }
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_readonly(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->readonly);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_tips(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_string(ctx, obj->tips);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_wrap_word(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->wrap_word);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_max_lines(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_int(ctx, obj->max_lines);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_scroll_line(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_number(ctx, obj->scroll_line);
  return jret;
}

ret_t mledit_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"mledit_create", wrap_mledit_create);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_readonly",
                                 wrap_mledit_set_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_focus", wrap_mledit_set_focus);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_wrap_word",
                                 wrap_mledit_set_wrap_word);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_max_lines",
                                 wrap_mledit_set_max_lines);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_input_tips",
                                 wrap_mledit_set_input_tips);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_cursor", wrap_mledit_set_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_scroll_line",
                                 wrap_mledit_set_scroll_line);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_cast", wrap_mledit_cast);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_readonly",
                                 wrap_mledit_t_get_prop_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_tips",
                                 wrap_mledit_t_get_prop_tips);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_wrap_word",
                                 wrap_mledit_t_get_prop_wrap_word);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_max_lines",
                                 wrap_mledit_t_get_prop_max_lines);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_scroll_line",
                                 wrap_mledit_t_get_prop_scroll_line);

  return RET_OK;
}

jsvalue_t wrap_line_number_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)line_number_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "line_number_t*");
  }
  return jret;
}

jsvalue_t wrap_line_number_set_top_margin(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t top_margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)line_number_set_top_margin(widget, top_margin);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_bottom_margin(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t bottom_margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)line_number_set_bottom_margin(widget, bottom_margin);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_line_height(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t line_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)line_number_set_line_height(widget, line_height);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_yoffset(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t yoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)line_number_set_yoffset(widget, yoffset);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)line_number_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "line_number_t*");
  }
  return jret;
}

ret_t line_number_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"line_number_create",
                                 wrap_line_number_create);
  jerryx_handler_register_global((const jerry_char_t*)"line_number_set_top_margin",
                                 wrap_line_number_set_top_margin);
  jerryx_handler_register_global((const jerry_char_t*)"line_number_set_bottom_margin",
                                 wrap_line_number_set_bottom_margin);
  jerryx_handler_register_global((const jerry_char_t*)"line_number_set_line_height",
                                 wrap_line_number_set_line_height);
  jerryx_handler_register_global((const jerry_char_t*)"line_number_set_yoffset",
                                 wrap_line_number_set_yoffset);
  jerryx_handler_register_global((const jerry_char_t*)"line_number_cast", wrap_line_number_cast);

  return RET_OK;
}

jsvalue_t wrap_row_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)row_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "row_t*");
  }
  return jret;
}

jsvalue_t wrap_row_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                        const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)row_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "row_t*");
  }
  return jret;
}

ret_t row_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"row_create", wrap_row_create);
  jerryx_handler_register_global((const jerry_char_t*)"row_cast", wrap_row_cast);

  return RET_OK;
}

jsvalue_t wrap_progress_bar_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)progress_bar_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "progress_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_bar_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)progress_bar_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "progress_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_max(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_max(widget, max);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_vertical(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_vertical(widget, vertical);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_show_text(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t show_text = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_show_text(widget, show_text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_get_percent(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (uint32_t)progress_bar_get_percent(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_value(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_max(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_vertical(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_show_text(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->show_text);
  return jret;
}

ret_t progress_bar_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_create",
                                 wrap_progress_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_cast", wrap_progress_bar_cast);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_value",
                                 wrap_progress_bar_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_max",
                                 wrap_progress_bar_set_max);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_vertical",
                                 wrap_progress_bar_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_show_text",
                                 wrap_progress_bar_set_show_text);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_get_percent",
                                 wrap_progress_bar_get_percent);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_value",
                                 wrap_progress_bar_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_max",
                                 wrap_progress_bar_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_vertical",
                                 wrap_progress_bar_t_get_prop_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_show_text",
                                 wrap_progress_bar_t_get_prop_show_text);

  return RET_OK;
}

jsvalue_t wrap_pages_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)pages_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "pages_t*");
  }
  return jret;
}

jsvalue_t wrap_pages_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)pages_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "pages_t*");
  }
  return jret;
}

jsvalue_t wrap_pages_set_active(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)pages_set_active(widget, index);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_pages_set_active_by_name(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)pages_set_active_by_name(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_pages_t_get_prop_active(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pages_t* obj = (pages_t*)jsvalue_get_pointer(ctx, argv[0], "pages_t*");

  jret = jsvalue_create_int(ctx, obj->active);
  return jret;
}

ret_t pages_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"pages_create", wrap_pages_create);
  jerryx_handler_register_global((const jerry_char_t*)"pages_cast", wrap_pages_cast);
  jerryx_handler_register_global((const jerry_char_t*)"pages_set_active", wrap_pages_set_active);
  jerryx_handler_register_global((const jerry_char_t*)"pages_set_active_by_name",
                                 wrap_pages_set_active_by_name);
  jerryx_handler_register_global((const jerry_char_t*)"pages_t_get_prop_active",
                                 wrap_pages_t_get_prop_active);

  return RET_OK;
}

jsvalue_t wrap_overlay_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)overlay_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "overlay_t*");
  }
  return jret;
}

jsvalue_t wrap_overlay_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)overlay_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "overlay_t*");
  }
  return jret;
}

ret_t overlay_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"overlay_create", wrap_overlay_create);
  jerryx_handler_register_global((const jerry_char_t*)"overlay_cast", wrap_overlay_cast);

  return RET_OK;
}

jsvalue_t wrap_candidates_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)candidates_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "candidates_t*");
  }
  return jret;
}

ret_t candidates_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"candidates_cast", wrap_candidates_cast);

  return RET_OK;
}

jsvalue_t wrap_image_value_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)image_value_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "image_value_t*");
  }
  return jret;
}

jsvalue_t wrap_image_value_set_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_value_set_image(widget, image);
    TKMEM_FREE(image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_set_format(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_value_set_format(widget, format);
    TKMEM_FREE(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_value_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)image_value_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "image_value_t*");
  }
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_image(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_format(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_value(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

ret_t image_value_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"image_value_create",
                                 wrap_image_value_create);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_image",
                                 wrap_image_value_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_format",
                                 wrap_image_value_set_format);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_value",
                                 wrap_image_value_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_cast", wrap_image_value_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_image",
                                 wrap_image_value_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_format",
                                 wrap_image_value_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_value",
                                 wrap_image_value_t_get_prop_value);

  return RET_OK;
}

jsvalue_t wrap_image_animation_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)image_animation_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "image_animation_t*");
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_loop(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_loop(widget, loop);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_image(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_animation_set_image(widget, image);
    TKMEM_FREE(image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_interval(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t interval = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_interval(widget, interval);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_delay(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t delay = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_delay(widget, delay);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_auto_play(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_play = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_auto_play(widget, auto_play);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_sequence(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* sequence = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_animation_set_sequence(widget, sequence);
    TKMEM_FREE(sequence);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_range_sequence(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t start_index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t end_index = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)image_animation_set_range_sequence(widget, start_index, end_index);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_play(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)image_animation_play(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_stop(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)image_animation_stop(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_pause(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)image_animation_pause(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_next(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)image_animation_next(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_format(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_animation_set_format(widget, format);
    TKMEM_FREE(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_unload_after_paint(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t unload_after_paint = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_unload_after_paint(widget, unload_after_paint);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)image_animation_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "image_animation_t*");
  }
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_image(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_sequence(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->sequence);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_start_index(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->start_index);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_end_index(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->end_index);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_loop(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_auto_play(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_play);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_unload_after_paint(const jerry_value_t func_obj_val,
                                                             const jerry_value_t this_p,
                                                             const jerry_value_t argv[],
                                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->unload_after_paint);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_format(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_interval(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->interval);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_delay(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->delay);
  return jret;
}

ret_t image_animation_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_create",
                                 wrap_image_animation_create);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_loop",
                                 wrap_image_animation_set_loop);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_image",
                                 wrap_image_animation_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_interval",
                                 wrap_image_animation_set_interval);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_delay",
                                 wrap_image_animation_set_delay);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_auto_play",
                                 wrap_image_animation_set_auto_play);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_sequence",
                                 wrap_image_animation_set_sequence);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_range_sequence",
                                 wrap_image_animation_set_range_sequence);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_play",
                                 wrap_image_animation_play);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_stop",
                                 wrap_image_animation_stop);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_pause",
                                 wrap_image_animation_pause);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_next",
                                 wrap_image_animation_next);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_format",
                                 wrap_image_animation_set_format);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_unload_after_paint",
                                 wrap_image_animation_set_unload_after_paint);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_cast",
                                 wrap_image_animation_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_image",
                                 wrap_image_animation_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_sequence",
                                 wrap_image_animation_t_get_prop_sequence);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_start_index",
                                 wrap_image_animation_t_get_prop_start_index);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_end_index",
                                 wrap_image_animation_t_get_prop_end_index);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_loop",
                                 wrap_image_animation_t_get_prop_loop);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_auto_play",
                                 wrap_image_animation_t_get_prop_auto_play);
  jerryx_handler_register_global(
      (const jerry_char_t*)"image_animation_t_get_prop_unload_after_paint",
      wrap_image_animation_t_get_prop_unload_after_paint);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_format",
                                 wrap_image_animation_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_interval",
                                 wrap_image_animation_t_get_prop_interval);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_delay",
                                 wrap_image_animation_t_get_prop_delay);

  return RET_OK;
}

jsvalue_t wrap_guage_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)guage_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "guage_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)guage_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "guage_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_set_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)guage_set_image(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_set_draw_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)guage_set_draw_type(widget, draw_type);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_t_get_prop_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  guage_t* obj = (guage_t*)jsvalue_get_pointer(ctx, argv[0], "guage_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_guage_t_get_prop_draw_type(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  guage_t* obj = (guage_t*)jsvalue_get_pointer(ctx, argv[0], "guage_t*");

  jret = jsvalue_create_number(ctx, obj->draw_type);
  return jret;
}

ret_t guage_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"guage_create", wrap_guage_create);
  jerryx_handler_register_global((const jerry_char_t*)"guage_cast", wrap_guage_cast);
  jerryx_handler_register_global((const jerry_char_t*)"guage_set_image", wrap_guage_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"guage_set_draw_type",
                                 wrap_guage_set_draw_type);
  jerryx_handler_register_global((const jerry_char_t*)"guage_t_get_prop_image",
                                 wrap_guage_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"guage_t_get_prop_draw_type",
                                 wrap_guage_t_get_prop_draw_type);

  return RET_OK;
}

jsvalue_t wrap_guage_pointer_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)guage_pointer_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "guage_pointer_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)guage_pointer_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "guage_pointer_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_angle(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t angle = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)guage_pointer_set_angle(widget, angle);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)guage_pointer_set_image(widget, image);
    TKMEM_FREE(image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_anchor(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)guage_pointer_set_anchor(widget, anchor_x, anchor_y);
    TKMEM_FREE(anchor_x);
    TKMEM_FREE(anchor_y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_angle(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_int(ctx, obj->angle);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_image(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_anchor_x(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_string(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_anchor_y(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_string(ctx, obj->anchor_y);
  return jret;
}

ret_t guage_pointer_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_create",
                                 wrap_guage_pointer_create);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_cast",
                                 wrap_guage_pointer_cast);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_set_angle",
                                 wrap_guage_pointer_set_angle);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_set_image",
                                 wrap_guage_pointer_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_set_anchor",
                                 wrap_guage_pointer_set_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_t_get_prop_angle",
                                 wrap_guage_pointer_t_get_prop_angle);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_t_get_prop_image",
                                 wrap_guage_pointer_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_t_get_prop_anchor_x",
                                 wrap_guage_pointer_t_get_prop_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"guage_pointer_t_get_prop_anchor_y",
                                 wrap_guage_pointer_t_get_prop_anchor_y);

  return RET_OK;
}

jsvalue_t wrap_label_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)label_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "label_t*");
  }
  return jret;
}

jsvalue_t wrap_label_set_length(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t length = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)label_set_length(widget, length);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_label_resize_to_content(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t min_w = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t max_w = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    uint32_t min_h = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
    uint32_t max_h = (uint32_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (ret_t)label_resize_to_content(widget, min_w, max_w, min_h, max_h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_label_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)label_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "label_t*");
  }
  return jret;
}

jsvalue_t wrap_label_t_get_prop_length(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  label_t* obj = (label_t*)jsvalue_get_pointer(ctx, argv[0], "label_t*");

  jret = jsvalue_create_int(ctx, obj->length);
  return jret;
}

ret_t label_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"label_create", wrap_label_create);
  jerryx_handler_register_global((const jerry_char_t*)"label_set_length", wrap_label_set_length);
  jerryx_handler_register_global((const jerry_char_t*)"label_resize_to_content",
                                 wrap_label_resize_to_content);
  jerryx_handler_register_global((const jerry_char_t*)"label_cast", wrap_label_cast);
  jerryx_handler_register_global((const jerry_char_t*)"label_t_get_prop_length",
                                 wrap_label_t_get_prop_length);

  return RET_OK;
}

jsvalue_t wrap_file_chooser_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    file_chooser_t* ret = NULL;
    const char* init_dir = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    const char* filter = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (file_chooser_t*)file_chooser_create(init_dir, filter);
    TKMEM_FREE(init_dir);
    TKMEM_FREE(filter);

    jret = jsvalue_create_pointer(ctx, ret, "file_chooser_t*");
  }
  return jret;
}

jsvalue_t wrap_file_chooser_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    file_chooser_t* ret = NULL;
    void* data = (void*)jsvalue_get_pointer(ctx, argv[0], "void*");
    ret = (file_chooser_t*)file_chooser_cast(data);

    jret = jsvalue_create_pointer(ctx, ret, "file_chooser_t*");
  }
  return jret;
}

jsvalue_t wrap_file_chooser_choose_file_for_save(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    ret = (ret_t)file_chooser_choose_file_for_save(chooser);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_chooser_choose_file_for_open(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    ret = (ret_t)file_chooser_choose_file_for_open(chooser);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_chooser_choose_folder(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    ret = (ret_t)file_chooser_choose_folder(chooser);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_chooser_get_dir(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    ret = (const char*)file_chooser_get_dir(chooser);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_chooser_get_filename(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    ret = (const char*)file_chooser_get_filename(chooser);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_chooser_is_aborted(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    ret = (bool_t)file_chooser_is_aborted(chooser);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

ret_t file_chooser_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_create",
                                 wrap_file_chooser_create);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_cast", wrap_file_chooser_cast);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_choose_file_for_save",
                                 wrap_file_chooser_choose_file_for_save);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_choose_file_for_open",
                                 wrap_file_chooser_choose_file_for_open);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_choose_folder",
                                 wrap_file_chooser_choose_folder);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_get_dir",
                                 wrap_file_chooser_get_dir);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_get_filename",
                                 wrap_file_chooser_get_filename);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_is_aborted",
                                 wrap_file_chooser_is_aborted);

  return RET_OK;
}

jsvalue_t wrap_file_browser_view_create(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)file_browser_view_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "file_browser_view_t*");
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)file_browser_view_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "file_browser_view_t*");
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_set_init_dir(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* init_dir = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)file_browser_view_set_init_dir(widget, init_dir);
    TKMEM_FREE(init_dir);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_set_ignore_hidden_files(const jerry_value_t func_obj_val,
                                                         const jerry_value_t this_p,
                                                         const jerry_value_t argv[],
                                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t ignore_hidden_files = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)file_browser_view_set_ignore_hidden_files(widget, ignore_hidden_files);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_set_sort_ascending(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t sort_ascending = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)file_browser_view_set_sort_ascending(widget, sort_ascending);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_set_show_check_button(const jerry_value_t func_obj_val,
                                                       const jerry_value_t this_p,
                                                       const jerry_value_t argv[],
                                                       const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t show_check_button = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)file_browser_view_set_show_check_button(widget, show_check_button);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_set_sort_by(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* sort_by = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)file_browser_view_set_sort_by(widget, sort_by);
    TKMEM_FREE(sort_by);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_get_cwd(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const char*)file_browser_view_get_cwd(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_create_dir(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)file_browser_view_create_dir(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_create_file(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* data = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    uint32_t size = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)file_browser_view_create_file(widget, name, data, size);
    TKMEM_FREE(name);
    TKMEM_FREE(data);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_file_browser_view_t_get_prop_init_dir(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_string(ctx, obj->init_dir);
  return jret;
}

jsvalue_t wrap_file_browser_view_t_get_prop_ignore_hidden_files(const jerry_value_t func_obj_val,
                                                                const jerry_value_t this_p,
                                                                const jerry_value_t argv[],
                                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_bool(ctx, obj->ignore_hidden_files);
  return jret;
}

jsvalue_t wrap_file_browser_view_t_get_prop_sort_ascending(const jerry_value_t func_obj_val,
                                                           const jerry_value_t this_p,
                                                           const jerry_value_t argv[],
                                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_bool(ctx, obj->sort_ascending);
  return jret;
}

jsvalue_t wrap_file_browser_view_t_get_prop_show_check_button(const jerry_value_t func_obj_val,
                                                              const jerry_value_t this_p,
                                                              const jerry_value_t argv[],
                                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_bool(ctx, obj->show_check_button);
  return jret;
}

jsvalue_t wrap_file_browser_view_t_get_prop_sort_by(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_string(ctx, obj->sort_by);
  return jret;
}

ret_t file_browser_view_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_create",
                                 wrap_file_browser_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_cast",
                                 wrap_file_browser_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_set_init_dir",
                                 wrap_file_browser_view_set_init_dir);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_set_ignore_hidden_files",
                                 wrap_file_browser_view_set_ignore_hidden_files);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_set_sort_ascending",
                                 wrap_file_browser_view_set_sort_ascending);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_set_show_check_button",
                                 wrap_file_browser_view_set_show_check_button);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_set_sort_by",
                                 wrap_file_browser_view_set_sort_by);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_get_cwd",
                                 wrap_file_browser_view_get_cwd);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_create_dir",
                                 wrap_file_browser_view_create_dir);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_create_file",
                                 wrap_file_browser_view_create_file);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_t_get_prop_init_dir",
                                 wrap_file_browser_view_t_get_prop_init_dir);
  jerryx_handler_register_global(
      (const jerry_char_t*)"file_browser_view_t_get_prop_ignore_hidden_files",
      wrap_file_browser_view_t_get_prop_ignore_hidden_files);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_t_get_prop_sort_ascending",
                                 wrap_file_browser_view_t_get_prop_sort_ascending);
  jerryx_handler_register_global(
      (const jerry_char_t*)"file_browser_view_t_get_prop_show_check_button",
      wrap_file_browser_view_t_get_prop_show_check_button);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_t_get_prop_sort_by",
                                 wrap_file_browser_view_t_get_prop_sort_by);

  return RET_OK;
}

jsvalue_t wrap_draggable_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)draggable_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "draggable_t*");
  }
  return jret;
}

jsvalue_t wrap_draggable_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)draggable_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "draggable_t*");
  }
  return jret;
}

jsvalue_t wrap_draggable_set_top(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t top = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)draggable_set_top(widget, top);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_bottom(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t bottom = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)draggable_set_bottom(widget, bottom);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_left(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t left = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)draggable_set_left(widget, left);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_right(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t right = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)draggable_set_right(widget, right);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_vertical_only(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t vertical_only = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)draggable_set_vertical_only(widget, vertical_only);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_horizontal_only(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t horizontal_only = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)draggable_set_horizontal_only(widget, horizontal_only);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_drag_window(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t drag_window = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)draggable_set_drag_window(widget, drag_window);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_top(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->top);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_bottom(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->bottom);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_left(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->left);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_right(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->right);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_vertical_only(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical_only);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_horizontal_only(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->horizontal_only);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_drag_window(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->drag_window);
  return jret;
}

ret_t draggable_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"draggable_create", wrap_draggable_create);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_cast", wrap_draggable_cast);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_set_top", wrap_draggable_set_top);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_set_bottom",
                                 wrap_draggable_set_bottom);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_set_left",
                                 wrap_draggable_set_left);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_set_right",
                                 wrap_draggable_set_right);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_set_vertical_only",
                                 wrap_draggable_set_vertical_only);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_set_horizontal_only",
                                 wrap_draggable_set_horizontal_only);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_set_drag_window",
                                 wrap_draggable_set_drag_window);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_t_get_prop_top",
                                 wrap_draggable_t_get_prop_top);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_t_get_prop_bottom",
                                 wrap_draggable_t_get_prop_bottom);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_t_get_prop_left",
                                 wrap_draggable_t_get_prop_left);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_t_get_prop_right",
                                 wrap_draggable_t_get_prop_right);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_t_get_prop_vertical_only",
                                 wrap_draggable_t_get_prop_vertical_only);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_t_get_prop_horizontal_only",
                                 wrap_draggable_t_get_prop_horizontal_only);
  jerryx_handler_register_global((const jerry_char_t*)"draggable_t_get_prop_drag_window",
                                 wrap_draggable_t_get_prop_drag_window);

  return RET_OK;
}

jsvalue_t wrap_color_picker_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)color_picker_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "color_picker_t*");
  }
  return jret;
}

jsvalue_t wrap_color_picker_set_color(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)color_picker_set_color(widget, color);
    TKMEM_FREE(color);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_picker_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)color_picker_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "color_picker_t*");
  }
  return jret;
}

jsvalue_t wrap_color_picker_t_get_prop_value(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  color_picker_t* obj = (color_picker_t*)jsvalue_get_pointer(ctx, argv[0], "color_picker_t*");

  jret = jsvalue_create_string(ctx, obj->value);
  return jret;
}

ret_t color_picker_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"color_picker_create",
                                 wrap_color_picker_create);
  jerryx_handler_register_global((const jerry_char_t*)"color_picker_set_color",
                                 wrap_color_picker_set_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_picker_cast", wrap_color_picker_cast);
  jerryx_handler_register_global((const jerry_char_t*)"color_picker_t_get_prop_value",
                                 wrap_color_picker_t_get_prop_value);

  return RET_OK;
}

jsvalue_t wrap_canvas_widget_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "canvas_widget_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_widget_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)canvas_widget_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "canvas_widget_t*");
  }
  return jret;
}

ret_t canvas_widget_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"canvas_widget_create",
                                 wrap_canvas_widget_create);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_widget_cast",
                                 wrap_canvas_widget_cast);

  return RET_OK;
}

jsvalue_t wrap_group_box_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)group_box_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "group_box_t*");
  }
  return jret;
}

jsvalue_t wrap_group_box_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)group_box_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "group_box_t*");
  }
  return jret;
}

ret_t group_box_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"group_box_create", wrap_group_box_create);
  jerryx_handler_register_global((const jerry_char_t*)"group_box_cast", wrap_group_box_cast);

  return RET_OK;
}

jsvalue_t wrap_grid_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)grid_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "grid_t*");
  }
  return jret;
}

jsvalue_t wrap_grid_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)grid_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "grid_t*");
  }
  return jret;
}

ret_t grid_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"grid_create", wrap_grid_create);
  jerryx_handler_register_global((const jerry_char_t*)"grid_cast", wrap_grid_cast);

  return RET_OK;
}

jsvalue_t wrap_window_manager(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    widget_t* ret = NULL;
    ret = (widget_t*)window_manager();

    jret = jsvalue_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_manager_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_top_main_window(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_manager_get_top_main_window(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_top_window(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_manager_get_top_window(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_prev_window(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_manager_get_prev_window(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_x(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    xy_t ret = (xy_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (xy_t)window_manager_get_pointer_x(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_y(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    xy_t ret = (xy_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (xy_t)window_manager_get_pointer_y(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_pressed(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)window_manager_get_pointer_pressed(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_is_animating(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)window_manager_is_animating(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_show_fps(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t show_fps = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)window_manager_set_show_fps(widget, show_fps);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_screen_saver_time(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t screen_saver_time = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)window_manager_set_screen_saver_time(widget, screen_saver_time);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_cursor(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* cursor = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)window_manager_set_cursor(widget, cursor);
    TKMEM_FREE(cursor);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_manager_back(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back_to_home(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_manager_back_to_home(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back_to(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* target = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)window_manager_back_to(widget, target);
    TKMEM_FREE(target);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_resize(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)window_manager_resize(widget, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t window_manager_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"window_manager", wrap_window_manager);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_cast",
                                 wrap_window_manager_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_get_top_main_window",
                                 wrap_window_manager_get_top_main_window);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_get_top_window",
                                 wrap_window_manager_get_top_window);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_get_prev_window",
                                 wrap_window_manager_get_prev_window);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_get_pointer_x",
                                 wrap_window_manager_get_pointer_x);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_get_pointer_y",
                                 wrap_window_manager_get_pointer_y);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_get_pointer_pressed",
                                 wrap_window_manager_get_pointer_pressed);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_is_animating",
                                 wrap_window_manager_is_animating);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_set_show_fps",
                                 wrap_window_manager_set_show_fps);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_set_screen_saver_time",
                                 wrap_window_manager_set_screen_saver_time);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_set_cursor",
                                 wrap_window_manager_set_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_back",
                                 wrap_window_manager_back);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_back_to_home",
                                 wrap_window_manager_back_to_home);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_back_to",
                                 wrap_window_manager_back_to);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_resize",
                                 wrap_window_manager_resize);

  return RET_OK;
}

jsvalue_t wrap_window_base_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_base_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "window_base_t*");
  }
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_theme(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->theme);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_closable(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_number(ctx, obj->closable);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_open_anim_hint(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->open_anim_hint);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_close_anim_hint(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t argv[],
                                                      const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->close_anim_hint);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_move_focus_prev_key(const jerry_value_t func_obj_val,
                                                          const jerry_value_t this_p,
                                                          const jerry_value_t argv[],
                                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_prev_key);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_move_focus_next_key(const jerry_value_t func_obj_val,
                                                          const jerry_value_t this_p,
                                                          const jerry_value_t argv[],
                                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_next_key);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_move_focus_up_key(const jerry_value_t func_obj_val,
                                                        const jerry_value_t this_p,
                                                        const jerry_value_t argv[],
                                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_up_key);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_move_focus_down_key(const jerry_value_t func_obj_val,
                                                          const jerry_value_t this_p,
                                                          const jerry_value_t argv[],
                                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_down_key);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_move_focus_left_key(const jerry_value_t func_obj_val,
                                                          const jerry_value_t this_p,
                                                          const jerry_value_t argv[],
                                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_left_key);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_move_focus_right_key(const jerry_value_t func_obj_val,
                                                           const jerry_value_t this_p,
                                                           const jerry_value_t argv[],
                                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_right_key);
  return jret;
}

ret_t window_base_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"window_base_cast", wrap_window_base_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_theme",
                                 wrap_window_base_t_get_prop_theme);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_closable",
                                 wrap_window_base_t_get_prop_closable);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_open_anim_hint",
                                 wrap_window_base_t_get_prop_open_anim_hint);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_close_anim_hint",
                                 wrap_window_base_t_get_prop_close_anim_hint);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_move_focus_prev_key",
                                 wrap_window_base_t_get_prop_move_focus_prev_key);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_move_focus_next_key",
                                 wrap_window_base_t_get_prop_move_focus_next_key);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_move_focus_up_key",
                                 wrap_window_base_t_get_prop_move_focus_up_key);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_move_focus_down_key",
                                 wrap_window_base_t_get_prop_move_focus_down_key);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_move_focus_left_key",
                                 wrap_window_base_t_get_prop_move_focus_left_key);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_move_focus_right_key",
                                 wrap_window_base_t_get_prop_move_focus_right_key);

  return RET_OK;
}

jsvalue_t wrap_grid_item_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)grid_item_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "grid_item_t*");
  }
  return jret;
}

jsvalue_t wrap_grid_item_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)grid_item_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "grid_item_t*");
  }
  return jret;
}

ret_t grid_item_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"grid_item_create", wrap_grid_item_create);
  jerryx_handler_register_global((const jerry_char_t*)"grid_item_cast", wrap_grid_item_cast);

  return RET_OK;
}

jsvalue_t wrap_style_mutable_set_name(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)style_mutable_set_name(s, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_mutable_set_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    uint32_t val = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)style_mutable_set_int(s, state, name, val);
    TKMEM_FREE(state);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_mutable_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    style_t* ret = NULL;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    ret = (style_t*)style_mutable_cast(s);

    jret = jsvalue_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

jsvalue_t wrap_style_mutable_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    style_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    style_t* default_style = (style_t*)jsvalue_get_pointer(ctx, argv[1], "style_t*");
    ret = (style_t*)style_mutable_create(widget, default_style);

    jret = jsvalue_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

jsvalue_t wrap_style_mutable_t_get_prop_name(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  style_mutable_t* obj = (style_mutable_t*)jsvalue_get_pointer(ctx, argv[0], "style_mutable_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t style_mutable_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_set_name",
                                 wrap_style_mutable_set_name);
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_set_int",
                                 wrap_style_mutable_set_int);
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_cast",
                                 wrap_style_mutable_cast);
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_create",
                                 wrap_style_mutable_create);
  jerryx_handler_register_global((const jerry_char_t*)"style_mutable_t_get_prop_name",
                                 wrap_style_mutable_t_get_prop_name);

  return RET_OK;
}

jsvalue_t wrap_edit_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)edit_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "edit_t*");
  }
  return jret;
}

jsvalue_t wrap_edit_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)edit_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "edit_t*");
  }
  return jret;
}

jsvalue_t wrap_edit_get_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)edit_get_int(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_get_double(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    double ret = (double)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (double)edit_get_double(widget);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)edit_set_int(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_double(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double value = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)edit_set_double(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_text_limit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t min = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)edit_set_text_limit(widget, min, max);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_int_limit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t min = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    int32_t max = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    uint32_t step = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)edit_set_int_limit(widget, min, max, step);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_float_limit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double min = (double)jsvalue_get_number_value(ctx, argv[1]);
    double max = (double)jsvalue_get_number_value(ctx, argv[2]);
    double step = (double)jsvalue_get_number_value(ctx, argv[3]);
    ret = (ret_t)edit_set_float_limit(widget, min, max, step);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_readonly(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t readonly = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_readonly(widget, readonly);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_auto_fix(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_fix = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_auto_fix(widget, auto_fix);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_select_none_when_focused(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t select_none_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_select_none_when_focused(widget, select_none_when_focused);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_open_im_when_focused(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t open_im_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_open_im_when_focused(widget, open_im_when_focused);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_input_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    input_type_t type = (input_type_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)edit_set_input_type(widget, type);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_input_tips(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)edit_set_input_tips(widget, tips);
    TKMEM_FREE(tips);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_password_visible(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t password_visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_password_visible(widget, password_visible);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_focus(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_focus(widget, focus);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_cursor(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t cursor = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)edit_set_cursor(widget, cursor);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_readonly(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->readonly);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_password_visible(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->password_visible);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_auto_fix(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_fix);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_select_none_when_focused(const jerry_value_t func_obj_val,
                                                        const jerry_value_t this_p,
                                                        const jerry_value_t argv[],
                                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->select_none_when_focused);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_open_im_when_focused(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->open_im_when_focused);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_tips(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_string(ctx, obj->tips);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_input_type(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->input_type);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_min(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_max(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_step(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->step);
  return jret;
}

ret_t edit_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"edit_create", wrap_edit_create);
  jerryx_handler_register_global((const jerry_char_t*)"edit_cast", wrap_edit_cast);
  jerryx_handler_register_global((const jerry_char_t*)"edit_get_int", wrap_edit_get_int);
  jerryx_handler_register_global((const jerry_char_t*)"edit_get_double", wrap_edit_get_double);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_int", wrap_edit_set_int);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_double", wrap_edit_set_double);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_text_limit",
                                 wrap_edit_set_text_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_int_limit",
                                 wrap_edit_set_int_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_float_limit",
                                 wrap_edit_set_float_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_readonly", wrap_edit_set_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_auto_fix", wrap_edit_set_auto_fix);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_select_none_when_focused",
                                 wrap_edit_set_select_none_when_focused);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_open_im_when_focused",
                                 wrap_edit_set_open_im_when_focused);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_input_type",
                                 wrap_edit_set_input_type);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_input_tips",
                                 wrap_edit_set_input_tips);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_password_visible",
                                 wrap_edit_set_password_visible);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_focus", wrap_edit_set_focus);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_cursor", wrap_edit_set_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_readonly",
                                 wrap_edit_t_get_prop_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_password_visible",
                                 wrap_edit_t_get_prop_password_visible);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_auto_fix",
                                 wrap_edit_t_get_prop_auto_fix);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_select_none_when_focused",
                                 wrap_edit_t_get_prop_select_none_when_focused);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_open_im_when_focused",
                                 wrap_edit_t_get_prop_open_im_when_focused);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_tips",
                                 wrap_edit_t_get_prop_tips);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_input_type",
                                 wrap_edit_t_get_prop_input_type);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_min",
                                 wrap_edit_t_get_prop_min);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_max",
                                 wrap_edit_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_step",
                                 wrap_edit_t_get_prop_step);

  return RET_OK;
}

jsvalue_t wrap_image_base_set_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_base_set_image(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_rotation(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t rotation = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_base_set_rotation(widget, rotation);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_scale(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t scale_x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t scale_y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)image_base_set_scale(widget, scale_x, scale_y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_anchor(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t anchor_x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t anchor_y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)image_base_set_anchor(widget, anchor_x, anchor_y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_selected(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t selected = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_base_set_selected(widget, selected);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_selectable(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t selectable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_base_set_selectable(widget, selectable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_clickable(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t clickable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_base_set_clickable(widget, clickable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)image_base_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "image_base_t*");
  }
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_image(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_anchor_x(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_anchor_y(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_scale_x(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->scale_x);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_scale_y(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->scale_y);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_rotation(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->rotation);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_clickable(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->clickable);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_selectable(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->selectable);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_selected(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->selected);
  return jret;
}

ret_t image_base_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"image_base_set_image",
                                 wrap_image_base_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_set_rotation",
                                 wrap_image_base_set_rotation);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_set_scale",
                                 wrap_image_base_set_scale);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_set_anchor",
                                 wrap_image_base_set_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_set_selected",
                                 wrap_image_base_set_selected);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_set_selectable",
                                 wrap_image_base_set_selectable);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_set_clickable",
                                 wrap_image_base_set_clickable);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_cast", wrap_image_base_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_image",
                                 wrap_image_base_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_anchor_x",
                                 wrap_image_base_t_get_prop_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_anchor_y",
                                 wrap_image_base_t_get_prop_anchor_y);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_scale_x",
                                 wrap_image_base_t_get_prop_scale_x);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_scale_y",
                                 wrap_image_base_t_get_prop_scale_y);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_rotation",
                                 wrap_image_base_t_get_prop_rotation);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_clickable",
                                 wrap_image_base_t_get_prop_clickable);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_selectable",
                                 wrap_image_base_t_get_prop_selectable);
  jerryx_handler_register_global((const jerry_char_t*)"image_base_t_get_prop_selected",
                                 wrap_image_base_t_get_prop_selected);

  return RET_OK;
}

jsvalue_t wrap_window_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    window_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (window_event_t*)window_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "window_event_t*");
  }
  return jret;
}

jsvalue_t wrap_window_event_t_get_prop_window(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_event_t* obj = (window_event_t*)jsvalue_get_pointer(ctx, argv[0], "window_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->window, "widget_t*");
  return jret;
}

ret_t window_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"window_event_cast", wrap_window_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_event_t_get_prop_window",
                                 wrap_window_event_t_get_prop_window);

  return RET_OK;
}

jsvalue_t wrap_paint_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    paint_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (paint_event_t*)paint_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "paint_event_t*");
  }
  return jret;
}

jsvalue_t wrap_paint_event_t_get_prop_c(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  paint_event_t* obj = (paint_event_t*)jsvalue_get_pointer(ctx, argv[0], "paint_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->c, "canvas_t*");
  return jret;
}

ret_t paint_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"paint_event_cast", wrap_paint_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"paint_event_t_get_prop_c",
                                 wrap_paint_event_t_get_prop_c);

  return RET_OK;
}

jsvalue_t wrap_key_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    key_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (key_event_t*)key_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "key_event_t*");
  }
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_key(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_int(ctx, obj->key);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_alt(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lalt(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lalt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_ralt(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ralt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_ctrl(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lctrl(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_rctrl(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->rctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_shift(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lshift(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lshift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_rshift(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->rshift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_cmd(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->cmd);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_menu(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->menu);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_capslock(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->capslock);
  return jret;
}

ret_t key_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"key_event_cast", wrap_key_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_key",
                                 wrap_key_event_t_get_prop_key);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_alt",
                                 wrap_key_event_t_get_prop_alt);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_lalt",
                                 wrap_key_event_t_get_prop_lalt);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_ralt",
                                 wrap_key_event_t_get_prop_ralt);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_ctrl",
                                 wrap_key_event_t_get_prop_ctrl);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_lctrl",
                                 wrap_key_event_t_get_prop_lctrl);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_rctrl",
                                 wrap_key_event_t_get_prop_rctrl);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_shift",
                                 wrap_key_event_t_get_prop_shift);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_lshift",
                                 wrap_key_event_t_get_prop_lshift);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_rshift",
                                 wrap_key_event_t_get_prop_rshift);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_cmd",
                                 wrap_key_event_t_get_prop_cmd);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_menu",
                                 wrap_key_event_t_get_prop_menu);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_capslock",
                                 wrap_key_event_t_get_prop_capslock);

  return RET_OK;
}

jsvalue_t wrap_pointer_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    pointer_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (pointer_event_t*)pointer_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "pointer_event_t*");
  }
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_x(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_y(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_button(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->button);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_pressed(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->pressed);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_alt(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_ctrl(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_cmd(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->cmd);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_menu(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->menu);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_shift(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

ret_t pointer_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_cast",
                                 wrap_pointer_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_x",
                                 wrap_pointer_event_t_get_prop_x);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_y",
                                 wrap_pointer_event_t_get_prop_y);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_button",
                                 wrap_pointer_event_t_get_prop_button);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_pressed",
                                 wrap_pointer_event_t_get_prop_pressed);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_alt",
                                 wrap_pointer_event_t_get_prop_alt);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_ctrl",
                                 wrap_pointer_event_t_get_prop_ctrl);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_cmd",
                                 wrap_pointer_event_t_get_prop_cmd);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_menu",
                                 wrap_pointer_event_t_get_prop_menu);
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_shift",
                                 wrap_pointer_event_t_get_prop_shift);

  return RET_OK;
}

jsvalue_t wrap_orientation_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    orientation_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (orientation_event_t*)orientation_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "orientation_event_t*");
  }
  return jret;
}

jsvalue_t wrap_orientation_event_t_get_prop_orientation(const jerry_value_t func_obj_val,
                                                        const jerry_value_t this_p,
                                                        const jerry_value_t argv[],
                                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  orientation_event_t* obj =
      (orientation_event_t*)jsvalue_get_pointer(ctx, argv[0], "orientation_event_t*");

  jret = jsvalue_create_int(ctx, obj->orientation);
  return jret;
}

ret_t orientation_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"orientation_event_cast",
                                 wrap_orientation_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"orientation_event_t_get_prop_orientation",
                                 wrap_orientation_event_t_get_prop_orientation);

  return RET_OK;
}

jsvalue_t wrap_wheel_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    wheel_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (wheel_event_t*)wheel_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "wheel_event_t*");
  }
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_dy(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_int(ctx, obj->dy);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_alt(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_ctrl(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_shift(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

ret_t wheel_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_cast", wrap_wheel_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_dy",
                                 wrap_wheel_event_t_get_prop_dy);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_alt",
                                 wrap_wheel_event_t_get_prop_alt);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_ctrl",
                                 wrap_wheel_event_t_get_prop_ctrl);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_shift",
                                 wrap_wheel_event_t_get_prop_shift);

  return RET_OK;
}

jsvalue_t wrap_app_bar_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)app_bar_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "app_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_app_bar_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)app_bar_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "app_bar_t*");
  }
  return jret;
}

ret_t app_bar_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"app_bar_create", wrap_app_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"app_bar_cast", wrap_app_bar_cast);

  return RET_OK;
}

jsvalue_t wrap_button_group_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)button_group_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_button_group_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)button_group_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "button_group_t*");
  }
  return jret;
}

ret_t button_group_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"button_group_create",
                                 wrap_button_group_create);
  jerryx_handler_register_global((const jerry_char_t*)"button_group_cast", wrap_button_group_cast);

  return RET_OK;
}

jsvalue_t wrap_button_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)button_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "button_t*");
  }
  return jret;
}

jsvalue_t wrap_button_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)button_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "button_t*");
  }
  return jret;
}

jsvalue_t wrap_button_set_repeat(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t repeat = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)button_set_repeat(widget, repeat);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_button_set_enable_long_press(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t enable_long_press = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)button_set_enable_long_press(widget, enable_long_press);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_button_t_get_prop_repeat(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_int(ctx, obj->repeat);
  return jret;
}

jsvalue_t wrap_button_t_get_prop_enable_long_press(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_bool(ctx, obj->enable_long_press);
  return jret;
}

ret_t button_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"button_create", wrap_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"button_cast", wrap_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"button_set_repeat", wrap_button_set_repeat);
  jerryx_handler_register_global((const jerry_char_t*)"button_set_enable_long_press",
                                 wrap_button_set_enable_long_press);
  jerryx_handler_register_global((const jerry_char_t*)"button_t_get_prop_repeat",
                                 wrap_button_t_get_prop_repeat);
  jerryx_handler_register_global((const jerry_char_t*)"button_t_get_prop_enable_long_press",
                                 wrap_button_t_get_prop_enable_long_press);

  return RET_OK;
}

jsvalue_t wrap_dragger_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dragger_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "dragger_t*");
  }
  return jret;
}

jsvalue_t wrap_dragger_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dragger_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "dragger_t*");
  }
  return jret;
}

jsvalue_t wrap_dragger_set_range(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x_min = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y_min = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    xy_t x_max = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
    xy_t y_max = (xy_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (ret_t)dragger_set_range(widget, x_min, y_min, x_max, y_max);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_x_min(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->x_min);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_y_min(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->y_min);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_x_max(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->x_max);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_y_max(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->y_max);
  return jret;
}

ret_t dragger_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"dragger_create", wrap_dragger_create);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_cast", wrap_dragger_cast);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_set_range", wrap_dragger_set_range);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_t_get_prop_x_min",
                                 wrap_dragger_t_get_prop_x_min);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_t_get_prop_y_min",
                                 wrap_dragger_t_get_prop_y_min);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_t_get_prop_x_max",
                                 wrap_dragger_t_get_prop_x_max);
  jerryx_handler_register_global((const jerry_char_t*)"dragger_t_get_prop_y_max",
                                 wrap_dragger_t_get_prop_y_max);

  return RET_OK;
}

jsvalue_t wrap_check_button_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)check_button_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_create_radio(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)check_button_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_check_button_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)check_button_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_t_get_prop_value(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  check_button_t* obj = (check_button_t*)jsvalue_get_pointer(ctx, argv[0], "check_button_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

ret_t check_button_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"check_button_create",
                                 wrap_check_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"check_button_create_radio",
                                 wrap_check_button_create_radio);
  jerryx_handler_register_global((const jerry_char_t*)"check_button_set_value",
                                 wrap_check_button_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"check_button_cast", wrap_check_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"check_button_t_get_prop_value",
                                 wrap_check_button_t_get_prop_value);

  return RET_OK;
}

jsvalue_t wrap_clip_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)clip_view_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "clip_view_t*");
  }
  return jret;
}

jsvalue_t wrap_clip_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)clip_view_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "clip_view_t*");
  }
  return jret;
}

ret_t clip_view_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"clip_view_create", wrap_clip_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"clip_view_cast", wrap_clip_view_cast);

  return RET_OK;
}

jsvalue_t wrap_color_tile_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)color_tile_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "color_tile_t*");
  }
  return jret;
}

jsvalue_t wrap_color_tile_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)color_tile_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "color_tile_t*");
  }
  return jret;
}

jsvalue_t wrap_color_tile_set_bg_color(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)color_tile_set_bg_color(widget, color);
    TKMEM_FREE(color);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_tile_t_get_prop_bg_color(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = jsvalue_create_string(ctx, obj->bg_color);
  return jret;
}

jsvalue_t wrap_color_tile_t_get_prop_border_color(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = jsvalue_create_string(ctx, obj->border_color);
  return jret;
}

ret_t color_tile_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_create", wrap_color_tile_create);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_cast", wrap_color_tile_cast);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_set_bg_color",
                                 wrap_color_tile_set_bg_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_t_get_prop_bg_color",
                                 wrap_color_tile_t_get_prop_bg_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_t_get_prop_border_color",
                                 wrap_color_tile_t_get_prop_border_color);

  return RET_OK;
}

jsvalue_t wrap_column_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)column_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "column_t*");
  }
  return jret;
}

jsvalue_t wrap_column_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)column_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "column_t*");
  }
  return jret;
}

ret_t column_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"column_create", wrap_column_create);
  jerryx_handler_register_global((const jerry_char_t*)"column_cast", wrap_column_cast);

  return RET_OK;
}

jsvalue_t wrap_combo_box_item_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "combo_box_item_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)combo_box_item_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "combo_box_item_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_set_checked(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t checked = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)combo_box_item_set_checked(widget, checked);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_set_value(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)combo_box_item_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_t_get_prop_value(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t argv[],
                                               const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_combo_box_item_t_get_prop_checked(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = jsvalue_create_bool(ctx, obj->checked);
  return jret;
}

ret_t combo_box_item_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_create",
                                 wrap_combo_box_item_create);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_cast",
                                 wrap_combo_box_item_cast);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_set_checked",
                                 wrap_combo_box_item_set_checked);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_set_value",
                                 wrap_combo_box_item_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_t_get_prop_value",
                                 wrap_combo_box_item_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_t_get_prop_checked",
                                 wrap_combo_box_item_t_get_prop_checked);

  return RET_OK;
}

jsvalue_t wrap_digit_clock_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)digit_clock_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "digit_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_digit_clock_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)digit_clock_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "digit_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_digit_clock_set_format(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)digit_clock_set_format(widget, format);
    TKMEM_FREE(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_digit_clock_t_get_prop_format(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p, const jerry_value_t argv[],
                                             const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  digit_clock_t* obj = (digit_clock_t*)jsvalue_get_pointer(ctx, argv[0], "digit_clock_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

ret_t digit_clock_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"digit_clock_create",
                                 wrap_digit_clock_create);
  jerryx_handler_register_global((const jerry_char_t*)"digit_clock_cast", wrap_digit_clock_cast);
  jerryx_handler_register_global((const jerry_char_t*)"digit_clock_set_format",
                                 wrap_digit_clock_set_format);
  jerryx_handler_register_global((const jerry_char_t*)"digit_clock_t_get_prop_format",
                                 wrap_digit_clock_t_get_prop_format);

  return RET_OK;
}

jsvalue_t wrap_dialog_client_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dialog_client_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "dialog_client_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_client_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_client_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "dialog_client_t*");
  }
  return jret;
}

ret_t dialog_client_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"dialog_client_create",
                                 wrap_dialog_client_create);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_client_cast",
                                 wrap_dialog_client_cast);

  return RET_OK;
}

jsvalue_t wrap_dialog_title_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dialog_title_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "dialog_title_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_title_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_title_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "dialog_title_t*");
  }
  return jret;
}

ret_t dialog_title_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"dialog_title_create",
                                 wrap_dialog_title_create);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_title_cast", wrap_dialog_title_cast);

  return RET_OK;
}

jsvalue_t wrap_object_default_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    object_t* ret = NULL;
    ret = (object_t*)object_default_create();

    jret = jsvalue_create_object(ctx, ret, "object_default_t*", &s_object_default_unref_info);
  }
  return jret;
}

jsvalue_t wrap_object_default_clear_props(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    ret = (ret_t)object_default_clear_props(obj);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_default_t_get_prop_props_size(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t argv[],
                                                    const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  object_default_t* obj = (object_default_t*)jsvalue_get_pointer(ctx, argv[0], "object_default_t*");

  jret = jsvalue_create_int(ctx, obj->props_size);
  return jret;
}

ret_t object_default_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"object_default_create",
                                 wrap_object_default_create);
  jerryx_handler_register_global((const jerry_char_t*)"object_default_clear_props",
                                 wrap_object_default_clear_props);
  jerryx_handler_register_global((const jerry_char_t*)"object_default_t_get_prop_props_size",
                                 wrap_object_default_t_get_prop_props_size);

  return RET_OK;
}

jsvalue_t wrap_combo_box_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)combo_box_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "combo_box_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)combo_box_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "combo_box_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_open_window(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* open_window = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)combo_box_set_open_window(widget, open_window);
    TKMEM_FREE(open_window);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_reset_options(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)combo_box_reset_options(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_count_options(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)combo_box_count_options(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_selected_index(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)combo_box_set_selected_index(widget, index);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_localize_options(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t argv[],
                                              const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t localize_options = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)combo_box_set_localize_options(widget, localize_options);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)combo_box_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_item_height(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t item_height = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)combo_box_set_item_height(widget, item_height);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_append_option(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)combo_box_append_option(widget, value, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_options(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* options = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)combo_box_set_options(widget, options);
    TKMEM_FREE(options);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_get_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)combo_box_get_value(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_get_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const char*)combo_box_get_text(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_open_window(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_string(ctx, obj->open_window);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_selected_index(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t argv[],
                                                   const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->selected_index);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_value(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_localize_options(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t argv[],
                                                     const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_bool(ctx, obj->localize_options);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_options(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_string(ctx, obj->options);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_item_height(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t argv[],
                                                const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->item_height);
  return jret;
}

ret_t combo_box_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_create", wrap_combo_box_create);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_cast", wrap_combo_box_cast);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_open_window",
                                 wrap_combo_box_set_open_window);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_reset_options",
                                 wrap_combo_box_reset_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_count_options",
                                 wrap_combo_box_count_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_selected_index",
                                 wrap_combo_box_set_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_localize_options",
                                 wrap_combo_box_set_localize_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_value",
                                 wrap_combo_box_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_item_height",
                                 wrap_combo_box_set_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_append_option",
                                 wrap_combo_box_append_option);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_set_options",
                                 wrap_combo_box_set_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_get_value",
                                 wrap_combo_box_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_get_text",
                                 wrap_combo_box_get_text);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_open_window",
                                 wrap_combo_box_t_get_prop_open_window);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_selected_index",
                                 wrap_combo_box_t_get_prop_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_value",
                                 wrap_combo_box_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_localize_options",
                                 wrap_combo_box_t_get_prop_localize_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_options",
                                 wrap_combo_box_t_get_prop_options);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_item_height",
                                 wrap_combo_box_t_get_prop_item_height);

  return RET_OK;
}

jsvalue_t wrap_window_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)window_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_create_default(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    widget_t* ret = NULL;
    ret = (widget_t*)window_create_default();

    jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_set_fullscreen(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t fullscreen = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)window_set_fullscreen(widget, fullscreen);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_open(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    ret = (widget_t*)window_open(name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_open_and_close(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    widget_t* to_close = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
    ret = (widget_t*)window_open_and_close(name, to_close);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_close(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_close(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_close_force(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_close_force(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_t_get_prop_fullscreen(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p, const jerry_value_t argv[],
                                            const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_t* obj = (window_t*)jsvalue_get_pointer(ctx, argv[0], "window_t*");

  jret = jsvalue_create_bool(ctx, obj->fullscreen);
  return jret;
}

ret_t window_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"window_create", wrap_window_create);
  jerryx_handler_register_global((const jerry_char_t*)"window_create_default",
                                 wrap_window_create_default);
  jerryx_handler_register_global((const jerry_char_t*)"window_set_fullscreen",
                                 wrap_window_set_fullscreen);
  jerryx_handler_register_global((const jerry_char_t*)"window_open", wrap_window_open);
  jerryx_handler_register_global((const jerry_char_t*)"window_open_and_close",
                                 wrap_window_open_and_close);
  jerryx_handler_register_global((const jerry_char_t*)"window_close", wrap_window_close);
  jerryx_handler_register_global((const jerry_char_t*)"window_close_force",
                                 wrap_window_close_force);
  jerryx_handler_register_global((const jerry_char_t*)"window_cast", wrap_window_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_t_get_prop_fullscreen",
                                 wrap_window_t_get_prop_fullscreen);

  return RET_OK;
}

jsvalue_t wrap_timer_info_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    timer_info_t* ret = NULL;
    timer_info_t* timer = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");
    ret = (timer_info_t*)timer_info_cast(timer);

    jret = jsvalue_create_pointer(ctx, ret, "timer_info_t*");
  }
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_ctx(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_id(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_int(ctx, obj->id);
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_now(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t argv[],
                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_int(ctx, obj->now);
  return jret;
}

ret_t timer_info_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"timer_info_cast", wrap_timer_info_cast);
  jerryx_handler_register_global((const jerry_char_t*)"timer_info_t_get_prop_ctx",
                                 wrap_timer_info_t_get_prop_ctx);
  jerryx_handler_register_global((const jerry_char_t*)"timer_info_t_get_prop_id",
                                 wrap_timer_info_t_get_prop_id);
  jerryx_handler_register_global((const jerry_char_t*)"timer_info_t_get_prop_now",
                                 wrap_timer_info_t_get_prop_now);

  return RET_OK;
}

jsvalue_t wrap_image_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)image_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "image_t*");
  }
  return jret;
}

jsvalue_t wrap_image_set_draw_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)image_set_draw_type(widget, draw_type);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)image_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "image_t*");
  }
  return jret;
}

jsvalue_t wrap_image_t_get_prop_draw_type(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_t* obj = (image_t*)jsvalue_get_pointer(ctx, argv[0], "image_t*");

  jret = jsvalue_create_number(ctx, obj->draw_type);
  return jret;
}

ret_t image_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"image_create", wrap_image_create);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_draw_type",
                                 wrap_image_set_draw_type);
  jerryx_handler_register_global((const jerry_char_t*)"image_cast", wrap_image_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_t_get_prop_draw_type",
                                 wrap_image_t_get_prop_draw_type);

  return RET_OK;
}

jsvalue_t wrap_gif_image_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)gif_image_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "gif_image_t*");
  }
  return jret;
}

jsvalue_t wrap_gif_image_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)gif_image_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "gif_image_t*");
  }
  return jret;
}

ret_t gif_image_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_create", wrap_gif_image_create);
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_cast", wrap_gif_image_cast);

  return RET_OK;
}

jsvalue_t wrap_keyboard_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)keyboard_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "keyboard_t*");
  }
  return jret;
}

jsvalue_t wrap_keyboard_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)keyboard_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "keyboard_t*");
  }
  return jret;
}

ret_t keyboard_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"keyboard_create", wrap_keyboard_create);
  jerryx_handler_register_global((const jerry_char_t*)"keyboard_cast", wrap_keyboard_cast);

  return RET_OK;
}

jsvalue_t wrap_popup_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)popup_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "popup_t*");
  }
  return jret;
}

jsvalue_t wrap_popup_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)popup_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "popup_t*");
  }
  return jret;
}

jsvalue_t wrap_popup_set_close_when_click(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t argv[],
                                          const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t close_when_click = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)popup_set_close_when_click(widget, close_when_click);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_popup_set_close_when_click_outside(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t close_when_click_outside = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_popup_t_get_prop_close_when_click(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t argv[],
                                                 const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_bool(ctx, obj->close_when_click);
  return jret;
}

jsvalue_t wrap_popup_t_get_prop_close_when_click_outside(const jerry_value_t func_obj_val,
                                                         const jerry_value_t this_p,
                                                         const jerry_value_t argv[],
                                                         const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_bool(ctx, obj->close_when_click_outside);
  return jret;
}

ret_t popup_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"popup_create", wrap_popup_create);
  jerryx_handler_register_global((const jerry_char_t*)"popup_cast", wrap_popup_cast);
  jerryx_handler_register_global((const jerry_char_t*)"popup_set_close_when_click",
                                 wrap_popup_set_close_when_click);
  jerryx_handler_register_global((const jerry_char_t*)"popup_set_close_when_click_outside",
                                 wrap_popup_set_close_when_click_outside);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_click",
                                 wrap_popup_t_get_prop_close_when_click);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_click_outside",
                                 wrap_popup_t_get_prop_close_when_click_outside);

  return RET_OK;
}

jsvalue_t wrap_calibration_win_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)calibration_win_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "calibration_win_t*");
  }
  return jret;
}

ret_t calibration_win_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"calibration_win_cast",
                                 wrap_calibration_win_cast);

  return RET_OK;
}

jsvalue_t wrap_object_array_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    object_t* ret = NULL;
    ret = (object_t*)object_array_create();

    jret = jsvalue_create_object(ctx, ret, "object_array_t*", &s_object_array_unref_info);
  }
  return jret;
}

jsvalue_t wrap_object_array_clear_props(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    ret = (ret_t)object_array_clear_props(obj);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_array_t_get_prop_props_size(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t argv[],
                                                  const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  object_array_t* obj = (object_array_t*)jsvalue_get_pointer(ctx, argv[0], "object_array_t*");

  jret = jsvalue_create_int(ctx, obj->props_size);
  return jret;
}

ret_t object_array_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"object_array_create",
                                 wrap_object_array_create);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_clear_props",
                                 wrap_object_array_clear_props);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_t_get_prop_props_size",
                                 wrap_object_array_t_get_prop_props_size);

  return RET_OK;
}

ret_t mutable_image_t_init(JSContext* ctx) {
  return RET_OK;
}

jsvalue_t wrap_spin_box_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)spin_box_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "spin_box_t*");
  }
  return jret;
}

jsvalue_t wrap_spin_box_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)spin_box_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "spin_box_t*");
  }
  return jret;
}

ret_t spin_box_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"spin_box_create", wrap_spin_box_create);
  jerryx_handler_register_global((const jerry_char_t*)"spin_box_cast", wrap_spin_box_cast);

  return RET_OK;
}

jsvalue_t wrap_system_bar_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)system_bar_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "system_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_system_bar_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)system_bar_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "system_bar_t*");
  }
  return jret;
}

ret_t system_bar_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"system_bar_create", wrap_system_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"system_bar_cast", wrap_system_bar_cast);

  return RET_OK;
}

jsvalue_t wrap_idle_info_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    idle_info_t* ret = NULL;
    idle_info_t* idle = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");
    ret = (idle_info_t*)idle_info_cast(idle);

    jret = jsvalue_create_pointer(ctx, ret, "idle_info_t*");
  }
  return jret;
}

jsvalue_t wrap_idle_info_t_get_prop_ctx(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t argv[],
                                        const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

jsvalue_t wrap_idle_info_t_get_prop_id(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = jsvalue_create_int(ctx, obj->id);
  return jret;
}

ret_t idle_info_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"idle_info_cast", wrap_idle_info_cast);
  jerryx_handler_register_global((const jerry_char_t*)"idle_info_t_get_prop_ctx",
                                 wrap_idle_info_t_get_prop_ctx);
  jerryx_handler_register_global((const jerry_char_t*)"idle_info_t_get_prop_id",
                                 wrap_idle_info_t_get_prop_id);

  return RET_OK;
}

jsvalue_t wrap_svg_image_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)svg_image_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "svg_image_t*");
  }
  return jret;
}

jsvalue_t wrap_svg_image_set_image(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)svg_image_set_image(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_svg_image_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)svg_image_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "svg_image_t*");
  }
  return jret;
}

ret_t svg_image_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"svg_image_create", wrap_svg_image_create);
  jerryx_handler_register_global((const jerry_char_t*)"svg_image_set_image",
                                 wrap_svg_image_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"svg_image_cast", wrap_svg_image_cast);

  return RET_OK;
}

jsvalue_t wrap_dialog_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dialog_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_create_simple(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_get_title(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_get_title(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_get_client(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_get_client(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_open(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    ret = (widget_t*)dialog_open(name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_set_title(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* title = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)dialog_set_title(widget, title);
    TKMEM_FREE(title);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_modal(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    dialog_quit_code_t ret = (dialog_quit_code_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (dialog_quit_code_t)dialog_modal(widget);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_quit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t code = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)dialog_quit(widget, code);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_is_quited(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)dialog_is_quited(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_is_modal(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)dialog_is_modal(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_toast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)dialog_toast(text, duration);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_info(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)dialog_info(title, text);
    TKMEM_FREE(title);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_warn(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)dialog_warn(title, text);
    TKMEM_FREE(title);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_confirm(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)dialog_confirm(title, text);
    TKMEM_FREE(title);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_t_get_prop_highlight(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t argv[],
                                           const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  dialog_t* obj = (dialog_t*)jsvalue_get_pointer(ctx, argv[0], "dialog_t*");

  jret = jsvalue_create_string(ctx, obj->highlight);
  return jret;
}

ret_t dialog_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"dialog_create", wrap_dialog_create);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_create_simple",
                                 wrap_dialog_create_simple);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_cast", wrap_dialog_cast);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_get_title", wrap_dialog_get_title);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_get_client", wrap_dialog_get_client);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_open", wrap_dialog_open);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_set_title", wrap_dialog_set_title);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_modal", wrap_dialog_modal);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_quit", wrap_dialog_quit);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_is_quited", wrap_dialog_is_quited);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_is_modal", wrap_dialog_is_modal);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_toast", wrap_dialog_toast);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_info", wrap_dialog_info);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_warn", wrap_dialog_warn);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_confirm", wrap_dialog_confirm);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_t_get_prop_highlight",
                                 wrap_dialog_t_get_prop_highlight);

  return RET_OK;
}

jsvalue_t wrap_combo_box_ex_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t argv[], const jerry_length_t argc) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)combo_box_ex_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "combo_box_ex_t*");
  }
  return jret;
}

ret_t combo_box_ex_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_ex_create",
                                 wrap_combo_box_ex_create);

  return RET_OK;
}

ret_t awtk_js_init(JSContext* ctx) {
  event_t_init(ctx);
  rect_t_init(ctx);
  pointf_t_init(ctx);
  point_t_init(ctx);
  emitter_t_init(ctx);
  bitmap_t_init(ctx);
  value_t_init(ctx);
  object_t_init(ctx);
  global_t_init(ctx);
  dialog_quit_code_t_init(ctx);
  event_type_t_init(ctx);
  font_manager_t_init(ctx);
  glyph_format_t_init(ctx);
  idle_t_init(ctx);
  image_manager_t_init(ctx);
  input_type_t_init(ctx);
  value_type_t_init(ctx);
  input_method_t_init(ctx);
  key_code_t_init(ctx);
  locale_info_t_init(ctx);
  style_id_t_init(ctx);
  style_t_init(ctx);
  theme_t_init(ctx);
  timer_t_init(ctx);
  align_v_t_init(ctx);
  align_h_t_init(ctx);
  app_type_t_init(ctx);
  bitmap_format_t_init(ctx);
  bitmap_flag_t_init(ctx);
  vgcanvas_t_init(ctx);
  widget_prop_t_init(ctx);
  widget_type_t_init(ctx);
  window_stage_t_init(ctx);
  window_closable_t_init(ctx);
  widget_state_t_init(ctx);
  widget_t_init(ctx);
  ret_t_init(ctx);
  timer_manager_t_init(ctx);
  time_now_t_init(ctx);
  image_draw_type_t_init(ctx);
  canvas_t_init(ctx);
  named_value_t_init(ctx);
  MIME_TYPE_init(ctx);
  idle_manager_t_init(ctx);
  indicator_default_paint_t_init(ctx);
  clip_board_data_type_t_init(ctx);
  clip_board_t_init(ctx);
  easing_type_t_init(ctx);
  date_time_t_init(ctx);
  color_t_init(ctx);
  asset_info_t_init(ctx);
  asset_type_t_init(ctx);
  assets_manager_t_init(ctx);
  color_component_t_init(ctx);
  time_clock_t_init(ctx);
  text_selector_t_init(ctx);
  switch_t_init(ctx);
  view_t_init(ctx);
  prop_change_event_t_init(ctx);
  progress_event_t_init(ctx);
  slide_view_t_init(ctx);
  slide_indicator_t_init(ctx);
  slide_menu_t_init(ctx);
  scroll_view_t_init(ctx);
  scroll_bar_t_init(ctx);
  list_view_t_init(ctx);
  tab_control_t_init(ctx);
  list_view_h_t_init(ctx);
  list_item_t_init(ctx);
  tab_button_t_init(ctx);
  tab_button_group_t_init(ctx);
  hscroll_label_t_init(ctx);
  rich_text_t_init(ctx);
  progress_circle_t_init(ctx);
  slider_t_init(ctx);
  mledit_t_init(ctx);
  line_number_t_init(ctx);
  row_t_init(ctx);
  progress_bar_t_init(ctx);
  pages_t_init(ctx);
  overlay_t_init(ctx);
  candidates_t_init(ctx);
  image_value_t_init(ctx);
  image_animation_t_init(ctx);
  guage_t_init(ctx);
  guage_pointer_t_init(ctx);
  label_t_init(ctx);
  file_chooser_t_init(ctx);
  file_browser_view_t_init(ctx);
  draggable_t_init(ctx);
  color_picker_t_init(ctx);
  canvas_widget_t_init(ctx);
  group_box_t_init(ctx);
  grid_t_init(ctx);
  window_manager_t_init(ctx);
  window_base_t_init(ctx);
  grid_item_t_init(ctx);
  style_mutable_t_init(ctx);
  edit_t_init(ctx);
  image_base_t_init(ctx);
  window_event_t_init(ctx);
  paint_event_t_init(ctx);
  key_event_t_init(ctx);
  pointer_event_t_init(ctx);
  orientation_event_t_init(ctx);
  wheel_event_t_init(ctx);
  app_bar_t_init(ctx);
  button_group_t_init(ctx);
  button_t_init(ctx);
  dragger_t_init(ctx);
  check_button_t_init(ctx);
  clip_view_t_init(ctx);
  color_tile_t_init(ctx);
  column_t_init(ctx);
  combo_box_item_t_init(ctx);
  digit_clock_t_init(ctx);
  dialog_client_t_init(ctx);
  dialog_title_t_init(ctx);
  object_default_t_init(ctx);
  combo_box_t_init(ctx);
  window_t_init(ctx);
  timer_info_t_init(ctx);
  image_t_init(ctx);
  gif_image_t_init(ctx);
  keyboard_t_init(ctx);
  popup_t_init(ctx);
  calibration_win_t_init(ctx);
  object_array_t_init(ctx);
  mutable_image_t_init(ctx);
  spin_box_t_init(ctx);
  system_bar_t_init(ctx);
  idle_info_t_init(ctx);
  svg_image_t_init(ctx);
  dialog_t_init(ctx);
  combo_box_ex_t_init(ctx);

  return RET_OK;
}
