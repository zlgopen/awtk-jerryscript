/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "jerry_script_helper.h"
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include "tkc/emitter.h"
#include "tkc/rect.h"
#include "base/bitmap.h"
#include "tkc/object.h"
#include "tkc/value.h"
#include "src/awtk_global.h"
#include "base/bidi.h"
#include "base/canvas_offline.h"
#include "base/canvas.h"
#include "base/clip_board.h"
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
#include "conf_io/app_conf.h"
#include "ext_widgets/ext_widgets.h"
#include "slide_view/slide_indicator.h"
#include "vpage/vpage.h"
#include "tkc/asset_info.h"
#include "tkc/color.h"
#include "tkc/date_time.h"
#include "tkc/easing.h"
#include "tkc/idle_manager.h"
#include "tkc/mime_types.h"
#include "tkc/named_value.h"
#include "tkc/rlog.h"
#include "tkc/time_now.h"
#include "tkc/timer_manager.h"
#include "tkc/types_def.h"
#include "base/assets_manager.h"
#include "base/image_base.h"
#include "base/style_mutable.h"
#include "base/window_base.h"
#include "base/window_manager.h"
#include "canvas_widget/canvas_widget.h"
#include "color_picker/color_component.h"
#include "color_picker/color_picker.h"
#include "features/draggable.h"
#include "file_browser/file_browser_view.h"
#include "file_browser/file_chooser.h"
#include "gauge/gauge_pointer.h"
#include "gauge/gauge.h"
#include "image_animation/image_animation.h"
#include "image_value/image_value.h"
#include "keyboard/candidates.h"
#include "keyboard/lang_indicator.h"
#include "mledit/line_number.h"
#include "mledit/mledit.h"
#include "progress_circle/progress_circle.h"
#include "rich_text/rich_text_view.h"
#include "rich_text/rich_text.h"
#include "scroll_label/hscroll_label.h"
#include "scroll_view/list_item.h"
#include "scroll_view/list_view_h.h"
#include "scroll_view/list_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/scroll_view.h"
#include "slide_menu/slide_menu.h"
#include "slide_view/slide_view.h"
#include "switch/switch.h"
#include "text_selector/text_selector.h"
#include "time_clock/time_clock.h"
#include "tkc/event.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/check_button.h"
#include "widgets/clip_view.h"
#include "widgets/color_tile.h"
#include "widgets/column.h"
#include "widgets/combo_box_item.h"
#include "widgets/dialog_client.h"
#include "widgets/dialog_title.h"
#include "widgets/digit_clock.h"
#include "widgets/dragger.h"
#include "widgets/edit.h"
#include "widgets/grid_item.h"
#include "widgets/grid.h"
#include "widgets/group_box.h"
#include "widgets/label.h"
#include "widgets/pages.h"
#include "widgets/progress_bar.h"
#include "widgets/row.h"
#include "widgets/slider.h"
#include "widgets/tab_button_group.h"
#include "widgets/tab_button.h"
#include "widgets/tab_control.h"
#include "widgets/view.h"
#include "base/native_window.h"
#include "base/window.h"
#include "gif_image/gif_image.h"
#include "keyboard/keyboard.h"
#include "mutable_image/mutable_image.h"
#include "svg_image/svg_image.h"
#include "tkc/idle_info.h"
#include "tkc/object_array.h"
#include "tkc/object_default.h"
#include "tkc/timer_info.h"
#include "widgets/calibration_win.h"
#include "widgets/combo_box.h"
#include "widgets/image.h"
#include "widgets/overlay.h"
#include "widgets/popup.h"
#include "widgets/spin_box.h"
#include "widgets/system_bar.h"
#include "combo_box_ex/combo_box_ex.h"
#include "custom.c"

static jerry_object_native_info_t s_emitter_destroy_info = {
    (jerry_object_native_free_callback_t)emitter_destroy};
static jerry_object_native_info_t s_rect_destroy_info = {
    (jerry_object_native_free_callback_t)rect_destroy};
static jerry_object_native_info_t s_bitmap_destroy_with_self_info = {
    (jerry_object_native_free_callback_t)bitmap_destroy_with_self};
static jerry_object_native_info_t s_object_unref_info = {
    (jerry_object_native_free_callback_t)object_unref};
static jerry_object_native_info_t s_value_destroy_info = {
    (jerry_object_native_free_callback_t)value_destroy};
static jerry_object_native_info_t s_event_destroy_info = {
    (jerry_object_native_free_callback_t)event_destroy};
static jerry_object_native_info_t s_color_destroy_info = {
    (jerry_object_native_free_callback_t)color_destroy};
static jerry_object_native_info_t s_date_time_destroy_info = {
    (jerry_object_native_free_callback_t)date_time_destroy};
static jerry_object_native_info_t s_named_value_destroy_info = {
    (jerry_object_native_free_callback_t)named_value_destroy};
static jerry_object_native_info_t s_object_array_unref_info = {
    (jerry_object_native_free_callback_t)object_array_unref};
static jerry_object_native_info_t s_object_default_unref_info = {
    (jerry_object_native_free_callback_t)object_default_unref};
static HANDLER_PROTO(wrap_emitter_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    emitter_t* ret = NULL;
    ret = (emitter_t*)emitter_create();

    jret = jsvalue_create_object(ctx, ret, "emitter_t*", &s_emitter_destroy_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_emitter_dispatch) {
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

static HANDLER_PROTO(wrap_emitter_dispatch_simple_event) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
    uint32_t type = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)emitter_dispatch_simple_event(emitter, type);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_emitter_off) {
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

static HANDLER_PROTO(wrap_emitter_enable) {
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

static HANDLER_PROTO(wrap_emitter_disable) {
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

static HANDLER_PROTO(wrap_emitter_cast) {
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
  jerryx_handler_register_global((const jerry_char_t*)"emitter_cast", wrap_emitter_cast);

  return RET_OK;
}

ret_t point_t_init(JSContext* ctx) {
  return RET_OK;
}

ret_t pointf_t_init(JSContext* ctx) {
  return RET_OK;
}

static HANDLER_PROTO(wrap_rectf_t_get_prop_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rectf_t* obj = (rectf_t*)jsvalue_get_pointer(ctx, argv[0], "rectf_t*");

  jret = jsvalue_create_number(ctx, obj->x);
  return jret;
}

static HANDLER_PROTO(wrap_rectf_t_get_prop_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rectf_t* obj = (rectf_t*)jsvalue_get_pointer(ctx, argv[0], "rectf_t*");

  jret = jsvalue_create_number(ctx, obj->y);
  return jret;
}

static HANDLER_PROTO(wrap_rectf_t_get_prop_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rectf_t* obj = (rectf_t*)jsvalue_get_pointer(ctx, argv[0], "rectf_t*");

  jret = jsvalue_create_number(ctx, obj->w);
  return jret;
}

static HANDLER_PROTO(wrap_rectf_t_get_prop_h) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rectf_t* obj = (rectf_t*)jsvalue_get_pointer(ctx, argv[0], "rectf_t*");

  jret = jsvalue_create_number(ctx, obj->h);
  return jret;
}

ret_t rectf_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"rectf_t_get_prop_x",
                                 wrap_rectf_t_get_prop_x);
  jerryx_handler_register_global((const jerry_char_t*)"rectf_t_get_prop_y",
                                 wrap_rectf_t_get_prop_y);
  jerryx_handler_register_global((const jerry_char_t*)"rectf_t_get_prop_w",
                                 wrap_rectf_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"rectf_t_get_prop_h",
                                 wrap_rectf_t_get_prop_h);

  return RET_OK;
}

static HANDLER_PROTO(wrap_rect_create) {
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

static HANDLER_PROTO(wrap_rect_set) {
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

static HANDLER_PROTO(wrap_rect_cast) {
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

static HANDLER_PROTO(wrap_rect_t_get_prop_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

static HANDLER_PROTO(wrap_rect_t_get_prop_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

static HANDLER_PROTO(wrap_rect_t_get_prop_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

static HANDLER_PROTO(wrap_rect_t_get_prop_h) {
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

static HANDLER_PROTO(wrap_bitmap_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    bitmap_t* ret = NULL;
    ret = (bitmap_t*)bitmap_create();

    jret = jsvalue_create_object(ctx, ret, "bitmap_t*", &s_bitmap_destroy_with_self_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_bitmap_create_ex) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    bitmap_t* ret = NULL;
    uint32_t w = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    uint32_t h = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t line_length = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    bitmap_format_t format = (bitmap_format_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);

    jret = jsvalue_create_object(ctx, ret, "bitmap_t*", &s_bitmap_destroy_with_self_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_bitmap_get_bpp) {
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

static HANDLER_PROTO(wrap_bitmap_get_bpp_of_format) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    bitmap_format_t format = (bitmap_format_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (uint32_t)bitmap_get_bpp_of_format(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_bitmap_t_get_prop_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

static HANDLER_PROTO(wrap_bitmap_t_get_prop_h) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

static HANDLER_PROTO(wrap_bitmap_t_get_prop_line_length) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->line_length);
  return jret;
}

static HANDLER_PROTO(wrap_bitmap_t_get_prop_flags) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->flags);
  return jret;
}

static HANDLER_PROTO(wrap_bitmap_t_get_prop_format) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->format);
  return jret;
}

static HANDLER_PROTO(wrap_bitmap_t_get_prop_name) {
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
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_get_bpp_of_format",
                                 wrap_bitmap_get_bpp_of_format);
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

static HANDLER_PROTO(wrap_object_ref) {
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

static HANDLER_PROTO(wrap_object_get_type) {
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

static HANDLER_PROTO(wrap_object_get_desc) {
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

static HANDLER_PROTO(wrap_object_get_size) {
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

static HANDLER_PROTO(wrap_object_is_collection) {
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

static HANDLER_PROTO(wrap_object_set_name) {
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

static HANDLER_PROTO(wrap_object_compare) {
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

static HANDLER_PROTO(wrap_object_get_prop) {
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

static HANDLER_PROTO(wrap_object_get_prop_str) {
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

static HANDLER_PROTO(wrap_object_get_prop_pointer) {
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

static HANDLER_PROTO(wrap_object_get_prop_object) {
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

static HANDLER_PROTO(wrap_object_get_prop_int) {
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

static HANDLER_PROTO(wrap_object_get_prop_bool) {
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

static HANDLER_PROTO(wrap_object_get_prop_float) {
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

static HANDLER_PROTO(wrap_object_get_prop_double) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    double ret = (double)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    double defval = (double)jsvalue_get_number_value(ctx, argv[2]);
    ret = (double)object_get_prop_double(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_remove_prop) {
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

static HANDLER_PROTO(wrap_object_set_prop) {
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

static HANDLER_PROTO(wrap_object_set_prop_str) {
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

static HANDLER_PROTO(wrap_object_set_prop_object) {
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

static HANDLER_PROTO(wrap_object_set_prop_int) {
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

static HANDLER_PROTO(wrap_object_set_prop_bool) {
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

static HANDLER_PROTO(wrap_object_set_prop_float) {
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

static HANDLER_PROTO(wrap_object_set_prop_double) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    double value = (double)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_double(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_copy_prop) {
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

static HANDLER_PROTO(wrap_object_has_prop) {
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

static HANDLER_PROTO(wrap_object_eval) {
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

static HANDLER_PROTO(wrap_object_can_exec) {
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

static HANDLER_PROTO(wrap_object_exec) {
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

static HANDLER_PROTO(wrap_object_notify_changed) {
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

static HANDLER_PROTO(wrap_object_has_prop_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    bool_t ret = (bool_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (bool_t)object_has_prop_by_path(obj, path);
    TKMEM_FREE(path);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_str_by_path) {
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

static HANDLER_PROTO(wrap_object_get_prop_pointer_by_path) {
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

static HANDLER_PROTO(wrap_object_get_prop_object_by_path) {
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

static HANDLER_PROTO(wrap_object_get_prop_int_by_path) {
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

static HANDLER_PROTO(wrap_object_get_prop_bool_by_path) {
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

static HANDLER_PROTO(wrap_object_get_prop_float_by_path) {
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

static HANDLER_PROTO(wrap_object_set_prop_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
    ret = (ret_t)object_set_prop_by_path(obj, path, value);
    TKMEM_FREE(path);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_str_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)object_set_prop_str_by_path(obj, path, value);
    TKMEM_FREE(path);
    TKMEM_FREE(value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_object_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[2], "object_t*");
    ret = (ret_t)object_set_prop_object_by_path(obj, path, value);
    TKMEM_FREE(path);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_int_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_int_by_path(obj, path, value);
    TKMEM_FREE(path);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_bool_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_bool_by_path(obj, path, value);
    TKMEM_FREE(path);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_float_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_float_by_path(obj, path, value);
    TKMEM_FREE(path);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_can_exec_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = (bool_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (bool_t)object_can_exec_by_path(obj, path, args);
    TKMEM_FREE(path);
    TKMEM_FREE(args);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_exec_by_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)object_exec_by_path(obj, path, args);
    TKMEM_FREE(path);
    TKMEM_FREE(args);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_int8) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int8_t ret = (int8_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int8_t defval = (int8_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int8_t)object_get_prop_int8(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_int8) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int8_t value = (int8_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_int8(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_uint8) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    uint8_t ret = (uint8_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint8_t defval = (uint8_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (uint8_t)object_get_prop_uint8(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_uint8) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint8_t value = (uint8_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_uint8(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_int16) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int16_t ret = (int16_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int16_t defval = (int16_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int16_t)object_get_prop_int16(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_int16) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int16_t value = (int16_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_int16(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_uint16) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    uint16_t ret = (uint16_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint16_t defval = (uint16_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (uint16_t)object_get_prop_uint16(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_uint16) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint16_t value = (uint16_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_uint16(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_int32) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = (int32_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int32_t)object_get_prop_int32(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_int32) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_int32(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_uint32) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    uint32_t ret = (uint32_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint32_t defval = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (uint32_t)object_get_prop_uint32(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_uint32) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_uint32(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_int64) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int64_t ret = (int64_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int64_t defval = (int64_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int64_t)object_get_prop_int64(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_int64) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    int64_t value = (int64_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_int64(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_get_prop_uint64) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    uint64_t ret = (uint64_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint64_t defval = (uint64_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (uint64_t)object_get_prop_uint64(obj, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_set_prop_uint64) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint64_t value = (uint64_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_uint64(obj, name, value);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_t_get_prop_ref_count) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  jret = jsvalue_create_int(ctx, obj->ref_count);
  return jret;
}

static HANDLER_PROTO(wrap_object_t_get_prop_name) {
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
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_double",
                                 wrap_object_get_prop_double);
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
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_double",
                                 wrap_object_set_prop_double);
  jerryx_handler_register_global((const jerry_char_t*)"object_copy_prop", wrap_object_copy_prop);
  jerryx_handler_register_global((const jerry_char_t*)"object_has_prop", wrap_object_has_prop);
  jerryx_handler_register_global((const jerry_char_t*)"object_eval", wrap_object_eval);
  jerryx_handler_register_global((const jerry_char_t*)"object_can_exec", wrap_object_can_exec);
  jerryx_handler_register_global((const jerry_char_t*)"object_exec", wrap_object_exec);
  jerryx_handler_register_global((const jerry_char_t*)"object_notify_changed",
                                 wrap_object_notify_changed);
  jerryx_handler_register_global((const jerry_char_t*)"object_has_prop_by_path",
                                 wrap_object_has_prop_by_path);
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
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_by_path",
                                 wrap_object_set_prop_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_str_by_path",
                                 wrap_object_set_prop_str_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_object_by_path",
                                 wrap_object_set_prop_object_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_int_by_path",
                                 wrap_object_set_prop_int_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_bool_by_path",
                                 wrap_object_set_prop_bool_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_float_by_path",
                                 wrap_object_set_prop_float_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_can_exec_by_path",
                                 wrap_object_can_exec_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_exec_by_path",
                                 wrap_object_exec_by_path);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_int8",
                                 wrap_object_get_prop_int8);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_int8",
                                 wrap_object_set_prop_int8);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_uint8",
                                 wrap_object_get_prop_uint8);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_uint8",
                                 wrap_object_set_prop_uint8);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_int16",
                                 wrap_object_get_prop_int16);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_int16",
                                 wrap_object_set_prop_int16);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_uint16",
                                 wrap_object_get_prop_uint16);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_uint16",
                                 wrap_object_set_prop_uint16);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_int32",
                                 wrap_object_get_prop_int32);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_int32",
                                 wrap_object_set_prop_int32);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_uint32",
                                 wrap_object_get_prop_uint32);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_uint32",
                                 wrap_object_set_prop_uint32);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_int64",
                                 wrap_object_get_prop_int64);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_int64",
                                 wrap_object_set_prop_int64);
  jerryx_handler_register_global((const jerry_char_t*)"object_get_prop_uint64",
                                 wrap_object_get_prop_uint64);
  jerryx_handler_register_global((const jerry_char_t*)"object_set_prop_uint64",
                                 wrap_object_set_prop_uint64);
  jerryx_handler_register_global((const jerry_char_t*)"object_t_get_prop_ref_count",
                                 wrap_object_t_get_prop_ref_count);
  jerryx_handler_register_global((const jerry_char_t*)"object_t_get_prop_name",
                                 wrap_object_t_get_prop_name);

  return RET_OK;
}

static HANDLER_PROTO(wrap_value_set_bool) {
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

static HANDLER_PROTO(wrap_value_bool) {
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

static HANDLER_PROTO(wrap_value_set_int8) {
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

static HANDLER_PROTO(wrap_value_int8) {
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

static HANDLER_PROTO(wrap_value_set_uint8) {
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

static HANDLER_PROTO(wrap_value_uint8) {
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

static HANDLER_PROTO(wrap_value_set_int16) {
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

static HANDLER_PROTO(wrap_value_int16) {
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

static HANDLER_PROTO(wrap_value_set_uint16) {
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

static HANDLER_PROTO(wrap_value_uint16) {
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

static HANDLER_PROTO(wrap_value_set_int32) {
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

static HANDLER_PROTO(wrap_value_int32) {
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

static HANDLER_PROTO(wrap_value_set_uint32) {
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

static HANDLER_PROTO(wrap_value_set_int64) {
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

static HANDLER_PROTO(wrap_value_int64) {
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

static HANDLER_PROTO(wrap_value_set_uint64) {
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

static HANDLER_PROTO(wrap_value_uint64) {
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

static HANDLER_PROTO(wrap_value_set_float) {
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

static HANDLER_PROTO(wrap_value_float32) {
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

static HANDLER_PROTO(wrap_value_set_double) {
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

static HANDLER_PROTO(wrap_value_double) {
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

static HANDLER_PROTO(wrap_value_dup_str) {
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

static HANDLER_PROTO(wrap_value_str) {
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

static HANDLER_PROTO(wrap_value_str_ex) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    const char* ret = NULL;
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
    char* buff = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint32_t size = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (const char*)value_str_ex(v, buff, size);
    TKMEM_FREE(buff);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_value_is_null) {
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

static HANDLER_PROTO(wrap_value_set_int) {
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

static HANDLER_PROTO(wrap_value_set_object) {
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

static HANDLER_PROTO(wrap_value_object) {
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

static HANDLER_PROTO(wrap_value_set_token) {
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

static HANDLER_PROTO(wrap_value_token) {
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

static HANDLER_PROTO(wrap_value_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    value_t* ret = NULL;
    ret = (value_t*)value_create();

    jret = jsvalue_create_object(ctx, ret, "value_t*", &s_value_destroy_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_value_reset) {
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

static HANDLER_PROTO(wrap_value_cast) {
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
  jerryx_handler_register_global((const jerry_char_t*)"value_str_ex", wrap_value_str_ex);
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

static HANDLER_PROTO(wrap_tk_init) {
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

static HANDLER_PROTO(wrap_tk_run) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = (ret_t)0;
    ret = (ret_t)tk_run();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_tk_quit) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = (ret_t)0;
    ret = (ret_t)tk_quit();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_tk_get_pointer_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    int32_t ret = (int32_t)0;
    ret = (int32_t)tk_get_pointer_x();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_tk_get_pointer_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    int32_t ret = (int32_t)0;
    ret = (int32_t)tk_get_pointer_y();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_tk_is_pointer_pressed) {
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

static HANDLER_PROTO(get_BIDI_TYPE_AUTO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BIDI_TYPE_AUTO);
}

static HANDLER_PROTO(get_BIDI_TYPE_LTR) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BIDI_TYPE_LTR);
}

static HANDLER_PROTO(get_BIDI_TYPE_RTL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BIDI_TYPE_RTL);
}

static HANDLER_PROTO(get_BIDI_TYPE_LRO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BIDI_TYPE_LRO);
}

static HANDLER_PROTO(get_BIDI_TYPE_RLO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BIDI_TYPE_RLO);
}

static HANDLER_PROTO(get_BIDI_TYPE_WLTR) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BIDI_TYPE_WLTR);
}

static HANDLER_PROTO(get_BIDI_TYPE_WRTL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BIDI_TYPE_WRTL);
}

ret_t bidi_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"BIDI_TYPE_AUTO", get_BIDI_TYPE_AUTO);
  jerryx_handler_register_global((const jerry_char_t*)"BIDI_TYPE_LTR", get_BIDI_TYPE_LTR);
  jerryx_handler_register_global((const jerry_char_t*)"BIDI_TYPE_RTL", get_BIDI_TYPE_RTL);
  jerryx_handler_register_global((const jerry_char_t*)"BIDI_TYPE_LRO", get_BIDI_TYPE_LRO);
  jerryx_handler_register_global((const jerry_char_t*)"BIDI_TYPE_RLO", get_BIDI_TYPE_RLO);
  jerryx_handler_register_global((const jerry_char_t*)"BIDI_TYPE_WLTR", get_BIDI_TYPE_WLTR);
  jerryx_handler_register_global((const jerry_char_t*)"BIDI_TYPE_WRTL", get_BIDI_TYPE_WRTL);

  return RET_OK;
}

static HANDLER_PROTO(get_IMAGE_DRAW_DEFAULT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_DEFAULT);
}

static HANDLER_PROTO(get_IMAGE_DRAW_CENTER) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_CENTER);
}

static HANDLER_PROTO(get_IMAGE_DRAW_ICON) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_ICON);
}

static HANDLER_PROTO(get_IMAGE_DRAW_SCALE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE);
}

static HANDLER_PROTO(get_IMAGE_DRAW_SCALE_AUTO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_AUTO);
}

static HANDLER_PROTO(get_IMAGE_DRAW_SCALE_DOWN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_DOWN);
}

static HANDLER_PROTO(get_IMAGE_DRAW_SCALE_W) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_W);
}

static HANDLER_PROTO(get_IMAGE_DRAW_SCALE_H) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_H);
}

static HANDLER_PROTO(get_IMAGE_DRAW_REPEAT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT);
}

static HANDLER_PROTO(get_IMAGE_DRAW_REPEAT_X) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_X);
}

static HANDLER_PROTO(get_IMAGE_DRAW_REPEAT_Y) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_Y);
}

static HANDLER_PROTO(get_IMAGE_DRAW_REPEAT_Y_INVERSE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_Y_INVERSE);
}

static HANDLER_PROTO(get_IMAGE_DRAW_PATCH9) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH9);
}

static HANDLER_PROTO(get_IMAGE_DRAW_PATCH3_X) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_X);
}

static HANDLER_PROTO(get_IMAGE_DRAW_PATCH3_Y) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_Y);
}

static HANDLER_PROTO(get_IMAGE_DRAW_PATCH3_X_SCALE_Y) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

static HANDLER_PROTO(get_IMAGE_DRAW_PATCH3_Y_SCALE_X) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

static HANDLER_PROTO(get_IMAGE_DRAW_REPEAT9) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT9);
}

static HANDLER_PROTO(get_IMAGE_DRAW_REPEAT3_X) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT3_X);
}

static HANDLER_PROTO(get_IMAGE_DRAW_REPEAT3_Y) {
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

ret_t canvas_offline_t_init(JSContext* ctx) {
  return RET_OK;
}

static HANDLER_PROTO(wrap_canvas_get_width) {
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

static HANDLER_PROTO(wrap_canvas_get_height) {
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

static HANDLER_PROTO(wrap_canvas_set_clip_rect) {
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

static HANDLER_PROTO(wrap_canvas_set_clip_rect_ex) {
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

static HANDLER_PROTO(wrap_canvas_set_fill_color_str) {
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

static HANDLER_PROTO(wrap_canvas_set_text_color_str) {
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

static HANDLER_PROTO(wrap_canvas_set_stroke_color_str) {
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

static HANDLER_PROTO(wrap_canvas_set_global_alpha) {
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

static HANDLER_PROTO(wrap_canvas_translate) {
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

static HANDLER_PROTO(wrap_canvas_untranslate) {
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

static HANDLER_PROTO(wrap_canvas_draw_vline) {
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

static HANDLER_PROTO(wrap_canvas_draw_hline) {
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

static HANDLER_PROTO(wrap_canvas_fill_rect) {
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

static HANDLER_PROTO(wrap_canvas_clear_rect) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (ret_t)canvas_clear_rect(c, x, y, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_canvas_stroke_rect) {
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

static HANDLER_PROTO(wrap_canvas_set_font) {
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

static HANDLER_PROTO(wrap_canvas_measure_utf8) {
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

static HANDLER_PROTO(wrap_canvas_draw_utf8) {
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

static HANDLER_PROTO(wrap_canvas_draw_utf8_in_rect) {
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

static HANDLER_PROTO(wrap_canvas_draw_icon) {
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

static HANDLER_PROTO(wrap_canvas_draw_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
    const rect_t* src = (const rect_t*)jsvalue_get_pointer(ctx, argv[2], "const rect_t*");
    const rect_t* dst = (const rect_t*)jsvalue_get_pointer(ctx, argv[3], "const rect_t*");
    ret = (ret_t)canvas_draw_image(c, img, src, dst);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_canvas_draw_image_ex) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
    image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[2]);
    const rect_t* dst = (const rect_t*)jsvalue_get_pointer(ctx, argv[3], "const rect_t*");
    ret = (ret_t)canvas_draw_image_ex(c, img, draw_type, dst);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_canvas_draw_image_ex2) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
    image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[2]);
    const rect_t* src = (const rect_t*)jsvalue_get_pointer(ctx, argv[3], "const rect_t*");
    const rect_t* dst = (const rect_t*)jsvalue_get_pointer(ctx, argv[4], "const rect_t*");
    ret = (ret_t)canvas_draw_image_ex2(c, img, draw_type, src, dst);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_canvas_get_vgcanvas) {
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

static HANDLER_PROTO(wrap_canvas_cast) {
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

static HANDLER_PROTO(wrap_canvas_reset) {
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

static HANDLER_PROTO(wrap_canvas_t_get_prop_ox) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->ox);
  return jret;
}

static HANDLER_PROTO(wrap_canvas_t_get_prop_oy) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->oy);
  return jret;
}

static HANDLER_PROTO(wrap_canvas_t_get_prop_font_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_string(ctx, obj->font_name);
  return jret;
}

static HANDLER_PROTO(wrap_canvas_t_get_prop_font_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->font_size);
  return jret;
}

static HANDLER_PROTO(wrap_canvas_t_get_prop_global_alpha) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->global_alpha);
  return jret;
}

ret_t canvas_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_width", wrap_canvas_get_width);
  jerryx_handler_register_global((const jerry_char_t*)"canvas_get_height", wrap_canvas_get_height);
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
  jerryx_handler_register_global((const jerry_char_t*)"canvas_clear_rect", wrap_canvas_clear_rect);
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
  jerryx_handler_register_global((const jerry_char_t*)"canvas_draw_image_ex2",
                                 wrap_canvas_draw_image_ex2);
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

static HANDLER_PROTO(get_CLIP_BOARD_DATA_TYPE_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, CLIP_BOARD_DATA_TYPE_NONE);
}

static HANDLER_PROTO(get_CLIP_BOARD_DATA_TYPE_TEXT) {
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

static HANDLER_PROTO(wrap_clip_board_set_text) {
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

static HANDLER_PROTO(wrap_clip_board_get_text) {
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

static HANDLER_PROTO(get_DIALOG_QUIT_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_NONE);
}

static HANDLER_PROTO(get_DIALOG_QUIT_OK) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_OK);
}

static HANDLER_PROTO(get_DIALOG_QUIT_YES) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_YES);
}

static HANDLER_PROTO(get_DIALOG_QUIT_CANCEL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_CANCEL);
}

static HANDLER_PROTO(get_DIALOG_QUIT_NO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, DIALOG_QUIT_NO);
}

static HANDLER_PROTO(get_DIALOG_QUIT_OTHER) {
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

static HANDLER_PROTO(get_EVT_POINTER_DOWN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN);
}

static HANDLER_PROTO(get_EVT_POINTER_DOWN_BEFORE_CHILDREN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN_BEFORE_CHILDREN);
}

static HANDLER_PROTO(get_EVT_POINTER_MOVE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_MOVE);
}

static HANDLER_PROTO(get_EVT_POINTER_MOVE_BEFORE_CHILDREN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_MOVE_BEFORE_CHILDREN);
}

static HANDLER_PROTO(get_EVT_POINTER_UP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_UP);
}

static HANDLER_PROTO(get_EVT_POINTER_UP_BEFORE_CHILDREN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_UP_BEFORE_CHILDREN);
}

static HANDLER_PROTO(get_EVT_WHEEL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WHEEL);
}

static HANDLER_PROTO(get_EVT_WHEEL_BEFORE_CHILDREN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WHEEL_BEFORE_CHILDREN);
}

static HANDLER_PROTO(get_EVT_POINTER_DOWN_ABORT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN_ABORT);
}

static HANDLER_PROTO(get_EVT_CONTEXT_MENU) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_CONTEXT_MENU);
}

static HANDLER_PROTO(get_EVT_POINTER_ENTER) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_ENTER);
}

static HANDLER_PROTO(get_EVT_POINTER_LEAVE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_POINTER_LEAVE);
}

static HANDLER_PROTO(get_EVT_LONG_PRESS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_LONG_PRESS);
}

static HANDLER_PROTO(get_EVT_CLICK) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_CLICK);
}

static HANDLER_PROTO(get_EVT_FOCUS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_FOCUS);
}

static HANDLER_PROTO(get_EVT_BLUR) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_BLUR);
}

static HANDLER_PROTO(get_EVT_KEY_DOWN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_DOWN);
}

static HANDLER_PROTO(get_EVT_KEY_LONG_PRESS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_LONG_PRESS);
}

static HANDLER_PROTO(get_EVT_KEY_DOWN_BEFORE_CHILDREN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_DOWN_BEFORE_CHILDREN);
}

static HANDLER_PROTO(get_EVT_KEY_REPEAT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_REPEAT);
}

static HANDLER_PROTO(get_EVT_KEY_UP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_UP);
}

static HANDLER_PROTO(get_EVT_KEY_UP_BEFORE_CHILDREN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_KEY_UP_BEFORE_CHILDREN);
}

static HANDLER_PROTO(get_EVT_WILL_MOVE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WILL_MOVE);
}

static HANDLER_PROTO(get_EVT_MOVE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_MOVE);
}

static HANDLER_PROTO(get_EVT_WILL_RESIZE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WILL_RESIZE);
}

static HANDLER_PROTO(get_EVT_RESIZE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_RESIZE);
}

static HANDLER_PROTO(get_EVT_WILL_MOVE_RESIZE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WILL_MOVE_RESIZE);
}

static HANDLER_PROTO(get_EVT_MOVE_RESIZE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_MOVE_RESIZE);
}

static HANDLER_PROTO(get_EVT_VALUE_WILL_CHANGE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VALUE_WILL_CHANGE);
}

static HANDLER_PROTO(get_EVT_VALUE_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VALUE_CHANGED);
}

static HANDLER_PROTO(get_EVT_VALUE_CHANGING) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VALUE_CHANGING);
}

static HANDLER_PROTO(get_EVT_PAINT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PAINT);
}

static HANDLER_PROTO(get_EVT_BEFORE_PAINT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_BEFORE_PAINT);
}

static HANDLER_PROTO(get_EVT_AFTER_PAINT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_AFTER_PAINT);
}

static HANDLER_PROTO(get_EVT_PAINT_DONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PAINT_DONE);
}

static HANDLER_PROTO(get_EVT_LOCALE_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_LOCALE_CHANGED);
}

static HANDLER_PROTO(get_EVT_ANIM_START) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_START);
}

static HANDLER_PROTO(get_EVT_ANIM_STOP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_STOP);
}

static HANDLER_PROTO(get_EVT_ANIM_PAUSE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_PAUSE);
}

static HANDLER_PROTO(get_EVT_ANIM_ONCE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_ONCE);
}

static HANDLER_PROTO(get_EVT_ANIM_END) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ANIM_END);
}

static HANDLER_PROTO(get_EVT_WINDOW_LOAD) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_LOAD);
}

static HANDLER_PROTO(get_EVT_WIDGET_LOAD) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WIDGET_LOAD);
}

static HANDLER_PROTO(get_EVT_WINDOW_WILL_OPEN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_WILL_OPEN);
}

static HANDLER_PROTO(get_EVT_WINDOW_OPEN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_OPEN);
}

static HANDLER_PROTO(get_EVT_WINDOW_TO_BACKGROUND) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_TO_BACKGROUND);
}

static HANDLER_PROTO(get_EVT_WINDOW_TO_FOREGROUND) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_TO_FOREGROUND);
}

static HANDLER_PROTO(get_EVT_WINDOW_CLOSE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WINDOW_CLOSE);
}

static HANDLER_PROTO(get_EVT_REQUEST_CLOSE_WINDOW) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_REQUEST_CLOSE_WINDOW);
}

static HANDLER_PROTO(get_EVT_TOP_WINDOW_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_TOP_WINDOW_CHANGED);
}

static HANDLER_PROTO(get_EVT_IM_START) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_START);
}

static HANDLER_PROTO(get_EVT_IM_STOP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_STOP);
}

static HANDLER_PROTO(get_EVT_IM_COMMIT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_COMMIT);
}

static HANDLER_PROTO(get_EVT_IM_CLEAR) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_CLEAR);
}

static HANDLER_PROTO(get_EVT_IM_CANCEL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_CANCEL);
}

static HANDLER_PROTO(get_EVT_IM_PREEDIT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_PREEDIT);
}

static HANDLER_PROTO(get_EVT_IM_PREEDIT_CONFIRM) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_PREEDIT_CONFIRM);
}

static HANDLER_PROTO(get_EVT_IM_PREEDIT_ABORT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_PREEDIT_ABORT);
}

static HANDLER_PROTO(get_EVT_IM_SHOW_CANDIDATES) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_SHOW_CANDIDATES);
}

static HANDLER_PROTO(get_EVT_IM_SHOW_PRE_CANDIDATES) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_SHOW_PRE_CANDIDATES);
}

static HANDLER_PROTO(get_EVT_IM_LANG_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_LANG_CHANGED);
}

static HANDLER_PROTO(get_EVT_IM_ACTION) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_ACTION);
}

static HANDLER_PROTO(get_EVT_IM_ACTION_INFO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_IM_ACTION_INFO);
}

static HANDLER_PROTO(get_EVT_DRAG_START) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DRAG_START);
}

static HANDLER_PROTO(get_EVT_DRAG) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DRAG);
}

static HANDLER_PROTO(get_EVT_DRAG_END) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DRAG_END);
}

static HANDLER_PROTO(get_EVT_RESET) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_RESET);
}

static HANDLER_PROTO(get_EVT_SCREEN_SAVER) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_SCREEN_SAVER);
}

static HANDLER_PROTO(get_EVT_LOW_MEMORY) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_LOW_MEMORY);
}

static HANDLER_PROTO(get_EVT_OUT_OF_MEMORY) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_OUT_OF_MEMORY);
}

static HANDLER_PROTO(get_EVT_ORIENTATION_WILL_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ORIENTATION_WILL_CHANGED);
}

static HANDLER_PROTO(get_EVT_ORIENTATION_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ORIENTATION_CHANGED);
}

static HANDLER_PROTO(get_EVT_WIDGET_CREATED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WIDGET_CREATED);
}

static HANDLER_PROTO(get_EVT_REQUEST_QUIT_APP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_REQUEST_QUIT_APP);
}

static HANDLER_PROTO(get_EVT_THEME_WILL_CHANGE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_THEME_WILL_CHANGE);
}

static HANDLER_PROTO(get_EVT_THEME_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_THEME_CHANGED);
}

static HANDLER_PROTO(get_EVT_WIDGET_ADD_CHILD) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WIDGET_ADD_CHILD);
}

static HANDLER_PROTO(get_EVT_WIDGET_REMOVE_CHILD) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_WIDGET_REMOVE_CHILD);
}

static HANDLER_PROTO(get_EVT_SCROLL_START) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_SCROLL_START);
}

static HANDLER_PROTO(get_EVT_SCROLL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_SCROLL);
}

static HANDLER_PROTO(get_EVT_SCROLL_END) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_SCROLL_END);
}

static HANDLER_PROTO(get_EVT_MULTI_GESTURE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_MULTI_GESTURE);
}

static HANDLER_PROTO(get_EVT_PAGE_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PAGE_CHANGED);
}

static HANDLER_PROTO(get_EVT_PAGE_CHANGING) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PAGE_CHANGING);
}

static HANDLER_PROTO(get_EVT_ASSET_MANAGER_LOAD_ASSET) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ASSET_MANAGER_LOAD_ASSET);
}

static HANDLER_PROTO(get_EVT_ASSET_MANAGER_UNLOAD_ASSET) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ASSET_MANAGER_UNLOAD_ASSET);
}

static HANDLER_PROTO(get_EVT_ASSET_MANAGER_CLEAR_CACHE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ASSET_MANAGER_CLEAR_CACHE);
}

static HANDLER_PROTO(get_EVT_TIMER) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_TIMER);
}

static HANDLER_PROTO(get_EVT_REQ_START) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_REQ_START);
}

static HANDLER_PROTO(get_EVT_USER_START) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_USER_START);
}

static HANDLER_PROTO(get_EVT_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_NONE);
}

static HANDLER_PROTO(get_EVT_PROP_WILL_CHANGE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PROP_WILL_CHANGE);
}

static HANDLER_PROTO(get_EVT_PROP_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PROP_CHANGED);
}

static HANDLER_PROTO(get_EVT_CMD_WILL_EXEC) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_CMD_WILL_EXEC);
}

static HANDLER_PROTO(get_EVT_CMD_EXECED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_CMD_EXECED);
}

static HANDLER_PROTO(get_EVT_CMD_CAN_EXEC) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_CMD_CAN_EXEC);
}

static HANDLER_PROTO(get_EVT_ITEMS_WILL_CHANGE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ITEMS_WILL_CHANGE);
}

static HANDLER_PROTO(get_EVT_ITEMS_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ITEMS_CHANGED);
}

static HANDLER_PROTO(get_EVT_PROPS_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PROPS_CHANGED);
}

static HANDLER_PROTO(get_EVT_PROGRESS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_PROGRESS);
}

static HANDLER_PROTO(get_EVT_DONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_DONE);
}

static HANDLER_PROTO(get_EVT_ERROR) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_ERROR);
}

static HANDLER_PROTO(get_EVT_DESTROY) {
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
  jerryx_handler_register_global((const jerry_char_t*)"EVT_KEY_LONG_PRESS", get_EVT_KEY_LONG_PRESS);
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
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_START", get_EVT_IM_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_STOP", get_EVT_IM_STOP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_COMMIT", get_EVT_IM_COMMIT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_CLEAR", get_EVT_IM_CLEAR);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_CANCEL", get_EVT_IM_CANCEL);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_PREEDIT", get_EVT_IM_PREEDIT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_PREEDIT_CONFIRM",
                                 get_EVT_IM_PREEDIT_CONFIRM);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_PREEDIT_ABORT",
                                 get_EVT_IM_PREEDIT_ABORT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_SHOW_CANDIDATES",
                                 get_EVT_IM_SHOW_CANDIDATES);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_SHOW_PRE_CANDIDATES",
                                 get_EVT_IM_SHOW_PRE_CANDIDATES);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_LANG_CHANGED",
                                 get_EVT_IM_LANG_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_ACTION", get_EVT_IM_ACTION);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_ACTION_INFO", get_EVT_IM_ACTION_INFO);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG_START", get_EVT_DRAG_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG", get_EVT_DRAG);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG_END", get_EVT_DRAG_END);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_RESET", get_EVT_RESET);
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
  jerryx_handler_register_global((const jerry_char_t*)"EVT_THEME_WILL_CHANGE",
                                 get_EVT_THEME_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_THEME_CHANGED", get_EVT_THEME_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WIDGET_ADD_CHILD",
                                 get_EVT_WIDGET_ADD_CHILD);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WIDGET_REMOVE_CHILD",
                                 get_EVT_WIDGET_REMOVE_CHILD);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_SCROLL_START", get_EVT_SCROLL_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_SCROLL", get_EVT_SCROLL);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_SCROLL_END", get_EVT_SCROLL_END);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_MULTI_GESTURE", get_EVT_MULTI_GESTURE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PAGE_CHANGED", get_EVT_PAGE_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PAGE_CHANGING", get_EVT_PAGE_CHANGING);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ASSET_MANAGER_LOAD_ASSET",
                                 get_EVT_ASSET_MANAGER_LOAD_ASSET);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ASSET_MANAGER_UNLOAD_ASSET",
                                 get_EVT_ASSET_MANAGER_UNLOAD_ASSET);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ASSET_MANAGER_CLEAR_CACHE",
                                 get_EVT_ASSET_MANAGER_CLEAR_CACHE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_TIMER", get_EVT_TIMER);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_REQ_START", get_EVT_REQ_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_USER_START", get_EVT_USER_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_NONE", get_EVT_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROP_WILL_CHANGE",
                                 get_EVT_PROP_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROP_CHANGED", get_EVT_PROP_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_CMD_WILL_EXEC", get_EVT_CMD_WILL_EXEC);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_CMD_EXECED", get_EVT_CMD_EXECED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_CMD_CAN_EXEC", get_EVT_CMD_CAN_EXEC);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ITEMS_WILL_CHANGE",
                                 get_EVT_ITEMS_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ITEMS_CHANGED", get_EVT_ITEMS_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROPS_CHANGED", get_EVT_PROPS_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROGRESS", get_EVT_PROGRESS);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DONE", get_EVT_DONE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ERROR", get_EVT_ERROR);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DESTROY", get_EVT_DESTROY);

  return RET_OK;
}

static HANDLER_PROTO(wrap_event_from_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    ret = (int32_t)event_from_name(name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_event_cast) {
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

static HANDLER_PROTO(wrap_event_get_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (uint32_t)event_get_type(event);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_event_create) {
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

static HANDLER_PROTO(wrap_event_t_get_prop_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->type);
  return jret;
}

static HANDLER_PROTO(wrap_event_t_get_prop_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

static HANDLER_PROTO(wrap_event_t_get_prop_time) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->time);
  return jret;
}

static HANDLER_PROTO(wrap_event_t_get_prop_target) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_pointer(ctx, obj->target, "void*");
  return jret;
}

ret_t event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"event_from_name", wrap_event_from_name);
  jerryx_handler_register_global((const jerry_char_t*)"event_cast", wrap_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"event_get_type", wrap_event_get_type);
  jerryx_handler_register_global((const jerry_char_t*)"event_create", wrap_event_create);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_type",
                                 wrap_event_t_get_prop_type);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_size",
                                 wrap_event_t_get_prop_size);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_time",
                                 wrap_event_t_get_prop_time);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_target",
                                 wrap_event_t_get_prop_target);

  return RET_OK;
}

static HANDLER_PROTO(wrap_font_manager_unload_font) {
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

static HANDLER_PROTO(wrap_font_manager_shrink_cache) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
    uint32_t cache_size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)font_manager_shrink_cache(fm, cache_size);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_font_manager_unload_all) {
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
  jerryx_handler_register_global((const jerry_char_t*)"font_manager_shrink_cache",
                                 wrap_font_manager_shrink_cache);
  jerryx_handler_register_global((const jerry_char_t*)"font_manager_unload_all",
                                 wrap_font_manager_unload_all);

  return RET_OK;
}

static HANDLER_PROTO(get_GLYPH_FMT_ALPHA) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, GLYPH_FMT_ALPHA);
}

static HANDLER_PROTO(get_GLYPH_FMT_MONO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, GLYPH_FMT_MONO);
}

static HANDLER_PROTO(get_GLYPH_FMT_RGBA) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, GLYPH_FMT_RGBA);
}

ret_t glyph_format_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"GLYPH_FMT_ALPHA", get_GLYPH_FMT_ALPHA);
  jerryx_handler_register_global((const jerry_char_t*)"GLYPH_FMT_MONO", get_GLYPH_FMT_MONO);
  jerryx_handler_register_global((const jerry_char_t*)"GLYPH_FMT_RGBA", get_GLYPH_FMT_RGBA);

  return RET_OK;
}

static HANDLER_PROTO(wrap_idle_remove) {
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

static HANDLER_PROTO(wrap_idle_remove_all_by_ctx) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    void* ctx = NULL;
    ret = (ret_t)idle_remove_all_by_ctx(ctx);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t idle_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"idle_add", wrap_idle_add);
  jerryx_handler_register_global((const jerry_char_t*)"idle_remove", wrap_idle_remove);
  jerryx_handler_register_global((const jerry_char_t*)"idle_remove_all_by_ctx",
                                 wrap_idle_remove_all_by_ctx);

  return RET_OK;
}

static HANDLER_PROTO(wrap_image_manager) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    image_manager_t* ret = NULL;
    ret = (image_manager_t*)image_manager();

    jret = jsvalue_create_pointer(ctx, ret, "image_manager_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_image_manager_get_bitmap) {
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

static HANDLER_PROTO(wrap_image_manager_preload) {
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

static HANDLER_PROTO(get_INPUT_TEXT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_TEXT);
}

static HANDLER_PROTO(get_INPUT_INT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_INT);
}

static HANDLER_PROTO(get_INPUT_UINT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_UINT);
}

static HANDLER_PROTO(get_INPUT_HEX) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_HEX);
}

static HANDLER_PROTO(get_INPUT_FLOAT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_FLOAT);
}

static HANDLER_PROTO(get_INPUT_UFLOAT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_UFLOAT);
}

static HANDLER_PROTO(get_INPUT_EMAIL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_EMAIL);
}

static HANDLER_PROTO(get_INPUT_PASSWORD) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_PASSWORD);
}

static HANDLER_PROTO(get_INPUT_PHONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_PHONE);
}

static HANDLER_PROTO(get_INPUT_IPV4) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_IPV4);
}

static HANDLER_PROTO(get_INPUT_DATE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_DATE);
}

static HANDLER_PROTO(get_INPUT_TIME) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_TIME);
}

static HANDLER_PROTO(get_INPUT_TIME_FULL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_TIME_FULL);
}

static HANDLER_PROTO(get_INPUT_CUSTOM) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_CUSTOM);
}

static HANDLER_PROTO(get_INPUT_CUSTOM_PASSWORD) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_CUSTOM_PASSWORD);
}

static HANDLER_PROTO(get_INPUT_ASCII) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INPUT_ASCII);
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
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_IPV4", get_INPUT_IPV4);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_DATE", get_INPUT_DATE);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_TIME", get_INPUT_TIME);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_TIME_FULL", get_INPUT_TIME_FULL);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_CUSTOM", get_INPUT_CUSTOM);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_CUSTOM_PASSWORD",
                                 get_INPUT_CUSTOM_PASSWORD);
  jerryx_handler_register_global((const jerry_char_t*)"INPUT_ASCII", get_INPUT_ASCII);

  return RET_OK;
}

static HANDLER_PROTO(wrap_input_method_commit_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)input_method_commit_text(im, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_input_method_set_lang) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    const char* lang = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)input_method_set_lang(im, lang);
    TKMEM_FREE(lang);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_input_method_get_lang) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    ret = (const char*)input_method_get_lang(im);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_input_method_dispatch_key) {
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

static HANDLER_PROTO(wrap_input_method_dispatch_keys) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)input_method_dispatch_keys(im, key);
    TKMEM_FREE(key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_input_method_dispatch_preedit) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    ret = (ret_t)input_method_dispatch_preedit(im);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_input_method_dispatch_preedit_confirm) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    ret = (ret_t)input_method_dispatch_preedit_confirm(im);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_input_method_dispatch_preedit_abort) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
    ret = (ret_t)input_method_dispatch_preedit_abort(im);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_input_method) {
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
  jerryx_handler_register_global((const jerry_char_t*)"input_method_set_lang",
                                 wrap_input_method_set_lang);
  jerryx_handler_register_global((const jerry_char_t*)"input_method_get_lang",
                                 wrap_input_method_get_lang);
  jerryx_handler_register_global((const jerry_char_t*)"input_method_dispatch_key",
                                 wrap_input_method_dispatch_key);
  jerryx_handler_register_global((const jerry_char_t*)"input_method_dispatch_keys",
                                 wrap_input_method_dispatch_keys);
  jerryx_handler_register_global((const jerry_char_t*)"input_method_dispatch_preedit",
                                 wrap_input_method_dispatch_preedit);
  jerryx_handler_register_global((const jerry_char_t*)"input_method_dispatch_preedit_confirm",
                                 wrap_input_method_dispatch_preedit_confirm);
  jerryx_handler_register_global((const jerry_char_t*)"input_method_dispatch_preedit_abort",
                                 wrap_input_method_dispatch_preedit_abort);
  jerryx_handler_register_global((const jerry_char_t*)"input_method", wrap_input_method);

  return RET_OK;
}

static HANDLER_PROTO(get_TK_KEY_RETURN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RETURN);
}

static HANDLER_PROTO(get_TK_KEY_ESCAPE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_ESCAPE);
}

static HANDLER_PROTO(get_TK_KEY_BACKSPACE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_BACKSPACE);
}

static HANDLER_PROTO(get_TK_KEY_TAB) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_TAB);
}

static HANDLER_PROTO(get_TK_KEY_SPACE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_SPACE);
}

static HANDLER_PROTO(get_TK_KEY_EXCLAIM) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_EXCLAIM);
}

static HANDLER_PROTO(get_TK_KEY_QUOTEDBL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_QUOTEDBL);
}

static HANDLER_PROTO(get_TK_KEY_HASH) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_HASH);
}

static HANDLER_PROTO(get_TK_KEY_PERCENT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PERCENT);
}

static HANDLER_PROTO(get_TK_KEY_DOLLAR) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_DOLLAR);
}

static HANDLER_PROTO(get_TK_KEY_AMPERSAND) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_AMPERSAND);
}

static HANDLER_PROTO(get_TK_KEY_QUOTE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_QUOTE);
}

static HANDLER_PROTO(get_TK_KEY_LEFTPAREN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LEFTPAREN);
}

static HANDLER_PROTO(get_TK_KEY_RIGHTPAREN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RIGHTPAREN);
}

static HANDLER_PROTO(get_TK_KEY_ASTERISK) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_ASTERISK);
}

static HANDLER_PROTO(get_TK_KEY_PLUS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PLUS);
}

static HANDLER_PROTO(get_TK_KEY_COMMA) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_COMMA);
}

static HANDLER_PROTO(get_TK_KEY_MINUS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_MINUS);
}

static HANDLER_PROTO(get_TK_KEY_PERIOD) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PERIOD);
}

static HANDLER_PROTO(get_TK_KEY_SLASH) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_SLASH);
}

static HANDLER_PROTO(get_TK_KEY_0) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_0);
}

static HANDLER_PROTO(get_TK_KEY_1) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_1);
}

static HANDLER_PROTO(get_TK_KEY_2) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_2);
}

static HANDLER_PROTO(get_TK_KEY_3) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_3);
}

static HANDLER_PROTO(get_TK_KEY_4) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_4);
}

static HANDLER_PROTO(get_TK_KEY_5) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_5);
}

static HANDLER_PROTO(get_TK_KEY_6) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_6);
}

static HANDLER_PROTO(get_TK_KEY_7) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_7);
}

static HANDLER_PROTO(get_TK_KEY_8) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_8);
}

static HANDLER_PROTO(get_TK_KEY_9) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_9);
}

static HANDLER_PROTO(get_TK_KEY_COLON) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_COLON);
}

static HANDLER_PROTO(get_TK_KEY_SEMICOLON) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_SEMICOLON);
}

static HANDLER_PROTO(get_TK_KEY_LESS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LESS);
}

static HANDLER_PROTO(get_TK_KEY_EQUAL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_EQUAL);
}

static HANDLER_PROTO(get_TK_KEY_GREATER) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_GREATER);
}

static HANDLER_PROTO(get_TK_KEY_QUESTION) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_QUESTION);
}

static HANDLER_PROTO(get_TK_KEY_AT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_AT);
}

static HANDLER_PROTO(get_TK_KEY_LEFTBRACKET) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LEFTBRACKET);
}

static HANDLER_PROTO(get_TK_KEY_BACKSLASH) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_BACKSLASH);
}

static HANDLER_PROTO(get_TK_KEY_RIGHTBRACKET) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RIGHTBRACKET);
}

static HANDLER_PROTO(get_TK_KEY_CARET) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_CARET);
}

static HANDLER_PROTO(get_TK_KEY_UNDERSCORE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_UNDERSCORE);
}

static HANDLER_PROTO(get_TK_KEY_BACKQUOTE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_BACKQUOTE);
}

static HANDLER_PROTO(get_TK_KEY_a) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_a);
}

static HANDLER_PROTO(get_TK_KEY_b) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_b);
}

static HANDLER_PROTO(get_TK_KEY_c) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_c);
}

static HANDLER_PROTO(get_TK_KEY_d) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_d);
}

static HANDLER_PROTO(get_TK_KEY_e) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_e);
}

static HANDLER_PROTO(get_TK_KEY_f) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_f);
}

static HANDLER_PROTO(get_TK_KEY_g) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_g);
}

static HANDLER_PROTO(get_TK_KEY_h) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_h);
}

static HANDLER_PROTO(get_TK_KEY_i) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_i);
}

static HANDLER_PROTO(get_TK_KEY_j) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_j);
}

static HANDLER_PROTO(get_TK_KEY_k) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_k);
}

static HANDLER_PROTO(get_TK_KEY_l) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_l);
}

static HANDLER_PROTO(get_TK_KEY_m) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_m);
}

static HANDLER_PROTO(get_TK_KEY_n) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_n);
}

static HANDLER_PROTO(get_TK_KEY_o) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_o);
}

static HANDLER_PROTO(get_TK_KEY_p) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_p);
}

static HANDLER_PROTO(get_TK_KEY_q) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_q);
}

static HANDLER_PROTO(get_TK_KEY_r) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_r);
}

static HANDLER_PROTO(get_TK_KEY_s) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_s);
}

static HANDLER_PROTO(get_TK_KEY_t) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_t);
}

static HANDLER_PROTO(get_TK_KEY_u) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_u);
}

static HANDLER_PROTO(get_TK_KEY_v) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_v);
}

static HANDLER_PROTO(get_TK_KEY_w) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_w);
}

static HANDLER_PROTO(get_TK_KEY_x) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_x);
}

static HANDLER_PROTO(get_TK_KEY_y) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_y);
}

static HANDLER_PROTO(get_TK_KEY_z) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_z);
}

static HANDLER_PROTO(get_TK_KEY_A) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_A);
}

static HANDLER_PROTO(get_TK_KEY_B) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_B);
}

static HANDLER_PROTO(get_TK_KEY_C) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_C);
}

static HANDLER_PROTO(get_TK_KEY_D) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_D);
}

static HANDLER_PROTO(get_TK_KEY_E) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_E);
}

static HANDLER_PROTO(get_TK_KEY_F) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F);
}

static HANDLER_PROTO(get_TK_KEY_G) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_G);
}

static HANDLER_PROTO(get_TK_KEY_H) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_H);
}

static HANDLER_PROTO(get_TK_KEY_I) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_I);
}

static HANDLER_PROTO(get_TK_KEY_J) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_J);
}

static HANDLER_PROTO(get_TK_KEY_K) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_K);
}

static HANDLER_PROTO(get_TK_KEY_L) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_L);
}

static HANDLER_PROTO(get_TK_KEY_M) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_M);
}

static HANDLER_PROTO(get_TK_KEY_N) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_N);
}

static HANDLER_PROTO(get_TK_KEY_O) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_O);
}

static HANDLER_PROTO(get_TK_KEY_P) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_P);
}

static HANDLER_PROTO(get_TK_KEY_Q) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_Q);
}

static HANDLER_PROTO(get_TK_KEY_R) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_R);
}

static HANDLER_PROTO(get_TK_KEY_S) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_S);
}

static HANDLER_PROTO(get_TK_KEY_T) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_T);
}

static HANDLER_PROTO(get_TK_KEY_U) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_U);
}

static HANDLER_PROTO(get_TK_KEY_V) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_V);
}

static HANDLER_PROTO(get_TK_KEY_W) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_W);
}

static HANDLER_PROTO(get_TK_KEY_X) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_X);
}

static HANDLER_PROTO(get_TK_KEY_Y) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_Y);
}

static HANDLER_PROTO(get_TK_KEY_Z) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_Z);
}

static HANDLER_PROTO(get_TK_KEY_DOT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_DOT);
}

static HANDLER_PROTO(get_TK_KEY_DELETE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_DELETE);
}

static HANDLER_PROTO(get_TK_KEY_LEFTBRACE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LEFTBRACE);
}

static HANDLER_PROTO(get_TK_KEY_RIGHTBRACE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RIGHTBRACE);
}

static HANDLER_PROTO(get_TK_KEY_LSHIFT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LSHIFT);
}

static HANDLER_PROTO(get_TK_KEY_RSHIFT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RSHIFT);
}

static HANDLER_PROTO(get_TK_KEY_LCTRL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LCTRL);
}

static HANDLER_PROTO(get_TK_KEY_RCTRL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RCTRL);
}

static HANDLER_PROTO(get_TK_KEY_LALT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LALT);
}

static HANDLER_PROTO(get_TK_KEY_RALT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RALT);
}

static HANDLER_PROTO(get_TK_KEY_CAPSLOCK) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_CAPSLOCK);
}

static HANDLER_PROTO(get_TK_KEY_HOME) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_HOME);
}

static HANDLER_PROTO(get_TK_KEY_END) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_END);
}

static HANDLER_PROTO(get_TK_KEY_INSERT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_INSERT);
}

static HANDLER_PROTO(get_TK_KEY_UP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_UP);
}

static HANDLER_PROTO(get_TK_KEY_DOWN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_DOWN);
}

static HANDLER_PROTO(get_TK_KEY_LEFT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_LEFT);
}

static HANDLER_PROTO(get_TK_KEY_RIGHT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_RIGHT);
}

static HANDLER_PROTO(get_TK_KEY_PAGEUP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PAGEUP);
}

static HANDLER_PROTO(get_TK_KEY_PAGEDOWN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_PAGEDOWN);
}

static HANDLER_PROTO(get_TK_KEY_F1) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F1);
}

static HANDLER_PROTO(get_TK_KEY_F2) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F2);
}

static HANDLER_PROTO(get_TK_KEY_F3) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F3);
}

static HANDLER_PROTO(get_TK_KEY_F4) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F4);
}

static HANDLER_PROTO(get_TK_KEY_F5) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F5);
}

static HANDLER_PROTO(get_TK_KEY_F6) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F6);
}

static HANDLER_PROTO(get_TK_KEY_F7) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F7);
}

static HANDLER_PROTO(get_TK_KEY_F8) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F8);
}

static HANDLER_PROTO(get_TK_KEY_F9) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F9);
}

static HANDLER_PROTO(get_TK_KEY_F10) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F10);
}

static HANDLER_PROTO(get_TK_KEY_F11) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F11);
}

static HANDLER_PROTO(get_TK_KEY_F12) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_F12);
}

static HANDLER_PROTO(get_TK_KEY_MENU) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_MENU);
}

static HANDLER_PROTO(get_TK_KEY_COMMAND) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_COMMAND);
}

static HANDLER_PROTO(get_TK_KEY_BACK) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_BACK);
}

static HANDLER_PROTO(get_TK_KEY_CANCEL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_CANCEL);
}

static HANDLER_PROTO(get_TK_KEY_WHEEL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, TK_KEY_WHEEL);
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
  jerryx_handler_register_global((const jerry_char_t*)"TK_KEY_WHEEL", get_TK_KEY_WHEEL);

  return RET_OK;
}

static HANDLER_PROTO(wrap_locale_info) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    locale_info_t* ret = NULL;
    ret = (locale_info_t*)locale_info();

    jret = jsvalue_create_pointer(ctx, ret, "locale_info_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_locale_info_tr) {
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

static HANDLER_PROTO(wrap_locale_info_change) {
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

static HANDLER_PROTO(wrap_locale_info_off) {
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

static HANDLER_PROTO(get_STYLE_ID_BG_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BG_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_FG_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FG_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_MASK_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MASK_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_FONT_NAME) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FONT_NAME);
}

static HANDLER_PROTO(get_STYLE_ID_FONT_SIZE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FONT_SIZE);
}

static HANDLER_PROTO(get_STYLE_ID_FONT_STYLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FONT_STYLE);
}

static HANDLER_PROTO(get_STYLE_ID_TEXT_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_HIGHLIGHT_FONT_NAME) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_HIGHLIGHT_FONT_NAME);
}

static HANDLER_PROTO(get_STYLE_ID_HIGHLIGHT_FONT_SIZE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_HIGHLIGHT_FONT_SIZE);
}

static HANDLER_PROTO(get_STYLE_ID_HIGHLIGHT_TEXT_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_HIGHLIGHT_TEXT_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_TIPS_TEXT_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_TIPS_TEXT_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_TEXT_ALIGN_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_ALIGN_H);
}

static HANDLER_PROTO(get_STYLE_ID_TEXT_ALIGN_V) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_ALIGN_V);
}

static HANDLER_PROTO(get_STYLE_ID_BORDER_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BORDER_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_BORDER_WIDTH) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BORDER_WIDTH);
}

static HANDLER_PROTO(get_STYLE_ID_BORDER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BORDER);
}

static HANDLER_PROTO(get_STYLE_ID_BG_IMAGE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BG_IMAGE);
}

static HANDLER_PROTO(get_STYLE_ID_BG_IMAGE_DRAW_TYPE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_BG_IMAGE_DRAW_TYPE);
}

static HANDLER_PROTO(get_STYLE_ID_ICON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ICON);
}

static HANDLER_PROTO(get_STYLE_ID_FG_IMAGE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FG_IMAGE);
}

static HANDLER_PROTO(get_STYLE_ID_FG_IMAGE_DRAW_TYPE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FG_IMAGE_DRAW_TYPE);
}

static HANDLER_PROTO(get_STYLE_ID_SPACER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SPACER);
}

static HANDLER_PROTO(get_STYLE_ID_MARGIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN);
}

static HANDLER_PROTO(get_STYLE_ID_MARGIN_LEFT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_LEFT);
}

static HANDLER_PROTO(get_STYLE_ID_MARGIN_RIGHT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_RIGHT);
}

static HANDLER_PROTO(get_STYLE_ID_MARGIN_TOP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_TOP);
}

static HANDLER_PROTO(get_STYLE_ID_MARGIN_BOTTOM) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_BOTTOM);
}

static HANDLER_PROTO(get_STYLE_ID_ICON_AT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ICON_AT);
}

static HANDLER_PROTO(get_STYLE_ID_ACTIVE_ICON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ACTIVE_ICON);
}

static HANDLER_PROTO(get_STYLE_ID_X_OFFSET) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_X_OFFSET);
}

static HANDLER_PROTO(get_STYLE_ID_Y_OFFSET) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_Y_OFFSET);
}

static HANDLER_PROTO(get_STYLE_ID_SELECTED_BG_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_BG_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_SELECTED_FG_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_FG_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_SELECTED_TEXT_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_TEXT_COLOR);
}

static HANDLER_PROTO(get_STYLE_ID_ROUND_RADIUS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ROUND_RADIUS);
}

static HANDLER_PROTO(get_STYLE_ID_ROUND_RADIUS_TOP_LETF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ROUND_RADIUS_TOP_LETF);
}

static HANDLER_PROTO(get_STYLE_ID_ROUND_RADIUS_TOP_RIGHT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ROUND_RADIUS_TOP_RIGHT);
}

static HANDLER_PROTO(get_STYLE_ID_ROUND_RADIUS_BOTTOM_LETF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ROUND_RADIUS_BOTTOM_LETF);
}

static HANDLER_PROTO(get_STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT);
}

static HANDLER_PROTO(get_STYLE_ID_CHILDREN_LAYOUT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_CHILDREN_LAYOUT);
}

static HANDLER_PROTO(get_STYLE_ID_SELF_LAYOUT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_SELF_LAYOUT);
}

static HANDLER_PROTO(get_STYLE_ID_FOCUSABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FOCUSABLE);
}

static HANDLER_PROTO(get_STYLE_ID_FEEDBACK) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, STYLE_ID_FEEDBACK);
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
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_HIGHLIGHT_FONT_NAME",
                                 get_STYLE_ID_HIGHLIGHT_FONT_NAME);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_HIGHLIGHT_FONT_SIZE",
                                 get_STYLE_ID_HIGHLIGHT_FONT_SIZE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_HIGHLIGHT_TEXT_COLOR",
                                 get_STYLE_ID_HIGHLIGHT_TEXT_COLOR);
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
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ROUND_RADIUS_TOP_LETF",
                                 get_STYLE_ID_ROUND_RADIUS_TOP_LETF);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ROUND_RADIUS_TOP_RIGHT",
                                 get_STYLE_ID_ROUND_RADIUS_TOP_RIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ROUND_RADIUS_BOTTOM_LETF",
                                 get_STYLE_ID_ROUND_RADIUS_BOTTOM_LETF);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT",
                                 get_STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_CHILDREN_LAYOUT",
                                 get_STYLE_ID_CHILDREN_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_SELF_LAYOUT",
                                 get_STYLE_ID_SELF_LAYOUT);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FOCUSABLE", get_STYLE_ID_FOCUSABLE);
  jerryx_handler_register_global((const jerry_char_t*)"STYLE_ID_FEEDBACK", get_STYLE_ID_FEEDBACK);

  return RET_OK;
}

static HANDLER_PROTO(wrap_style_notify_widget_state_changed) {
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

static HANDLER_PROTO(wrap_style_is_valid) {
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

static HANDLER_PROTO(wrap_style_get_int) {
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

static HANDLER_PROTO(wrap_style_get_uint) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    uint32_t ret = (uint32_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    uint32_t defval = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (uint32_t)style_get_uint(s, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_style_get_str) {
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

static HANDLER_PROTO(wrap_style_set) {
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

static HANDLER_PROTO(wrap_style_update_state) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    theme_t* theme = (theme_t*)jsvalue_get_pointer(ctx, argv[1], "theme_t*");
    const char* widget_type = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    const char* style_name = (const char*)jsvalue_get_utf8_string(ctx, argv[3]);
    const char* widget_state = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
    ret = (ret_t)style_update_state(s, theme, widget_type, style_name, widget_state);
    TKMEM_FREE(widget_type);
    TKMEM_FREE(style_name);
    TKMEM_FREE(widget_state);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_style_get_style_state) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    ret = (const char*)style_get_style_state(s);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_style_is_mutable) {
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

static HANDLER_PROTO(wrap_style_get_style_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    ret = (const char*)style_get_style_type(s);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

ret_t style_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"style_notify_widget_state_changed",
                                 wrap_style_notify_widget_state_changed);
  jerryx_handler_register_global((const jerry_char_t*)"style_is_valid", wrap_style_is_valid);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_int", wrap_style_get_int);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_uint", wrap_style_get_uint);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_str", wrap_style_get_str);
  jerryx_handler_register_global((const jerry_char_t*)"style_set", wrap_style_set);
  jerryx_handler_register_global((const jerry_char_t*)"style_update_state",
                                 wrap_style_update_state);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_style_state",
                                 wrap_style_get_style_state);
  jerryx_handler_register_global((const jerry_char_t*)"style_is_mutable", wrap_style_is_mutable);
  jerryx_handler_register_global((const jerry_char_t*)"style_get_style_type",
                                 wrap_style_get_style_type);

  return RET_OK;
}

static HANDLER_PROTO(wrap_theme) {
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

static HANDLER_PROTO(wrap_timer_remove) {
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

static HANDLER_PROTO(wrap_timer_remove_all_by_ctx) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    void* ctx = NULL;
    ret = (ret_t)timer_remove_all_by_ctx(ctx);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_timer_reset) {
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

static HANDLER_PROTO(wrap_timer_suspend) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (ret_t)timer_suspend(timer_id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_timer_resume) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (ret_t)timer_resume(timer_id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_timer_modify) {
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
  jerryx_handler_register_global((const jerry_char_t*)"timer_remove_all_by_ctx",
                                 wrap_timer_remove_all_by_ctx);
  jerryx_handler_register_global((const jerry_char_t*)"timer_reset", wrap_timer_reset);
  jerryx_handler_register_global((const jerry_char_t*)"timer_suspend", wrap_timer_suspend);
  jerryx_handler_register_global((const jerry_char_t*)"timer_resume", wrap_timer_resume);
  jerryx_handler_register_global((const jerry_char_t*)"timer_modify", wrap_timer_modify);

  return RET_OK;
}

static HANDLER_PROTO(get_ALIGN_V_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_V_NONE);
}

static HANDLER_PROTO(get_ALIGN_V_MIDDLE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_V_MIDDLE);
}

static HANDLER_PROTO(get_ALIGN_V_TOP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_V_TOP);
}

static HANDLER_PROTO(get_ALIGN_V_BOTTOM) {
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

static HANDLER_PROTO(get_ALIGN_H_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_H_NONE);
}

static HANDLER_PROTO(get_ALIGN_H_CENTER) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_H_CENTER);
}

static HANDLER_PROTO(get_ALIGN_H_LEFT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ALIGN_H_LEFT);
}

static HANDLER_PROTO(get_ALIGN_H_RIGHT) {
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

static HANDLER_PROTO(get_APP_MOBILE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, APP_MOBILE);
}

static HANDLER_PROTO(get_APP_SIMULATOR) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, APP_SIMULATOR);
}

static HANDLER_PROTO(get_APP_DESKTOP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, APP_DESKTOP);
}

ret_t app_type_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"APP_MOBILE", get_APP_MOBILE);
  jerryx_handler_register_global((const jerry_char_t*)"APP_SIMULATOR", get_APP_SIMULATOR);
  jerryx_handler_register_global((const jerry_char_t*)"APP_DESKTOP", get_APP_DESKTOP);

  return RET_OK;
}

static HANDLER_PROTO(get_BITMAP_FMT_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_NONE);
}

static HANDLER_PROTO(get_BITMAP_FMT_RGBA8888) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_RGBA8888);
}

static HANDLER_PROTO(get_BITMAP_FMT_ABGR8888) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_ABGR8888);
}

static HANDLER_PROTO(get_BITMAP_FMT_BGRA8888) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_BGRA8888);
}

static HANDLER_PROTO(get_BITMAP_FMT_ARGB8888) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_ARGB8888);
}

static HANDLER_PROTO(get_BITMAP_FMT_RGB565) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_RGB565);
}

static HANDLER_PROTO(get_BITMAP_FMT_BGR565) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_BGR565);
}

static HANDLER_PROTO(get_BITMAP_FMT_RGB888) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_RGB888);
}

static HANDLER_PROTO(get_BITMAP_FMT_BGR888) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_BGR888);
}

static HANDLER_PROTO(get_BITMAP_FMT_GRAY) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FMT_GRAY);
}

static HANDLER_PROTO(get_BITMAP_FMT_MONO) {
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

static HANDLER_PROTO(get_BITMAP_FLAG_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_NONE);
}

static HANDLER_PROTO(get_BITMAP_FLAG_OPAQUE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_OPAQUE);
}

static HANDLER_PROTO(get_BITMAP_FLAG_IMMUTABLE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_IMMUTABLE);
}

static HANDLER_PROTO(get_BITMAP_FLAG_TEXTURE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_TEXTURE);
}

static HANDLER_PROTO(get_BITMAP_FLAG_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, BITMAP_FLAG_CHANGED);
}

static HANDLER_PROTO(get_BITMAP_FLAG_PREMULTI_ALPHA) {
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

static HANDLER_PROTO(wrap_vgcanvas_cast) {
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

static HANDLER_PROTO(wrap_vgcanvas_flush) {
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

static HANDLER_PROTO(wrap_vgcanvas_begin_path) {
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

static HANDLER_PROTO(wrap_vgcanvas_move_to) {
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

static HANDLER_PROTO(wrap_vgcanvas_line_to) {
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

static HANDLER_PROTO(wrap_vgcanvas_quad_to) {
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

static HANDLER_PROTO(wrap_vgcanvas_bezier_to) {
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

static HANDLER_PROTO(wrap_vgcanvas_arc_to) {
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

static HANDLER_PROTO(wrap_vgcanvas_arc) {
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

static HANDLER_PROTO(wrap_vgcanvas_is_point_in_path) {
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

static HANDLER_PROTO(wrap_vgcanvas_rect) {
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

static HANDLER_PROTO(wrap_vgcanvas_rounded_rect) {
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

static HANDLER_PROTO(wrap_vgcanvas_ellipse) {
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

static HANDLER_PROTO(wrap_vgcanvas_close_path) {
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

static HANDLER_PROTO(wrap_vgcanvas_path_winding) {
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

static HANDLER_PROTO(wrap_vgcanvas_rotate) {
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

static HANDLER_PROTO(wrap_vgcanvas_scale) {
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

static HANDLER_PROTO(wrap_vgcanvas_translate) {
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

static HANDLER_PROTO(wrap_vgcanvas_transform) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_transform) {
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

static HANDLER_PROTO(wrap_vgcanvas_clip_path) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_clip_path(vg);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_clip_rect) {
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

static HANDLER_PROTO(wrap_vgcanvas_is_rectf_int_clip_rect) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    bool_t ret = (bool_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t left = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t top = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t right = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t bottom = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    ret = (bool_t)vgcanvas_is_rectf_int_clip_rect(vg, left, top, right, bottom);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_intersect_clip_rect) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
    float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_intersect_clip_rect(vg, x, y, w, h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_fill) {
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

static HANDLER_PROTO(wrap_vgcanvas_stroke) {
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

static HANDLER_PROTO(wrap_vgcanvas_paint) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_font) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_font_size) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_text_align) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_text_baseline) {
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

static HANDLER_PROTO(wrap_vgcanvas_fill_text) {
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

static HANDLER_PROTO(wrap_vgcanvas_measure_text) {
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

static HANDLER_PROTO(wrap_vgcanvas_draw_image) {
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

static HANDLER_PROTO(wrap_vgcanvas_draw_image_repeat) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 12) {
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
    float_t dst_w = (float_t)jsvalue_get_number_value(ctx, argv[10]);
    float_t dst_h = (float_t)jsvalue_get_number_value(ctx, argv[11]);
    ret = (ret_t)vgcanvas_draw_image_repeat(vg, img, sx, sy, sw, sh, dx, dy, dw, dh, dst_w, dst_h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_draw_icon) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_antialias) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_global_alpha) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_line_width) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_fill_color_str) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_stroke_color_str) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_line_cap) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_line_join) {
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

static HANDLER_PROTO(wrap_vgcanvas_set_miter_limit) {
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

static HANDLER_PROTO(wrap_vgcanvas_save) {
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

static HANDLER_PROTO(wrap_vgcanvas_restore) {
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

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_h) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_stride) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->stride);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_ratio) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->ratio);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_anti_alias) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_bool(ctx, obj->anti_alias);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_line_width) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->line_width);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_global_alpha) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->global_alpha);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_miter_limit) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->miter_limit);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_line_cap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->line_cap);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_line_join) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->line_join);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_font) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->font);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_font_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->font_size);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_text_align) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->text_align);
  return jret;
}

static HANDLER_PROTO(wrap_vgcanvas_t_get_prop_text_baseline) {
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
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_clip_path",
                                 wrap_vgcanvas_clip_path);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_clip_rect",
                                 wrap_vgcanvas_clip_rect);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_is_rectf_int_clip_rect",
                                 wrap_vgcanvas_is_rectf_int_clip_rect);
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_intersect_clip_rect",
                                 wrap_vgcanvas_intersect_clip_rect);
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
  jerryx_handler_register_global((const jerry_char_t*)"vgcanvas_draw_image_repeat",
                                 wrap_vgcanvas_draw_image_repeat);
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

static HANDLER_PROTO(get_VGCANVAS_LINE_CAP_ROUND) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, VGCANVAS_LINE_CAP_ROUND);
}

static HANDLER_PROTO(get_VGCANVAS_LINE_CAP_SQUARE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, VGCANVAS_LINE_CAP_SQUARE);
}

static HANDLER_PROTO(get_VGCANVAS_LINE_CAP_BUTT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, VGCANVAS_LINE_CAP_BUTT);
}

ret_t vgcanvas_line_cap_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"VGCANVAS_LINE_CAP_ROUND",
                                 get_VGCANVAS_LINE_CAP_ROUND);
  jerryx_handler_register_global((const jerry_char_t*)"VGCANVAS_LINE_CAP_SQUARE",
                                 get_VGCANVAS_LINE_CAP_SQUARE);
  jerryx_handler_register_global((const jerry_char_t*)"VGCANVAS_LINE_CAP_BUTT",
                                 get_VGCANVAS_LINE_CAP_BUTT);

  return RET_OK;
}

static HANDLER_PROTO(get_VGCANVAS_LINE_JOIN_ROUND) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, VGCANVAS_LINE_JOIN_ROUND);
}

static HANDLER_PROTO(get_VGCANVAS_LINE_JOIN_BEVEL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, VGCANVAS_LINE_JOIN_BEVEL);
}

static HANDLER_PROTO(get_VGCANVAS_LINE_JOIN_MITTER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, VGCANVAS_LINE_JOIN_MITTER);
}

ret_t vgcanvas_line_join_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"VGCANVAS_LINE_JOIN_ROUND",
                                 get_VGCANVAS_LINE_JOIN_ROUND);
  jerryx_handler_register_global((const jerry_char_t*)"VGCANVAS_LINE_JOIN_BEVEL",
                                 get_VGCANVAS_LINE_JOIN_BEVEL);
  jerryx_handler_register_global((const jerry_char_t*)"VGCANVAS_LINE_JOIN_MITTER",
                                 get_VGCANVAS_LINE_JOIN_MITTER);

  return RET_OK;
}

static HANDLER_PROTO(get_WIDGET_PROP_EXEC) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_EXEC);
}

static HANDLER_PROTO(get_WIDGET_PROP_X) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_X);
}

static HANDLER_PROTO(get_WIDGET_PROP_Y) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_Y);
}

static HANDLER_PROTO(get_WIDGET_PROP_W) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_W);
}

static HANDLER_PROTO(get_WIDGET_PROP_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_H);
}

static HANDLER_PROTO(get_WIDGET_PROP_MAX_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX_H);
}

static HANDLER_PROTO(get_WIDGET_PROP_DESIGN_W) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DESIGN_W);
}

static HANDLER_PROTO(get_WIDGET_PROP_DESIGN_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DESIGN_H);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_SCALE_CHILDREN_X) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_SCALE_CHILDREN_X);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_SCALE_CHILDREN_Y) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_SCALE_CHILDREN_Y);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_SCALE_CHILDREN_W) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_SCALE_CHILDREN_W);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_SCALE_CHILDREN_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_SCALE_CHILDREN_H);
}

static HANDLER_PROTO(get_WIDGET_PROP_INPUTING) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_INPUTING);
}

static HANDLER_PROTO(get_WIDGET_PROP_ALWAYS_ON_TOP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ALWAYS_ON_TOP);
}

static HANDLER_PROTO(get_WIDGET_PROP_CARET_X) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CARET_X);
}

static HANDLER_PROTO(get_WIDGET_PROP_CARET_Y) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CARET_Y);
}

static HANDLER_PROTO(get_WIDGET_PROP_DIRTY_RECT_TOLERANCE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DIRTY_RECT_TOLERANCE);
}

static HANDLER_PROTO(get_WIDGET_PROP_BIDI) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BIDI);
}

static HANDLER_PROTO(get_WIDGET_PROP_CANVAS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CANVAS);
}

static HANDLER_PROTO(get_WIDGET_PROP_LOCALIZE_OPTIONS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LOCALIZE_OPTIONS);
}

static HANDLER_PROTO(get_WIDGET_PROP_NATIVE_WINDOW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_NATIVE_WINDOW);
}

static HANDLER_PROTO(get_WIDGET_PROP_HIGHLIGHT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_HIGHLIGHT);
}

static HANDLER_PROTO(get_WIDGET_PROP_BAR_SIZE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BAR_SIZE);
}

static HANDLER_PROTO(get_WIDGET_PROP_OPACITY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPACITY);
}

static HANDLER_PROTO(get_WIDGET_PROP_MIN_W) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MIN_W);
}

static HANDLER_PROTO(get_WIDGET_PROP_MAX_W) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX_W);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_ADJUST_SIZE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_ADJUST_SIZE);
}

static HANDLER_PROTO(get_WIDGET_PROP_SINGLE_INSTANCE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SINGLE_INSTANCE);
}

static HANDLER_PROTO(get_WIDGET_PROP_STRONGLY_FOCUS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STRONGLY_FOCUS);
}

static HANDLER_PROTO(get_WIDGET_PROP_CHILDREN_LAYOUT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CHILDREN_LAYOUT);
}

static HANDLER_PROTO(get_WIDGET_PROP_LAYOUT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT);
}

static HANDLER_PROTO(get_WIDGET_PROP_SELF_LAYOUT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELF_LAYOUT);
}

static HANDLER_PROTO(get_WIDGET_PROP_LAYOUT_W) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT_W);
}

static HANDLER_PROTO(get_WIDGET_PROP_LAYOUT_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT_H);
}

static HANDLER_PROTO(get_WIDGET_PROP_VIRTUAL_W) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VIRTUAL_W);
}

static HANDLER_PROTO(get_WIDGET_PROP_VIRTUAL_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VIRTUAL_H);
}

static HANDLER_PROTO(get_WIDGET_PROP_NAME) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_NAME);
}

static HANDLER_PROTO(get_WIDGET_PROP_TYPE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TYPE);
}

static HANDLER_PROTO(get_WIDGET_PROP_CLOSABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_POINTER_CURSOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_POINTER_CURSOR);
}

static HANDLER_PROTO(get_WIDGET_PROP_VALUE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VALUE);
}

static HANDLER_PROTO(get_WIDGET_PROP_RADIO) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_RADIO);
}

static HANDLER_PROTO(get_WIDGET_PROP_REVERSE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_REVERSE);
}

static HANDLER_PROTO(get_WIDGET_PROP_LENGTH) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LENGTH);
}

static HANDLER_PROTO(get_WIDGET_PROP_LINE_WRAP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LINE_WRAP);
}

static HANDLER_PROTO(get_WIDGET_PROP_WORD_WRAP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_WORD_WRAP);
}

static HANDLER_PROTO(get_WIDGET_PROP_TEXT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TEXT);
}

static HANDLER_PROTO(get_WIDGET_PROP_TR_TEXT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TR_TEXT);
}

static HANDLER_PROTO(get_WIDGET_PROP_STYLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STYLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_ENABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ENABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_FEEDBACK) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FEEDBACK);
}

static HANDLER_PROTO(get_WIDGET_PROP_FLOATING) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FLOATING);
}

static HANDLER_PROTO(get_WIDGET_PROP_MARGIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MARGIN);
}

static HANDLER_PROTO(get_WIDGET_PROP_SPACING) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SPACING);
}

static HANDLER_PROTO(get_WIDGET_PROP_LEFT_MARGIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LEFT_MARGIN);
}

static HANDLER_PROTO(get_WIDGET_PROP_RIGHT_MARGIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_RIGHT_MARGIN);
}

static HANDLER_PROTO(get_WIDGET_PROP_TOP_MARGIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TOP_MARGIN);
}

static HANDLER_PROTO(get_WIDGET_PROP_BOTTOM_MARGIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BOTTOM_MARGIN);
}

static HANDLER_PROTO(get_WIDGET_PROP_STEP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STEP);
}

static HANDLER_PROTO(get_WIDGET_PROP_VISIBLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VISIBLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_SENSITIVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SENSITIVE);
}

static HANDLER_PROTO(get_WIDGET_PROP_ANIMATION) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIMATION);
}

static HANDLER_PROTO(get_WIDGET_PROP_ANIM_HINT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIM_HINT);
}

static HANDLER_PROTO(get_WIDGET_PROP_FULLSCREEN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FULLSCREEN);
}

static HANDLER_PROTO(get_WIDGET_PROP_DISABLE_ANIM) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DISABLE_ANIM);
}

static HANDLER_PROTO(get_WIDGET_PROP_OPEN_ANIM_HINT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_ANIM_HINT);
}

static HANDLER_PROTO(get_WIDGET_PROP_CLOSE_ANIM_HINT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_ANIM_HINT);
}

static HANDLER_PROTO(get_WIDGET_PROP_MIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MIN);
}

static HANDLER_PROTO(get_WIDGET_PROP_ACTION_TEXT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTION_TEXT);
}

static HANDLER_PROTO(get_WIDGET_PROP_TIPS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TIPS);
}

static HANDLER_PROTO(get_WIDGET_PROP_TR_TIPS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_TR_TIPS);
}

static HANDLER_PROTO(get_WIDGET_PROP_INPUT_TYPE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_INPUT_TYPE);
}

static HANDLER_PROTO(get_WIDGET_PROP_KEYBOARD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_KEYBOARD);
}

static HANDLER_PROTO(get_WIDGET_PROP_DEFAULT_FOCUSED_CHILD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_FOCUSED_CHILD);
}

static HANDLER_PROTO(get_WIDGET_PROP_READONLY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_READONLY);
}

static HANDLER_PROTO(get_WIDGET_PROP_CANCELABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CANCELABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_PASSWORD_VISIBLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_PASSWORD_VISIBLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_ACTIVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTIVE);
}

static HANDLER_PROTO(get_WIDGET_PROP_CURR_PAGE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CURR_PAGE);
}

static HANDLER_PROTO(get_WIDGET_PROP_PAGE_MAX_NUMBER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_PAGE_MAX_NUMBER);
}

static HANDLER_PROTO(get_WIDGET_PROP_VERTICAL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_VERTICAL);
}

static HANDLER_PROTO(get_WIDGET_PROP_SHOW_TEXT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SHOW_TEXT);
}

static HANDLER_PROTO(get_WIDGET_PROP_XOFFSET) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_XOFFSET);
}

static HANDLER_PROTO(get_WIDGET_PROP_YOFFSET) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_YOFFSET);
}

static HANDLER_PROTO(get_WIDGET_PROP_ALIGN_V) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ALIGN_V);
}

static HANDLER_PROTO(get_WIDGET_PROP_ALIGN_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ALIGN_H);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_PLAY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_PLAY);
}

static HANDLER_PROTO(get_WIDGET_PROP_LOOP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LOOP);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_FIX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_FIX);
}

static HANDLER_PROTO(get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED);
}

static HANDLER_PROTO(get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_IM_WHEN_FOCUSED);
}

static HANDLER_PROTO(get_WIDGET_PROP_CLOSE_IM_WHEN_BLURED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_IM_WHEN_BLURED);
}

static HANDLER_PROTO(get_WIDGET_PROP_X_MIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_X_MIN);
}

static HANDLER_PROTO(get_WIDGET_PROP_X_MAX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_X_MAX);
}

static HANDLER_PROTO(get_WIDGET_PROP_Y_MIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_Y_MIN);
}

static HANDLER_PROTO(get_WIDGET_PROP_Y_MAX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_Y_MAX);
}

static HANDLER_PROTO(get_WIDGET_PROP_MAX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX);
}

static HANDLER_PROTO(get_WIDGET_PROP_GRAB_KEYS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_GRAB_KEYS);
}

static HANDLER_PROTO(get_WIDGET_PROP_ROW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ROW);
}

static HANDLER_PROTO(get_WIDGET_PROP_STATE_FOR_STYLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STATE_FOR_STYLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_THEME) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_THEME);
}

static HANDLER_PROTO(get_WIDGET_PROP_STAGE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_STAGE);
}

static HANDLER_PROTO(get_WIDGET_PROP_IMAGE_MANAGER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_IMAGE_MANAGER);
}

static HANDLER_PROTO(get_WIDGET_PROP_ASSETS_MANAGER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ASSETS_MANAGER);
}

static HANDLER_PROTO(get_WIDGET_PROP_LOCALE_INFO) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LOCALE_INFO);
}

static HANDLER_PROTO(get_WIDGET_PROP_FONT_MANAGER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FONT_MANAGER);
}

static HANDLER_PROTO(get_WIDGET_PROP_THEME_OBJ) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_THEME_OBJ);
}

static HANDLER_PROTO(get_WIDGET_PROP_DEFAULT_THEME_OBJ) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_THEME_OBJ);
}

static HANDLER_PROTO(get_WIDGET_PROP_ITEM_WIDTH) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ITEM_WIDTH);
}

static HANDLER_PROTO(get_WIDGET_PROP_ITEM_HEIGHT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ITEM_HEIGHT);
}

static HANDLER_PROTO(get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

static HANDLER_PROTO(get_WIDGET_PROP_XSLIDABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_XSLIDABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_YSLIDABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_YSLIDABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_REPEAT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_REPEAT);
}

static HANDLER_PROTO(get_WIDGET_PROP_LONG_PRESS_TIME) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LONG_PRESS_TIME);
}

static HANDLER_PROTO(get_WIDGET_PROP_ENABLE_LONG_PRESS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ENABLE_LONG_PRESS);
}

static HANDLER_PROTO(get_WIDGET_PROP_CLICK_THROUGH) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLICK_THROUGH);
}

static HANDLER_PROTO(get_WIDGET_PROP_ANIMATABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIMATABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_HIDE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_HIDE);
}

static HANDLER_PROTO(get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

static HANDLER_PROTO(get_WIDGET_PROP_IMAGE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_IMAGE);
}

static HANDLER_PROTO(get_WIDGET_PROP_FORMAT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FORMAT);
}

static HANDLER_PROTO(get_WIDGET_PROP_DRAW_TYPE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DRAW_TYPE);
}

static HANDLER_PROTO(get_WIDGET_PROP_SELECTABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_CLICKABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLICKABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_SCALE_X) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SCALE_X);
}

static HANDLER_PROTO(get_WIDGET_PROP_SCALE_Y) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SCALE_Y);
}

static HANDLER_PROTO(get_WIDGET_PROP_ANCHOR_X) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANCHOR_X);
}

static HANDLER_PROTO(get_WIDGET_PROP_ANCHOR_Y) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ANCHOR_Y);
}

static HANDLER_PROTO(get_WIDGET_PROP_ROTATION) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ROTATION);
}

static HANDLER_PROTO(get_WIDGET_PROP_COMPACT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_COMPACT);
}

static HANDLER_PROTO(get_WIDGET_PROP_SCROLLABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SCROLLABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_ICON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ICON);
}

static HANDLER_PROTO(get_WIDGET_PROP_OPTIONS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPTIONS);
}

static HANDLER_PROTO(get_WIDGET_PROP_SELECTED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTED);
}

static HANDLER_PROTO(get_WIDGET_PROP_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CHECKED);
}

static HANDLER_PROTO(get_WIDGET_PROP_ACTIVE_ICON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTIVE_ICON);
}

static HANDLER_PROTO(get_WIDGET_PROP_LOAD_UI) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LOAD_UI);
}

static HANDLER_PROTO(get_WIDGET_PROP_OPEN_WINDOW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_WINDOW);
}

static HANDLER_PROTO(get_WIDGET_PROP_SELECTED_INDEX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTED_INDEX);
}

static HANDLER_PROTO(get_WIDGET_PROP_CLOSE_WHEN_CLICK) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK);
}

static HANDLER_PROTO(get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

static HANDLER_PROTO(get_WIDGET_PROP_CLOSE_WHEN_TIMEOUT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_TIMEOUT);
}

static HANDLER_PROTO(get_WIDGET_PROP_LINE_GAP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_LINE_GAP);
}

static HANDLER_PROTO(get_WIDGET_PROP_BG_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BG_COLOR);
}

static HANDLER_PROTO(get_WIDGET_PROP_BORDER_COLOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_BORDER_COLOR);
}

static HANDLER_PROTO(get_WIDGET_PROP_DELAY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_DELAY);
}

static HANDLER_PROTO(get_WIDGET_PROP_IS_KEYBOARD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_IS_KEYBOARD);
}

static HANDLER_PROTO(get_WIDGET_PROP_FOCUSED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUSED);
}

static HANDLER_PROTO(get_WIDGET_PROP_FOCUS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUS);
}

static HANDLER_PROTO(get_WIDGET_PROP_FOCUSABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUSABLE);
}

static HANDLER_PROTO(get_WIDGET_PROP_WITH_FOCUS_STATE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_WITH_FOCUS_STATE);
}

static HANDLER_PROTO(get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
}

static HANDLER_PROTO(get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
}

static HANDLER_PROTO(get_WIDGET_PROP_MOVE_FOCUS_UP_KEY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_UP_KEY);
}

static HANDLER_PROTO(get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_DOWN_KEY);
}

static HANDLER_PROTO(get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_LEFT_KEY);
}

static HANDLER_PROTO(get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY);
}

ret_t widget_prop_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_EXEC", get_WIDGET_PROP_EXEC);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X", get_WIDGET_PROP_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y", get_WIDGET_PROP_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_W", get_WIDGET_PROP_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_H", get_WIDGET_PROP_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MAX_H", get_WIDGET_PROP_MAX_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DESIGN_W",
                                 get_WIDGET_PROP_DESIGN_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DESIGN_H",
                                 get_WIDGET_PROP_DESIGN_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_SCALE_CHILDREN_X",
                                 get_WIDGET_PROP_AUTO_SCALE_CHILDREN_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_SCALE_CHILDREN_Y",
                                 get_WIDGET_PROP_AUTO_SCALE_CHILDREN_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_SCALE_CHILDREN_W",
                                 get_WIDGET_PROP_AUTO_SCALE_CHILDREN_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_SCALE_CHILDREN_H",
                                 get_WIDGET_PROP_AUTO_SCALE_CHILDREN_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_INPUTING",
                                 get_WIDGET_PROP_INPUTING);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ALWAYS_ON_TOP",
                                 get_WIDGET_PROP_ALWAYS_ON_TOP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CARET_X",
                                 get_WIDGET_PROP_CARET_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CARET_Y",
                                 get_WIDGET_PROP_CARET_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DIRTY_RECT_TOLERANCE",
                                 get_WIDGET_PROP_DIRTY_RECT_TOLERANCE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_BIDI", get_WIDGET_PROP_BIDI);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_ADJUST_SIZE",
                                 get_WIDGET_PROP_AUTO_ADJUST_SIZE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SINGLE_INSTANCE",
                                 get_WIDGET_PROP_SINGLE_INSTANCE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STRONGLY_FOCUS",
                                 get_WIDGET_PROP_STRONGLY_FOCUS);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_POINTER_CURSOR",
                                 get_WIDGET_PROP_POINTER_CURSOR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VALUE", get_WIDGET_PROP_VALUE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_RADIO", get_WIDGET_PROP_RADIO);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_REVERSE",
                                 get_WIDGET_PROP_REVERSE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LENGTH", get_WIDGET_PROP_LENGTH);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LINE_WRAP",
                                 get_WIDGET_PROP_LINE_WRAP);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_WORD_WRAP",
                                 get_WIDGET_PROP_WORD_WRAP);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DISABLE_ANIM",
                                 get_WIDGET_PROP_DISABLE_ANIM);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPEN_ANIM_HINT",
                                 get_WIDGET_PROP_OPEN_ANIM_HINT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_ANIM_HINT",
                                 get_WIDGET_PROP_CLOSE_ANIM_HINT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MIN", get_WIDGET_PROP_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ACTION_TEXT",
                                 get_WIDGET_PROP_ACTION_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TIPS", get_WIDGET_PROP_TIPS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TR_TIPS",
                                 get_WIDGET_PROP_TR_TIPS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_INPUT_TYPE",
                                 get_WIDGET_PROP_INPUT_TYPE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_KEYBOARD",
                                 get_WIDGET_PROP_KEYBOARD);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_DEFAULT_FOCUSED_CHILD",
                                 get_WIDGET_PROP_DEFAULT_FOCUSED_CHILD);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_READONLY",
                                 get_WIDGET_PROP_READONLY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CANCELABLE",
                                 get_WIDGET_PROP_CANCELABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_PASSWORD_VISIBLE",
                                 get_WIDGET_PROP_PASSWORD_VISIBLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ACTIVE", get_WIDGET_PROP_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CURR_PAGE",
                                 get_WIDGET_PROP_CURR_PAGE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_PAGE_MAX_NUMBER",
                                 get_WIDGET_PROP_PAGE_MAX_NUMBER);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_IM_WHEN_BLURED",
                                 get_WIDGET_PROP_CLOSE_IM_WHEN_BLURED);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LONG_PRESS_TIME",
                                 get_WIDGET_PROP_LONG_PRESS_TIME);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ENABLE_LONG_PRESS",
                                 get_WIDGET_PROP_ENABLE_LONG_PRESS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLICK_THROUGH",
                                 get_WIDGET_PROP_CLICK_THROUGH);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIMATABLE",
                                 get_WIDGET_PROP_ANIMATABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_HIDE",
                                 get_WIDGET_PROP_AUTO_HIDE);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_CLOSE_WHEN_TIMEOUT",
                                 get_WIDGET_PROP_CLOSE_WHEN_TIMEOUT);
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

static HANDLER_PROTO(get_WIDGET_TYPE_NONE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_NONE);
}

static HANDLER_PROTO(get_WIDGET_TYPE_WINDOW_MANAGER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_WINDOW_MANAGER);
}

static HANDLER_PROTO(get_WIDGET_TYPE_NORMAL_WINDOW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_NORMAL_WINDOW);
}

static HANDLER_PROTO(get_WIDGET_TYPE_OVERLAY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_OVERLAY);
}

static HANDLER_PROTO(get_WIDGET_TYPE_TOOL_BAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_TOOL_BAR);
}

static HANDLER_PROTO(get_WIDGET_TYPE_DIALOG) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG);
}

static HANDLER_PROTO(get_WIDGET_TYPE_POPUP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_POPUP);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SYSTEM_BAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR_BOTTOM);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SPRITE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SPRITE);
}

static HANDLER_PROTO(get_WIDGET_TYPE_KEYBOARD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_KEYBOARD);
}

static HANDLER_PROTO(get_WIDGET_TYPE_DND) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DND);
}

static HANDLER_PROTO(get_WIDGET_TYPE_LABEL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_LABEL);
}

static HANDLER_PROTO(get_WIDGET_TYPE_BUTTON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_BUTTON);
}

static HANDLER_PROTO(get_WIDGET_TYPE_IMAGE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_IMAGE);
}

static HANDLER_PROTO(get_WIDGET_TYPE_EDIT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_EDIT);
}

static HANDLER_PROTO(get_WIDGET_TYPE_PROGRESS_BAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_PROGRESS_BAR);
}

static HANDLER_PROTO(get_WIDGET_TYPE_GROUP_BOX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_GROUP_BOX);
}

static HANDLER_PROTO(get_WIDGET_TYPE_CHECK_BUTTON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_CHECK_BUTTON);
}

static HANDLER_PROTO(get_WIDGET_TYPE_RADIO_BUTTON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_RADIO_BUTTON);
}

static HANDLER_PROTO(get_WIDGET_TYPE_DIALOG_TITLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG_TITLE);
}

static HANDLER_PROTO(get_WIDGET_TYPE_DIALOG_CLIENT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG_CLIENT);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SLIDER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDER);
}

static HANDLER_PROTO(get_WIDGET_TYPE_VIEW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_VIEW);
}

static HANDLER_PROTO(get_WIDGET_TYPE_COMBO_BOX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COMBO_BOX);
}

static HANDLER_PROTO(get_WIDGET_TYPE_COMBO_BOX_ITEM) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COMBO_BOX_ITEM);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SLIDE_VIEW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_VIEW);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SLIDE_INDICATOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SLIDE_INDICATOR_ARC) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR_ARC);
}

static HANDLER_PROTO(get_WIDGET_TYPE_PAGES) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_PAGES);
}

static HANDLER_PROTO(get_WIDGET_TYPE_TAB_BUTTON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_BUTTON);
}

static HANDLER_PROTO(get_WIDGET_TYPE_TAB_CONTROL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_CONTROL);
}

static HANDLER_PROTO(get_WIDGET_TYPE_TAB_BUTTON_GROUP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_BUTTON_GROUP);
}

static HANDLER_PROTO(get_WIDGET_TYPE_BUTTON_GROUP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_BUTTON_GROUP);
}

static HANDLER_PROTO(get_WIDGET_TYPE_CANDIDATES) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_CANDIDATES);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SPIN_BOX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SPIN_BOX);
}

static HANDLER_PROTO(get_WIDGET_TYPE_DRAGGER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_DRAGGER);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SCROLL_BAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SCROLL_BAR_DESKTOP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SCROLL_BAR_MOBILE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

static HANDLER_PROTO(get_WIDGET_TYPE_SCROLL_VIEW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_VIEW);
}

static HANDLER_PROTO(get_WIDGET_TYPE_LIST_VIEW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_VIEW);
}

static HANDLER_PROTO(get_WIDGET_TYPE_LIST_VIEW_H) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_VIEW_H);
}

static HANDLER_PROTO(get_WIDGET_TYPE_LIST_ITEM) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_ITEM);
}

static HANDLER_PROTO(get_WIDGET_TYPE_COLOR_PICKER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_PICKER);
}

static HANDLER_PROTO(get_WIDGET_TYPE_COLOR_COMPONENT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_COMPONENT);
}

static HANDLER_PROTO(get_WIDGET_TYPE_COLOR_TILE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_TILE);
}

static HANDLER_PROTO(get_WIDGET_TYPE_CLIP_VIEW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_CLIP_VIEW);
}

static HANDLER_PROTO(get_WIDGET_TYPE_RICH_TEXT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_RICH_TEXT);
}

static HANDLER_PROTO(get_WIDGET_TYPE_APP_BAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_APP_BAR);
}

static HANDLER_PROTO(get_WIDGET_TYPE_GRID) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_GRID);
}

static HANDLER_PROTO(get_WIDGET_TYPE_GRID_ITEM) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_GRID_ITEM);
}

static HANDLER_PROTO(get_WIDGET_TYPE_ROW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_ROW);
}

static HANDLER_PROTO(get_WIDGET_TYPE_COLUMN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLUMN);
}

static HANDLER_PROTO(get_WIDGET_TYPE_CALIBRATION_WIN) {
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

static HANDLER_PROTO(get_WINDOW_STAGE_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_NONE);
}

static HANDLER_PROTO(get_WINDOW_STAGE_LOADED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_LOADED);
}

static HANDLER_PROTO(get_WINDOW_STAGE_CREATED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_CREATED);
}

static HANDLER_PROTO(get_WINDOW_STAGE_OPENED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_OPENED);
}

static HANDLER_PROTO(get_WINDOW_STAGE_CLOSED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_CLOSED);
}

static HANDLER_PROTO(get_WINDOW_STAGE_SUSPEND) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_STAGE_SUSPEND);
}

ret_t window_stage_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_NONE", get_WINDOW_STAGE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WINDOW_STAGE_LOADED",
                                 get_WINDOW_STAGE_LOADED);
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

static HANDLER_PROTO(get_WINDOW_CLOSABLE_YES) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_YES);
}

static HANDLER_PROTO(get_WINDOW_CLOSABLE_NO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_NO);
}

static HANDLER_PROTO(get_WINDOW_CLOSABLE_CONFIRM) {
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

static HANDLER_PROTO(get_WIDGET_STATE_NONE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_NONE);
}

static HANDLER_PROTO(get_WIDGET_STATE_NORMAL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL);
}

static HANDLER_PROTO(get_WIDGET_STATE_ACTIVATED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_ACTIVATED);
}

static HANDLER_PROTO(get_WIDGET_STATE_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_CHANGED);
}

static HANDLER_PROTO(get_WIDGET_STATE_PRESSED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED);
}

static HANDLER_PROTO(get_WIDGET_STATE_OVER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER);
}

static HANDLER_PROTO(get_WIDGET_STATE_DISABLE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_DISABLE);
}

static HANDLER_PROTO(get_WIDGET_STATE_FOCUSED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED);
}

static HANDLER_PROTO(get_WIDGET_STATE_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_CHECKED);
}

static HANDLER_PROTO(get_WIDGET_STATE_UNCHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_UNCHECKED);
}

static HANDLER_PROTO(get_WIDGET_STATE_EMPTY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_EMPTY);
}

static HANDLER_PROTO(get_WIDGET_STATE_EMPTY_FOCUS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_EMPTY_FOCUS);
}

static HANDLER_PROTO(get_WIDGET_STATE_ERROR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_ERROR);
}

static HANDLER_PROTO(get_WIDGET_STATE_SELECTED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_SELECTED);
}

static HANDLER_PROTO(get_WIDGET_STATE_NORMAL_OF_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL_OF_CHECKED);
}

static HANDLER_PROTO(get_WIDGET_STATE_PRESSED_OF_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED_OF_CHECKED);
}

static HANDLER_PROTO(get_WIDGET_STATE_OVER_OF_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER_OF_CHECKED);
}

static HANDLER_PROTO(get_WIDGET_STATE_DISABLE_OF_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_DISABLE_OF_CHECKED);
}

static HANDLER_PROTO(get_WIDGET_STATE_FOCUSED_OF_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED_OF_CHECKED);
}

static HANDLER_PROTO(get_WIDGET_STATE_NORMAL_OF_ACTIVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL_OF_ACTIVE);
}

static HANDLER_PROTO(get_WIDGET_STATE_PRESSED_OF_ACTIVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED_OF_ACTIVE);
}

static HANDLER_PROTO(get_WIDGET_STATE_OVER_OF_ACTIVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER_OF_ACTIVE);
}

static HANDLER_PROTO(get_WIDGET_STATE_DISABLE_OF_ACTIVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_DISABLE_OF_ACTIVE);
}

static HANDLER_PROTO(get_WIDGET_STATE_FOCUSED_OF_ACTIVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED_OF_ACTIVE);
}

ret_t widget_state_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NONE", get_WIDGET_STATE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NORMAL",
                                 get_WIDGET_STATE_NORMAL);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_ACTIVATED",
                                 get_WIDGET_STATE_ACTIVATED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_CHANGED",
                                 get_WIDGET_STATE_CHANGED);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_DISABLE_OF_CHECKED",
                                 get_WIDGET_STATE_DISABLE_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_FOCUSED_OF_CHECKED",
                                 get_WIDGET_STATE_FOCUSED_OF_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_NORMAL_OF_ACTIVE",
                                 get_WIDGET_STATE_NORMAL_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_PRESSED_OF_ACTIVE",
                                 get_WIDGET_STATE_PRESSED_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_OVER_OF_ACTIVE",
                                 get_WIDGET_STATE_OVER_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_DISABLE_OF_ACTIVE",
                                 get_WIDGET_STATE_DISABLE_OF_ACTIVE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_FOCUSED_OF_ACTIVE",
                                 get_WIDGET_STATE_FOCUSED_OF_ACTIVE);

  return RET_OK;
}

static HANDLER_PROTO(get_WIDGET_CURSOR_DEFAULT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_DEFAULT);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_EDIT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_EDIT);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_HAND) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_HAND);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_WAIT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_WAIT);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_CROSS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_CROSS);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_NO) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_NO);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_SIZENWSE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_SIZENWSE);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_SIZENESW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_SIZENESW);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_SIZEWE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_SIZEWE);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_SIZENS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_SIZENS);
}

static HANDLER_PROTO(get_WIDGET_CURSOR_SIZEALL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, WIDGET_CURSOR_SIZEALL);
}

ret_t widget_cursor_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_DEFAULT",
                                 get_WIDGET_CURSOR_DEFAULT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_EDIT", get_WIDGET_CURSOR_EDIT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_HAND", get_WIDGET_CURSOR_HAND);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_WAIT", get_WIDGET_CURSOR_WAIT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_CROSS",
                                 get_WIDGET_CURSOR_CROSS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_NO", get_WIDGET_CURSOR_NO);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_SIZENWSE",
                                 get_WIDGET_CURSOR_SIZENWSE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_SIZENESW",
                                 get_WIDGET_CURSOR_SIZENESW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_SIZEWE",
                                 get_WIDGET_CURSOR_SIZEWE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_SIZENS",
                                 get_WIDGET_CURSOR_SIZENS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_CURSOR_SIZEALL",
                                 get_WIDGET_CURSOR_SIZEALL);

  return RET_OK;
}

static HANDLER_PROTO(wrap_widget_count_children) {
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

static HANDLER_PROTO(wrap_widget_get_child) {
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

static HANDLER_PROTO(wrap_widget_get_focused_widget) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)widget_get_focused_widget(widget);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_native_window) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    native_window_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (native_window_t*)widget_get_native_window(widget);

    jret = jsvalue_create_pointer(ctx, ret, "native_window_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_index_of) {
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

static HANDLER_PROTO(wrap_widget_close_window) {
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

static HANDLER_PROTO(wrap_widget_close_window_force) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_close_window_force(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_back) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_back(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_back_to_home) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_back_to_home(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_move) {
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

static HANDLER_PROTO(wrap_widget_resize) {
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

static HANDLER_PROTO(wrap_widget_move_resize) {
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

static HANDLER_PROTO(wrap_widget_get_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    float_t ret = (float_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (float_t)widget_get_value(widget);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)widget_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_add_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t delta = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)widget_add_value(widget, delta);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_value_int) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = (int32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)widget_get_value_int(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_value_int) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_set_value_int(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_add_value_int) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_add_value_int(widget, delta);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_animate_value_to) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_animate_value_to(widget, value, duration);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_is_style_exist) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* style_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* state_name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (bool_t)widget_is_style_exist(widget, style_name, state_name);
    TKMEM_FREE(style_name);
    TKMEM_FREE(state_name);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_use_style) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* style = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_use_style(widget, style);
    TKMEM_FREE(style);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_text_utf8) {
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

static HANDLER_PROTO(wrap_widget_set_child_text_utf8) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)widget_set_child_text_utf8(widget, name, text);
    TKMEM_FREE(name);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_child_text_with_double) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    double value = (double)jsvalue_get_number_value(ctx, argv[3]);
    ret = (ret_t)widget_set_child_text_with_double(widget, name, format, value);
    TKMEM_FREE(name);
    TKMEM_FREE(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_child_text_with_int) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    int value = (int)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)widget_set_child_text_with_int(widget, name, format, value);
    TKMEM_FREE(name);
    TKMEM_FREE(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_tr_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_tr_text(widget, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_enable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_get_enable(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_floating) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_get_floating(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_auto_adjust_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_get_auto_adjust_size(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_with_focus_state) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_get_with_focus_state(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_focusable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_get_focusable(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_sensitive) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_get_sensitive(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_visible) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_get_visible(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_feedback) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_get_feedback(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_text) {
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

static HANDLER_PROTO(wrap_widget_set_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_name(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_theme) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_theme(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_pointer_cursor) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* cursor = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_pointer_cursor(widget, cursor);
    TKMEM_FREE(cursor);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_animation) {
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

static HANDLER_PROTO(wrap_widget_create_animator) {
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

static HANDLER_PROTO(wrap_widget_start_animator) {
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

static HANDLER_PROTO(wrap_widget_set_animator_time_scale) {
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

static HANDLER_PROTO(wrap_widget_pause_animator) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_pause_animator(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_stop_animator) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_stop_animator(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_destroy_animator) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_destroy_animator(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_enable) {
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

static HANDLER_PROTO(wrap_widget_set_feedback) {
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

static HANDLER_PROTO(wrap_widget_set_auto_adjust_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_adjust_size = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_auto_adjust_size(widget, auto_adjust_size);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_floating) {
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

static HANDLER_PROTO(wrap_widget_set_focused) {
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

static HANDLER_PROTO(wrap_widget_set_focusable) {
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

static HANDLER_PROTO(wrap_widget_set_state) {
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

static HANDLER_PROTO(wrap_widget_set_opacity) {
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

static HANDLER_PROTO(wrap_widget_set_dirty_rect_tolerance) {
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

static HANDLER_PROTO(wrap_widget_destroy_children) {
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

static HANDLER_PROTO(wrap_widget_add_child) {
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

static HANDLER_PROTO(wrap_widget_remove_child) {
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

static HANDLER_PROTO(wrap_widget_insert_child) {
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

static HANDLER_PROTO(wrap_widget_restack) {
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

static HANDLER_PROTO(wrap_widget_child) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (widget_t*)widget_child(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_lookup) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (widget_t*)widget_lookup(widget, name, recursive);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_lookup_by_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* type = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
    TKMEM_FREE(type);

    jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_visible) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_visible(widget, visible);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_visible_only) {
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

static HANDLER_PROTO(wrap_widget_set_sensitive) {
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

static HANDLER_PROTO(wrap_widget_off) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_off(widget, id);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_invalidate_force) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
    ret = (ret_t)widget_invalidate_force(widget, r);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_prop_str) {
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

static HANDLER_PROTO(wrap_widget_get_prop_str) {
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

static HANDLER_PROTO(wrap_widget_set_prop_pointer) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    void* v = (void*)jsvalue_get_pointer(ctx, argv[2], "void*");
    ret = (ret_t)widget_set_prop_pointer(widget, name, v);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_prop_pointer) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    void* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (void*)widget_get_prop_pointer(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "void*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_prop_float) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    float_t v = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (ret_t)widget_set_prop_float(widget, name, v);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_prop_float) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    float_t ret = (float_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
    ret = (float_t)widget_get_prop_float(widget, name, defval);
    TKMEM_FREE(name);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_prop_int) {
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

static HANDLER_PROTO(wrap_widget_get_prop_int) {
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

static HANDLER_PROTO(wrap_widget_set_prop_bool) {
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

static HANDLER_PROTO(wrap_widget_get_prop_bool) {
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

static HANDLER_PROTO(wrap_widget_is_window_opened) {
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

static HANDLER_PROTO(wrap_widget_is_window_created) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_window_created(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_is_parent_of) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
    ret = (bool_t)widget_is_parent_of(widget, child);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_is_direct_parent_of) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
    ret = (bool_t)widget_is_direct_parent_of(widget, child);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_is_window) {
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

static HANDLER_PROTO(wrap_widget_is_system_bar) {
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

static HANDLER_PROTO(wrap_widget_is_normal_window) {
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

static HANDLER_PROTO(wrap_widget_is_dialog) {
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

static HANDLER_PROTO(wrap_widget_is_popup) {
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

static HANDLER_PROTO(wrap_widget_is_overlay) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_overlay(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_is_opened_dialog) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_opened_dialog(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_is_opened_popup) {
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

static HANDLER_PROTO(wrap_widget_is_keyboard) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_keyboard(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_is_designing_window) {
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

static HANDLER_PROTO(wrap_widget_is_window_manager) {
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

static HANDLER_PROTO(wrap_widget_get_window) {
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

static HANDLER_PROTO(wrap_widget_get_window_manager) {
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

static HANDLER_PROTO(wrap_widget_get_type) {
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

static HANDLER_PROTO(wrap_widget_clone) {
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

static HANDLER_PROTO(wrap_widget_equal) {
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

static HANDLER_PROTO(wrap_widget_cast) {
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

static HANDLER_PROTO(wrap_widget_destroy) {
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

static HANDLER_PROTO(wrap_widget_destroy_async) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_destroy_async(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_unref) {
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

static HANDLER_PROTO(wrap_widget_stroke_border_rect) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[1], "canvas_t*");
    const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[2], "const rect_t*");
    ret = (ret_t)widget_stroke_border_rect(widget, c, r);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_fill_bg_rect) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[1], "canvas_t*");
    const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[2], "const rect_t*");
    image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)widget_fill_bg_rect(widget, c, r, draw_type);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_fill_fg_rect) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[1], "canvas_t*");
    const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[2], "const rect_t*");
    image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[3]);
    ret = (ret_t)widget_fill_fg_rect(widget, c, r, draw_type);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_dispatch_to_target) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    event_t* e = (event_t*)jsvalue_get_pointer(ctx, argv[1], "event_t*");
    ret = (ret_t)widget_dispatch_to_target(widget, e);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_dispatch_to_key_target) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    event_t* e = (event_t*)jsvalue_get_pointer(ctx, argv[1], "event_t*");
    ret = (ret_t)widget_dispatch_to_key_target(widget, e);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_style_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const char*)widget_get_style_type(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_update_style) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_update_style(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_update_style_recursive) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_update_style_recursive(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_set_as_key_target) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_set_as_key_target(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_focus_next) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_focus_next(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_focus_prev) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_focus_prev(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_get_state_for_style) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t active = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    bool_t checked = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (const char*)widget_get_state_for_style(widget, active, checked);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_widget_layout) {
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

static HANDLER_PROTO(wrap_widget_set_self_layout) {
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

static HANDLER_PROTO(wrap_widget_set_children_layout) {
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

static HANDLER_PROTO(wrap_widget_set_self_layout_params) {
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

static HANDLER_PROTO(wrap_widget_set_style_int) {
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

static HANDLER_PROTO(wrap_widget_set_style_str) {
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

static HANDLER_PROTO(wrap_widget_set_style_color) {
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

static HANDLER_PROTO(wrap_widget_t_get_prop_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_h) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_pointer_cursor) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->pointer_cursor);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_tr_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->tr_text);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_style) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->style);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_animation) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->animation);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_enable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->enable);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_feedback) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->feedback);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_visible) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->visible);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_sensitive) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->sensitive);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_focusable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->focusable);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_with_focus_state) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->with_focus_state);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_auto_adjust_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_adjust_size);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_floating) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->floating);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_dirty_rect_tolerance) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->dirty_rect_tolerance);
  return jret;
}

static HANDLER_PROTO(wrap_widget_t_get_prop_parent) {
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
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_focused_widget",
                                 wrap_widget_get_focused_widget);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_native_window",
                                 wrap_widget_get_native_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_index_of", wrap_widget_index_of);
  jerryx_handler_register_global((const jerry_char_t*)"widget_close_window",
                                 wrap_widget_close_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_close_window_force",
                                 wrap_widget_close_window_force);
  jerryx_handler_register_global((const jerry_char_t*)"widget_back", wrap_widget_back);
  jerryx_handler_register_global((const jerry_char_t*)"widget_back_to_home",
                                 wrap_widget_back_to_home);
  jerryx_handler_register_global((const jerry_char_t*)"widget_move", wrap_widget_move);
  jerryx_handler_register_global((const jerry_char_t*)"widget_resize", wrap_widget_resize);
  jerryx_handler_register_global((const jerry_char_t*)"widget_move_resize",
                                 wrap_widget_move_resize);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_value", wrap_widget_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_value", wrap_widget_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_add_value", wrap_widget_add_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_value_int",
                                 wrap_widget_get_value_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_value_int",
                                 wrap_widget_set_value_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_add_value_int",
                                 wrap_widget_add_value_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_animate_value_to",
                                 wrap_widget_animate_value_to);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_style_exist",
                                 wrap_widget_is_style_exist);
  jerryx_handler_register_global((const jerry_char_t*)"widget_use_style", wrap_widget_use_style);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_text_utf8",
                                 wrap_widget_set_text_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_child_text_utf8",
                                 wrap_widget_set_child_text_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_child_text_with_double",
                                 wrap_widget_set_child_text_with_double);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_child_text_with_int",
                                 wrap_widget_set_child_text_with_int);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_tr_text",
                                 wrap_widget_set_tr_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_enable", wrap_widget_get_enable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_floating",
                                 wrap_widget_get_floating);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_auto_adjust_size",
                                 wrap_widget_get_auto_adjust_size);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_with_focus_state",
                                 wrap_widget_get_with_focus_state);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_focusable",
                                 wrap_widget_get_focusable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_sensitive",
                                 wrap_widget_get_sensitive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_visible",
                                 wrap_widget_get_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_feedback",
                                 wrap_widget_get_feedback);
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
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_auto_adjust_size",
                                 wrap_widget_set_auto_adjust_size);
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
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_pointer",
                                 wrap_widget_set_prop_pointer);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_prop_pointer",
                                 wrap_widget_get_prop_pointer);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_float",
                                 wrap_widget_set_prop_float);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_prop_float",
                                 wrap_widget_get_prop_float);
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
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_window_created",
                                 wrap_widget_is_window_created);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_parent_of",
                                 wrap_widget_is_parent_of);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_direct_parent_of",
                                 wrap_widget_is_direct_parent_of);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_window", wrap_widget_is_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_system_bar",
                                 wrap_widget_is_system_bar);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_normal_window",
                                 wrap_widget_is_normal_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_dialog", wrap_widget_is_dialog);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_popup", wrap_widget_is_popup);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_overlay", wrap_widget_is_overlay);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_opened_dialog",
                                 wrap_widget_is_opened_dialog);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_opened_popup",
                                 wrap_widget_is_opened_popup);
  jerryx_handler_register_global((const jerry_char_t*)"widget_is_keyboard",
                                 wrap_widget_is_keyboard);
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
  jerryx_handler_register_global((const jerry_char_t*)"widget_destroy_async",
                                 wrap_widget_destroy_async);
  jerryx_handler_register_global((const jerry_char_t*)"widget_unref", wrap_widget_unref);
  jerryx_handler_register_global((const jerry_char_t*)"widget_stroke_border_rect",
                                 wrap_widget_stroke_border_rect);
  jerryx_handler_register_global((const jerry_char_t*)"widget_fill_bg_rect",
                                 wrap_widget_fill_bg_rect);
  jerryx_handler_register_global((const jerry_char_t*)"widget_fill_fg_rect",
                                 wrap_widget_fill_fg_rect);
  jerryx_handler_register_global((const jerry_char_t*)"widget_dispatch_to_target",
                                 wrap_widget_dispatch_to_target);
  jerryx_handler_register_global((const jerry_char_t*)"widget_dispatch_to_key_target",
                                 wrap_widget_dispatch_to_key_target);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_style_type",
                                 wrap_widget_get_style_type);
  jerryx_handler_register_global((const jerry_char_t*)"widget_update_style",
                                 wrap_widget_update_style);
  jerryx_handler_register_global((const jerry_char_t*)"widget_update_style_recursive",
                                 wrap_widget_update_style_recursive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_as_key_target",
                                 wrap_widget_set_as_key_target);
  jerryx_handler_register_global((const jerry_char_t*)"widget_focus_next", wrap_widget_focus_next);
  jerryx_handler_register_global((const jerry_char_t*)"widget_focus_prev", wrap_widget_focus_prev);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_state_for_style",
                                 wrap_widget_get_state_for_style);
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
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_pointer_cursor",
                                 wrap_widget_t_get_prop_pointer_cursor);
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
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_visible",
                                 wrap_widget_t_get_prop_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_sensitive",
                                 wrap_widget_t_get_prop_sensitive);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_focusable",
                                 wrap_widget_t_get_prop_focusable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_with_focus_state",
                                 wrap_widget_t_get_prop_with_focus_state);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_auto_adjust_size",
                                 wrap_widget_t_get_prop_auto_adjust_size);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_floating",
                                 wrap_widget_t_get_prop_floating);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_dirty_rect_tolerance",
                                 wrap_widget_t_get_prop_dirty_rect_tolerance);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_parent",
                                 wrap_widget_t_get_prop_parent);

  return RET_OK;
}

static HANDLER_PROTO(wrap_app_conf_save) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = (ret_t)0;
    ret = (ret_t)app_conf_save();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_reload) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = (ret_t)0;
    ret = (ret_t)app_conf_reload();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_deinit) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = (ret_t)0;
    ret = (ret_t)app_conf_deinit();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_exist) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    ret = (bool_t)app_conf_exist(key);
    TKMEM_FREE(key);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_set_int) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    int32_t v = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)app_conf_set_int(key, v);
    TKMEM_FREE(key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_set_int64) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    int64_t v = (int64_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)app_conf_set_int64(key, v);
    TKMEM_FREE(key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_set_bool) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    bool_t v = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)app_conf_set_bool(key, v);
    TKMEM_FREE(key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_set_double) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    double v = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)app_conf_set_double(key, v);
    TKMEM_FREE(key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_set_str) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    const char* v = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)app_conf_set_str(key, v);
    TKMEM_FREE(key);
    TKMEM_FREE(v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_get_int) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    int32_t ret = (int32_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (int32_t)app_conf_get_int(key, defval);
    TKMEM_FREE(key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_get_int64) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    int64_t ret = (int64_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    int64_t defval = (int64_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (int64_t)app_conf_get_int64(key, defval);
    TKMEM_FREE(key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_get_bool) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    bool_t ret = (bool_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (bool_t)app_conf_get_bool(key, defval);
    TKMEM_FREE(key);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_get_double) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    double ret = (double)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    double defval = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (double)app_conf_get_double(key, defval);
    TKMEM_FREE(key);

    jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_get_str) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    const char* ret = NULL;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (const char*)app_conf_get_str(key, defval);
    TKMEM_FREE(key);
    TKMEM_FREE(defval);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_app_conf_remove) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    const char* key = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    ret = (ret_t)app_conf_remove(key);
    TKMEM_FREE(key);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t app_conf_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_save", wrap_app_conf_save);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_reload", wrap_app_conf_reload);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_deinit", wrap_app_conf_deinit);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_exist", wrap_app_conf_exist);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_set_int", wrap_app_conf_set_int);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_set_int64",
                                 wrap_app_conf_set_int64);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_set_bool", wrap_app_conf_set_bool);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_set_double",
                                 wrap_app_conf_set_double);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_set_str", wrap_app_conf_set_str);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_get_int", wrap_app_conf_get_int);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_get_int64",
                                 wrap_app_conf_get_int64);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_get_bool", wrap_app_conf_get_bool);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_get_double",
                                 wrap_app_conf_get_double);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_get_str", wrap_app_conf_get_str);
  jerryx_handler_register_global((const jerry_char_t*)"app_conf_remove", wrap_app_conf_remove);

  return RET_OK;
}

static HANDLER_PROTO(wrap_tk_ext_widgets_init) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = (ret_t)0;
    ret = (ret_t)tk_ext_widgets_init();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t ext_widgets_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"tk_ext_widgets_init",
                                 wrap_tk_ext_widgets_init);

  return RET_OK;
}

static HANDLER_PROTO(get_INDICATOR_DEFAULT_PAINT_AUTO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_AUTO);
}

static HANDLER_PROTO(get_INDICATOR_DEFAULT_PAINT_FILL_DOT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_FILL_DOT);
}

static HANDLER_PROTO(get_INDICATOR_DEFAULT_PAINT_STROKE_DOT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_STROKE_DOT);
}

static HANDLER_PROTO(get_INDICATOR_DEFAULT_PAINT_FILL_RECT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_FILL_RECT);
}

static HANDLER_PROTO(get_INDICATOR_DEFAULT_PAINT_STROKE_RECT) {
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

static HANDLER_PROTO(get_EVT_VPAGE_WILL_OPEN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VPAGE_WILL_OPEN);
}

static HANDLER_PROTO(get_EVT_VPAGE_OPEN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VPAGE_OPEN);
}

static HANDLER_PROTO(get_EVT_VPAGE_CLOSE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EVT_VPAGE_CLOSE);
}

ret_t vpage_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VPAGE_WILL_OPEN",
                                 get_EVT_VPAGE_WILL_OPEN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VPAGE_OPEN", get_EVT_VPAGE_OPEN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VPAGE_CLOSE", get_EVT_VPAGE_CLOSE);

  return RET_OK;
}

static HANDLER_PROTO(get_ASSET_TYPE_NONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_NONE);
}

static HANDLER_PROTO(get_ASSET_TYPE_FONT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_FONT);
}

static HANDLER_PROTO(get_ASSET_TYPE_IMAGE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_IMAGE);
}

static HANDLER_PROTO(get_ASSET_TYPE_STYLE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_STYLE);
}

static HANDLER_PROTO(get_ASSET_TYPE_UI) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_UI);
}

static HANDLER_PROTO(get_ASSET_TYPE_XML) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_XML);
}

static HANDLER_PROTO(get_ASSET_TYPE_STRINGS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_STRINGS);
}

static HANDLER_PROTO(get_ASSET_TYPE_SCRIPT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_SCRIPT);
}

static HANDLER_PROTO(get_ASSET_TYPE_FLOW) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, ASSET_TYPE_FLOW);
}

static HANDLER_PROTO(get_ASSET_TYPE_DATA) {
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
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_FLOW", get_ASSET_TYPE_FLOW);
  jerryx_handler_register_global((const jerry_char_t*)"ASSET_TYPE_DATA", get_ASSET_TYPE_DATA);

  return RET_OK;
}

static HANDLER_PROTO(wrap_asset_info_get_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint16_t ret = (uint16_t)0;
    asset_info_t* info = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");
    ret = (uint16_t)asset_info_get_type(info);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_asset_info_get_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    asset_info_t* info = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");
    ret = (const char*)asset_info_get_name(info);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_asset_info_t_get_prop_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->type);
  return jret;
}

static HANDLER_PROTO(wrap_asset_info_t_get_prop_subtype) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->subtype);
  return jret;
}

static HANDLER_PROTO(wrap_asset_info_t_get_prop_is_in_rom) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->is_in_rom);
  return jret;
}

static HANDLER_PROTO(wrap_asset_info_t_get_prop_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

static HANDLER_PROTO(wrap_asset_info_t_get_prop_refcount) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->refcount);
  return jret;
}

static HANDLER_PROTO(wrap_asset_info_t_get_prop_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t asset_info_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_get_type",
                                 wrap_asset_info_get_type);
  jerryx_handler_register_global((const jerry_char_t*)"asset_info_get_name",
                                 wrap_asset_info_get_name);
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

static HANDLER_PROTO(wrap_color_create) {
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

static HANDLER_PROTO(wrap_color_from_str) {
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

static HANDLER_PROTO(wrap_color_r) {
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

static HANDLER_PROTO(wrap_color_g) {
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

static HANDLER_PROTO(wrap_color_b) {
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

static HANDLER_PROTO(wrap_color_a) {
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

static HANDLER_PROTO(wrap_color_get_color) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint32_t)color_get_color(c);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_color_cast) {
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

static HANDLER_PROTO(wrap_color_t_set_prop_color) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  uint32_t color = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  obj->color = color;

  jret = jsvalue_create_int(ctx, obj->color);
  return jret;
};

static HANDLER_PROTO(wrap_color_t_get_prop_color) {
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
  jerryx_handler_register_global((const jerry_char_t*)"color_get_color", wrap_color_get_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_cast", wrap_color_cast);
  jerryx_handler_register_global((const jerry_char_t*)"color_t_set_prop_color",
                                 wrap_color_t_set_prop_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_t_get_prop_color",
                                 wrap_color_t_get_prop_color);

  return RET_OK;
}

static HANDLER_PROTO(wrap_date_time_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    date_time_t* ret = NULL;
    ret = (date_time_t*)date_time_create();

    jret = jsvalue_create_object(ctx, ret, "date_time_t*", &s_date_time_destroy_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_set_year) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    uint32_t year = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)date_time_set_year(dt, year);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_set_month) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    uint32_t month = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)date_time_set_month(dt, month);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_set_day) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    uint32_t day = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)date_time_set_day(dt, day);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_set_hour) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    uint32_t hour = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)date_time_set_hour(dt, hour);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_set_minute) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    uint32_t minute = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)date_time_set_minute(dt, minute);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_set_second) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    uint32_t second = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)date_time_set_second(dt, second);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_set) {
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

static HANDLER_PROTO(wrap_date_time_from_time) {
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

static HANDLER_PROTO(wrap_date_time_to_time) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint64_t ret = (uint64_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    ret = (uint64_t)date_time_to_time(dt);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_add_delta) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
    int64_t delta = (int64_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)date_time_add_delta(dt, delta);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_is_leap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    uint32_t year = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (bool_t)date_time_is_leap(year);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_get_days) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    int32_t ret = (int32_t)0;
    uint32_t year = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    uint32_t montn = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (int32_t)date_time_get_days(year, montn);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_get_wday) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = (int32_t)0;
    uint32_t year = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    uint32_t montn = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t day = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (int32_t)date_time_get_wday(year, montn, day);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_get_month_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    uint32_t montn = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (const char*)date_time_get_month_name(montn);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_get_wday_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    uint32_t wday = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
    ret = (const char*)date_time_get_wday_name(wday);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_date_time_t_get_prop_second) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->second);
  return jret;
}

static HANDLER_PROTO(wrap_date_time_t_get_prop_minute) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->minute);
  return jret;
}

static HANDLER_PROTO(wrap_date_time_t_get_prop_hour) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->hour);
  return jret;
}

static HANDLER_PROTO(wrap_date_time_t_get_prop_day) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->day);
  return jret;
}

static HANDLER_PROTO(wrap_date_time_t_get_prop_wday) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->wday);
  return jret;
}

static HANDLER_PROTO(wrap_date_time_t_get_prop_month) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->month);
  return jret;
}

static HANDLER_PROTO(wrap_date_time_t_get_prop_year) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->year);
  return jret;
}

ret_t date_time_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"date_time_create", wrap_date_time_create);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_set_year",
                                 wrap_date_time_set_year);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_set_month",
                                 wrap_date_time_set_month);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_set_day", wrap_date_time_set_day);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_set_hour",
                                 wrap_date_time_set_hour);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_set_minute",
                                 wrap_date_time_set_minute);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_set_second",
                                 wrap_date_time_set_second);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_set", wrap_date_time_set);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_from_time",
                                 wrap_date_time_from_time);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_to_time", wrap_date_time_to_time);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_add_delta",
                                 wrap_date_time_add_delta);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_is_leap", wrap_date_time_is_leap);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_get_days",
                                 wrap_date_time_get_days);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_get_wday",
                                 wrap_date_time_get_wday);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_get_month_name",
                                 wrap_date_time_get_month_name);
  jerryx_handler_register_global((const jerry_char_t*)"date_time_get_wday_name",
                                 wrap_date_time_get_wday_name);
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

static HANDLER_PROTO(get_EASING_LINEAR) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_LINEAR);
}

static HANDLER_PROTO(get_EASING_QUADRATIC_IN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_QUADRATIC_IN);
}

static HANDLER_PROTO(get_EASING_QUADRATIC_OUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_QUADRATIC_OUT);
}

static HANDLER_PROTO(get_EASING_QUADRATIC_INOUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_QUADRATIC_INOUT);
}

static HANDLER_PROTO(get_EASING_CUBIC_IN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CUBIC_IN);
}

static HANDLER_PROTO(get_EASING_CUBIC_OUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CUBIC_OUT);
}

static HANDLER_PROTO(get_EASING_SIN_IN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_SIN_IN);
}

static HANDLER_PROTO(get_EASING_SIN_OUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_SIN_OUT);
}

static HANDLER_PROTO(get_EASING_SIN_INOUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_SIN_INOUT);
}

static HANDLER_PROTO(get_EASING_POW_IN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_POW_IN);
}

static HANDLER_PROTO(get_EASING_POW_OUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_POW_OUT);
}

static HANDLER_PROTO(get_EASING_POW_INOUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_POW_INOUT);
}

static HANDLER_PROTO(get_EASING_CIRCULAR_IN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CIRCULAR_IN);
}

static HANDLER_PROTO(get_EASING_CIRCULAR_OUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CIRCULAR_OUT);
}

static HANDLER_PROTO(get_EASING_CIRCULAR_INOUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_CIRCULAR_INOUT);
}

static HANDLER_PROTO(get_EASING_ELASTIC_IN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_ELASTIC_IN);
}

static HANDLER_PROTO(get_EASING_ELASTIC_OUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_ELASTIC_OUT);
}

static HANDLER_PROTO(get_EASING_ELASTIC_INOUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_ELASTIC_INOUT);
}

static HANDLER_PROTO(get_EASING_BACK_IN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BACK_IN);
}

static HANDLER_PROTO(get_EASING_BACK_OUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BACK_OUT);
}

static HANDLER_PROTO(get_EASING_BACK_INOUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BACK_INOUT);
}

static HANDLER_PROTO(get_EASING_BOUNCE_IN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BOUNCE_IN);
}

static HANDLER_PROTO(get_EASING_BOUNCE_OUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, EASING_BOUNCE_OUT);
}

static HANDLER_PROTO(get_EASING_BOUNCE_INOUT) {
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

ret_t idle_manager_t_init(JSContext* ctx) {
  return RET_OK;
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_ENVOY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ENVOY);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_FRACTALS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_FRACTALS);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_FUTURESPLASH) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_FUTURESPLASH);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_HTA) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_HTA);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_JSON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_JSON);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_UBJSON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_UBJSON);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_MAC_BINHEX40) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_MAC_BINHEX40);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_MSWORD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_MSWORD);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_OCTET_STREAM) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_OCTET_STREAM);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_ODA) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ODA);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_OLESCRIPT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_OLESCRIPT);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_PDF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PDF);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_PICS_RULES) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PICS_RULES);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_PKCS10) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PKCS10);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_PKIX_CRL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PKIX_CRL);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_POSTSCRIPT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_POSTSCRIPT);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_RTF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_RTF);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_VND_MS_EXCEL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_EXCEL);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_OUTLOOK);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKISECCAT);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_VND_MS_PKISTL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKISTL);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_POWERPOINT);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_VND_MS_PROJECT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PROJECT);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_VND_MS_WORKS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_WORKS);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_WINHLP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_WINHLP);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_BCPIO) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_BCPIO);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_CDF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CDF);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_COMPRESS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_COMPRESS);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_COMPRESSED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_COMPRESSED);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_CPIO) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CPIO);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_CSH) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CSH);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_DIRECTOR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_DIRECTOR);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_DVI) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_DVI);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_GTAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_GTAR);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_GZIP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_GZIP);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_HDF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_HDF);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_IPHONE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_IPHONE);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_JAVASCRIPT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_JAVASCRIPT);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_LATEX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_LATEX);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSACCESS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSACCESS);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSCARDFILE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSCARDFILE);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSCLIP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSCLIP);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSDOWNLOAD);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMEDIAVIEW);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSMETAFILE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMETAFILE);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSMONEY) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMONEY);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSPUBLISHER) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSPUBLISHER);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSSCHEDULE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSSCHEDULE);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSTERMINAL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSTERMINAL);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_MSWRITE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSWRITE);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_NETCDF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_NETCDF);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_PERFMON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_PERFMON);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_PKCS12) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_PKCS12);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_SH) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SH);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_SHAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SHAR);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_STUFFIT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_STUFFIT);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_SV4CPIO) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SV4CPIO);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_SV4CRC) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SV4CRC);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_TAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TAR);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_TCL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TCL);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_TEX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TEX);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_TEXINFO) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TEXINFO);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_TROFF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TROFF);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_X_USTAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_USTAR);
}

static HANDLER_PROTO(get_MIME_TYPE_APPLICATION_ZIP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ZIP);
}

static HANDLER_PROTO(get_MIME_TYPE_AUDIO_BASIC) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_BASIC);
}

static HANDLER_PROTO(get_MIME_TYPE_AUDIO_MID) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_MID);
}

static HANDLER_PROTO(get_MIME_TYPE_AUDIO_MPEG) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_MPEG);
}

static HANDLER_PROTO(get_MIME_TYPE_AUDIO_X_AIFF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_AIFF);
}

static HANDLER_PROTO(get_MIME_TYPE_AUDIO_X_MPEGURL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_MPEGURL);
}

static HANDLER_PROTO(get_MIME_TYPE_AUDIO_X_WAV) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_WAV);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_BMP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_BMP);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_CIS_COD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_CIS_COD);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_GIF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_GIF);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_IEF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_IEF);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_JPEG) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_JPEG);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_PIPEG) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_PIPEG);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_SVG_XML) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_SVG_XML);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_TIFF) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_TIFF);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_X_CMX) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_CMX);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_X_ICON) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_ICON);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_X_RGB) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_RGB);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_X_XBITMAP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XBITMAP);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_X_XPIXMAP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XPIXMAP);
}

static HANDLER_PROTO(get_MIME_TYPE_IMAGE_X_XWINDOWDUMP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XWINDOWDUMP);
}

static HANDLER_PROTO(get_MIME_TYPE_MESSAGE_RFC822) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_MESSAGE_RFC822);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_CSS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_CSS);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_H323) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_H323);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_HTML) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_HTML);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_IULS) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_IULS);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_PLAIN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_PLAIN);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_RICHTEXT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_RICHTEXT);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_SCRIPTLET) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_SCRIPTLET);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_WEBVIEWHTML) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_WEBVIEWHTML);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_X_COMPONENT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_COMPONENT);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_X_SETEXT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_SETEXT);
}

static HANDLER_PROTO(get_MIME_TYPE_TEXT_X_VCARD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_VCARD);
}

static HANDLER_PROTO(get_MIME_TYPE_VIDEO_MPEG) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_MPEG);
}

static HANDLER_PROTO(get_MIME_TYPE_VIDEO_QUICKTIME) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_QUICKTIME);
}

static HANDLER_PROTO(get_MIME_TYPE_VIDEO_X_MSVIDEO) {
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

static HANDLER_PROTO(wrap_named_value_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    named_value_t* ret = NULL;
    ret = (named_value_t*)named_value_create();

    jret = jsvalue_create_object(ctx, ret, "named_value_t*", &s_named_value_destroy_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_named_value_cast) {
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

static HANDLER_PROTO(wrap_named_value_set_name) {
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

static HANDLER_PROTO(wrap_named_value_set_value) {
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

static HANDLER_PROTO(wrap_named_value_get_value) {
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

static HANDLER_PROTO(wrap_named_value_t_get_prop_name) {
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

static HANDLER_PROTO(get_OBJECT_CMD_SAVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_SAVE);
}

static HANDLER_PROTO(get_OBJECT_CMD_RELOAD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_RELOAD);
}

static HANDLER_PROTO(get_OBJECT_CMD_MOVE_UP) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_MOVE_UP);
}

static HANDLER_PROTO(get_OBJECT_CMD_MOVE_DOWN) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_MOVE_DOWN);
}

static HANDLER_PROTO(get_OBJECT_CMD_REMOVE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_REMOVE);
}

static HANDLER_PROTO(get_OBJECT_CMD_REMOVE_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_REMOVE_CHECKED);
}

static HANDLER_PROTO(get_OBJECT_CMD_CLEAR) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_CLEAR);
}

static HANDLER_PROTO(get_OBJECT_CMD_ADD) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_ADD);
}

static HANDLER_PROTO(get_OBJECT_CMD_DETAIL) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_DETAIL);
}

static HANDLER_PROTO(get_OBJECT_CMD_EDIT) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_CMD_EDIT);
}

ret_t object_cmd_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_SAVE", get_OBJECT_CMD_SAVE);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_RELOAD", get_OBJECT_CMD_RELOAD);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_MOVE_UP", get_OBJECT_CMD_MOVE_UP);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_MOVE_DOWN",
                                 get_OBJECT_CMD_MOVE_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_REMOVE", get_OBJECT_CMD_REMOVE);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_REMOVE_CHECKED",
                                 get_OBJECT_CMD_REMOVE_CHECKED);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_CLEAR", get_OBJECT_CMD_CLEAR);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_ADD", get_OBJECT_CMD_ADD);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_DETAIL", get_OBJECT_CMD_DETAIL);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_CMD_EDIT", get_OBJECT_CMD_EDIT);

  return RET_OK;
}

static HANDLER_PROTO(get_OBJECT_PROP_SIZE) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_PROP_SIZE);
}

static HANDLER_PROTO(get_OBJECT_PROP_CHECKED) {
  void* ctx = NULL;
  return jsvalue_create_string(ctx, OBJECT_PROP_CHECKED);
}

ret_t object_prop_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_PROP_SIZE", get_OBJECT_PROP_SIZE);
  jerryx_handler_register_global((const jerry_char_t*)"OBJECT_PROP_CHECKED",
                                 get_OBJECT_PROP_CHECKED);

  return RET_OK;
}

static HANDLER_PROTO(wrap_rlog_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    rlog_t* ret = NULL;
    const char* filename_pattern = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
    uint32_t max_size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t buff_size = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (rlog_t*)rlog_create(filename_pattern, max_size, buff_size);
    TKMEM_FREE(filename_pattern);

    jret = jsvalue_create_pointer(ctx, ret, "rlog_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_rlog_write) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    rlog_t* log = (rlog_t*)jsvalue_get_pointer(ctx, argv[0], "rlog_t*");
    const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)rlog_write(log, str);
    TKMEM_FREE(str);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t rlog_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"rlog_create", wrap_rlog_create);
  jerryx_handler_register_global((const jerry_char_t*)"rlog_write", wrap_rlog_write);

  return RET_OK;
}

static HANDLER_PROTO(wrap_time_now_s) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    uint64_t ret = (uint64_t)0;
    ret = (uint64_t)time_now_s();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_time_now_ms) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    uint64_t ret = (uint64_t)0;
    ret = (uint64_t)time_now_ms();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_time_now_us) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    uint64_t ret = (uint64_t)0;
    ret = (uint64_t)time_now_us();

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t time_now_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"time_now_s", wrap_time_now_s);
  jerryx_handler_register_global((const jerry_char_t*)"time_now_ms", wrap_time_now_ms);
  jerryx_handler_register_global((const jerry_char_t*)"time_now_us", wrap_time_now_us);

  return RET_OK;
}

ret_t timer_manager_t_init(JSContext* ctx) {
  return RET_OK;
}

static HANDLER_PROTO(get_RET_OK) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_OK);
}

static HANDLER_PROTO(get_RET_OOM) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_OOM);
}

static HANDLER_PROTO(get_RET_FAIL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_FAIL);
}

static HANDLER_PROTO(get_RET_NOT_IMPL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_NOT_IMPL);
}

static HANDLER_PROTO(get_RET_QUIT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_QUIT);
}

static HANDLER_PROTO(get_RET_FOUND) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_FOUND);
}

static HANDLER_PROTO(get_RET_BUSY) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_BUSY);
}

static HANDLER_PROTO(get_RET_REMOVE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_REMOVE);
}

static HANDLER_PROTO(get_RET_REPEAT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_REPEAT);
}

static HANDLER_PROTO(get_RET_NOT_FOUND) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_NOT_FOUND);
}

static HANDLER_PROTO(get_RET_DONE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_DONE);
}

static HANDLER_PROTO(get_RET_STOP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_STOP);
}

static HANDLER_PROTO(get_RET_SKIP) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_SKIP);
}

static HANDLER_PROTO(get_RET_CONTINUE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_CONTINUE);
}

static HANDLER_PROTO(get_RET_OBJECT_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_OBJECT_CHANGED);
}

static HANDLER_PROTO(get_RET_ITEMS_CHANGED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_ITEMS_CHANGED);
}

static HANDLER_PROTO(get_RET_BAD_PARAMS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_BAD_PARAMS);
}

static HANDLER_PROTO(get_RET_TIMEOUT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_TIMEOUT);
}

static HANDLER_PROTO(get_RET_CRC) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_CRC);
}

static HANDLER_PROTO(get_RET_IO) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_IO);
}

static HANDLER_PROTO(get_RET_EOS) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_EOS);
}

static HANDLER_PROTO(get_RET_NOT_MODIFIED) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, RET_NOT_MODIFIED);
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
  jerryx_handler_register_global((const jerry_char_t*)"RET_NOT_MODIFIED", get_RET_NOT_MODIFIED);

  return RET_OK;
}

static HANDLER_PROTO(get_VALUE_TYPE_INVALID) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INVALID);
}

static HANDLER_PROTO(get_VALUE_TYPE_BOOL) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_BOOL);
}

static HANDLER_PROTO(get_VALUE_TYPE_INT8) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INT8);
}

static HANDLER_PROTO(get_VALUE_TYPE_UINT8) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT8);
}

static HANDLER_PROTO(get_VALUE_TYPE_INT16) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INT16);
}

static HANDLER_PROTO(get_VALUE_TYPE_UINT16) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT16);
}

static HANDLER_PROTO(get_VALUE_TYPE_INT32) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INT32);
}

static HANDLER_PROTO(get_VALUE_TYPE_UINT32) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT32);
}

static HANDLER_PROTO(get_VALUE_TYPE_INT64) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_INT64);
}

static HANDLER_PROTO(get_VALUE_TYPE_UINT64) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT64);
}

static HANDLER_PROTO(get_VALUE_TYPE_POINTER) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_POINTER);
}

static HANDLER_PROTO(get_VALUE_TYPE_FLOAT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_FLOAT);
}

static HANDLER_PROTO(get_VALUE_TYPE_FLOAT32) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_FLOAT32);
}

static HANDLER_PROTO(get_VALUE_TYPE_DOUBLE) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_DOUBLE);
}

static HANDLER_PROTO(get_VALUE_TYPE_STRING) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_STRING);
}

static HANDLER_PROTO(get_VALUE_TYPE_WSTRING) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_WSTRING);
}

static HANDLER_PROTO(get_VALUE_TYPE_OBJECT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_OBJECT);
}

static HANDLER_PROTO(get_VALUE_TYPE_SIZED_STRING) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_SIZED_STRING);
}

static HANDLER_PROTO(get_VALUE_TYPE_BINARY) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_BINARY);
}

static HANDLER_PROTO(get_VALUE_TYPE_UBJSON) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_UBJSON);
}

static HANDLER_PROTO(get_VALUE_TYPE_TOKEN) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_TOKEN);
}

static HANDLER_PROTO(get_VALUE_TYPE_GRADIENT) {
  void* ctx = NULL;
  return jsvalue_create_int(ctx, VALUE_TYPE_GRADIENT);
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
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_GRADIENT",
                                 get_VALUE_TYPE_GRADIENT);

  return RET_OK;
}

static HANDLER_PROTO(wrap_assets_manager) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    assets_manager_t* ret = NULL;
    ret = (assets_manager_t*)assets_manager();

    jret = jsvalue_create_pointer(ctx, ret, "assets_manager_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_assets_manager_set_theme) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    assets_manager_t* am =
        (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
    const char* theme = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)assets_manager_set_theme(am, theme);
    TKMEM_FREE(theme);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_assets_manager_ref) {
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

static HANDLER_PROTO(wrap_assets_manager_ref_ex) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    asset_info_t* ret = NULL;
    assets_manager_t* am =
        (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
    asset_type_t type = (asset_type_t)jsvalue_get_int_value(ctx, argv[1]);
    uint16_t subtype = (uint16_t)jsvalue_get_int_value(ctx, argv[2]);
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[3]);
    ret = (asset_info_t*)assets_manager_ref_ex(am, type, subtype, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_pointer(ctx, ret, "asset_info_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_assets_manager_unref) {
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
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager_set_theme",
                                 wrap_assets_manager_set_theme);
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager_ref",
                                 wrap_assets_manager_ref);
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager_ref_ex",
                                 wrap_assets_manager_ref_ex);
  jerryx_handler_register_global((const jerry_char_t*)"assets_manager_unref",
                                 wrap_assets_manager_unref);

  return RET_OK;
}

static HANDLER_PROTO(wrap_wheel_event_cast) {
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

static HANDLER_PROTO(wrap_wheel_event_t_get_prop_dy) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_int(ctx, obj->dy);
  return jret;
}

static HANDLER_PROTO(wrap_wheel_event_t_get_prop_alt) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

static HANDLER_PROTO(wrap_wheel_event_t_get_prop_ctrl) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

static HANDLER_PROTO(wrap_wheel_event_t_get_prop_shift) {
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

static HANDLER_PROTO(wrap_orientation_event_cast) {
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

static HANDLER_PROTO(wrap_orientation_event_t_get_prop_orientation) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  orientation_event_t* obj =
      (orientation_event_t*)jsvalue_get_pointer(ctx, argv[0], "orientation_event_t*");

  jret = jsvalue_create_int(ctx, obj->orientation);
  return jret;
}

static HANDLER_PROTO(wrap_orientation_event_t_get_prop_old_orientation) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  orientation_event_t* obj =
      (orientation_event_t*)jsvalue_get_pointer(ctx, argv[0], "orientation_event_t*");

  jret = jsvalue_create_int(ctx, obj->old_orientation);
  return jret;
}

ret_t orientation_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"orientation_event_cast",
                                 wrap_orientation_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"orientation_event_t_get_prop_orientation",
                                 wrap_orientation_event_t_get_prop_orientation);
  jerryx_handler_register_global(
      (const jerry_char_t*)"orientation_event_t_get_prop_old_orientation",
      wrap_orientation_event_t_get_prop_old_orientation);

  return RET_OK;
}

static HANDLER_PROTO(wrap_value_change_event_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    value_change_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (value_change_event_t*)value_change_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "value_change_event_t*");
  }
  return jret;
}

ret_t value_change_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"value_change_event_cast",
                                 wrap_value_change_event_cast);

  return RET_OK;
}

static HANDLER_PROTO(wrap_offset_change_event_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    offset_change_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (offset_change_event_t*)offset_change_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "offset_change_event_t*");
  }
  return jret;
}

ret_t offset_change_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"offset_change_event_cast",
                                 wrap_offset_change_event_cast);

  return RET_OK;
}

static HANDLER_PROTO(wrap_pointer_event_cast) {
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

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_button) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->button);
  return jret;
}

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_pressed) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->pressed);
  return jret;
}

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_alt) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_ctrl) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_cmd) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->cmd);
  return jret;
}

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_menu) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->menu);
  return jret;
}

static HANDLER_PROTO(wrap_pointer_event_t_get_prop_shift) {
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

static HANDLER_PROTO(wrap_key_event_cast) {
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

static HANDLER_PROTO(wrap_key_event_t_get_prop_key) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_int(ctx, obj->key);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_alt) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_lalt) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lalt);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_ralt) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ralt);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_ctrl) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_lctrl) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lctrl);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_rctrl) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->rctrl);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_shift) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_lshift) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lshift);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_rshift) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->rshift);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_cmd) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->cmd);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_menu) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->menu);
  return jret;
}

static HANDLER_PROTO(wrap_key_event_t_get_prop_capslock) {
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

static HANDLER_PROTO(wrap_paint_event_cast) {
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

static HANDLER_PROTO(wrap_paint_event_t_get_prop_c) {
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

static HANDLER_PROTO(wrap_window_event_cast) {
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

static HANDLER_PROTO(wrap_window_event_t_get_prop_window) {
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

static HANDLER_PROTO(wrap_multi_gesture_event_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    multi_gesture_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (multi_gesture_event_t*)multi_gesture_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "multi_gesture_event_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_multi_gesture_event_t_get_prop_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  multi_gesture_event_t* obj =
      (multi_gesture_event_t*)jsvalue_get_pointer(ctx, argv[0], "multi_gesture_event_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

static HANDLER_PROTO(wrap_multi_gesture_event_t_get_prop_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  multi_gesture_event_t* obj =
      (multi_gesture_event_t*)jsvalue_get_pointer(ctx, argv[0], "multi_gesture_event_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

static HANDLER_PROTO(wrap_multi_gesture_event_t_get_prop_rotation) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  multi_gesture_event_t* obj =
      (multi_gesture_event_t*)jsvalue_get_pointer(ctx, argv[0], "multi_gesture_event_t*");

  jret = jsvalue_create_number(ctx, obj->rotation);
  return jret;
}

static HANDLER_PROTO(wrap_multi_gesture_event_t_get_prop_distance) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  multi_gesture_event_t* obj =
      (multi_gesture_event_t*)jsvalue_get_pointer(ctx, argv[0], "multi_gesture_event_t*");

  jret = jsvalue_create_number(ctx, obj->distance);
  return jret;
}

ret_t multi_gesture_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"multi_gesture_event_cast",
                                 wrap_multi_gesture_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"multi_gesture_event_t_get_prop_x",
                                 wrap_multi_gesture_event_t_get_prop_x);
  jerryx_handler_register_global((const jerry_char_t*)"multi_gesture_event_t_get_prop_y",
                                 wrap_multi_gesture_event_t_get_prop_y);
  jerryx_handler_register_global((const jerry_char_t*)"multi_gesture_event_t_get_prop_rotation",
                                 wrap_multi_gesture_event_t_get_prop_rotation);
  jerryx_handler_register_global((const jerry_char_t*)"multi_gesture_event_t_get_prop_distance",
                                 wrap_multi_gesture_event_t_get_prop_distance);

  return RET_OK;
}

static HANDLER_PROTO(wrap_theme_change_event_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    theme_change_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (theme_change_event_t*)theme_change_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "theme_change_event_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_theme_change_event_t_get_prop_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  theme_change_event_t* obj =
      (theme_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "theme_change_event_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t theme_change_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"theme_change_event_cast",
                                 wrap_theme_change_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"theme_change_event_t_get_prop_name",
                                 wrap_theme_change_event_t_get_prop_name);

  return RET_OK;
}

static HANDLER_PROTO(wrap_image_base_set_image) {
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

static HANDLER_PROTO(wrap_image_base_set_rotation) {
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

static HANDLER_PROTO(wrap_image_base_set_scale) {
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

static HANDLER_PROTO(wrap_image_base_set_anchor) {
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

static HANDLER_PROTO(wrap_image_base_set_selected) {
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

static HANDLER_PROTO(wrap_image_base_set_selectable) {
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

static HANDLER_PROTO(wrap_image_base_set_clickable) {
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

static HANDLER_PROTO(wrap_image_base_cast) {
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

static HANDLER_PROTO(wrap_image_base_t_get_prop_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

static HANDLER_PROTO(wrap_image_base_t_get_prop_anchor_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

static HANDLER_PROTO(wrap_image_base_t_get_prop_anchor_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

static HANDLER_PROTO(wrap_image_base_t_get_prop_scale_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->scale_x);
  return jret;
}

static HANDLER_PROTO(wrap_image_base_t_get_prop_scale_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->scale_y);
  return jret;
}

static HANDLER_PROTO(wrap_image_base_t_get_prop_rotation) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->rotation);
  return jret;
}

static HANDLER_PROTO(wrap_image_base_t_get_prop_clickable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->clickable);
  return jret;
}

static HANDLER_PROTO(wrap_image_base_t_get_prop_selectable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->selectable);
  return jret;
}

static HANDLER_PROTO(wrap_image_base_t_get_prop_selected) {
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

static HANDLER_PROTO(wrap_style_mutable_set_name) {
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

static HANDLER_PROTO(wrap_style_mutable_set_int) {
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

static HANDLER_PROTO(wrap_style_mutable_cast) {
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

static HANDLER_PROTO(wrap_style_mutable_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    style_t* ret = NULL;
    style_t* default_style = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
    ret = (style_t*)style_mutable_create(default_style);

    jret = jsvalue_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_style_mutable_t_get_prop_name) {
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

static HANDLER_PROTO(wrap_window_base_cast) {
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

static HANDLER_PROTO(wrap_window_base_t_get_prop_theme) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->theme);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_design_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_int(ctx, obj->design_w);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_design_h) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_int(ctx, obj->design_h);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_auto_scale_children_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_scale_children_x);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_auto_scale_children_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_scale_children_y);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_auto_scale_children_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_scale_children_w);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_auto_scale_children_h) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_scale_children_h);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_disable_anim) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_bool(ctx, obj->disable_anim);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_closable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_number(ctx, obj->closable);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_open_anim_hint) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->open_anim_hint);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_close_anim_hint) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->close_anim_hint);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_move_focus_prev_key) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_prev_key);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_move_focus_next_key) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_next_key);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_move_focus_up_key) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_up_key);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_move_focus_down_key) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_down_key);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_move_focus_left_key) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_left_key);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_move_focus_right_key) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->move_focus_right_key);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_single_instance) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_bool(ctx, obj->single_instance);
  return jret;
}

static HANDLER_PROTO(wrap_window_base_t_get_prop_strongly_focus) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_bool(ctx, obj->strongly_focus);
  return jret;
}

ret_t window_base_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"window_base_cast", wrap_window_base_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_theme",
                                 wrap_window_base_t_get_prop_theme);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_design_w",
                                 wrap_window_base_t_get_prop_design_w);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_design_h",
                                 wrap_window_base_t_get_prop_design_h);
  jerryx_handler_register_global(
      (const jerry_char_t*)"window_base_t_get_prop_auto_scale_children_x",
      wrap_window_base_t_get_prop_auto_scale_children_x);
  jerryx_handler_register_global(
      (const jerry_char_t*)"window_base_t_get_prop_auto_scale_children_y",
      wrap_window_base_t_get_prop_auto_scale_children_y);
  jerryx_handler_register_global(
      (const jerry_char_t*)"window_base_t_get_prop_auto_scale_children_w",
      wrap_window_base_t_get_prop_auto_scale_children_w);
  jerryx_handler_register_global(
      (const jerry_char_t*)"window_base_t_get_prop_auto_scale_children_h",
      wrap_window_base_t_get_prop_auto_scale_children_h);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_disable_anim",
                                 wrap_window_base_t_get_prop_disable_anim);
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
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_single_instance",
                                 wrap_window_base_t_get_prop_single_instance);
  jerryx_handler_register_global((const jerry_char_t*)"window_base_t_get_prop_strongly_focus",
                                 wrap_window_base_t_get_prop_strongly_focus);

  return RET_OK;
}

static HANDLER_PROTO(wrap_window_manager) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    widget_t* ret = NULL;
    ret = (widget_t*)window_manager();

    jret = jsvalue_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_window_manager_cast) {
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

static HANDLER_PROTO(wrap_window_manager_get_top_main_window) {
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

static HANDLER_PROTO(wrap_window_manager_get_top_window) {
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

static HANDLER_PROTO(wrap_window_manager_get_prev_window) {
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

static HANDLER_PROTO(wrap_window_manager_get_pointer_x) {
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

static HANDLER_PROTO(wrap_window_manager_get_pointer_y) {
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

static HANDLER_PROTO(wrap_window_manager_get_pointer_pressed) {
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

static HANDLER_PROTO(wrap_window_manager_is_animating) {
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

static HANDLER_PROTO(wrap_window_manager_set_show_fps) {
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

static HANDLER_PROTO(wrap_window_manager_set_max_fps) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max_fps = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)window_manager_set_max_fps(widget, max_fps);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_window_manager_set_ignore_input_events) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t ignore_input_events = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)window_manager_set_ignore_input_events(widget, ignore_input_events);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_window_manager_set_screen_saver_time) {
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

static HANDLER_PROTO(wrap_window_manager_set_cursor) {
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

static HANDLER_PROTO(wrap_window_manager_back) {
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

static HANDLER_PROTO(wrap_window_manager_back_to_home) {
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

static HANDLER_PROTO(wrap_window_manager_back_to) {
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

static HANDLER_PROTO(wrap_window_manager_resize) {
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

static HANDLER_PROTO(wrap_window_manager_close_all) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_manager_close_all(widget);

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
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_set_max_fps",
                                 wrap_window_manager_set_max_fps);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_set_ignore_input_events",
                                 wrap_window_manager_set_ignore_input_events);
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
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_close_all",
                                 wrap_window_manager_close_all);

  return RET_OK;
}

static HANDLER_PROTO(wrap_canvas_widget_create) {
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

static HANDLER_PROTO(wrap_canvas_widget_cast) {
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

static HANDLER_PROTO(wrap_color_component_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)color_component_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "color_component_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_color_component_cast) {
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
  jerryx_handler_register_global((const jerry_char_t*)"color_component_create",
                                 wrap_color_component_create);
  jerryx_handler_register_global((const jerry_char_t*)"color_component_cast",
                                 wrap_color_component_cast);

  return RET_OK;
}

static HANDLER_PROTO(wrap_color_picker_create) {
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

static HANDLER_PROTO(wrap_color_picker_set_color) {
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

static HANDLER_PROTO(wrap_color_picker_cast) {
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

static HANDLER_PROTO(wrap_color_picker_t_get_prop_value) {
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

static HANDLER_PROTO(wrap_draggable_create) {
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

static HANDLER_PROTO(wrap_draggable_cast) {
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

static HANDLER_PROTO(wrap_draggable_set_top) {
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

static HANDLER_PROTO(wrap_draggable_set_bottom) {
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

static HANDLER_PROTO(wrap_draggable_set_left) {
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

static HANDLER_PROTO(wrap_draggable_set_right) {
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

static HANDLER_PROTO(wrap_draggable_set_vertical_only) {
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

static HANDLER_PROTO(wrap_draggable_set_horizontal_only) {
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

static HANDLER_PROTO(wrap_draggable_set_drag_window) {
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

static HANDLER_PROTO(wrap_draggable_set_drag_parent) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t drag_parent = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)draggable_set_drag_parent(widget, drag_parent);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_draggable_t_get_prop_top) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->top);
  return jret;
}

static HANDLER_PROTO(wrap_draggable_t_get_prop_bottom) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->bottom);
  return jret;
}

static HANDLER_PROTO(wrap_draggable_t_get_prop_left) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->left);
  return jret;
}

static HANDLER_PROTO(wrap_draggable_t_get_prop_right) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->right);
  return jret;
}

static HANDLER_PROTO(wrap_draggable_t_get_prop_vertical_only) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical_only);
  return jret;
}

static HANDLER_PROTO(wrap_draggable_t_get_prop_horizontal_only) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->horizontal_only);
  return jret;
}

static HANDLER_PROTO(wrap_draggable_t_get_prop_drag_window) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->drag_window);
  return jret;
}

static HANDLER_PROTO(wrap_draggable_t_get_prop_drag_parent) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->drag_parent);
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
  jerryx_handler_register_global((const jerry_char_t*)"draggable_set_drag_parent",
                                 wrap_draggable_set_drag_parent);
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
  jerryx_handler_register_global((const jerry_char_t*)"draggable_t_get_prop_drag_parent",
                                 wrap_draggable_t_get_prop_drag_parent);

  return RET_OK;
}

static HANDLER_PROTO(wrap_file_browser_view_create) {
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

static HANDLER_PROTO(wrap_file_browser_view_cast) {
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

static HANDLER_PROTO(wrap_file_browser_view_set_init_dir) {
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

static HANDLER_PROTO(wrap_file_browser_view_set_top_dir) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* top_dir = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)file_browser_view_set_top_dir(widget, top_dir);
    TKMEM_FREE(top_dir);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_set_filter) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* filter = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)file_browser_view_set_filter(widget, filter);
    TKMEM_FREE(filter);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_reload) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)file_browser_view_reload(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_set_ignore_hidden_files) {
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

static HANDLER_PROTO(wrap_file_browser_view_set_sort_ascending) {
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

static HANDLER_PROTO(wrap_file_browser_view_set_show_check_button) {
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

static HANDLER_PROTO(wrap_file_browser_view_set_sort_by) {
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

static HANDLER_PROTO(wrap_file_browser_view_get_cwd) {
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

static HANDLER_PROTO(wrap_file_browser_view_create_dir) {
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

static HANDLER_PROTO(wrap_file_browser_view_create_file) {
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

static HANDLER_PROTO(wrap_file_browser_view_t_get_prop_init_dir) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_string(ctx, obj->init_dir);
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_t_get_prop_top_dir) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_string(ctx, obj->top_dir);
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_t_get_prop_filter) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_string(ctx, obj->filter);
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_t_get_prop_ignore_hidden_files) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_bool(ctx, obj->ignore_hidden_files);
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_t_get_prop_sort_ascending) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_bool(ctx, obj->sort_ascending);
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_t_get_prop_show_check_button) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  file_browser_view_t* obj =
      (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  jret = jsvalue_create_bool(ctx, obj->show_check_button);
  return jret;
}

static HANDLER_PROTO(wrap_file_browser_view_t_get_prop_sort_by) {
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
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_set_top_dir",
                                 wrap_file_browser_view_set_top_dir);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_set_filter",
                                 wrap_file_browser_view_set_filter);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_reload",
                                 wrap_file_browser_view_reload);
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
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_t_get_prop_top_dir",
                                 wrap_file_browser_view_t_get_prop_top_dir);
  jerryx_handler_register_global((const jerry_char_t*)"file_browser_view_t_get_prop_filter",
                                 wrap_file_browser_view_t_get_prop_filter);
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

static HANDLER_PROTO(wrap_file_chooser_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    file_chooser_t* ret = NULL;
    ret = (file_chooser_t*)file_chooser_create();

    jret = jsvalue_create_pointer(ctx, ret, "file_chooser_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_file_chooser_set_init_dir) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    const char* init_dir = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)file_chooser_set_init_dir(chooser, init_dir);
    TKMEM_FREE(init_dir);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_file_chooser_set_top_dir) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    const char* top_dir = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)file_chooser_set_top_dir(chooser, top_dir);
    TKMEM_FREE(top_dir);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_file_chooser_set_filter) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    const char* filter = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)file_chooser_set_filter(chooser, filter);
    TKMEM_FREE(filter);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_file_chooser_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    file_chooser_t* ret = NULL;
    file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
    ret = (file_chooser_t*)file_chooser_cast(chooser);

    jret = jsvalue_create_pointer(ctx, ret, "file_chooser_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_file_chooser_choose_file_for_save) {
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

static HANDLER_PROTO(wrap_file_chooser_choose_file_for_open) {
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

static HANDLER_PROTO(wrap_file_chooser_choose_folder) {
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

static HANDLER_PROTO(wrap_file_chooser_get_dir) {
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

static HANDLER_PROTO(wrap_file_chooser_get_filename) {
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

static HANDLER_PROTO(wrap_file_chooser_is_aborted) {
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
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_set_init_dir",
                                 wrap_file_chooser_set_init_dir);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_set_top_dir",
                                 wrap_file_chooser_set_top_dir);
  jerryx_handler_register_global((const jerry_char_t*)"file_chooser_set_filter",
                                 wrap_file_chooser_set_filter);
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

static HANDLER_PROTO(wrap_gauge_pointer_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)gauge_pointer_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "gauge_pointer_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_pointer_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)gauge_pointer_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "gauge_pointer_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_pointer_set_angle) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t angle = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)gauge_pointer_set_angle(widget, angle);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_pointer_set_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)gauge_pointer_set_image(widget, image);
    TKMEM_FREE(image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_pointer_set_anchor) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)gauge_pointer_set_anchor(widget, anchor_x, anchor_y);
    TKMEM_FREE(anchor_x);
    TKMEM_FREE(anchor_y);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_pointer_t_get_prop_angle) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  gauge_pointer_t* obj = (gauge_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "gauge_pointer_t*");

  jret = jsvalue_create_number(ctx, obj->angle);
  return jret;
}

static HANDLER_PROTO(wrap_gauge_pointer_t_get_prop_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  gauge_pointer_t* obj = (gauge_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "gauge_pointer_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

static HANDLER_PROTO(wrap_gauge_pointer_t_get_prop_anchor_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  gauge_pointer_t* obj = (gauge_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "gauge_pointer_t*");

  jret = jsvalue_create_string(ctx, obj->anchor_x);
  return jret;
}

static HANDLER_PROTO(wrap_gauge_pointer_t_get_prop_anchor_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  gauge_pointer_t* obj = (gauge_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "gauge_pointer_t*");

  jret = jsvalue_create_string(ctx, obj->anchor_y);
  return jret;
}

ret_t gauge_pointer_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_create",
                                 wrap_gauge_pointer_create);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_cast",
                                 wrap_gauge_pointer_cast);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_set_angle",
                                 wrap_gauge_pointer_set_angle);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_set_image",
                                 wrap_gauge_pointer_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_set_anchor",
                                 wrap_gauge_pointer_set_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_t_get_prop_angle",
                                 wrap_gauge_pointer_t_get_prop_angle);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_t_get_prop_image",
                                 wrap_gauge_pointer_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_t_get_prop_anchor_x",
                                 wrap_gauge_pointer_t_get_prop_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_pointer_t_get_prop_anchor_y",
                                 wrap_gauge_pointer_t_get_prop_anchor_y);

  return RET_OK;
}

static HANDLER_PROTO(wrap_gauge_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)gauge_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "gauge_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)gauge_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "gauge_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_set_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)gauge_set_image(widget, name);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_set_draw_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)gauge_set_draw_type(widget, draw_type);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gauge_t_get_prop_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  gauge_t* obj = (gauge_t*)jsvalue_get_pointer(ctx, argv[0], "gauge_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

static HANDLER_PROTO(wrap_gauge_t_get_prop_draw_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  gauge_t* obj = (gauge_t*)jsvalue_get_pointer(ctx, argv[0], "gauge_t*");

  jret = jsvalue_create_number(ctx, obj->draw_type);
  return jret;
}

ret_t gauge_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"gauge_create", wrap_gauge_create);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_cast", wrap_gauge_cast);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_set_image", wrap_gauge_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_set_draw_type",
                                 wrap_gauge_set_draw_type);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_t_get_prop_image",
                                 wrap_gauge_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"gauge_t_get_prop_draw_type",
                                 wrap_gauge_t_get_prop_draw_type);

  return RET_OK;
}

static HANDLER_PROTO(wrap_image_animation_create) {
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

static HANDLER_PROTO(wrap_image_animation_set_loop) {
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

static HANDLER_PROTO(wrap_image_animation_set_image) {
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

static HANDLER_PROTO(wrap_image_animation_set_interval) {
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

static HANDLER_PROTO(wrap_image_animation_set_delay) {
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

static HANDLER_PROTO(wrap_image_animation_set_auto_play) {
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

static HANDLER_PROTO(wrap_image_animation_set_sequence) {
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

static HANDLER_PROTO(wrap_image_animation_set_range_sequence) {
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

static HANDLER_PROTO(wrap_image_animation_play) {
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

static HANDLER_PROTO(wrap_image_animation_stop) {
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

static HANDLER_PROTO(wrap_image_animation_pause) {
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

static HANDLER_PROTO(wrap_image_animation_next) {
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

static HANDLER_PROTO(wrap_image_animation_set_format) {
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

static HANDLER_PROTO(wrap_image_animation_set_unload_after_paint) {
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

static HANDLER_PROTO(wrap_image_animation_set_reverse) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t reverse = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_reverse(widget, reverse);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_set_show_when_done) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t show_when_done = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_show_when_done(widget, show_when_done);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_cast) {
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

static HANDLER_PROTO(wrap_image_animation_is_playing) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = (bool_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)image_animation_is_playing(widget);

    jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_sequence) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->sequence);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_start_index) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->start_index);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_end_index) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->end_index);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_reverse) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->reverse);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_loop) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_auto_play) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_play);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_unload_after_paint) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->unload_after_paint);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_format) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_interval) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->interval);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_delay) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->delay);
  return jret;
}

static HANDLER_PROTO(wrap_image_animation_t_get_prop_show_when_done) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->show_when_done);
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
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_reverse",
                                 wrap_image_animation_set_reverse);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_set_show_when_done",
                                 wrap_image_animation_set_show_when_done);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_cast",
                                 wrap_image_animation_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_is_playing",
                                 wrap_image_animation_is_playing);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_image",
                                 wrap_image_animation_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_sequence",
                                 wrap_image_animation_t_get_prop_sequence);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_start_index",
                                 wrap_image_animation_t_get_prop_start_index);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_end_index",
                                 wrap_image_animation_t_get_prop_end_index);
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_reverse",
                                 wrap_image_animation_t_get_prop_reverse);
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
  jerryx_handler_register_global((const jerry_char_t*)"image_animation_t_get_prop_show_when_done",
                                 wrap_image_animation_t_get_prop_show_when_done);

  return RET_OK;
}

static HANDLER_PROTO(wrap_image_value_create) {
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

static HANDLER_PROTO(wrap_image_value_set_image) {
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

static HANDLER_PROTO(wrap_image_value_set_format) {
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

static HANDLER_PROTO(wrap_image_value_set_click_add_delta) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double delta = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_value_set_click_add_delta(widget, delta);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_image_value_set_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double value = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_value_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_image_value_set_min) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double min = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_value_set_min(widget, min);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_image_value_set_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double max = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_value_set_max(widget, max);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_image_value_cast) {
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

static HANDLER_PROTO(wrap_image_value_t_get_prop_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

static HANDLER_PROTO(wrap_image_value_t_get_prop_format) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

static HANDLER_PROTO(wrap_image_value_t_get_prop_click_add_delta) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_number(ctx, obj->click_add_delta);
  return jret;
}

static HANDLER_PROTO(wrap_image_value_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_image_value_t_get_prop_min) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

static HANDLER_PROTO(wrap_image_value_t_get_prop_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

ret_t image_value_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"image_value_create",
                                 wrap_image_value_create);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_image",
                                 wrap_image_value_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_format",
                                 wrap_image_value_set_format);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_click_add_delta",
                                 wrap_image_value_set_click_add_delta);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_value",
                                 wrap_image_value_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_min",
                                 wrap_image_value_set_min);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_set_max",
                                 wrap_image_value_set_max);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_cast", wrap_image_value_cast);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_image",
                                 wrap_image_value_t_get_prop_image);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_format",
                                 wrap_image_value_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_click_add_delta",
                                 wrap_image_value_t_get_prop_click_add_delta);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_value",
                                 wrap_image_value_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_min",
                                 wrap_image_value_t_get_prop_min);
  jerryx_handler_register_global((const jerry_char_t*)"image_value_t_get_prop_max",
                                 wrap_image_value_t_get_prop_max);

  return RET_OK;
}

static HANDLER_PROTO(wrap_candidates_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)candidates_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "candidates_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_candidates_cast) {
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

static HANDLER_PROTO(wrap_candidates_set_pre) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t pre = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)candidates_set_pre(widget, pre);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_candidates_set_select_by_num) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t select_by_num = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)candidates_set_select_by_num(widget, select_by_num);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_candidates_set_auto_hide) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_hide = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)candidates_set_auto_hide(widget, auto_hide);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_candidates_set_button_style) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* button_style = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)candidates_set_button_style(widget, button_style);
    TKMEM_FREE(button_style);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_candidates_t_get_prop_pre) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  candidates_t* obj = (candidates_t*)jsvalue_get_pointer(ctx, argv[0], "candidates_t*");

  jret = jsvalue_create_bool(ctx, obj->pre);
  return jret;
}

static HANDLER_PROTO(wrap_candidates_t_get_prop_select_by_num) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  candidates_t* obj = (candidates_t*)jsvalue_get_pointer(ctx, argv[0], "candidates_t*");

  jret = jsvalue_create_bool(ctx, obj->select_by_num);
  return jret;
}

static HANDLER_PROTO(wrap_candidates_t_get_prop_auto_hide) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  candidates_t* obj = (candidates_t*)jsvalue_get_pointer(ctx, argv[0], "candidates_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_hide);
  return jret;
}

static HANDLER_PROTO(wrap_candidates_t_get_prop_button_style) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  candidates_t* obj = (candidates_t*)jsvalue_get_pointer(ctx, argv[0], "candidates_t*");

  jret = jsvalue_create_string(ctx, obj->button_style);
  return jret;
}

ret_t candidates_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"candidates_create", wrap_candidates_create);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_cast", wrap_candidates_cast);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_set_pre",
                                 wrap_candidates_set_pre);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_set_select_by_num",
                                 wrap_candidates_set_select_by_num);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_set_auto_hide",
                                 wrap_candidates_set_auto_hide);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_set_button_style",
                                 wrap_candidates_set_button_style);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_t_get_prop_pre",
                                 wrap_candidates_t_get_prop_pre);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_t_get_prop_select_by_num",
                                 wrap_candidates_t_get_prop_select_by_num);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_t_get_prop_auto_hide",
                                 wrap_candidates_t_get_prop_auto_hide);
  jerryx_handler_register_global((const jerry_char_t*)"candidates_t_get_prop_button_style",
                                 wrap_candidates_t_get_prop_button_style);

  return RET_OK;
}

static HANDLER_PROTO(wrap_lang_indicator_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)lang_indicator_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "lang_indicator_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_lang_indicator_set_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)lang_indicator_set_image(widget, image);
    TKMEM_FREE(image);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_lang_indicator_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)lang_indicator_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "lang_indicator_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_lang_indicator_t_get_prop_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  lang_indicator_t* obj = (lang_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "lang_indicator_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

ret_t lang_indicator_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"lang_indicator_create",
                                 wrap_lang_indicator_create);
  jerryx_handler_register_global((const jerry_char_t*)"lang_indicator_set_image",
                                 wrap_lang_indicator_set_image);
  jerryx_handler_register_global((const jerry_char_t*)"lang_indicator_cast",
                                 wrap_lang_indicator_cast);
  jerryx_handler_register_global((const jerry_char_t*)"lang_indicator_t_get_prop_image",
                                 wrap_lang_indicator_t_get_prop_image);

  return RET_OK;
}

static HANDLER_PROTO(wrap_line_number_create) {
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

static HANDLER_PROTO(wrap_line_number_set_top_margin) {
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

static HANDLER_PROTO(wrap_line_number_set_bottom_margin) {
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

static HANDLER_PROTO(wrap_line_number_set_line_height) {
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

static HANDLER_PROTO(wrap_line_number_set_yoffset) {
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

static HANDLER_PROTO(wrap_line_number_cast) {
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

static HANDLER_PROTO(wrap_mledit_create) {
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

static HANDLER_PROTO(wrap_mledit_set_readonly) {
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

static HANDLER_PROTO(wrap_mledit_set_cancelable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t cancelable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_cancelable(widget, cancelable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_focus) {
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

static HANDLER_PROTO(wrap_mledit_set_wrap_word) {
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

static HANDLER_PROTO(wrap_mledit_set_overwrite) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t overwrite = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_overwrite(widget, overwrite);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_max_lines) {
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

static HANDLER_PROTO(wrap_mledit_set_max_chars) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max_chars = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_max_chars(widget, max_chars);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_tips) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)mledit_set_tips(widget, tips);
    TKMEM_FREE(tips);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_tr_tips) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* tr_tips = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)mledit_set_tr_tips(widget, tr_tips);
    TKMEM_FREE(tr_tips);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_keyboard) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* keyboard = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)mledit_set_keyboard(widget, keyboard);
    TKMEM_FREE(keyboard);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_cursor) {
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

static HANDLER_PROTO(wrap_mledit_get_cursor) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (uint32_t)mledit_get_cursor(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_scroll_line) {
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

static HANDLER_PROTO(wrap_mledit_scroll_to_offset) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t offset = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)mledit_scroll_to_offset(widget, offset);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_open_im_when_focused) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t open_im_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_open_im_when_focused(widget, open_im_when_focused);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_close_im_when_blured) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t close_im_when_blured = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_close_im_when_blured(widget, close_im_when_blured);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_set_select) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t start = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t end = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)mledit_set_select(widget, start, end);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_get_selected_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (char*)mledit_get_selected_text(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_insert_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t offset = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)mledit_insert_text(widget, offset, text);
    TKMEM_FREE(text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_mledit_cast) {
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

static HANDLER_PROTO(wrap_mledit_t_get_prop_tips) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_string(ctx, obj->tips);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_tr_tips) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_string(ctx, obj->tr_tips);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_keyboard) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_string(ctx, obj->keyboard);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_max_lines) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_int(ctx, obj->max_lines);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_max_chars) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_int(ctx, obj->max_chars);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_scroll_line) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_int(ctx, obj->scroll_line);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_overwrite) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->overwrite);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_wrap_word) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->wrap_word);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_readonly) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->readonly);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_cancelable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->cancelable);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_open_im_when_focused) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->open_im_when_focused);
  return jret;
}

static HANDLER_PROTO(wrap_mledit_t_get_prop_close_im_when_blured) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->close_im_when_blured);
  return jret;
}

ret_t mledit_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"mledit_create", wrap_mledit_create);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_readonly",
                                 wrap_mledit_set_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_cancelable",
                                 wrap_mledit_set_cancelable);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_focus", wrap_mledit_set_focus);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_wrap_word",
                                 wrap_mledit_set_wrap_word);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_overwrite",
                                 wrap_mledit_set_overwrite);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_max_lines",
                                 wrap_mledit_set_max_lines);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_max_chars",
                                 wrap_mledit_set_max_chars);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_tips", wrap_mledit_set_tips);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_tr_tips",
                                 wrap_mledit_set_tr_tips);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_keyboard",
                                 wrap_mledit_set_keyboard);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_cursor", wrap_mledit_set_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_get_cursor", wrap_mledit_get_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_scroll_line",
                                 wrap_mledit_set_scroll_line);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_scroll_to_offset",
                                 wrap_mledit_scroll_to_offset);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_open_im_when_focused",
                                 wrap_mledit_set_open_im_when_focused);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_close_im_when_blured",
                                 wrap_mledit_set_close_im_when_blured);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_set_select", wrap_mledit_set_select);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_get_selected_text",
                                 wrap_mledit_get_selected_text);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_insert_text",
                                 wrap_mledit_insert_text);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_cast", wrap_mledit_cast);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_tips",
                                 wrap_mledit_t_get_prop_tips);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_tr_tips",
                                 wrap_mledit_t_get_prop_tr_tips);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_keyboard",
                                 wrap_mledit_t_get_prop_keyboard);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_max_lines",
                                 wrap_mledit_t_get_prop_max_lines);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_max_chars",
                                 wrap_mledit_t_get_prop_max_chars);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_scroll_line",
                                 wrap_mledit_t_get_prop_scroll_line);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_overwrite",
                                 wrap_mledit_t_get_prop_overwrite);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_wrap_word",
                                 wrap_mledit_t_get_prop_wrap_word);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_readonly",
                                 wrap_mledit_t_get_prop_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_cancelable",
                                 wrap_mledit_t_get_prop_cancelable);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_open_im_when_focused",
                                 wrap_mledit_t_get_prop_open_im_when_focused);
  jerryx_handler_register_global((const jerry_char_t*)"mledit_t_get_prop_close_im_when_blured",
                                 wrap_mledit_t_get_prop_close_im_when_blured);

  return RET_OK;
}

static HANDLER_PROTO(wrap_progress_circle_create) {
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

static HANDLER_PROTO(wrap_progress_circle_cast) {
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

static HANDLER_PROTO(wrap_progress_circle_set_value) {
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

static HANDLER_PROTO(wrap_progress_circle_set_max) {
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

static HANDLER_PROTO(wrap_progress_circle_set_format) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_format(widget, format);
    TKMEM_FREE(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_set_line_width) {
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

static HANDLER_PROTO(wrap_progress_circle_set_start_angle) {
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

static HANDLER_PROTO(wrap_progress_circle_set_line_cap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* line_cap = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_line_cap(widget, line_cap);
    TKMEM_FREE(line_cap);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_set_show_text) {
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

static HANDLER_PROTO(wrap_progress_circle_set_counter_clock_wise) {
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

static HANDLER_PROTO(wrap_progress_circle_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_t_get_prop_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_t_get_prop_format) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_t_get_prop_start_angle) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->start_angle);
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_t_get_prop_line_width) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->line_width);
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_t_get_prop_line_cap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_string(ctx, obj->line_cap);
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_t_get_prop_counter_clock_wise) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_bool(ctx, obj->counter_clock_wise);
  return jret;
}

static HANDLER_PROTO(wrap_progress_circle_t_get_prop_show_text) {
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
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_format",
                                 wrap_progress_circle_set_format);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_line_width",
                                 wrap_progress_circle_set_line_width);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_start_angle",
                                 wrap_progress_circle_set_start_angle);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_line_cap",
                                 wrap_progress_circle_set_line_cap);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_show_text",
                                 wrap_progress_circle_set_show_text);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_set_counter_clock_wise",
                                 wrap_progress_circle_set_counter_clock_wise);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_value",
                                 wrap_progress_circle_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_max",
                                 wrap_progress_circle_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_format",
                                 wrap_progress_circle_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_start_angle",
                                 wrap_progress_circle_t_get_prop_start_angle);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_line_width",
                                 wrap_progress_circle_t_get_prop_line_width);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_line_cap",
                                 wrap_progress_circle_t_get_prop_line_cap);
  jerryx_handler_register_global(
      (const jerry_char_t*)"progress_circle_t_get_prop_counter_clock_wise",
      wrap_progress_circle_t_get_prop_counter_clock_wise);
  jerryx_handler_register_global((const jerry_char_t*)"progress_circle_t_get_prop_show_text",
                                 wrap_progress_circle_t_get_prop_show_text);

  return RET_OK;
}

static HANDLER_PROTO(wrap_rich_text_view_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)rich_text_view_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "rich_text_view_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_rich_text_view_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)rich_text_view_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "rich_text_view_t*");
  }
  return jret;
}

ret_t rich_text_view_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_view_create",
                                 wrap_rich_text_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_view_cast",
                                 wrap_rich_text_view_cast);

  return RET_OK;
}

static HANDLER_PROTO(wrap_rich_text_create) {
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

static HANDLER_PROTO(wrap_rich_text_set_text) {
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

static HANDLER_PROTO(wrap_rich_text_set_yslidable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t yslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)rich_text_set_yslidable(widget, yslidable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_rich_text_cast) {
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

static HANDLER_PROTO(wrap_rich_text_t_get_prop_line_gap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  jret = jsvalue_create_int(ctx, obj->line_gap);
  return jret;
}

static HANDLER_PROTO(wrap_rich_text_t_get_prop_yslidable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  jret = jsvalue_create_bool(ctx, obj->yslidable);
  return jret;
}

ret_t rich_text_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_create", wrap_rich_text_create);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_set_text",
                                 wrap_rich_text_set_text);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_set_yslidable",
                                 wrap_rich_text_set_yslidable);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_cast", wrap_rich_text_cast);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_t_get_prop_line_gap",
                                 wrap_rich_text_t_get_prop_line_gap);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_t_get_prop_yslidable",
                                 wrap_rich_text_t_get_prop_yslidable);

  return RET_OK;
}

static HANDLER_PROTO(wrap_hscroll_label_create) {
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

static HANDLER_PROTO(wrap_hscroll_label_set_lull) {
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

static HANDLER_PROTO(wrap_hscroll_label_set_duration) {
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

static HANDLER_PROTO(wrap_hscroll_label_set_speed) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t speed = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_speed(widget, speed);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_set_only_focus) {
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

static HANDLER_PROTO(wrap_hscroll_label_set_only_parent_focus) {
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

static HANDLER_PROTO(wrap_hscroll_label_set_loop) {
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

static HANDLER_PROTO(wrap_hscroll_label_set_yoyo) {
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

static HANDLER_PROTO(wrap_hscroll_label_set_ellipses) {
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

static HANDLER_PROTO(wrap_hscroll_label_set_xoffset) {
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

static HANDLER_PROTO(wrap_hscroll_label_start) {
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

static HANDLER_PROTO(wrap_hscroll_label_stop) {
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

static HANDLER_PROTO(wrap_hscroll_label_cast) {
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

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_only_focus) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->only_focus);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_only_parent_focus) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->only_parent_focus);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_loop) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_yoyo) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->yoyo);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_ellipses) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->ellipses);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_lull) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->lull);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_duration) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->duration);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_speed) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_number(ctx, obj->speed);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_xoffset) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->xoffset);
  return jret;
}

static HANDLER_PROTO(wrap_hscroll_label_t_get_prop_text_w) {
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
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_set_speed",
                                 wrap_hscroll_label_set_speed);
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
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_speed",
                                 wrap_hscroll_label_t_get_prop_speed);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_xoffset",
                                 wrap_hscroll_label_t_get_prop_xoffset);
  jerryx_handler_register_global((const jerry_char_t*)"hscroll_label_t_get_prop_text_w",
                                 wrap_hscroll_label_t_get_prop_text_w);

  return RET_OK;
}

static HANDLER_PROTO(wrap_list_item_create) {
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

static HANDLER_PROTO(wrap_list_item_cast) {
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

static HANDLER_PROTO(wrap_list_view_h_create) {
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

static HANDLER_PROTO(wrap_list_view_h_set_item_width) {
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

static HANDLER_PROTO(wrap_list_view_h_set_spacing) {
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

static HANDLER_PROTO(wrap_list_view_h_cast) {
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

static HANDLER_PROTO(wrap_list_view_h_t_get_prop_item_width) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = jsvalue_create_int(ctx, obj->item_width);
  return jret;
}

static HANDLER_PROTO(wrap_list_view_h_t_get_prop_spacing) {
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

static HANDLER_PROTO(wrap_list_view_create) {
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

static HANDLER_PROTO(wrap_list_view_set_item_height) {
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

static HANDLER_PROTO(wrap_list_view_set_default_item_height) {
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

static HANDLER_PROTO(wrap_list_view_set_auto_hide_scroll_bar) {
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

static HANDLER_PROTO(wrap_list_view_set_floating_scroll_bar) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t floating_scroll_bar = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)list_view_set_floating_scroll_bar(widget, floating_scroll_bar);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_list_view_cast) {
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

static HANDLER_PROTO(wrap_list_view_reinit) {
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

static HANDLER_PROTO(wrap_list_view_t_get_prop_item_height) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_int(ctx, obj->item_height);
  return jret;
}

static HANDLER_PROTO(wrap_list_view_t_get_prop_default_item_height) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_int(ctx, obj->default_item_height);
  return jret;
}

static HANDLER_PROTO(wrap_list_view_t_get_prop_auto_hide_scroll_bar) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_hide_scroll_bar);
  return jret;
}

static HANDLER_PROTO(wrap_list_view_t_get_prop_floating_scroll_bar) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_bool(ctx, obj->floating_scroll_bar);
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
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_floating_scroll_bar",
                                 wrap_list_view_set_floating_scroll_bar);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_cast", wrap_list_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_reinit", wrap_list_view_reinit);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_item_height",
                                 wrap_list_view_t_get_prop_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_default_item_height",
                                 wrap_list_view_t_get_prop_default_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_auto_hide_scroll_bar",
                                 wrap_list_view_t_get_prop_auto_hide_scroll_bar);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_floating_scroll_bar",
                                 wrap_list_view_t_get_prop_floating_scroll_bar);

  return RET_OK;
}

static HANDLER_PROTO(wrap_scroll_bar_create) {
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

static HANDLER_PROTO(wrap_scroll_bar_cast) {
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

static HANDLER_PROTO(wrap_scroll_bar_create_mobile) {
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

static HANDLER_PROTO(wrap_scroll_bar_create_desktop) {
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

static HANDLER_PROTO(wrap_scroll_bar_set_params) {
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

static HANDLER_PROTO(wrap_scroll_bar_scroll_to) {
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

static HANDLER_PROTO(wrap_scroll_bar_set_value) {
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

static HANDLER_PROTO(wrap_scroll_bar_add_delta) {
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

static HANDLER_PROTO(wrap_scroll_bar_scroll_delta) {
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

static HANDLER_PROTO(wrap_scroll_bar_set_value_only) {
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

static HANDLER_PROTO(wrap_scroll_bar_set_auto_hide) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_hide = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_set_auto_hide(widget, auto_hide);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_scroll_bar_is_mobile) {
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

static HANDLER_PROTO(wrap_scroll_bar_set_animator_time) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t animator_time = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_set_animator_time(widget, animator_time);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_scroll_bar_t_get_prop_virtual_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_size);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_bar_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_bar_t_get_prop_row) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->row);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_bar_t_get_prop_animator_time) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->animator_time);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_bar_t_get_prop_animatable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->animatable);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_bar_t_get_prop_auto_hide) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_hide);
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
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_set_auto_hide",
                                 wrap_scroll_bar_set_auto_hide);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_is_mobile",
                                 wrap_scroll_bar_is_mobile);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_set_animator_time",
                                 wrap_scroll_bar_set_animator_time);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_virtual_size",
                                 wrap_scroll_bar_t_get_prop_virtual_size);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_value",
                                 wrap_scroll_bar_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_row",
                                 wrap_scroll_bar_t_get_prop_row);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_animator_time",
                                 wrap_scroll_bar_t_get_prop_animator_time);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_animatable",
                                 wrap_scroll_bar_t_get_prop_animatable);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_bar_t_get_prop_auto_hide",
                                 wrap_scroll_bar_t_get_prop_auto_hide);

  return RET_OK;
}

static HANDLER_PROTO(wrap_scroll_view_create) {
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

static HANDLER_PROTO(wrap_scroll_view_cast) {
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

static HANDLER_PROTO(wrap_scroll_view_set_virtual_w) {
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

static HANDLER_PROTO(wrap_scroll_view_set_virtual_h) {
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

static HANDLER_PROTO(wrap_scroll_view_set_xslidable) {
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

static HANDLER_PROTO(wrap_scroll_view_set_yslidable) {
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

static HANDLER_PROTO(wrap_scroll_view_set_snap_to_page) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t snap_to_page = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_snap_to_page(widget, snap_to_page);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_set_move_to_page) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t move_to_page = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_move_to_page(widget, move_to_page);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_set_recursive) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_recursive(widget, recursive);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_set_recursive_only) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_recursive_only(widget, recursive);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_set_offset) {
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

static HANDLER_PROTO(wrap_scroll_view_set_speed_scale) {
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

static HANDLER_PROTO(wrap_scroll_view_scroll_to) {
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

static HANDLER_PROTO(wrap_scroll_view_scroll_delta_to) {
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

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_virtual_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_w);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_virtual_h) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_h);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_xoffset) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->xoffset);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_yoffset) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->yoffset);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_xspeed_scale) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_number(ctx, obj->xspeed_scale);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_yspeed_scale) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_number(ctx, obj->yspeed_scale);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_xslidable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->xslidable);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_yslidable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->yslidable);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_snap_to_page) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->snap_to_page);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_move_to_page) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->move_to_page);
  return jret;
}

static HANDLER_PROTO(wrap_scroll_view_t_get_prop_recursive) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->recursive);
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
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_snap_to_page",
                                 wrap_scroll_view_set_snap_to_page);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_move_to_page",
                                 wrap_scroll_view_set_move_to_page);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_recursive",
                                 wrap_scroll_view_set_recursive);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_set_recursive_only",
                                 wrap_scroll_view_set_recursive_only);
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
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_snap_to_page",
                                 wrap_scroll_view_t_get_prop_snap_to_page);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_move_to_page",
                                 wrap_scroll_view_t_get_prop_move_to_page);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_recursive",
                                 wrap_scroll_view_t_get_prop_recursive);

  return RET_OK;
}

static HANDLER_PROTO(wrap_slide_menu_create) {
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

static HANDLER_PROTO(wrap_slide_menu_cast) {
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

static HANDLER_PROTO(wrap_slide_menu_set_value) {
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

static HANDLER_PROTO(wrap_slide_menu_set_align_v) {
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

static HANDLER_PROTO(wrap_slide_menu_set_min_scale) {
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

static HANDLER_PROTO(wrap_slide_menu_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_slide_menu_t_get_prop_align_v) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_number(ctx, obj->align_v);
  return jret;
}

static HANDLER_PROTO(wrap_slide_menu_t_get_prop_min_scale) {
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

static HANDLER_PROTO(wrap_slide_indicator_create) {
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

static HANDLER_PROTO(wrap_slide_indicator_create_linear) {
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

static HANDLER_PROTO(wrap_slide_indicator_create_arc) {
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

static HANDLER_PROTO(wrap_slide_indicator_cast) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_value) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_max) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_default_paint) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_auto_hide) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_margin) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_spacing) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_size) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_anchor) {
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

static HANDLER_PROTO(wrap_slide_indicator_set_indicated_target) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* target_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_indicated_target(widget, target_name);
    TKMEM_FREE(target_name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_set_transition) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t transition = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_transition(widget, transition);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->max);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_default_paint) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->default_paint);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_auto_hide) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->auto_hide);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_margin) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->margin);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_spacing) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->spacing);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_anchor_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_anchor_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_indicated_target) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_string(ctx, obj->indicated_target);
  return jret;
}

static HANDLER_PROTO(wrap_slide_indicator_t_get_prop_transition) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_bool(ctx, obj->transition);
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
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_set_transition",
                                 wrap_slide_indicator_set_transition);
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
  jerryx_handler_register_global((const jerry_char_t*)"slide_indicator_t_get_prop_transition",
                                 wrap_slide_indicator_t_get_prop_transition);

  return RET_OK;
}

static HANDLER_PROTO(wrap_slide_view_create) {
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

static HANDLER_PROTO(wrap_slide_view_cast) {
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

static HANDLER_PROTO(wrap_slide_view_set_auto_play) {
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

static HANDLER_PROTO(wrap_slide_view_set_active) {
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

static HANDLER_PROTO(wrap_slide_view_set_active_ex) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    bool_t animate = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)slide_view_set_active_ex(widget, index, animate);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_slide_view_set_vertical) {
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

static HANDLER_PROTO(wrap_slide_view_set_anim_hint) {
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

static HANDLER_PROTO(wrap_slide_view_set_loop) {
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

static HANDLER_PROTO(wrap_slide_view_remove_index) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_view_remove_index(widget, index);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_slide_view_t_get_prop_vertical) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

static HANDLER_PROTO(wrap_slide_view_t_get_prop_auto_play) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_int(ctx, obj->auto_play);
  return jret;
}

static HANDLER_PROTO(wrap_slide_view_t_get_prop_loop) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

static HANDLER_PROTO(wrap_slide_view_t_get_prop_anim_hint) {
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
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_active_ex",
                                 wrap_slide_view_set_active_ex);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_vertical",
                                 wrap_slide_view_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_anim_hint",
                                 wrap_slide_view_set_anim_hint);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_loop",
                                 wrap_slide_view_set_loop);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_remove_index",
                                 wrap_slide_view_remove_index);
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

static HANDLER_PROTO(wrap_switch_create) {
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

static HANDLER_PROTO(wrap_switch_set_value) {
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

static HANDLER_PROTO(wrap_switch_cast) {
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

static HANDLER_PROTO(wrap_switch_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_switch_t_get_prop_max_xoffset_ratio) {
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

static HANDLER_PROTO(wrap_text_selector_create) {
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

static HANDLER_PROTO(wrap_text_selector_cast) {
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

static HANDLER_PROTO(wrap_text_selector_reset_options) {
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

static HANDLER_PROTO(wrap_text_selector_count_options) {
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

static HANDLER_PROTO(wrap_text_selector_append_option) {
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

static HANDLER_PROTO(wrap_text_selector_set_options) {
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

static HANDLER_PROTO(wrap_text_selector_set_range_options_ex) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t start = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t nr = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    int32_t step = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
    const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
    ret = (ret_t)text_selector_set_range_options_ex(widget, start, nr, step, format);
    TKMEM_FREE(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_set_range_options) {
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

static HANDLER_PROTO(wrap_text_selector_get_value) {
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

static HANDLER_PROTO(wrap_text_selector_set_value) {
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

static HANDLER_PROTO(wrap_text_selector_get_text) {
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

static HANDLER_PROTO(wrap_text_selector_set_text) {
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

static HANDLER_PROTO(wrap_text_selector_set_selected_index) {
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

static HANDLER_PROTO(wrap_text_selector_set_visible_nr) {
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

static HANDLER_PROTO(wrap_text_selector_set_localize_options) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t localize_options = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_localize_options(widget, localize_options);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_set_loop_options) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t loop_options = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_loop_options(widget, loop_options);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_set_yspeed_scale) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    float_t yspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_yspeed_scale(widget, yspeed_scale);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_set_animating_time) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t animating_time = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_animating_time(widget, animating_time);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_set_enable_value_animator) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t enable_value_animator = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_enable_value_animator(widget, enable_value_animator);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_t_get_prop_visible_nr) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->visible_nr);
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_t_get_prop_selected_index) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->selected_index);
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_t_get_prop_options) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_string(ctx, obj->options);
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_t_get_prop_yspeed_scale) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_number(ctx, obj->yspeed_scale);
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_t_get_prop_animating_time) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->animating_time);
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_t_get_prop_localize_options) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_bool(ctx, obj->localize_options);
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_t_get_prop_loop_options) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_bool(ctx, obj->loop_options);
  return jret;
}

static HANDLER_PROTO(wrap_text_selector_t_get_prop_enable_value_animator) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_bool(ctx, obj->enable_value_animator);
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
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_range_options_ex",
                                 wrap_text_selector_set_range_options_ex);
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
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_localize_options",
                                 wrap_text_selector_set_localize_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_loop_options",
                                 wrap_text_selector_set_loop_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_yspeed_scale",
                                 wrap_text_selector_set_yspeed_scale);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_animating_time",
                                 wrap_text_selector_set_animating_time);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_set_enable_value_animator",
                                 wrap_text_selector_set_enable_value_animator);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_visible_nr",
                                 wrap_text_selector_t_get_prop_visible_nr);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_selected_index",
                                 wrap_text_selector_t_get_prop_selected_index);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_options",
                                 wrap_text_selector_t_get_prop_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_yspeed_scale",
                                 wrap_text_selector_t_get_prop_yspeed_scale);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_animating_time",
                                 wrap_text_selector_t_get_prop_animating_time);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_localize_options",
                                 wrap_text_selector_t_get_prop_localize_options);
  jerryx_handler_register_global((const jerry_char_t*)"text_selector_t_get_prop_loop_options",
                                 wrap_text_selector_t_get_prop_loop_options);
  jerryx_handler_register_global(
      (const jerry_char_t*)"text_selector_t_get_prop_enable_value_animator",
      wrap_text_selector_t_get_prop_enable_value_animator);

  return RET_OK;
}

static HANDLER_PROTO(wrap_time_clock_create) {
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

static HANDLER_PROTO(wrap_time_clock_cast) {
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

static HANDLER_PROTO(wrap_time_clock_set_hour) {
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

static HANDLER_PROTO(wrap_time_clock_set_minute) {
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

static HANDLER_PROTO(wrap_time_clock_set_second) {
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

static HANDLER_PROTO(wrap_time_clock_set_hour_image) {
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

static HANDLER_PROTO(wrap_time_clock_set_minute_image) {
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

static HANDLER_PROTO(wrap_time_clock_set_second_image) {
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

static HANDLER_PROTO(wrap_time_clock_set_bg_image) {
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

static HANDLER_PROTO(wrap_time_clock_set_image) {
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

static HANDLER_PROTO(wrap_time_clock_set_hour_anchor) {
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

static HANDLER_PROTO(wrap_time_clock_set_minute_anchor) {
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

static HANDLER_PROTO(wrap_time_clock_set_second_anchor) {
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

static HANDLER_PROTO(wrap_time_clock_t_get_prop_hour) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->hour);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_minute) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->minute);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_second) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->second);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_bg_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->bg_image);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_hour_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_image);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_minute_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_image);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_second_image) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_image);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_hour_anchor_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_anchor_x);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_hour_anchor_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_anchor_y);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_minute_anchor_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_anchor_x);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_minute_anchor_y) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_anchor_y);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_second_anchor_x) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_anchor_x);
  return jret;
}

static HANDLER_PROTO(wrap_time_clock_t_get_prop_second_anchor_y) {
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

static HANDLER_PROTO(wrap_vpage_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)vpage_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "vpage_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_vpage_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)vpage_cast(widget);

    jret = jsvalue_create_pointer(ctx, ret, "vpage_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_vpage_set_ui_asset) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* ui_asset = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vpage_set_ui_asset(widget, ui_asset);
    TKMEM_FREE(ui_asset);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_vpage_set_anim_hint) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* anim_hint = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vpage_set_anim_hint(widget, anim_hint);
    TKMEM_FREE(anim_hint);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_vpage_t_get_prop_ui_asset) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vpage_t* obj = (vpage_t*)jsvalue_get_pointer(ctx, argv[0], "vpage_t*");

  jret = jsvalue_create_string(ctx, obj->ui_asset);
  return jret;
}

static HANDLER_PROTO(wrap_vpage_t_get_prop_anim_hint) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  vpage_t* obj = (vpage_t*)jsvalue_get_pointer(ctx, argv[0], "vpage_t*");

  jret = jsvalue_create_string(ctx, obj->anim_hint);
  return jret;
}

ret_t vpage_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"vpage_create", wrap_vpage_create);
  jerryx_handler_register_global((const jerry_char_t*)"vpage_cast", wrap_vpage_cast);
  jerryx_handler_register_global((const jerry_char_t*)"vpage_set_ui_asset",
                                 wrap_vpage_set_ui_asset);
  jerryx_handler_register_global((const jerry_char_t*)"vpage_set_anim_hint",
                                 wrap_vpage_set_anim_hint);
  jerryx_handler_register_global((const jerry_char_t*)"vpage_t_get_prop_ui_asset",
                                 wrap_vpage_t_get_prop_ui_asset);
  jerryx_handler_register_global((const jerry_char_t*)"vpage_t_get_prop_anim_hint",
                                 wrap_vpage_t_get_prop_anim_hint);

  return RET_OK;
}

static HANDLER_PROTO(wrap_prop_change_event_cast) {
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

static HANDLER_PROTO(wrap_prop_change_event_t_get_prop_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  prop_change_event_t* obj =
      (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

static HANDLER_PROTO(wrap_prop_change_event_t_get_prop_value) {
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

static HANDLER_PROTO(wrap_progress_event_cast) {
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

static HANDLER_PROTO(wrap_progress_event_t_get_prop_percent) {
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

static HANDLER_PROTO(wrap_done_event_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    done_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (done_event_t*)done_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "done_event_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_done_event_t_get_prop_result) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  done_event_t* obj = (done_event_t*)jsvalue_get_pointer(ctx, argv[0], "done_event_t*");

  jret = jsvalue_create_int(ctx, obj->result);
  return jret;
}

ret_t done_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"done_event_cast", wrap_done_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"done_event_t_get_prop_result",
                                 wrap_done_event_t_get_prop_result);

  return RET_OK;
}

static HANDLER_PROTO(wrap_error_event_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    error_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (error_event_t*)error_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "error_event_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_error_event_t_get_prop_code) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  error_event_t* obj = (error_event_t*)jsvalue_get_pointer(ctx, argv[0], "error_event_t*");

  jret = jsvalue_create_int(ctx, obj->code);
  return jret;
}

static HANDLER_PROTO(wrap_error_event_t_get_prop_message) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  error_event_t* obj = (error_event_t*)jsvalue_get_pointer(ctx, argv[0], "error_event_t*");

  jret = jsvalue_create_string(ctx, obj->message);
  return jret;
}

ret_t error_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"error_event_cast", wrap_error_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"error_event_t_get_prop_code",
                                 wrap_error_event_t_get_prop_code);
  jerryx_handler_register_global((const jerry_char_t*)"error_event_t_get_prop_message",
                                 wrap_error_event_t_get_prop_message);

  return RET_OK;
}

static HANDLER_PROTO(wrap_cmd_exec_event_cast) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    cmd_exec_event_t* ret = NULL;
    event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
    ret = (cmd_exec_event_t*)cmd_exec_event_cast(event);

    jret = jsvalue_create_pointer(ctx, ret, "cmd_exec_event_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_cmd_exec_event_t_get_prop_name) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  cmd_exec_event_t* obj = (cmd_exec_event_t*)jsvalue_get_pointer(ctx, argv[0], "cmd_exec_event_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

static HANDLER_PROTO(wrap_cmd_exec_event_t_get_prop_args) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  cmd_exec_event_t* obj = (cmd_exec_event_t*)jsvalue_get_pointer(ctx, argv[0], "cmd_exec_event_t*");

  jret = jsvalue_create_string(ctx, obj->args);
  return jret;
}

static HANDLER_PROTO(wrap_cmd_exec_event_t_get_prop_result) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  cmd_exec_event_t* obj = (cmd_exec_event_t*)jsvalue_get_pointer(ctx, argv[0], "cmd_exec_event_t*");

  jret = jsvalue_create_int(ctx, obj->result);
  return jret;
}

static HANDLER_PROTO(wrap_cmd_exec_event_t_get_prop_can_exec) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  cmd_exec_event_t* obj = (cmd_exec_event_t*)jsvalue_get_pointer(ctx, argv[0], "cmd_exec_event_t*");

  jret = jsvalue_create_bool(ctx, obj->can_exec);
  return jret;
}

ret_t cmd_exec_event_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"cmd_exec_event_cast",
                                 wrap_cmd_exec_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"cmd_exec_event_t_get_prop_name",
                                 wrap_cmd_exec_event_t_get_prop_name);
  jerryx_handler_register_global((const jerry_char_t*)"cmd_exec_event_t_get_prop_args",
                                 wrap_cmd_exec_event_t_get_prop_args);
  jerryx_handler_register_global((const jerry_char_t*)"cmd_exec_event_t_get_prop_result",
                                 wrap_cmd_exec_event_t_get_prop_result);
  jerryx_handler_register_global((const jerry_char_t*)"cmd_exec_event_t_get_prop_can_exec",
                                 wrap_cmd_exec_event_t_get_prop_can_exec);

  return RET_OK;
}

static HANDLER_PROTO(wrap_app_bar_create) {
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

static HANDLER_PROTO(wrap_app_bar_cast) {
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

static HANDLER_PROTO(wrap_button_group_create) {
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

static HANDLER_PROTO(wrap_button_group_cast) {
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

static HANDLER_PROTO(wrap_button_create) {
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

static HANDLER_PROTO(wrap_button_cast) {
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

static HANDLER_PROTO(wrap_button_set_repeat) {
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

static HANDLER_PROTO(wrap_button_set_long_press_time) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t long_press_time = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)button_set_long_press_time(widget, long_press_time);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_button_set_enable_long_press) {
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

static HANDLER_PROTO(wrap_button_t_get_prop_repeat) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_int(ctx, obj->repeat);
  return jret;
}

static HANDLER_PROTO(wrap_button_t_get_prop_enable_long_press) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_bool(ctx, obj->enable_long_press);
  return jret;
}

static HANDLER_PROTO(wrap_button_t_get_prop_long_press_time) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_int(ctx, obj->long_press_time);
  return jret;
}

ret_t button_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"button_create", wrap_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"button_cast", wrap_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"button_set_repeat", wrap_button_set_repeat);
  jerryx_handler_register_global((const jerry_char_t*)"button_set_long_press_time",
                                 wrap_button_set_long_press_time);
  jerryx_handler_register_global((const jerry_char_t*)"button_set_enable_long_press",
                                 wrap_button_set_enable_long_press);
  jerryx_handler_register_global((const jerry_char_t*)"button_t_get_prop_repeat",
                                 wrap_button_t_get_prop_repeat);
  jerryx_handler_register_global((const jerry_char_t*)"button_t_get_prop_enable_long_press",
                                 wrap_button_t_get_prop_enable_long_press);
  jerryx_handler_register_global((const jerry_char_t*)"button_t_get_prop_long_press_time",
                                 wrap_button_t_get_prop_long_press_time);

  return RET_OK;
}

static HANDLER_PROTO(wrap_check_button_create) {
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

static HANDLER_PROTO(wrap_check_button_create_radio) {
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

static HANDLER_PROTO(wrap_check_button_set_value) {
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

static HANDLER_PROTO(wrap_check_button_cast) {
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

static HANDLER_PROTO(wrap_check_button_t_get_prop_value) {
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

static HANDLER_PROTO(wrap_clip_view_create) {
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

static HANDLER_PROTO(wrap_clip_view_cast) {
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

static HANDLER_PROTO(wrap_color_tile_create) {
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

static HANDLER_PROTO(wrap_color_tile_cast) {
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

static HANDLER_PROTO(wrap_color_tile_set_bg_color) {
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

static HANDLER_PROTO(wrap_color_tile_get_bg_color) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const char*)color_tile_get_bg_color(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_color_tile_get_border_color) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const char*)color_tile_get_border_color(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_color_tile_t_get_prop_bg_color) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = jsvalue_create_string(ctx, obj->bg_color);
  return jret;
}

static HANDLER_PROTO(wrap_color_tile_t_get_prop_border_color) {
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
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_get_bg_color",
                                 wrap_color_tile_get_bg_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_get_border_color",
                                 wrap_color_tile_get_border_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_t_get_prop_bg_color",
                                 wrap_color_tile_t_get_prop_bg_color);
  jerryx_handler_register_global((const jerry_char_t*)"color_tile_t_get_prop_border_color",
                                 wrap_color_tile_t_get_prop_border_color);

  return RET_OK;
}

static HANDLER_PROTO(wrap_column_create) {
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

static HANDLER_PROTO(wrap_column_cast) {
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

static HANDLER_PROTO(wrap_combo_box_item_create) {
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

static HANDLER_PROTO(wrap_combo_box_item_cast) {
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

static HANDLER_PROTO(wrap_combo_box_item_set_checked) {
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

static HANDLER_PROTO(wrap_combo_box_item_set_value) {
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

static HANDLER_PROTO(wrap_combo_box_item_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_combo_box_item_t_get_prop_checked) {
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

static HANDLER_PROTO(wrap_dialog_client_create) {
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

static HANDLER_PROTO(wrap_dialog_client_cast) {
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

static HANDLER_PROTO(wrap_dialog_title_create) {
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

static HANDLER_PROTO(wrap_dialog_title_cast) {
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

static HANDLER_PROTO(wrap_digit_clock_create) {
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

static HANDLER_PROTO(wrap_digit_clock_cast) {
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

static HANDLER_PROTO(wrap_digit_clock_set_format) {
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

static HANDLER_PROTO(wrap_digit_clock_t_get_prop_format) {
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

static HANDLER_PROTO(wrap_dragger_create) {
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

static HANDLER_PROTO(wrap_dragger_cast) {
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

static HANDLER_PROTO(wrap_dragger_set_range) {
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

static HANDLER_PROTO(wrap_dragger_t_get_prop_x_min) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->x_min);
  return jret;
}

static HANDLER_PROTO(wrap_dragger_t_get_prop_y_min) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->y_min);
  return jret;
}

static HANDLER_PROTO(wrap_dragger_t_get_prop_x_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->x_max);
  return jret;
}

static HANDLER_PROTO(wrap_dragger_t_get_prop_y_max) {
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

static HANDLER_PROTO(wrap_edit_create) {
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

static HANDLER_PROTO(wrap_edit_cast) {
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

static HANDLER_PROTO(wrap_edit_get_int) {
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

static HANDLER_PROTO(wrap_edit_get_double) {
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

static HANDLER_PROTO(wrap_edit_set_int) {
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

static HANDLER_PROTO(wrap_edit_set_double) {
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

static HANDLER_PROTO(wrap_edit_set_text_limit) {
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

static HANDLER_PROTO(wrap_edit_set_int_limit) {
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

static HANDLER_PROTO(wrap_edit_set_float_limit) {
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

static HANDLER_PROTO(wrap_edit_set_readonly) {
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

static HANDLER_PROTO(wrap_edit_set_cancelable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t cancelable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_cancelable(widget, cancelable);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_set_auto_fix) {
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

static HANDLER_PROTO(wrap_edit_set_select_none_when_focused) {
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

static HANDLER_PROTO(wrap_edit_set_open_im_when_focused) {
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

static HANDLER_PROTO(wrap_edit_set_close_im_when_blured) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t close_im_when_blured = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_close_im_when_blured(widget, close_im_when_blured);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_set_input_type) {
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

static HANDLER_PROTO(wrap_edit_set_action_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* action_text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)edit_set_action_text(widget, action_text);
    TKMEM_FREE(action_text);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_set_tips) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)edit_set_tips(widget, tips);
    TKMEM_FREE(tips);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_set_tr_tips) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* tr_tips = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)edit_set_tr_tips(widget, tr_tips);
    TKMEM_FREE(tr_tips);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_set_keyboard) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    char* keyboard = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)edit_set_keyboard(widget, keyboard);
    TKMEM_FREE(keyboard);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_set_password_visible) {
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

static HANDLER_PROTO(wrap_edit_set_focus) {
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

static HANDLER_PROTO(wrap_edit_set_cursor) {
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

static HANDLER_PROTO(wrap_edit_get_cursor) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = (uint32_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (uint32_t)edit_get_cursor(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_set_select) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t start = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t end = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)edit_set_select(widget, start, end);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_get_selected_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    char* ret = NULL;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (char*)edit_get_selected_text(widget);

    jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_tips) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_string(ctx, obj->tips);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_tr_tips) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_string(ctx, obj->tr_tips);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_action_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_string(ctx, obj->action_text);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_keyboard) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_string(ctx, obj->keyboard);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_min) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_step) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->step);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_input_type) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->input_type);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_readonly) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->readonly);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_password_visible) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->password_visible);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_auto_fix) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_fix);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_select_none_when_focused) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->select_none_when_focused);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_open_im_when_focused) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->open_im_when_focused);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_close_im_when_blured) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->close_im_when_blured);
  return jret;
}

static HANDLER_PROTO(wrap_edit_t_get_prop_cancelable) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->cancelable);
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
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_cancelable",
                                 wrap_edit_set_cancelable);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_auto_fix", wrap_edit_set_auto_fix);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_select_none_when_focused",
                                 wrap_edit_set_select_none_when_focused);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_open_im_when_focused",
                                 wrap_edit_set_open_im_when_focused);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_close_im_when_blured",
                                 wrap_edit_set_close_im_when_blured);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_input_type",
                                 wrap_edit_set_input_type);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_action_text",
                                 wrap_edit_set_action_text);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_tips", wrap_edit_set_tips);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_tr_tips", wrap_edit_set_tr_tips);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_keyboard", wrap_edit_set_keyboard);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_password_visible",
                                 wrap_edit_set_password_visible);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_focus", wrap_edit_set_focus);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_cursor", wrap_edit_set_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"edit_get_cursor", wrap_edit_get_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_select", wrap_edit_set_select);
  jerryx_handler_register_global((const jerry_char_t*)"edit_get_selected_text",
                                 wrap_edit_get_selected_text);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_tips",
                                 wrap_edit_t_get_prop_tips);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_tr_tips",
                                 wrap_edit_t_get_prop_tr_tips);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_action_text",
                                 wrap_edit_t_get_prop_action_text);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_keyboard",
                                 wrap_edit_t_get_prop_keyboard);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_min",
                                 wrap_edit_t_get_prop_min);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_max",
                                 wrap_edit_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_step",
                                 wrap_edit_t_get_prop_step);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_input_type",
                                 wrap_edit_t_get_prop_input_type);
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
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_close_im_when_blured",
                                 wrap_edit_t_get_prop_close_im_when_blured);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_cancelable",
                                 wrap_edit_t_get_prop_cancelable);

  return RET_OK;
}

static HANDLER_PROTO(wrap_grid_item_create) {
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

static HANDLER_PROTO(wrap_grid_item_cast) {
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

static HANDLER_PROTO(wrap_grid_create) {
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

static HANDLER_PROTO(wrap_grid_cast) {
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

static HANDLER_PROTO(wrap_group_box_create) {
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

static HANDLER_PROTO(wrap_group_box_cast) {
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

static HANDLER_PROTO(wrap_label_create) {
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

static HANDLER_PROTO(wrap_label_set_length) {
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

static HANDLER_PROTO(wrap_label_set_max_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t max_w = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)label_set_max_w(widget, max_w);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_label_set_line_wrap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t line_wrap = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)label_set_line_wrap(widget, line_wrap);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_label_set_word_wrap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t word_wrap = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)label_set_word_wrap(widget, word_wrap);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_label_resize_to_content) {
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

static HANDLER_PROTO(wrap_label_cast) {
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

static HANDLER_PROTO(wrap_label_t_get_prop_length) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  label_t* obj = (label_t*)jsvalue_get_pointer(ctx, argv[0], "label_t*");

  jret = jsvalue_create_int(ctx, obj->length);
  return jret;
}

static HANDLER_PROTO(wrap_label_t_get_prop_line_wrap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  label_t* obj = (label_t*)jsvalue_get_pointer(ctx, argv[0], "label_t*");

  jret = jsvalue_create_bool(ctx, obj->line_wrap);
  return jret;
}

static HANDLER_PROTO(wrap_label_t_get_prop_word_wrap) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  label_t* obj = (label_t*)jsvalue_get_pointer(ctx, argv[0], "label_t*");

  jret = jsvalue_create_bool(ctx, obj->word_wrap);
  return jret;
}

static HANDLER_PROTO(wrap_label_t_get_prop_max_w) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  label_t* obj = (label_t*)jsvalue_get_pointer(ctx, argv[0], "label_t*");

  jret = jsvalue_create_int(ctx, obj->max_w);
  return jret;
}

ret_t label_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"label_create", wrap_label_create);
  jerryx_handler_register_global((const jerry_char_t*)"label_set_length", wrap_label_set_length);
  jerryx_handler_register_global((const jerry_char_t*)"label_set_max_w", wrap_label_set_max_w);
  jerryx_handler_register_global((const jerry_char_t*)"label_set_line_wrap",
                                 wrap_label_set_line_wrap);
  jerryx_handler_register_global((const jerry_char_t*)"label_set_word_wrap",
                                 wrap_label_set_word_wrap);
  jerryx_handler_register_global((const jerry_char_t*)"label_resize_to_content",
                                 wrap_label_resize_to_content);
  jerryx_handler_register_global((const jerry_char_t*)"label_cast", wrap_label_cast);
  jerryx_handler_register_global((const jerry_char_t*)"label_t_get_prop_length",
                                 wrap_label_t_get_prop_length);
  jerryx_handler_register_global((const jerry_char_t*)"label_t_get_prop_line_wrap",
                                 wrap_label_t_get_prop_line_wrap);
  jerryx_handler_register_global((const jerry_char_t*)"label_t_get_prop_word_wrap",
                                 wrap_label_t_get_prop_word_wrap);
  jerryx_handler_register_global((const jerry_char_t*)"label_t_get_prop_max_w",
                                 wrap_label_t_get_prop_max_w);

  return RET_OK;
}

static HANDLER_PROTO(wrap_pages_create) {
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

static HANDLER_PROTO(wrap_pages_cast) {
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

static HANDLER_PROTO(wrap_pages_set_active) {
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

static HANDLER_PROTO(wrap_pages_set_active_by_name) {
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

static HANDLER_PROTO(wrap_pages_t_get_prop_active) {
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

static HANDLER_PROTO(wrap_progress_bar_create) {
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

static HANDLER_PROTO(wrap_progress_bar_cast) {
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

static HANDLER_PROTO(wrap_progress_bar_set_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double value = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_set_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    double max = (double)jsvalue_get_number_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_max(widget, max);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_set_format) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_format(widget, format);
    TKMEM_FREE(format);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_set_vertical) {
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

static HANDLER_PROTO(wrap_progress_bar_set_show_text) {
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

static HANDLER_PROTO(wrap_progress_bar_set_reverse) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t reverse = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_reverse(widget, reverse);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_get_percent) {
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

static HANDLER_PROTO(wrap_progress_bar_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_t_get_prop_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_t_get_prop_format) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_t_get_prop_vertical) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_t_get_prop_show_text) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->show_text);
  return jret;
}

static HANDLER_PROTO(wrap_progress_bar_t_get_prop_reverse) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->reverse);
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
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_format",
                                 wrap_progress_bar_set_format);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_vertical",
                                 wrap_progress_bar_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_show_text",
                                 wrap_progress_bar_set_show_text);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_reverse",
                                 wrap_progress_bar_set_reverse);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_get_percent",
                                 wrap_progress_bar_get_percent);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_value",
                                 wrap_progress_bar_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_max",
                                 wrap_progress_bar_t_get_prop_max);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_format",
                                 wrap_progress_bar_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_vertical",
                                 wrap_progress_bar_t_get_prop_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_show_text",
                                 wrap_progress_bar_t_get_prop_show_text);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_reverse",
                                 wrap_progress_bar_t_get_prop_reverse);

  return RET_OK;
}

static HANDLER_PROTO(wrap_row_create) {
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

static HANDLER_PROTO(wrap_row_cast) {
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

static HANDLER_PROTO(wrap_slider_create) {
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

static HANDLER_PROTO(wrap_slider_cast) {
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

static HANDLER_PROTO(wrap_slider_set_value) {
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

static HANDLER_PROTO(wrap_slider_set_min) {
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

static HANDLER_PROTO(wrap_slider_set_max) {
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

static HANDLER_PROTO(wrap_slider_set_step) {
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

static HANDLER_PROTO(wrap_slider_set_bar_size) {
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

static HANDLER_PROTO(wrap_slider_set_vertical) {
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

static HANDLER_PROTO(wrap_slider_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_slider_t_get_prop_min) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

static HANDLER_PROTO(wrap_slider_t_get_prop_max) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

static HANDLER_PROTO(wrap_slider_t_get_prop_step) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->step);
  return jret;
}

static HANDLER_PROTO(wrap_slider_t_get_prop_vertical) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

static HANDLER_PROTO(wrap_slider_t_get_prop_bar_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_int(ctx, obj->bar_size);
  return jret;
}

static HANDLER_PROTO(wrap_slider_t_get_prop_dragger_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_int(ctx, obj->dragger_size);
  return jret;
}

static HANDLER_PROTO(wrap_slider_t_get_prop_dragger_adapt_to_icon) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->dragger_adapt_to_icon);
  return jret;
}

static HANDLER_PROTO(wrap_slider_t_get_prop_slide_with_bar) {
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

static HANDLER_PROTO(wrap_tab_button_group_create) {
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

static HANDLER_PROTO(wrap_tab_button_group_set_compact) {
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

static HANDLER_PROTO(wrap_tab_button_group_set_scrollable) {
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

static HANDLER_PROTO(wrap_tab_button_group_cast) {
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

static HANDLER_PROTO(wrap_tab_button_group_t_get_prop_compact) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_group_t* obj =
      (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = jsvalue_create_bool(ctx, obj->compact);
  return jret;
}

static HANDLER_PROTO(wrap_tab_button_group_t_get_prop_scrollable) {
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

static HANDLER_PROTO(wrap_tab_button_create) {
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

static HANDLER_PROTO(wrap_tab_button_cast) {
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

static HANDLER_PROTO(wrap_tab_button_set_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)tab_button_set_value(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_tab_button_set_icon) {
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

static HANDLER_PROTO(wrap_tab_button_set_active_icon) {
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

static HANDLER_PROTO(wrap_tab_button_set_load_ui) {
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

static HANDLER_PROTO(wrap_tab_button_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_tab_button_t_get_prop_load_ui) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->load_ui);
  return jret;
}

static HANDLER_PROTO(wrap_tab_button_t_get_prop_active_icon) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->active_icon);
  return jret;
}

static HANDLER_PROTO(wrap_tab_button_t_get_prop_icon) {
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

static HANDLER_PROTO(wrap_tab_control_create) {
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

static HANDLER_PROTO(wrap_tab_control_cast) {
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

static HANDLER_PROTO(wrap_view_create) {
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

static HANDLER_PROTO(wrap_view_set_default_focused_child) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    const char* default_focused_child = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)view_set_default_focused_child(widget, default_focused_child);
    TKMEM_FREE(default_focused_child);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_view_cast) {
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

static HANDLER_PROTO(wrap_view_t_get_prop_default_focused_child) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  view_t* obj = (view_t*)jsvalue_get_pointer(ctx, argv[0], "view_t*");

  jret = jsvalue_create_string(ctx, obj->default_focused_child);
  return jret;
}

ret_t view_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"view_create", wrap_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"view_set_default_focused_child",
                                 wrap_view_set_default_focused_child);
  jerryx_handler_register_global((const jerry_char_t*)"view_cast", wrap_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"view_t_get_prop_default_focused_child",
                                 wrap_view_t_get_prop_default_focused_child);

  return RET_OK;
}

static HANDLER_PROTO(wrap_dialog_create) {
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

static HANDLER_PROTO(wrap_dialog_create_simple) {
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

static HANDLER_PROTO(wrap_dialog_cast) {
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

static HANDLER_PROTO(wrap_dialog_get_title) {
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

static HANDLER_PROTO(wrap_dialog_get_client) {
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

static HANDLER_PROTO(wrap_dialog_open) {
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

static HANDLER_PROTO(wrap_dialog_set_title) {
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

static HANDLER_PROTO(wrap_dialog_modal) {
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

static HANDLER_PROTO(wrap_dialog_quit) {
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

static HANDLER_PROTO(wrap_dialog_is_quited) {
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

static HANDLER_PROTO(wrap_dialog_is_modal) {
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

static HANDLER_PROTO(wrap_dialog_toast) {
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

static HANDLER_PROTO(wrap_dialog_info) {
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

static HANDLER_PROTO(wrap_dialog_warn) {
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

static HANDLER_PROTO(wrap_dialog_confirm) {
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

static HANDLER_PROTO(wrap_dialog_t_get_prop_highlight) {
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

static HANDLER_PROTO(wrap_native_window_move) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    bool_t force = (bool_t)jsvalue_get_boolean_value(ctx, argv[3]);
    ret = (ret_t)native_window_move(win, x, y, force);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_resize) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
    bool_t force = (bool_t)jsvalue_get_boolean_value(ctx, argv[3]);
    ret = (ret_t)native_window_resize(win, w, h, force);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_set_orientation) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    lcd_orientation_t old_orientation = (lcd_orientation_t)jsvalue_get_int_value(ctx, argv[1]);
    lcd_orientation_t new_orientation = (lcd_orientation_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)native_window_set_orientation(win, old_orientation, new_orientation);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_minimize) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    ret = (ret_t)native_window_minimize(win);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_maximize) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    ret = (ret_t)native_window_maximize(win);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_restore) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    ret = (ret_t)native_window_restore(win);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_center) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    ret = (ret_t)native_window_center(win);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_show_border) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    bool_t show = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)native_window_show_border(win, show);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_set_fullscreen) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    bool_t fullscreen = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)native_window_set_fullscreen(win, fullscreen);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_set_cursor) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
    ret = (ret_t)native_window_set_cursor(win, name, img);
    TKMEM_FREE(name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_native_window_set_title) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    native_window_t* win = (native_window_t*)jsvalue_get_pointer(ctx, argv[0], "native_window_t*");
    const char* app_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)native_window_set_title(win, app_name);
    TKMEM_FREE(app_name);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t native_window_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"native_window_move",
                                 wrap_native_window_move);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_resize",
                                 wrap_native_window_resize);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_set_orientation",
                                 wrap_native_window_set_orientation);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_minimize",
                                 wrap_native_window_minimize);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_maximize",
                                 wrap_native_window_maximize);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_restore",
                                 wrap_native_window_restore);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_center",
                                 wrap_native_window_center);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_show_border",
                                 wrap_native_window_show_border);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_set_fullscreen",
                                 wrap_native_window_set_fullscreen);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_set_cursor",
                                 wrap_native_window_set_cursor);
  jerryx_handler_register_global((const jerry_char_t*)"native_window_set_title",
                                 wrap_native_window_set_title);

  return RET_OK;
}

static HANDLER_PROTO(wrap_window_create) {
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

static HANDLER_PROTO(wrap_window_create_default) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    widget_t* ret = NULL;
    ret = (widget_t*)window_create_default();

    jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_window_set_fullscreen) {
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

static HANDLER_PROTO(wrap_window_set_auto_scale_children) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t design_w = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    uint32_t design_h = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
    ret = (ret_t)window_set_auto_scale_children(widget, design_w, design_h);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_window_open) {
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

static HANDLER_PROTO(wrap_window_open_and_close) {
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

static HANDLER_PROTO(wrap_window_close) {
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

static HANDLER_PROTO(wrap_window_close_force) {
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

static HANDLER_PROTO(wrap_window_cast) {
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

static HANDLER_PROTO(wrap_window_t_get_prop_fullscreen) {
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
  jerryx_handler_register_global((const jerry_char_t*)"window_set_auto_scale_children",
                                 wrap_window_set_auto_scale_children);
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

static HANDLER_PROTO(wrap_gif_image_create) {
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

static HANDLER_PROTO(wrap_gif_image_play) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)gif_image_play(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gif_image_stop) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)gif_image_stop(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gif_image_pause) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)gif_image_pause(widget);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gif_image_set_loop) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t loop = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)gif_image_set_loop(widget, loop);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_gif_image_cast) {
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

static HANDLER_PROTO(wrap_gif_image_t_get_prop_loop) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  gif_image_t* obj = (gif_image_t*)jsvalue_get_pointer(ctx, argv[0], "gif_image_t*");

  jret = jsvalue_create_int(ctx, obj->loop);
  return jret;
}

ret_t gif_image_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_create", wrap_gif_image_create);
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_play", wrap_gif_image_play);
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_stop", wrap_gif_image_stop);
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_pause", wrap_gif_image_pause);
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_set_loop",
                                 wrap_gif_image_set_loop);
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_cast", wrap_gif_image_cast);
  jerryx_handler_register_global((const jerry_char_t*)"gif_image_t_get_prop_loop",
                                 wrap_gif_image_t_get_prop_loop);

  return RET_OK;
}

static HANDLER_PROTO(wrap_keyboard_create) {
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

static HANDLER_PROTO(wrap_keyboard_cast) {
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

static HANDLER_PROTO(wrap_mutable_image_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)mutable_image_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "mutable_image_t*");
  }
  return jret;
}

ret_t mutable_image_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"mutable_image_create",
                                 wrap_mutable_image_create);

  return RET_OK;
}

static HANDLER_PROTO(wrap_svg_image_create) {
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

static HANDLER_PROTO(wrap_svg_image_set_image) {
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

static HANDLER_PROTO(wrap_svg_image_cast) {
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

static HANDLER_PROTO(wrap_idle_info_cast) {
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

static HANDLER_PROTO(wrap_idle_info_t_get_prop_ctx) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

static HANDLER_PROTO(wrap_idle_info_t_get_prop_extra_ctx) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->extra_ctx, "void*");
  return jret;
}

static HANDLER_PROTO(wrap_idle_info_t_get_prop_id) {
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
  jerryx_handler_register_global((const jerry_char_t*)"idle_info_t_get_prop_extra_ctx",
                                 wrap_idle_info_t_get_prop_extra_ctx);
  jerryx_handler_register_global((const jerry_char_t*)"idle_info_t_get_prop_id",
                                 wrap_idle_info_t_get_prop_id);

  return RET_OK;
}

static HANDLER_PROTO(wrap_object_array_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    object_t* ret = NULL;
    ret = (object_t*)object_array_create();

    jret = jsvalue_create_object(ctx, ret, "object_array_t*", &s_object_array_unref_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_array_clear_props) {
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

static HANDLER_PROTO(wrap_object_array_insert) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    const value_t* v = (const value_t*)jsvalue_get_pointer(ctx, argv[2], "const value_t*");
    ret = (ret_t)object_array_insert(obj, index, v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_array_push) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const value_t* v = (const value_t*)jsvalue_get_pointer(ctx, argv[1], "const value_t*");
    ret = (ret_t)object_array_push(obj, v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_array_index_of) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    int32_t ret = (int32_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const value_t* v = (const value_t*)jsvalue_get_pointer(ctx, argv[1], "const value_t*");
    ret = (int32_t)object_array_index_of(obj, v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_array_last_index_of) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    int32_t ret = (int32_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    const value_t* v = (const value_t*)jsvalue_get_pointer(ctx, argv[1], "const value_t*");
    ret = (int32_t)object_array_last_index_of(obj, v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_array_remove) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)object_array_remove(obj, index);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_array_get_and_remove) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
    uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
    ret = (ret_t)object_array_get_and_remove(obj, index, v);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_array_t_get_prop_size) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  object_array_t* obj = (object_array_t*)jsvalue_get_pointer(ctx, argv[0], "object_array_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

ret_t object_array_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"object_array_create",
                                 wrap_object_array_create);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_clear_props",
                                 wrap_object_array_clear_props);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_insert",
                                 wrap_object_array_insert);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_push", wrap_object_array_push);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_index_of",
                                 wrap_object_array_index_of);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_last_index_of",
                                 wrap_object_array_last_index_of);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_remove",
                                 wrap_object_array_remove);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_get_and_remove",
                                 wrap_object_array_get_and_remove);
  jerryx_handler_register_global((const jerry_char_t*)"object_array_t_get_prop_size",
                                 wrap_object_array_t_get_prop_size);

  return RET_OK;
}

static HANDLER_PROTO(wrap_object_default_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 0) {
    object_t* ret = NULL;
    ret = (object_t*)object_default_create();

    jret = jsvalue_create_object(ctx, ret, "object_default_t*", &s_object_default_unref_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_default_create_ex) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 1) {
    object_t* ret = NULL;
    bool_t enable_path = (bool_t)jsvalue_get_boolean_value(ctx, argv[0]);
    ret = (object_t*)object_default_create_ex(enable_path);

    jret = jsvalue_create_object(ctx, ret, "object_default_t*", &s_object_default_unref_info);
  }
  return jret;
}

static HANDLER_PROTO(wrap_object_default_clear_props) {
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

ret_t object_default_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"object_default_create",
                                 wrap_object_default_create);
  jerryx_handler_register_global((const jerry_char_t*)"object_default_create_ex",
                                 wrap_object_default_create_ex);
  jerryx_handler_register_global((const jerry_char_t*)"object_default_clear_props",
                                 wrap_object_default_clear_props);

  return RET_OK;
}

static HANDLER_PROTO(wrap_timer_info_cast) {
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

static HANDLER_PROTO(wrap_timer_info_t_get_prop_ctx) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

static HANDLER_PROTO(wrap_timer_info_t_get_prop_extra_ctx) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->extra_ctx, "void*");
  return jret;
}

static HANDLER_PROTO(wrap_timer_info_t_get_prop_id) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_int(ctx, obj->id);
  return jret;
}

static HANDLER_PROTO(wrap_timer_info_t_get_prop_now) {
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
  jerryx_handler_register_global((const jerry_char_t*)"timer_info_t_get_prop_extra_ctx",
                                 wrap_timer_info_t_get_prop_extra_ctx);
  jerryx_handler_register_global((const jerry_char_t*)"timer_info_t_get_prop_id",
                                 wrap_timer_info_t_get_prop_id);
  jerryx_handler_register_global((const jerry_char_t*)"timer_info_t_get_prop_now",
                                 wrap_timer_info_t_get_prop_now);

  return RET_OK;
}

static HANDLER_PROTO(wrap_calibration_win_create) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
    ret = (widget_t*)calibration_win_create(parent, x, y, w, h);

    jret = jsvalue_create_pointer(ctx, ret, "calibration_win_t*");
  }
  return jret;
}

static HANDLER_PROTO(wrap_calibration_win_cast) {
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
  jerryx_handler_register_global((const jerry_char_t*)"calibration_win_create",
                                 wrap_calibration_win_create);
  jerryx_handler_register_global((const jerry_char_t*)"calibration_win_cast",
                                 wrap_calibration_win_cast);

  return RET_OK;
}

static HANDLER_PROTO(wrap_combo_box_create) {
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

static HANDLER_PROTO(wrap_combo_box_cast) {
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

static HANDLER_PROTO(wrap_combo_box_set_open_window) {
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

static HANDLER_PROTO(wrap_combo_box_reset_options) {
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

static HANDLER_PROTO(wrap_combo_box_count_options) {
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

static HANDLER_PROTO(wrap_combo_box_set_selected_index) {
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

static HANDLER_PROTO(wrap_combo_box_set_localize_options) {
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

static HANDLER_PROTO(wrap_combo_box_set_value) {
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

static HANDLER_PROTO(wrap_combo_box_set_item_height) {
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

static HANDLER_PROTO(wrap_combo_box_append_option) {
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

static HANDLER_PROTO(wrap_combo_box_remove_option) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)combo_box_remove_option(widget, value);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_combo_box_set_options) {
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

static HANDLER_PROTO(wrap_combo_box_get_value) {
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

static HANDLER_PROTO(wrap_combo_box_get_text) {
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

static HANDLER_PROTO(wrap_combo_box_t_get_prop_open_window) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_string(ctx, obj->open_window);
  return jret;
}

static HANDLER_PROTO(wrap_combo_box_t_get_prop_selected_index) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->selected_index);
  return jret;
}

static HANDLER_PROTO(wrap_combo_box_t_get_prop_value) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

static HANDLER_PROTO(wrap_combo_box_t_get_prop_localize_options) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_bool(ctx, obj->localize_options);
  return jret;
}

static HANDLER_PROTO(wrap_combo_box_t_get_prop_options) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_string(ctx, obj->options);
  return jret;
}

static HANDLER_PROTO(wrap_combo_box_t_get_prop_item_height) {
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
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_remove_option",
                                 wrap_combo_box_remove_option);
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

static HANDLER_PROTO(wrap_image_create) {
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

static HANDLER_PROTO(wrap_image_set_draw_type) {
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

static HANDLER_PROTO(wrap_image_cast) {
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

static HANDLER_PROTO(wrap_image_t_get_prop_draw_type) {
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

static HANDLER_PROTO(wrap_overlay_create) {
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

static HANDLER_PROTO(wrap_overlay_set_click_through) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t click_through = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)overlay_set_click_through(widget, click_through);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_overlay_set_always_on_top) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    bool_t always_on_top = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)overlay_set_always_on_top(widget, always_on_top);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_overlay_cast) {
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

static HANDLER_PROTO(wrap_overlay_t_get_prop_click_through) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  overlay_t* obj = (overlay_t*)jsvalue_get_pointer(ctx, argv[0], "overlay_t*");

  jret = jsvalue_create_bool(ctx, obj->click_through);
  return jret;
}

static HANDLER_PROTO(wrap_overlay_t_get_prop_always_on_top) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  overlay_t* obj = (overlay_t*)jsvalue_get_pointer(ctx, argv[0], "overlay_t*");

  jret = jsvalue_create_bool(ctx, obj->always_on_top);
  return jret;
}

ret_t overlay_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"overlay_create", wrap_overlay_create);
  jerryx_handler_register_global((const jerry_char_t*)"overlay_set_click_through",
                                 wrap_overlay_set_click_through);
  jerryx_handler_register_global((const jerry_char_t*)"overlay_set_always_on_top",
                                 wrap_overlay_set_always_on_top);
  jerryx_handler_register_global((const jerry_char_t*)"overlay_cast", wrap_overlay_cast);
  jerryx_handler_register_global((const jerry_char_t*)"overlay_t_get_prop_click_through",
                                 wrap_overlay_t_get_prop_click_through);
  jerryx_handler_register_global((const jerry_char_t*)"overlay_t_get_prop_always_on_top",
                                 wrap_overlay_t_get_prop_always_on_top);

  return RET_OK;
}

static HANDLER_PROTO(wrap_popup_create) {
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

static HANDLER_PROTO(wrap_popup_cast) {
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

static HANDLER_PROTO(wrap_popup_set_close_when_click) {
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

static HANDLER_PROTO(wrap_popup_set_close_when_click_outside) {
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

static HANDLER_PROTO(wrap_popup_set_close_when_timeout) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = (ret_t)0;
    widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t close_when_timeout = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
    ret = (ret_t)popup_set_close_when_timeout(widget, close_when_timeout);

    jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

static HANDLER_PROTO(wrap_popup_t_get_prop_close_when_click) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_bool(ctx, obj->close_when_click);
  return jret;
}

static HANDLER_PROTO(wrap_popup_t_get_prop_close_when_click_outside) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_bool(ctx, obj->close_when_click_outside);
  return jret;
}

static HANDLER_PROTO(wrap_popup_t_get_prop_close_when_timeout) {
  void* ctx = NULL;
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_int(ctx, obj->close_when_timeout);
  return jret;
}

ret_t popup_t_init(JSContext* ctx) {
  jerryx_handler_register_global((const jerry_char_t*)"popup_create", wrap_popup_create);
  jerryx_handler_register_global((const jerry_char_t*)"popup_cast", wrap_popup_cast);
  jerryx_handler_register_global((const jerry_char_t*)"popup_set_close_when_click",
                                 wrap_popup_set_close_when_click);
  jerryx_handler_register_global((const jerry_char_t*)"popup_set_close_when_click_outside",
                                 wrap_popup_set_close_when_click_outside);
  jerryx_handler_register_global((const jerry_char_t*)"popup_set_close_when_timeout",
                                 wrap_popup_set_close_when_timeout);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_click",
                                 wrap_popup_t_get_prop_close_when_click);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_click_outside",
                                 wrap_popup_t_get_prop_close_when_click_outside);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_timeout",
                                 wrap_popup_t_get_prop_close_when_timeout);

  return RET_OK;
}

static HANDLER_PROTO(wrap_spin_box_create) {
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

static HANDLER_PROTO(wrap_spin_box_cast) {
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

static HANDLER_PROTO(wrap_system_bar_create) {
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

static HANDLER_PROTO(wrap_system_bar_cast) {
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

static HANDLER_PROTO(wrap_combo_box_ex_create) {
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
  emitter_t_init(ctx);
  point_t_init(ctx);
  pointf_t_init(ctx);
  rectf_t_init(ctx);
  rect_t_init(ctx);
  bitmap_t_init(ctx);
  object_t_init(ctx);
  value_t_init(ctx);
  global_t_init(ctx);
  bidi_type_t_init(ctx);
  image_draw_type_t_init(ctx);
  canvas_offline_t_init(ctx);
  canvas_t_init(ctx);
  clip_board_data_type_t_init(ctx);
  clip_board_t_init(ctx);
  dialog_quit_code_t_init(ctx);
  event_type_t_init(ctx);
  event_t_init(ctx);
  font_manager_t_init(ctx);
  glyph_format_t_init(ctx);
  idle_t_init(ctx);
  image_manager_t_init(ctx);
  input_type_t_init(ctx);
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
  vgcanvas_line_cap_t_init(ctx);
  vgcanvas_line_join_t_init(ctx);
  widget_prop_t_init(ctx);
  widget_type_t_init(ctx);
  window_stage_t_init(ctx);
  window_closable_t_init(ctx);
  widget_state_t_init(ctx);
  widget_cursor_t_init(ctx);
  widget_t_init(ctx);
  app_conf_t_init(ctx);
  ext_widgets_t_init(ctx);
  indicator_default_paint_t_init(ctx);
  vpage_event_t_init(ctx);
  asset_type_t_init(ctx);
  asset_info_t_init(ctx);
  color_t_init(ctx);
  date_time_t_init(ctx);
  easing_type_t_init(ctx);
  idle_manager_t_init(ctx);
  MIME_TYPE_init(ctx);
  named_value_t_init(ctx);
  object_cmd_t_init(ctx);
  object_prop_t_init(ctx);
  rlog_t_init(ctx);
  time_now_t_init(ctx);
  timer_manager_t_init(ctx);
  ret_t_init(ctx);
  value_type_t_init(ctx);
  assets_manager_t_init(ctx);
  wheel_event_t_init(ctx);
  orientation_event_t_init(ctx);
  value_change_event_t_init(ctx);
  offset_change_event_t_init(ctx);
  pointer_event_t_init(ctx);
  key_event_t_init(ctx);
  paint_event_t_init(ctx);
  window_event_t_init(ctx);
  multi_gesture_event_t_init(ctx);
  theme_change_event_t_init(ctx);
  image_base_t_init(ctx);
  style_mutable_t_init(ctx);
  window_base_t_init(ctx);
  window_manager_t_init(ctx);
  canvas_widget_t_init(ctx);
  color_component_t_init(ctx);
  color_picker_t_init(ctx);
  draggable_t_init(ctx);
  file_browser_view_t_init(ctx);
  file_chooser_t_init(ctx);
  gauge_pointer_t_init(ctx);
  gauge_t_init(ctx);
  image_animation_t_init(ctx);
  image_value_t_init(ctx);
  candidates_t_init(ctx);
  lang_indicator_t_init(ctx);
  line_number_t_init(ctx);
  mledit_t_init(ctx);
  progress_circle_t_init(ctx);
  rich_text_view_t_init(ctx);
  rich_text_t_init(ctx);
  hscroll_label_t_init(ctx);
  list_item_t_init(ctx);
  list_view_h_t_init(ctx);
  list_view_t_init(ctx);
  scroll_bar_t_init(ctx);
  scroll_view_t_init(ctx);
  slide_menu_t_init(ctx);
  slide_indicator_t_init(ctx);
  slide_view_t_init(ctx);
  switch_t_init(ctx);
  text_selector_t_init(ctx);
  time_clock_t_init(ctx);
  vpage_t_init(ctx);
  prop_change_event_t_init(ctx);
  progress_event_t_init(ctx);
  done_event_t_init(ctx);
  error_event_t_init(ctx);
  cmd_exec_event_t_init(ctx);
  app_bar_t_init(ctx);
  button_group_t_init(ctx);
  button_t_init(ctx);
  check_button_t_init(ctx);
  clip_view_t_init(ctx);
  color_tile_t_init(ctx);
  column_t_init(ctx);
  combo_box_item_t_init(ctx);
  dialog_client_t_init(ctx);
  dialog_title_t_init(ctx);
  digit_clock_t_init(ctx);
  dragger_t_init(ctx);
  edit_t_init(ctx);
  grid_item_t_init(ctx);
  grid_t_init(ctx);
  group_box_t_init(ctx);
  label_t_init(ctx);
  pages_t_init(ctx);
  progress_bar_t_init(ctx);
  row_t_init(ctx);
  slider_t_init(ctx);
  tab_button_group_t_init(ctx);
  tab_button_t_init(ctx);
  tab_control_t_init(ctx);
  view_t_init(ctx);
  dialog_t_init(ctx);
  native_window_t_init(ctx);
  window_t_init(ctx);
  gif_image_t_init(ctx);
  keyboard_t_init(ctx);
  mutable_image_t_init(ctx);
  svg_image_t_init(ctx);
  idle_info_t_init(ctx);
  object_array_t_init(ctx);
  object_default_t_init(ctx);
  timer_info_t_init(ctx);
  calibration_win_t_init(ctx);
  combo_box_t_init(ctx);
  image_t_init(ctx);
  overlay_t_init(ctx);
  popup_t_init(ctx);
  spin_box_t_init(ctx);
  system_bar_t_init(ctx);
  combo_box_ex_t_init(ctx);

  return RET_OK;
}
