/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "base/utf8.h"
#include "base/mem.h"
#include "jerryscript.h"
#include "jerryscript-ext/handler.h"
#include "base/bitmap.h"
#include "base/button_group.h"
#include "base/button.h"
#include "base/canvas.h"
#include "base/check_button.h"
#include "base/combo_box_item.h"
#include "base/combo_box.h"
#include "base/dialog_client.h"
#include "base/dialog_title.h"
#include "base/dialog.h"
#include "base/dragger.h"
#include "base/edit.h"
#include "base/events.h"
#include "base/group_box.h"
#include "base/idle.h"
#include "base/image_manager.h"
#include "base/image.h"
#include "base/input_method.h"
#include "base/label.h"
#include "base/list_item.h"
#include "base/list_view_h.h"
#include "base/list_view.h"
#include "base/pages.h"
#include "base/popup.h"
#include "base/progress_bar.h"
#include "base/rect.h"
#include "base/resource_manager.h"
#include "base/scroll_bar.h"
#include "base/scroll_view.h"
#include "base/slide_view.h"
#include "base/slider.h"
#include "base/spin_box.h"
#include "base/tab_button_group.h"
#include "base/tab_button.h"
#include "base/tab_control.h"
#include "base/timer.h"
#include "base/tklocale.h"
#include "base/types_def.h"
#include "base/value.h"
#include "base/view.h"
#include "base/widget_consts.h"
#include "base/widget.h"
#include "base/window_manager.h"
#include "base/window.h"
#include "ext_widgets/ext_widgets.h"
#include "rich_text/rich_text.h"
#include "custom.c"

jerry_value_t get_BITMAP_FMT_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(BITMAP_FMT_NONE);
}

jerry_value_t get_BITMAP_FMT_RGBA(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(BITMAP_FMT_RGBA);
}

jerry_value_t get_BITMAP_FMT_BGRA(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(BITMAP_FMT_BGRA);
}

jerry_value_t get_BITMAP_FMT_RGB565(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(BITMAP_FMT_RGB565);
}

ret_t bitmap_format_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_NONE", get_BITMAP_FMT_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_RGBA", get_BITMAP_FMT_RGBA);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_BGRA", get_BITMAP_FMT_BGRA);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FMT_RGB565", get_BITMAP_FMT_RGB565);

  return RET_OK;
}

jerry_value_t get_BITMAP_FLAG_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(BITMAP_FLAG_NONE);
}

jerry_value_t get_BITMAP_FLAG_OPAQUE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(BITMAP_FLAG_OPAQUE);
}

jerry_value_t get_BITMAP_FLAG_IMMUTABLE(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_number(BITMAP_FLAG_IMMUTABLE);
}

jerry_value_t get_BITMAP_FLAG_TEXTURE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(BITMAP_FLAG_TEXTURE);
}

ret_t bitmap_flag_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_NONE", get_BITMAP_FLAG_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_OPAQUE", get_BITMAP_FLAG_OPAQUE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_IMMUTABLE",
                                 get_BITMAP_FLAG_IMMUTABLE);
  jerryx_handler_register_global((const jerry_char_t*)"BITMAP_FLAG_TEXTURE",
                                 get_BITMAP_FLAG_TEXTURE);

  return RET_OK;
}

jerry_value_t wrap_bitmap_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  bitmap_t* ret = NULL;
  ret = (bitmap_t*)bitmap_create();

  return jerry_create_pointer(ret, "bitmap_t*");
};

jerry_value_t wrap_bitmap_destroy(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  bitmap_t* bitmap = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");
  ret = (ret_t)bitmap_destroy(bitmap);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_bitmap_t_get_prop_w(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->w);
  ;
};

jerry_value_t wrap_bitmap_t_get_prop_h(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->h);
  ;
};

jerry_value_t wrap_bitmap_t_get_prop_flags(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->flags);
  ;
};

jerry_value_t wrap_bitmap_t_get_prop_format(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_number(obj->format);
  ;
};

jerry_value_t wrap_bitmap_t_get_prop_name(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  bitmap_t* obj = (bitmap_t*)jerry_get_pointer(args_p[0], "bitmap_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->name);
};

ret_t bitmap_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_create", wrap_bitmap_create);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_destroy", wrap_bitmap_destroy);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_w",
                                 wrap_bitmap_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_h",
                                 wrap_bitmap_t_get_prop_h);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_flags",
                                 wrap_bitmap_t_get_prop_flags);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_format",
                                 wrap_bitmap_t_get_prop_format);
  jerryx_handler_register_global((const jerry_char_t*)"bitmap_t_get_prop_name",
                                 wrap_bitmap_t_get_prop_name);

  return RET_OK;
}

jerry_value_t get_IMAGE_DRAW_DEFAULT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_DEFAULT);
}

jerry_value_t get_IMAGE_DRAW_CENTER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_CENTER);
}

jerry_value_t get_IMAGE_DRAW_ICON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_ICON);
}

jerry_value_t get_IMAGE_DRAW_SCALE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_SCALE);
}

jerry_value_t get_IMAGE_DRAW_SCALE_AUTO(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_SCALE_AUTO);
}

jerry_value_t get_IMAGE_DRAW_SCALE_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_SCALE_W);
}

jerry_value_t get_IMAGE_DRAW_SCALE_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_SCALE_H);
}

jerry_value_t get_IMAGE_DRAW_REPEAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_REPEAT);
}

jerry_value_t get_IMAGE_DRAW_REPEAT_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_REPEAT_X);
}

jerry_value_t get_IMAGE_DRAW_REPEAT_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_REPEAT_Y);
}

jerry_value_t get_IMAGE_DRAW_PATCH9(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_PATCH9);
}

jerry_value_t get_IMAGE_DRAW_PATCH3_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_PATCH3_X);
}

jerry_value_t get_IMAGE_DRAW_PATCH3_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_PATCH3_Y);
}

jerry_value_t get_IMAGE_DRAW_PATCH3_X_SCALE_Y(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

jerry_value_t get_IMAGE_DRAW_PATCH3_Y_SCALE_X(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  return jerry_create_number(IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

ret_t image_draw_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_DEFAULT", get_IMAGE_DRAW_DEFAULT);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_CENTER", get_IMAGE_DRAW_CENTER);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_ICON", get_IMAGE_DRAW_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE", get_IMAGE_DRAW_SCALE);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_AUTO",
                                 get_IMAGE_DRAW_SCALE_AUTO);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_W", get_IMAGE_DRAW_SCALE_W);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_SCALE_H", get_IMAGE_DRAW_SCALE_H);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT", get_IMAGE_DRAW_REPEAT);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT_X",
                                 get_IMAGE_DRAW_REPEAT_X);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_REPEAT_Y",
                                 get_IMAGE_DRAW_REPEAT_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH9", get_IMAGE_DRAW_PATCH9);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_X",
                                 get_IMAGE_DRAW_PATCH3_X);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_Y",
                                 get_IMAGE_DRAW_PATCH3_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_X_SCALE_Y",
                                 get_IMAGE_DRAW_PATCH3_X_SCALE_Y);
  jerryx_handler_register_global((const jerry_char_t*)"IMAGE_DRAW_PATCH3_Y_SCALE_X",
                                 get_IMAGE_DRAW_PATCH3_Y_SCALE_X);

  return RET_OK;
}

jerry_value_t wrap_button_group_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)button_group_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "button_group_t*");
};

jerry_value_t wrap_button_group_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)button_group_cast(widget);

  return jerry_create_pointer(ret, "button_group_t*");
};

ret_t button_group_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"button_group_create",
                                 wrap_button_group_create);
  jerryx_handler_register_global((const jerry_char_t*)"button_group_cast", wrap_button_group_cast);

  return RET_OK;
}

jerry_value_t wrap_button_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)button_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "button_t*");
};

jerry_value_t wrap_button_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)button_cast(widget);

  return jerry_create_pointer(ret, "button_t*");
};

jerry_value_t wrap_button_set_repeat(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t repeat = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)button_set_repeat(widget, repeat);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_button_t_get_prop_repeat(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  button_t* obj = (button_t*)jerry_get_pointer(args_p[0], "button_t*");

  return jerry_create_number(obj->repeat);
  ;
};

ret_t button_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"button_create", wrap_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"button_cast", wrap_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"button_set_repeat", wrap_button_set_repeat);
  jerryx_handler_register_global((const jerry_char_t*)"button_t_get_prop_repeat",
                                 wrap_button_t_get_prop_repeat);

  return RET_OK;
}

ret_t canvas_t_init(void) {
  return RET_OK;
}

jerry_value_t wrap_check_button_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)check_button_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "check_button_t*");
};

jerry_value_t wrap_check_button_create_radio(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);

  return jerry_create_pointer(ret, "check_button_t*");
};

jerry_value_t wrap_check_button_set_value(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t value = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)check_button_set_value(widget, value);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_check_button_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)check_button_cast(widget);

  return jerry_create_pointer(ret, "check_button_t*");
};

jerry_value_t wrap_check_button_t_get_prop_value(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  check_button_t* obj = (check_button_t*)jerry_get_pointer(args_p[0], "check_button_t*");

  return jerry_create_boolean(obj->value);
  ;
};

ret_t check_button_t_init(void) {
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

jerry_value_t wrap_combo_box_item_create(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "combo_box_item_t*");
};

jerry_value_t wrap_combo_box_item_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)combo_box_item_cast(widget);

  return jerry_create_pointer(ret, "combo_box_item_t*");
};

jerry_value_t wrap_combo_box_item_set_selected(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t selected = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)combo_box_item_set_selected(widget, selected);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_item_set_value(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)combo_box_item_set_value(widget, value);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_item_t_get_prop_value(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t args_p[],
                                                   const jerry_length_t args_cnt) {
  combo_box_item_t* obj = (combo_box_item_t*)jerry_get_pointer(args_p[0], "combo_box_item_t*");

  return jerry_create_number(obj->value);
  ;
};

jerry_value_t wrap_combo_box_item_t_get_prop_selected(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t args_p[],
                                                      const jerry_length_t args_cnt) {
  combo_box_item_t* obj = (combo_box_item_t*)jerry_get_pointer(args_p[0], "combo_box_item_t*");

  return jerry_create_boolean(obj->selected);
  ;
};

ret_t combo_box_item_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_create",
                                 wrap_combo_box_item_create);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_cast",
                                 wrap_combo_box_item_cast);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_set_selected",
                                 wrap_combo_box_item_set_selected);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_set_value",
                                 wrap_combo_box_item_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_t_get_prop_value",
                                 wrap_combo_box_item_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_item_t_get_prop_selected",
                                 wrap_combo_box_item_t_get_prop_selected);

  return RET_OK;
}

jerry_value_t wrap_combo_box_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)combo_box_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "combo_box_t*");
};

jerry_value_t wrap_combo_box_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)combo_box_cast(widget);

  return jerry_create_pointer(ret, "combo_box_t*");
};

jerry_value_t wrap_combo_box_set_open_window(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* open_window = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)combo_box_set_open_window(widget, open_window);
  TKMEM_FREE(open_window);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_reset_options(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)combo_box_reset_options(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_count_options(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)combo_box_count_options(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_set_selected_index(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t args_p[],
                                                const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t index = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)combo_box_set_selected_index(widget, index);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_append_option(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  char* text = (char*)jerry_get_utf8_string(args_p[2]);
  ret = (ret_t)combo_box_append_option(widget, value, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_set_options(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* options = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)combo_box_set_options(widget, options);
  TKMEM_FREE(options);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_get_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)combo_box_get_value(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_combo_box_get_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  char* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (char*)combo_box_get_text(widget);

  return jerry_create_string_from_utf8((const jerry_char_t*)ret);
};

jerry_value_t wrap_combo_box_t_get_prop_open_window(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  combo_box_t* obj = (combo_box_t*)jerry_get_pointer(args_p[0], "combo_box_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->open_window);
};

jerry_value_t wrap_combo_box_t_get_prop_selected_index(const jerry_value_t func_obj_val,
                                                       const jerry_value_t this_p,
                                                       const jerry_value_t args_p[],
                                                       const jerry_length_t args_cnt) {
  combo_box_t* obj = (combo_box_t*)jerry_get_pointer(args_p[0], "combo_box_t*");

  return jerry_create_number(obj->selected_index);
  ;
};

jerry_value_t wrap_combo_box_t_get_prop_value(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  combo_box_t* obj = (combo_box_t*)jerry_get_pointer(args_p[0], "combo_box_t*");

  return jerry_create_number(obj->value);
  ;
};

jerry_value_t wrap_combo_box_t_get_prop_options(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t args_p[],
                                                const jerry_length_t args_cnt) {
  combo_box_t* obj = (combo_box_t*)jerry_get_pointer(args_p[0], "combo_box_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->options);
};

ret_t combo_box_t_init(void) {
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
  jerryx_handler_register_global((const jerry_char_t*)"combo_box_t_get_prop_options",
                                 wrap_combo_box_t_get_prop_options);

  return RET_OK;
}

jerry_value_t wrap_dialog_client_create(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dialog_client_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dialog_client_t*");
};

jerry_value_t wrap_dialog_client_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_client_cast(widget);

  return jerry_create_pointer(ret, "dialog_client_t*");
};

ret_t dialog_client_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"dialog_client_create",
                                 wrap_dialog_client_create);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_client_cast",
                                 wrap_dialog_client_cast);

  return RET_OK;
}

jerry_value_t wrap_dialog_title_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dialog_title_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dialog_title_t*");
};

jerry_value_t wrap_dialog_title_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_title_cast(widget);

  return jerry_create_pointer(ret, "dialog_title_t*");
};

ret_t dialog_title_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"dialog_title_create",
                                 wrap_dialog_title_create);
  jerryx_handler_register_global((const jerry_char_t*)"dialog_title_cast", wrap_dialog_title_cast);

  return RET_OK;
}

jerry_value_t wrap_dialog_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dialog_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dialog_t*");
};

jerry_value_t wrap_dialog_create_simple(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dialog_t*");
};

jerry_value_t wrap_dialog_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_cast(widget);

  return jerry_create_pointer(ret, "dialog_t*");
};

jerry_value_t wrap_dialog_get_title(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_get_title(widget);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_dialog_get_client(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dialog_get_client(widget);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_dialog_open(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  char* name = (char*)jerry_get_utf8_string(args_p[0]);
  ret = (widget_t*)dialog_open(name);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "dialog_t*");
};

jerry_value_t wrap_dialog_set_title(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* title = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)dialog_set_title(widget, title);
  TKMEM_FREE(title);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_dialog_modal(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)dialog_modal(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_dialog_quit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t code = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)dialog_quit(widget, code);

  return jerry_create_number(ret);
  ;
};

ret_t dialog_t_init(void) {
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

  return RET_OK;
}

jerry_value_t wrap_dragger_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dragger_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "dragger_t*");
};

jerry_value_t wrap_dragger_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)dragger_cast(widget);

  return jerry_create_pointer(ret, "dragger_t*");
};

jerry_value_t wrap_dragger_set_range(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x_min = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y_min = (xy_t)jerry_get_number_value(args_p[2]);
  xy_t x_max = (xy_t)jerry_get_number_value(args_p[3]);
  xy_t y_max = (xy_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)dragger_set_range(widget, x_min, y_min, x_max, y_max);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_dragger_t_get_prop_x_min(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  dragger_t* obj = (dragger_t*)jerry_get_pointer(args_p[0], "dragger_t*");

  return jerry_create_number(obj->x_min);
  ;
};

jerry_value_t wrap_dragger_t_get_prop_y_min(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  dragger_t* obj = (dragger_t*)jerry_get_pointer(args_p[0], "dragger_t*");

  return jerry_create_number(obj->y_min);
  ;
};

jerry_value_t wrap_dragger_t_get_prop_x_max(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  dragger_t* obj = (dragger_t*)jerry_get_pointer(args_p[0], "dragger_t*");

  return jerry_create_number(obj->x_max);
  ;
};

jerry_value_t wrap_dragger_t_get_prop_y_max(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  dragger_t* obj = (dragger_t*)jerry_get_pointer(args_p[0], "dragger_t*");

  return jerry_create_number(obj->y_max);
  ;
};

ret_t dragger_t_init(void) {
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

jerry_value_t wrap_edit_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)edit_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "edit_t*");
};

jerry_value_t wrap_edit_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)edit_cast(widget);

  return jerry_create_pointer(ret, "edit_t*");
};

jerry_value_t wrap_edit_get_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)edit_get_int(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_get_double(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  double ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (double)edit_get_double(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_set_text_limit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t min = (uint32_t)jerry_get_number_value(args_p[1]);
  uint32_t max = (uint32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)edit_set_text_limit(widget, min, max);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_set_int_limit(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t min = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t max = (int32_t)jerry_get_number_value(args_p[2]);
  int32_t step = (int32_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)edit_set_int_limit(widget, min, max, step);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_set_float_limit(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  double min = (double)jerry_get_number_value(args_p[1]);
  double max = (double)jerry_get_number_value(args_p[2]);
  double step = (double)jerry_get_number_value(args_p[3]);
  ret = (ret_t)edit_set_float_limit(widget, min, max, step);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_set_readonly(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t readonly = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)edit_set_readonly(widget, readonly);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_set_auto_fix(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t auto_fix = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)edit_set_auto_fix(widget, auto_fix);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_set_input_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  input_type_t type = (input_type_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)edit_set_input_type(widget, type);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_set_input_tips(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* tips = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)edit_set_input_tips(widget, tips);
  TKMEM_FREE(tips);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_set_password_visible(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t password_visible = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)edit_set_password_visible(widget, password_visible);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_edit_t_get_prop_readonly(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_boolean(obj->readonly);
  ;
};

jerry_value_t wrap_edit_t_get_prop_password_visible(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_boolean(obj->password_visible);
  ;
};

jerry_value_t wrap_edit_t_get_prop_auto_fix(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_boolean(obj->auto_fix);
  ;
};

jerry_value_t wrap_edit_t_get_prop_top_margin(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_number(obj->top_margin);
  ;
};

jerry_value_t wrap_edit_t_get_prop_bottom_margin(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_number(obj->bottom_margin);
  ;
};

jerry_value_t wrap_edit_t_get_prop_left_margin(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_number(obj->left_margin);
  ;
};

jerry_value_t wrap_edit_t_get_prop_right_margin(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t args_p[],
                                                const jerry_length_t args_cnt) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_number(obj->right_margin);
  ;
};

jerry_value_t wrap_edit_t_get_prop_tips(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  edit_t* obj = (edit_t*)jerry_get_pointer(args_p[0], "edit_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->tips);
};

ret_t edit_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"edit_create", wrap_edit_create);
  jerryx_handler_register_global((const jerry_char_t*)"edit_cast", wrap_edit_cast);
  jerryx_handler_register_global((const jerry_char_t*)"edit_get_int", wrap_edit_get_int);
  jerryx_handler_register_global((const jerry_char_t*)"edit_get_double", wrap_edit_get_double);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_text_limit",
                                 wrap_edit_set_text_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_int_limit",
                                 wrap_edit_set_int_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_float_limit",
                                 wrap_edit_set_float_limit);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_readonly", wrap_edit_set_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_auto_fix", wrap_edit_set_auto_fix);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_input_type",
                                 wrap_edit_set_input_type);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_input_tips",
                                 wrap_edit_set_input_tips);
  jerryx_handler_register_global((const jerry_char_t*)"edit_set_password_visible",
                                 wrap_edit_set_password_visible);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_readonly",
                                 wrap_edit_t_get_prop_readonly);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_password_visible",
                                 wrap_edit_t_get_prop_password_visible);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_auto_fix",
                                 wrap_edit_t_get_prop_auto_fix);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_top_margin",
                                 wrap_edit_t_get_prop_top_margin);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_bottom_margin",
                                 wrap_edit_t_get_prop_bottom_margin);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_left_margin",
                                 wrap_edit_t_get_prop_left_margin);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_right_margin",
                                 wrap_edit_t_get_prop_right_margin);
  jerryx_handler_register_global((const jerry_char_t*)"edit_t_get_prop_tips",
                                 wrap_edit_t_get_prop_tips);

  return RET_OK;
}

jerry_value_t get_EVT_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_NONE);
}

jerry_value_t get_EVT_POINTER_DOWN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_POINTER_DOWN);
}

jerry_value_t get_EVT_POINTER_DOWN_ABORT(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_POINTER_DOWN_ABORT);
}

jerry_value_t get_EVT_POINTER_MOVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_POINTER_MOVE);
}

jerry_value_t get_EVT_POINTER_UP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_POINTER_UP);
}

jerry_value_t get_EVT_WHEEL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_WHEEL);
}

jerry_value_t get_EVT_CONTEXT_MENU(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_CONTEXT_MENU);
}

jerry_value_t get_EVT_POINTER_ENTER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_POINTER_ENTER);
}

jerry_value_t get_EVT_POINTER_LEAVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_POINTER_LEAVE);
}

jerry_value_t get_EVT_LONG_PRESS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_LONG_PRESS);
}

jerry_value_t get_EVT_CLICK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_CLICK);
}

jerry_value_t get_EVT_FOCUS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_FOCUS);
}

jerry_value_t get_EVT_BLUR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_BLUR);
}

jerry_value_t get_EVT_KEY_DOWN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_KEY_DOWN);
}

jerry_value_t get_EVT_KEY_REPEAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_KEY_REPEAT);
}

jerry_value_t get_EVT_KEY_UP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_KEY_UP);
}

jerry_value_t get_EVT_DESTROY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_DESTROY);
}

jerry_value_t get_EVT_WILL_MOVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_WILL_MOVE);
}

jerry_value_t get_EVT_MOVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_MOVE);
}

jerry_value_t get_EVT_WILL_RESIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_WILL_RESIZE);
}

jerry_value_t get_EVT_RESIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_RESIZE);
}

jerry_value_t get_EVT_WILL_MOVE_RESIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_WILL_MOVE_RESIZE);
}

jerry_value_t get_EVT_MOVE_RESIZE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_MOVE_RESIZE);
}

jerry_value_t get_EVT_PROP_WILL_CHANGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_PROP_WILL_CHANGE);
}

jerry_value_t get_EVT_PROP_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_PROP_CHANGED);
}

jerry_value_t get_EVT_VALUE_WILL_CHANGE(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_VALUE_WILL_CHANGE);
}

jerry_value_t get_EVT_VALUE_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_VALUE_CHANGED);
}

jerry_value_t get_EVT_VALUE_CHANGING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_VALUE_CHANGING);
}

jerry_value_t get_EVT_PAINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_PAINT);
}

jerry_value_t get_EVT_BEFORE_PAINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_BEFORE_PAINT);
}

jerry_value_t get_EVT_AFTER_PAINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_AFTER_PAINT);
}

jerry_value_t get_EVT_LOCALE_CHANGED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_LOCALE_CHANGED);
}

jerry_value_t get_EVT_ANIM_START(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_ANIM_START);
}

jerry_value_t get_EVT_ANIM_STOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_ANIM_STOP);
}

jerry_value_t get_EVT_ANIM_ONCE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_ANIM_ONCE);
}

jerry_value_t get_EVT_ANIM_END(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_ANIM_END);
}

jerry_value_t get_EVT_WINDOW_LOAD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_WINDOW_LOAD);
}

jerry_value_t get_EVT_WINDOW_OPEN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_WINDOW_OPEN);
}

jerry_value_t get_EVT_WINDOW_CLOSE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_WINDOW_CLOSE);
}

jerry_value_t get_EVT_IM_COMMIT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_IM_COMMIT);
}

jerry_value_t get_EVT_IM_SHOW_CANDIDATES(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_IM_SHOW_CANDIDATES);
}

jerry_value_t get_EVT_IM_ACTION(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_IM_ACTION);
}

jerry_value_t get_EVT_IM_ACTION_INFO(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_IM_ACTION_INFO);
}

jerry_value_t get_EVT_DRAG_START(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_DRAG_START);
}

jerry_value_t get_EVT_DRAG(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_DRAG);
}

jerry_value_t get_EVT_DRAG_END(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_DRAG_END);
}

jerry_value_t get_EVT_REQ_START(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_REQ_START);
}

jerry_value_t get_EVT_USER_START(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(EVT_USER_START);
}

ret_t event_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"EVT_NONE", get_EVT_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_DOWN", get_EVT_POINTER_DOWN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_POINTER_DOWN_ABORT",
                                 get_EVT_POINTER_DOWN_ABORT);
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
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WILL_MOVE_RESIZE",
                                 get_EVT_WILL_MOVE_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_MOVE_RESIZE", get_EVT_MOVE_RESIZE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROP_WILL_CHANGE",
                                 get_EVT_PROP_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PROP_CHANGED", get_EVT_PROP_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_WILL_CHANGE",
                                 get_EVT_VALUE_WILL_CHANGE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_CHANGED", get_EVT_VALUE_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_VALUE_CHANGING", get_EVT_VALUE_CHANGING);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_PAINT", get_EVT_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_BEFORE_PAINT", get_EVT_BEFORE_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_AFTER_PAINT", get_EVT_AFTER_PAINT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_LOCALE_CHANGED", get_EVT_LOCALE_CHANGED);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_START", get_EVT_ANIM_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_STOP", get_EVT_ANIM_STOP);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_ONCE", get_EVT_ANIM_ONCE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_ANIM_END", get_EVT_ANIM_END);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_LOAD", get_EVT_WINDOW_LOAD);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_OPEN", get_EVT_WINDOW_OPEN);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_WINDOW_CLOSE", get_EVT_WINDOW_CLOSE);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_COMMIT", get_EVT_IM_COMMIT);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_SHOW_CANDIDATES",
                                 get_EVT_IM_SHOW_CANDIDATES);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_ACTION", get_EVT_IM_ACTION);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_IM_ACTION_INFO", get_EVT_IM_ACTION_INFO);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG_START", get_EVT_DRAG_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG", get_EVT_DRAG);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_DRAG_END", get_EVT_DRAG_END);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_REQ_START", get_EVT_REQ_START);
  jerryx_handler_register_global((const jerry_char_t*)"EVT_USER_START", get_EVT_USER_START);

  return RET_OK;
}

jerry_value_t wrap_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (event_t*)event_cast(event);

  return jerry_create_pointer(ret, "event_t*");
};

jerry_value_t wrap_event_t_get_prop_type(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  event_t* obj = (event_t*)jerry_get_pointer(args_p[0], "event_t*");

  return jerry_create_number(obj->type);
  ;
};

jerry_value_t wrap_event_t_get_prop_time(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  event_t* obj = (event_t*)jerry_get_pointer(args_p[0], "event_t*");

  return jerry_create_number(obj->time);
  ;
};

jerry_value_t wrap_event_t_get_prop_target(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  event_t* obj = (event_t*)jerry_get_pointer(args_p[0], "event_t*");

  return jerry_create_pointer(obj->target, "void*");
};

ret_t event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"event_cast", wrap_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_type",
                                 wrap_event_t_get_prop_type);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_time",
                                 wrap_event_t_get_prop_time);
  jerryx_handler_register_global((const jerry_char_t*)"event_t_get_prop_target",
                                 wrap_event_t_get_prop_target);

  return RET_OK;
}

jerry_value_t wrap_wheel_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  wheel_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (wheel_event_t*)wheel_event_cast(event);

  return jerry_create_pointer(ret, "wheel_event_t*");
};

jerry_value_t wrap_wheel_event_t_get_prop_dx(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_number(obj->dx);
  ;
};

jerry_value_t wrap_wheel_event_t_get_prop_dy(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_number(obj->dy);
  ;
};

jerry_value_t wrap_wheel_event_t_get_prop_alt(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_boolean(obj->alt);
  ;
};

jerry_value_t wrap_wheel_event_t_get_prop_ctrl(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_boolean(obj->ctrl);
  ;
};

jerry_value_t wrap_wheel_event_t_get_prop_shift(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t args_p[],
                                                const jerry_length_t args_cnt) {
  wheel_event_t* obj = (wheel_event_t*)jerry_get_pointer(args_p[0], "wheel_event_t*");

  return jerry_create_boolean(obj->shift);
  ;
};

ret_t wheel_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_cast", wrap_wheel_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"wheel_event_t_get_prop_dx",
                                 wrap_wheel_event_t_get_prop_dx);
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

jerry_value_t wrap_prop_change_event_cast(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  prop_change_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (prop_change_event_t*)prop_change_event_cast(event);

  return jerry_create_pointer(ret, "prop_change_event_t*");
};

jerry_value_t wrap_prop_change_event_t_get_prop_name(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t args_p[],
                                                     const jerry_length_t args_cnt) {
  prop_change_event_t* obj =
      (prop_change_event_t*)jerry_get_pointer(args_p[0], "prop_change_event_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->name);
};

jerry_value_t wrap_prop_change_event_t_get_prop_value(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t args_p[],
                                                      const jerry_length_t args_cnt) {
  prop_change_event_t* obj =
      (prop_change_event_t*)jerry_get_pointer(args_p[0], "prop_change_event_t*");

  return jerry_create_pointer(obj->value, "value_t*");
};

ret_t prop_change_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_cast",
                                 wrap_prop_change_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_t_get_prop_name",
                                 wrap_prop_change_event_t_get_prop_name);
  jerryx_handler_register_global((const jerry_char_t*)"prop_change_event_t_get_prop_value",
                                 wrap_prop_change_event_t_get_prop_value);

  return RET_OK;
}

jerry_value_t wrap_pointer_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  pointer_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (pointer_event_t*)pointer_event_cast(event);

  return jerry_create_pointer(ret, "pointer_event_t*");
};

jerry_value_t wrap_pointer_event_t_get_prop_x(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_number(obj->x);
  ;
};

jerry_value_t wrap_pointer_event_t_get_prop_y(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_number(obj->y);
  ;
};

jerry_value_t wrap_pointer_event_t_get_prop_button(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t args_p[],
                                                   const jerry_length_t args_cnt) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_number(obj->button);
  ;
};

jerry_value_t wrap_pointer_event_t_get_prop_pressed(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_boolean(obj->pressed);
  ;
};

jerry_value_t wrap_pointer_event_t_get_prop_alt(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t args_p[],
                                                const jerry_length_t args_cnt) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_boolean(obj->alt);
  ;
};

jerry_value_t wrap_pointer_event_t_get_prop_ctrl(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_boolean(obj->ctrl);
  ;
};

jerry_value_t wrap_pointer_event_t_get_prop_shift(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t args_p[],
                                                  const jerry_length_t args_cnt) {
  pointer_event_t* obj = (pointer_event_t*)jerry_get_pointer(args_p[0], "pointer_event_t*");

  return jerry_create_boolean(obj->shift);
  ;
};

ret_t pointer_event_t_init(void) {
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
  jerryx_handler_register_global((const jerry_char_t*)"pointer_event_t_get_prop_shift",
                                 wrap_pointer_event_t_get_prop_shift);

  return RET_OK;
}

jerry_value_t wrap_key_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  key_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (key_event_t*)key_event_cast(event);

  return jerry_create_pointer(ret, "key_event_t*");
};

jerry_value_t wrap_key_event_t_get_prop_key(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_number(obj->key);
  ;
};

jerry_value_t wrap_key_event_t_get_prop_alt(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_boolean(obj->alt);
  ;
};

jerry_value_t wrap_key_event_t_get_prop_ctrl(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_boolean(obj->ctrl);
  ;
};

jerry_value_t wrap_key_event_t_get_prop_shift(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_boolean(obj->shift);
  ;
};

jerry_value_t wrap_key_event_t_get_prop_caplock(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t args_p[],
                                                const jerry_length_t args_cnt) {
  key_event_t* obj = (key_event_t*)jerry_get_pointer(args_p[0], "key_event_t*");

  return jerry_create_boolean(obj->caplock);
  ;
};

ret_t key_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"key_event_cast", wrap_key_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_key",
                                 wrap_key_event_t_get_prop_key);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_alt",
                                 wrap_key_event_t_get_prop_alt);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_ctrl",
                                 wrap_key_event_t_get_prop_ctrl);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_shift",
                                 wrap_key_event_t_get_prop_shift);
  jerryx_handler_register_global((const jerry_char_t*)"key_event_t_get_prop_caplock",
                                 wrap_key_event_t_get_prop_caplock);

  return RET_OK;
}

jerry_value_t wrap_paint_event_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  paint_event_t* ret = NULL;
  event_t* event = (event_t*)jerry_get_pointer(args_p[0], "event_t*");
  ret = (paint_event_t*)paint_event_cast(event);

  return jerry_create_pointer(ret, "paint_event_t*");
};

jerry_value_t wrap_paint_event_t_get_prop_c(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  paint_event_t* obj = (paint_event_t*)jerry_get_pointer(args_p[0], "paint_event_t*");

  return jerry_create_pointer(obj->c, "canvas_t*");
};

ret_t paint_event_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"paint_event_cast", wrap_paint_event_cast);
  jerryx_handler_register_global((const jerry_char_t*)"paint_event_t_get_prop_c",
                                 wrap_paint_event_t_get_prop_c);

  return RET_OK;
}

jerry_value_t wrap_group_box_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)group_box_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "group_box_t*");
};

jerry_value_t wrap_group_box_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)group_box_cast(widget);

  return jerry_create_pointer(ret, "group_box_t*");
};

ret_t group_box_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"group_box_create", wrap_group_box_create);
  jerryx_handler_register_global((const jerry_char_t*)"group_box_cast", wrap_group_box_cast);

  return RET_OK;
}

jerry_value_t wrap_idle_remove(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  uint32_t idle_id = (uint32_t)jerry_get_number_value(args_p[0]);
  ret = (ret_t)idle_remove(idle_id);

  return jerry_create_number(ret);
  ;
};

ret_t idle_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"idle_add", wrap_idle_add);
  jerryx_handler_register_global((const jerry_char_t*)"idle_remove", wrap_idle_remove);

  return RET_OK;
}

jerry_value_t wrap_image_manager(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  image_manager_t* ret = NULL;
  ret = (image_manager_t*)image_manager();

  return jerry_create_pointer(ret, "image_manager_t*");
};

jerry_value_t wrap_image_manager_load(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  image_manager_t* imm = (image_manager_t*)jerry_get_pointer(args_p[0], "image_manager_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  bitmap_t* image = (bitmap_t*)jerry_get_pointer(args_p[2], "bitmap_t*");
  ret = (ret_t)image_manager_load(imm, name, image);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
  ;
};

ret_t image_manager_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"image_manager", wrap_image_manager);
  jerryx_handler_register_global((const jerry_char_t*)"image_manager_load",
                                 wrap_image_manager_load);

  return RET_OK;
}

jerry_value_t wrap_image_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)image_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "image_t*");
};

jerry_value_t wrap_image_set_image_name(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)image_set_image_name(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_image_set_draw_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)image_set_draw_type(widget, draw_type);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_image_set_rotation(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t rotation = (float_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)image_set_rotation(widget, rotation);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_image_set_scale(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t scale_x = (float_t)jerry_get_number_value(args_p[1]);
  float_t scale_y = (float_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)image_set_scale(widget, scale_x, scale_y);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_image_set_anchor(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  float_t anchor_x = (float_t)jerry_get_number_value(args_p[1]);
  float_t anchor_y = (float_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)image_set_anchor(widget, anchor_x, anchor_y);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_image_set_selected(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t selected = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)image_set_selected(widget, selected);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_image_set_selectable(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t selectable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)image_set_selectable(widget, selectable);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_image_set_clickable(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t clickable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)image_set_clickable(widget, clickable);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_image_t_get_prop_anchor_x(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  image_t* obj = (image_t*)jerry_get_pointer(args_p[0], "image_t*");

  return jerry_create_number(obj->anchor_x);
  ;
};

jerry_value_t wrap_image_t_get_prop_anchor_y(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  image_t* obj = (image_t*)jerry_get_pointer(args_p[0], "image_t*");

  return jerry_create_number(obj->anchor_y);
  ;
};

jerry_value_t wrap_image_t_get_prop_scale_x(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  image_t* obj = (image_t*)jerry_get_pointer(args_p[0], "image_t*");

  return jerry_create_number(obj->scale_x);
  ;
};

ret_t image_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"image_create", wrap_image_create);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_image_name",
                                 wrap_image_set_image_name);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_draw_type",
                                 wrap_image_set_draw_type);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_rotation",
                                 wrap_image_set_rotation);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_scale", wrap_image_set_scale);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_anchor", wrap_image_set_anchor);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_selected",
                                 wrap_image_set_selected);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_selectable",
                                 wrap_image_set_selectable);
  jerryx_handler_register_global((const jerry_char_t*)"image_set_clickable",
                                 wrap_image_set_clickable);
  jerryx_handler_register_global((const jerry_char_t*)"image_t_get_prop_anchor_x",
                                 wrap_image_t_get_prop_anchor_x);
  jerryx_handler_register_global((const jerry_char_t*)"image_t_get_prop_anchor_y",
                                 wrap_image_t_get_prop_anchor_y);
  jerryx_handler_register_global((const jerry_char_t*)"image_t_get_prop_scale_x",
                                 wrap_image_t_get_prop_scale_x);

  return RET_OK;
}

jerry_value_t get_INPUT_TEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(INPUT_TEXT);
}

jerry_value_t get_INPUT_INT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(INPUT_INT);
}

jerry_value_t get_INPUT_UINT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(INPUT_UINT);
}

jerry_value_t get_INPUT_HEX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(INPUT_HEX);
}

jerry_value_t get_INPUT_FLOAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(INPUT_FLOAT);
}

jerry_value_t get_INPUT_UFLOAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(INPUT_UFLOAT);
}

jerry_value_t get_INPUT_EMAIL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(INPUT_EMAIL);
}

jerry_value_t get_INPUT_PASSWORD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(INPUT_PASSWORD);
}

jerry_value_t get_INPUT_PHONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
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

jerry_value_t wrap_label_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)label_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "label_t*");
};

ret_t label_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"label_create", wrap_label_create);

  return RET_OK;
}

jerry_value_t wrap_list_item_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)list_item_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "list_item_t*");
};

jerry_value_t wrap_list_item_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)list_item_cast(widget);

  return jerry_create_pointer(ret, "list_item_t*");
};

ret_t list_item_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"list_item_create", wrap_list_item_create);
  jerryx_handler_register_global((const jerry_char_t*)"list_item_cast", wrap_list_item_cast);

  return RET_OK;
}

jerry_value_t wrap_list_view_h_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)list_view_h_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "list_view_h_t*");
};

jerry_value_t wrap_list_view_h_set_item_width(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t item_width = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)list_view_h_set_item_width(widget, item_width);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_list_view_h_set_spacing(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t spacing = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)list_view_h_set_spacing(widget, spacing);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_list_view_h_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)list_view_h_cast(widget);

  return jerry_create_pointer(ret, "list_view_h_t*");
};

jerry_value_t wrap_list_view_h_t_get_prop_item_width(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t args_p[],
                                                     const jerry_length_t args_cnt) {
  list_view_h_t* obj = (list_view_h_t*)jerry_get_pointer(args_p[0], "list_view_h_t*");

  return jerry_create_number(obj->item_width);
  ;
};

jerry_value_t wrap_list_view_h_t_get_prop_spacing(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t args_p[],
                                                  const jerry_length_t args_cnt) {
  list_view_h_t* obj = (list_view_h_t*)jerry_get_pointer(args_p[0], "list_view_h_t*");

  return jerry_create_number(obj->spacing);
  ;
};

ret_t list_view_h_t_init(void) {
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

jerry_value_t wrap_list_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)list_view_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "list_view_t*");
};

jerry_value_t wrap_list_view_set_item_height(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t item_height = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)list_view_set_item_height(widget, item_height);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_list_view_set_default_item_height(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t args_p[],
                                                     const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t default_item_height = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_list_view_set_auto_hide_scroll_bar(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t args_p[],
                                                      const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t auto_hide_scroll_bar = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_list_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)list_view_cast(widget);

  return jerry_create_pointer(ret, "list_view_t*");
};

jerry_value_t wrap_list_view_t_get_prop_item_height(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  list_view_t* obj = (list_view_t*)jerry_get_pointer(args_p[0], "list_view_t*");

  return jerry_create_number(obj->item_height);
  ;
};

jerry_value_t wrap_list_view_t_get_prop_default_item_height(const jerry_value_t func_obj_val,
                                                            const jerry_value_t this_p,
                                                            const jerry_value_t args_p[],
                                                            const jerry_length_t args_cnt) {
  list_view_t* obj = (list_view_t*)jerry_get_pointer(args_p[0], "list_view_t*");

  return jerry_create_number(obj->default_item_height);
  ;
};

jerry_value_t wrap_list_view_t_get_prop_auto_hide_scroll_bar(const jerry_value_t func_obj_val,
                                                             const jerry_value_t this_p,
                                                             const jerry_value_t args_p[],
                                                             const jerry_length_t args_cnt) {
  list_view_t* obj = (list_view_t*)jerry_get_pointer(args_p[0], "list_view_t*");

  return jerry_create_boolean(obj->auto_hide_scroll_bar);
  ;
};

ret_t list_view_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"list_view_create", wrap_list_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_item_height",
                                 wrap_list_view_set_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_default_item_height",
                                 wrap_list_view_set_default_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_set_auto_hide_scroll_bar",
                                 wrap_list_view_set_auto_hide_scroll_bar);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_cast", wrap_list_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_item_height",
                                 wrap_list_view_t_get_prop_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_default_item_height",
                                 wrap_list_view_t_get_prop_default_item_height);
  jerryx_handler_register_global((const jerry_char_t*)"list_view_t_get_prop_auto_hide_scroll_bar",
                                 wrap_list_view_t_get_prop_auto_hide_scroll_bar);

  return RET_OK;
}

jerry_value_t wrap_pages_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)pages_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "pages_t*");
};

jerry_value_t wrap_pages_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)pages_cast(widget);

  return jerry_create_pointer(ret, "pages_t*");
};

jerry_value_t wrap_pages_set_active(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t index = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)pages_set_active(widget, index);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_pages_set_active_by_name(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)pages_set_active_by_name(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_pages_t_get_prop_active(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  pages_t* obj = (pages_t*)jerry_get_pointer(args_p[0], "pages_t*");

  return jerry_create_number(obj->active);
  ;
};

ret_t pages_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"pages_create", wrap_pages_create);
  jerryx_handler_register_global((const jerry_char_t*)"pages_cast", wrap_pages_cast);
  jerryx_handler_register_global((const jerry_char_t*)"pages_set_active", wrap_pages_set_active);
  jerryx_handler_register_global((const jerry_char_t*)"pages_set_active_by_name",
                                 wrap_pages_set_active_by_name);
  jerryx_handler_register_global((const jerry_char_t*)"pages_t_get_prop_active",
                                 wrap_pages_t_get_prop_active);

  return RET_OK;
}

jerry_value_t wrap_popup_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)popup_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "popup_t*");
};

jerry_value_t wrap_popup_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)popup_cast(widget);

  return jerry_create_pointer(ret, "popup_t*");
};

jerry_value_t wrap_popup_t_get_prop_theme(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  popup_t* obj = (popup_t*)jerry_get_pointer(args_p[0], "popup_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->theme);
};

jerry_value_t wrap_popup_t_get_prop_anim_hint(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  popup_t* obj = (popup_t*)jerry_get_pointer(args_p[0], "popup_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->anim_hint);
};

jerry_value_t wrap_popup_t_get_prop_close_when_click(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t args_p[],
                                                     const jerry_length_t args_cnt) {
  popup_t* obj = (popup_t*)jerry_get_pointer(args_p[0], "popup_t*");

  return jerry_create_boolean(obj->close_when_click);
  ;
};

jerry_value_t wrap_popup_t_get_prop_close_when_click_outside(const jerry_value_t func_obj_val,
                                                             const jerry_value_t this_p,
                                                             const jerry_value_t args_p[],
                                                             const jerry_length_t args_cnt) {
  popup_t* obj = (popup_t*)jerry_get_pointer(args_p[0], "popup_t*");

  return jerry_create_boolean(obj->close_when_click_outside);
  ;
};

ret_t popup_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"popup_create", wrap_popup_create);
  jerryx_handler_register_global((const jerry_char_t*)"popup_cast", wrap_popup_cast);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_theme",
                                 wrap_popup_t_get_prop_theme);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_anim_hint",
                                 wrap_popup_t_get_prop_anim_hint);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_click",
                                 wrap_popup_t_get_prop_close_when_click);
  jerryx_handler_register_global((const jerry_char_t*)"popup_t_get_prop_close_when_click_outside",
                                 wrap_popup_t_get_prop_close_when_click_outside);

  return RET_OK;
}

jerry_value_t wrap_progress_bar_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)progress_bar_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "progress_bar_t*");
};

jerry_value_t wrap_progress_bar_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)progress_bar_cast(widget);

  return jerry_create_pointer(ret, "progress_bar_t*");
};

jerry_value_t wrap_progress_bar_set_value(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint8_t value = (uint8_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)progress_bar_set_value(widget, value);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_progress_bar_set_vertical(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t vertical = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)progress_bar_set_vertical(widget, vertical);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_progress_bar_set_show_text(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t show_text = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)progress_bar_set_show_text(widget, show_text);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_progress_bar_t_get_prop_value(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  progress_bar_t* obj = (progress_bar_t*)jerry_get_pointer(args_p[0], "progress_bar_t*");

  return jerry_create_number(obj->value);
  ;
};

jerry_value_t wrap_progress_bar_t_get_prop_vertical(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  progress_bar_t* obj = (progress_bar_t*)jerry_get_pointer(args_p[0], "progress_bar_t*");

  return jerry_create_boolean(obj->vertical);
  ;
};

jerry_value_t wrap_progress_bar_t_get_prop_show_text(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t args_p[],
                                                     const jerry_length_t args_cnt) {
  progress_bar_t* obj = (progress_bar_t*)jerry_get_pointer(args_p[0], "progress_bar_t*");

  return jerry_create_boolean(obj->show_text);
  ;
};

ret_t progress_bar_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_create",
                                 wrap_progress_bar_create);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_cast", wrap_progress_bar_cast);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_value",
                                 wrap_progress_bar_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_vertical",
                                 wrap_progress_bar_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_set_show_text",
                                 wrap_progress_bar_set_show_text);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_value",
                                 wrap_progress_bar_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_vertical",
                                 wrap_progress_bar_t_get_prop_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"progress_bar_t_get_prop_show_text",
                                 wrap_progress_bar_t_get_prop_show_text);

  return RET_OK;
}

ret_t point_t_init(void) {
  return RET_OK;
}

ret_t rect_t_init(void) {
  return RET_OK;
}

jerry_value_t get_RESOURCE_TYPE_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RESOURCE_TYPE_NONE);
}

jerry_value_t get_RESOURCE_TYPE_FONT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RESOURCE_TYPE_FONT);
}

jerry_value_t get_RESOURCE_TYPE_IMAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RESOURCE_TYPE_IMAGE);
}

jerry_value_t get_RESOURCE_TYPE_THEME(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RESOURCE_TYPE_THEME);
}

jerry_value_t get_RESOURCE_TYPE_UI(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RESOURCE_TYPE_UI);
}

jerry_value_t get_RESOURCE_TYPE_XML(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RESOURCE_TYPE_XML);
}

jerry_value_t get_RESOURCE_TYPE_STRINGS(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_number(RESOURCE_TYPE_STRINGS);
}

jerry_value_t get_RESOURCE_TYPE_DATA(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RESOURCE_TYPE_DATA);
}

ret_t resource_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"RESOURCE_TYPE_NONE", get_RESOURCE_TYPE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"RESOURCE_TYPE_FONT", get_RESOURCE_TYPE_FONT);
  jerryx_handler_register_global((const jerry_char_t*)"RESOURCE_TYPE_IMAGE",
                                 get_RESOURCE_TYPE_IMAGE);
  jerryx_handler_register_global((const jerry_char_t*)"RESOURCE_TYPE_THEME",
                                 get_RESOURCE_TYPE_THEME);
  jerryx_handler_register_global((const jerry_char_t*)"RESOURCE_TYPE_UI", get_RESOURCE_TYPE_UI);
  jerryx_handler_register_global((const jerry_char_t*)"RESOURCE_TYPE_XML", get_RESOURCE_TYPE_XML);
  jerryx_handler_register_global((const jerry_char_t*)"RESOURCE_TYPE_STRINGS",
                                 get_RESOURCE_TYPE_STRINGS);
  jerryx_handler_register_global((const jerry_char_t*)"RESOURCE_TYPE_DATA", get_RESOURCE_TYPE_DATA);

  return RET_OK;
}

jerry_value_t wrap_resource_info_t_get_prop_type(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  resource_info_t* obj = (resource_info_t*)jerry_get_pointer(args_p[0], "resource_info_t*");

  return jerry_create_number(obj->type);
  ;
};

jerry_value_t wrap_resource_info_t_get_prop_size(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  resource_info_t* obj = (resource_info_t*)jerry_get_pointer(args_p[0], "resource_info_t*");

  return jerry_create_number(obj->size);
  ;
};

jerry_value_t wrap_resource_info_t_get_prop_name(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  resource_info_t* obj = (resource_info_t*)jerry_get_pointer(args_p[0], "resource_info_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->name);
};

ret_t resource_info_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"resource_info_t_get_prop_type",
                                 wrap_resource_info_t_get_prop_type);
  jerryx_handler_register_global((const jerry_char_t*)"resource_info_t_get_prop_size",
                                 wrap_resource_info_t_get_prop_size);
  jerryx_handler_register_global((const jerry_char_t*)"resource_info_t_get_prop_name",
                                 wrap_resource_info_t_get_prop_name);

  return RET_OK;
}

jerry_value_t wrap_resource_manager(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  resource_manager_t* ret = NULL;
  ret = (resource_manager_t*)resource_manager();

  return jerry_create_pointer(ret, "resource_manager_t*");
};

jerry_value_t wrap_resource_manager_ref(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  resource_info_t* ret = NULL;
  resource_manager_t* rm = (resource_manager_t*)jerry_get_pointer(args_p[0], "resource_manager_t*");
  resource_type_t type = (resource_type_t)jerry_get_number_value(args_p[1]);
  char* name = (char*)jerry_get_utf8_string(args_p[2]);
  ret = (resource_info_t*)resource_manager_ref(rm, type, name);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "resource_info_t*");
};

jerry_value_t wrap_resource_manager_unref(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  ret_t ret = 0;
  resource_manager_t* rm = (resource_manager_t*)jerry_get_pointer(args_p[0], "resource_manager_t*");
  resource_info_t* info = (resource_info_t*)jerry_get_pointer(args_p[1], "resource_info_t*");
  ret = (ret_t)resource_manager_unref(rm, info);

  return jerry_create_number(ret);
  ;
};

ret_t resource_manager_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"resource_manager", wrap_resource_manager);
  jerryx_handler_register_global((const jerry_char_t*)"resource_manager_ref",
                                 wrap_resource_manager_ref);
  jerryx_handler_register_global((const jerry_char_t*)"resource_manager_unref",
                                 wrap_resource_manager_unref);

  return RET_OK;
}

jerry_value_t wrap_scroll_bar_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "scroll_bar_t*");
};

jerry_value_t wrap_scroll_bar_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)scroll_bar_cast(widget);

  return jerry_create_pointer(ret, "scroll_bar_t*");
};

jerry_value_t wrap_scroll_bar_create_mobile(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);

  return jerry_create_pointer(ret, "scroll_bar_t*");
};

jerry_value_t wrap_scroll_bar_create_desktop(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);

  return jerry_create_pointer(ret, "scroll_bar_t*");
};

jerry_value_t wrap_scroll_bar_set_params(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t virtual_size = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t row = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_bar_scroll_to(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t duration = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_bar_set_value(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_bar_set_value(widget, value);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_bar_add_delta(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t delta = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_bar_add_delta(widget, delta);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_bar_scroll_delta(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t delta = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_bar_scroll_delta(widget, delta);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_bar_set_value_only(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_bar_set_value_only(widget, value);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_bar_is_mobile(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (bool_t)scroll_bar_is_mobile(widget);

  return jerry_create_boolean(ret);
  ;
};

jerry_value_t wrap_scroll_bar_t_get_prop_virtual_size(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t args_p[],
                                                      const jerry_length_t args_cnt) {
  scroll_bar_t* obj = (scroll_bar_t*)jerry_get_pointer(args_p[0], "scroll_bar_t*");

  return jerry_create_number(obj->virtual_size);
  ;
};

jerry_value_t wrap_scroll_bar_t_get_prop_value(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  scroll_bar_t* obj = (scroll_bar_t*)jerry_get_pointer(args_p[0], "scroll_bar_t*");

  return jerry_create_number(obj->value);
  ;
};

jerry_value_t wrap_scroll_bar_t_get_prop_row(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  scroll_bar_t* obj = (scroll_bar_t*)jerry_get_pointer(args_p[0], "scroll_bar_t*");

  return jerry_create_number(obj->row);
  ;
};

jerry_value_t wrap_scroll_bar_t_get_prop_animatable(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  scroll_bar_t* obj = (scroll_bar_t*)jerry_get_pointer(args_p[0], "scroll_bar_t*");

  return jerry_create_boolean(obj->animatable);
  ;
};

ret_t scroll_bar_t_init(void) {
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

jerry_value_t wrap_scroll_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)scroll_view_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "scroll_view_t*");
};

jerry_value_t wrap_scroll_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)scroll_view_cast(widget);

  return jerry_create_pointer(ret, "scroll_view_t*");
};

jerry_value_t wrap_scroll_view_set_virtual_w(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  wh_t w = (wh_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_view_set_virtual_w(widget, w);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_view_set_virtual_h(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  wh_t h = (wh_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)scroll_view_set_virtual_h(widget, h);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_view_set_xslidable(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t xslidable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_view_set_yslidable(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t yslidable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_view_set_offset(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t xoffset = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t yoffset = (int32_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_view_scroll_to(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t xoffset_end = (int32_t)jerry_get_number_value(args_p[1]);
  int32_t yoffset_end = (int32_t)jerry_get_number_value(args_p[2]);
  int32_t duration = (int32_t)jerry_get_number_value(args_p[3]);
  ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_scroll_view_t_get_prop_virtual_w(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_number(obj->virtual_w);
  ;
};

jerry_value_t wrap_scroll_view_t_get_prop_virtual_h(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_number(obj->virtual_h);
  ;
};

jerry_value_t wrap_scroll_view_t_get_prop_xoffset(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t args_p[],
                                                  const jerry_length_t args_cnt) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_number(obj->xoffset);
  ;
};

jerry_value_t wrap_scroll_view_t_get_prop_yoffset(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t args_p[],
                                                  const jerry_length_t args_cnt) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_number(obj->yoffset);
  ;
};

jerry_value_t wrap_scroll_view_t_get_prop_xslidable(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_boolean(obj->xslidable);
  ;
};

jerry_value_t wrap_scroll_view_t_get_prop_yslidable(const jerry_value_t func_obj_val,
                                                    const jerry_value_t this_p,
                                                    const jerry_value_t args_p[],
                                                    const jerry_length_t args_cnt) {
  scroll_view_t* obj = (scroll_view_t*)jerry_get_pointer(args_p[0], "scroll_view_t*");

  return jerry_create_boolean(obj->yslidable);
  ;
};

ret_t scroll_view_t_init(void) {
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
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_scroll_to",
                                 wrap_scroll_view_scroll_to);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_virtual_w",
                                 wrap_scroll_view_t_get_prop_virtual_w);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_virtual_h",
                                 wrap_scroll_view_t_get_prop_virtual_h);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_xoffset",
                                 wrap_scroll_view_t_get_prop_xoffset);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_yoffset",
                                 wrap_scroll_view_t_get_prop_yoffset);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_xslidable",
                                 wrap_scroll_view_t_get_prop_xslidable);
  jerryx_handler_register_global((const jerry_char_t*)"scroll_view_t_get_prop_yslidable",
                                 wrap_scroll_view_t_get_prop_yslidable);

  return RET_OK;
}

jerry_value_t wrap_slide_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)slide_view_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "slide_view_t*");
};

jerry_value_t wrap_slide_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)slide_view_cast(widget);

  return jerry_create_pointer(ret, "slide_view_t*");
};

jerry_value_t wrap_slide_view_set_auto_play(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t auto_play = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slide_view_set_auto_play(widget, auto_play);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_slide_view_set_active(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t index = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slide_view_set_active(widget, index);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_slide_view_set_vertical(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t vertical = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)slide_view_set_vertical(widget, vertical);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_slide_view_t_get_prop_vertical(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t args_p[],
                                                  const jerry_length_t args_cnt) {
  slide_view_t* obj = (slide_view_t*)jerry_get_pointer(args_p[0], "slide_view_t*");

  return jerry_create_boolean(obj->vertical);
  ;
};

jerry_value_t wrap_slide_view_t_get_prop_auto_play(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t args_p[],
                                                   const jerry_length_t args_cnt) {
  slide_view_t* obj = (slide_view_t*)jerry_get_pointer(args_p[0], "slide_view_t*");

  return jerry_create_number(obj->auto_play);
  ;
};

ret_t slide_view_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_create", wrap_slide_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_cast", wrap_slide_view_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_auto_play",
                                 wrap_slide_view_set_auto_play);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_active",
                                 wrap_slide_view_set_active);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_set_vertical",
                                 wrap_slide_view_set_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_t_get_prop_vertical",
                                 wrap_slide_view_t_get_prop_vertical);
  jerryx_handler_register_global((const jerry_char_t*)"slide_view_t_get_prop_auto_play",
                                 wrap_slide_view_t_get_prop_auto_play);

  return RET_OK;
}

jerry_value_t wrap_slider_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)slider_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "slider_t*");
};

jerry_value_t wrap_slider_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)slider_cast(widget);

  return jerry_create_pointer(ret, "slider_t*");
};

jerry_value_t wrap_slider_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t value = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slider_set_value(widget, value);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_slider_set_min(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t min = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slider_set_min(widget, min);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_slider_set_max(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t max = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slider_set_max(widget, max);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_slider_set_step(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint16_t step = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)slider_set_step(widget, step);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_slider_set_vertical(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t vertical = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)slider_set_vertical(widget, vertical);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_slider_t_get_prop_value(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_number(obj->value);
  ;
};

jerry_value_t wrap_slider_t_get_prop_min(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_number(obj->min);
  ;
};

jerry_value_t wrap_slider_t_get_prop_max(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_number(obj->max);
  ;
};

jerry_value_t wrap_slider_t_get_prop_step(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_number(obj->step);
  ;
};

jerry_value_t wrap_slider_t_get_prop_vertical(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  slider_t* obj = (slider_t*)jerry_get_pointer(args_p[0], "slider_t*");

  return jerry_create_boolean(obj->vertical);
  ;
};

ret_t slider_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"slider_create", wrap_slider_create);
  jerryx_handler_register_global((const jerry_char_t*)"slider_cast", wrap_slider_cast);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_value", wrap_slider_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_min", wrap_slider_set_min);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_max", wrap_slider_set_max);
  jerryx_handler_register_global((const jerry_char_t*)"slider_set_step", wrap_slider_set_step);
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

  return RET_OK;
}

jerry_value_t wrap_spin_box_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)spin_box_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "spin_box_t*");
};

jerry_value_t wrap_spin_box_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)spin_box_cast(widget);

  return jerry_create_pointer(ret, "spin_box_t*");
};

ret_t spin_box_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"spin_box_create", wrap_spin_box_create);
  jerryx_handler_register_global((const jerry_char_t*)"spin_box_cast", wrap_spin_box_cast);

  return RET_OK;
}

jerry_value_t wrap_tab_button_group_create(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "tab_button_group_t*");
};

jerry_value_t wrap_tab_button_group_cast(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)tab_button_group_cast(widget);

  return jerry_create_pointer(ret, "tab_button_group_t*");
};

jerry_value_t wrap_tab_button_group_t_get_prop_compact(const jerry_value_t func_obj_val,
                                                       const jerry_value_t this_p,
                                                       const jerry_value_t args_p[],
                                                       const jerry_length_t args_cnt) {
  tab_button_group_t* obj =
      (tab_button_group_t*)jerry_get_pointer(args_p[0], "tab_button_group_t*");

  return jerry_create_boolean(obj->compact);
  ;
};

ret_t tab_button_group_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_create",
                                 wrap_tab_button_group_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_cast",
                                 wrap_tab_button_group_cast);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_group_t_get_prop_compact",
                                 wrap_tab_button_group_t_get_prop_compact);

  return RET_OK;
}

jerry_value_t wrap_tab_button_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)tab_button_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "tab_button_t*");
};

jerry_value_t wrap_tab_button_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)tab_button_cast(widget);

  return jerry_create_pointer(ret, "tab_button_t*");
};

jerry_value_t wrap_tab_button_set_value(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  uint32_t value = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)tab_button_set_value(widget, value);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_tab_button_set_icon(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)tab_button_set_icon(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_tab_button_set_active_icon(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)tab_button_set_active_icon(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_tab_button_t_get_prop_value(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  tab_button_t* obj = (tab_button_t*)jerry_get_pointer(args_p[0], "tab_button_t*");

  return jerry_create_boolean(obj->value);
  ;
};

jerry_value_t wrap_tab_button_t_get_prop_active_icon(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t args_p[],
                                                     const jerry_length_t args_cnt) {
  tab_button_t* obj = (tab_button_t*)jerry_get_pointer(args_p[0], "tab_button_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->active_icon);
};

jerry_value_t wrap_tab_button_t_get_prop_icon(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  tab_button_t* obj = (tab_button_t*)jerry_get_pointer(args_p[0], "tab_button_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->icon);
};

ret_t tab_button_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_create", wrap_tab_button_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_cast", wrap_tab_button_cast);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_value",
                                 wrap_tab_button_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_icon",
                                 wrap_tab_button_set_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_set_active_icon",
                                 wrap_tab_button_set_active_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_value",
                                 wrap_tab_button_t_get_prop_value);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_active_icon",
                                 wrap_tab_button_t_get_prop_active_icon);
  jerryx_handler_register_global((const jerry_char_t*)"tab_button_t_get_prop_icon",
                                 wrap_tab_button_t_get_prop_icon);

  return RET_OK;
}

jerry_value_t wrap_tab_control_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)tab_control_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "tab_control_t*");
};

jerry_value_t wrap_tab_control_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)tab_control_cast(widget);

  return jerry_create_pointer(ret, "tab_control_t*");
};

ret_t tab_control_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"tab_control_create",
                                 wrap_tab_control_create);
  jerryx_handler_register_global((const jerry_char_t*)"tab_control_cast", wrap_tab_control_cast);

  return RET_OK;
}

jerry_value_t wrap_timer_remove(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jerry_get_number_value(args_p[0]);
  ret = (ret_t)timer_remove(timer_id);

  return jerry_create_number(ret);
  ;
};

ret_t timer_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"timer_add", wrap_timer_add);
  jerryx_handler_register_global((const jerry_char_t*)"timer_remove", wrap_timer_remove);

  return RET_OK;
}

jerry_value_t wrap_tklocale(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  tklocale_t* ret = NULL;
  ret = (tklocale_t*)tklocale();

  return jerry_create_pointer(ret, "tklocale_t*");
};

jerry_value_t wrap_tklocale_tr(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  char* ret = NULL;
  tklocale_t* tklocale = (tklocale_t*)jerry_get_pointer(args_p[0], "tklocale_t*");
  char* text = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (char*)tklocale_tr(tklocale, text);
  TKMEM_FREE(text);

  return jerry_create_string_from_utf8((const jerry_char_t*)ret);
};

jerry_value_t wrap_tklocale_change(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  tklocale_t* tklocale = (tklocale_t*)jerry_get_pointer(args_p[0], "tklocale_t*");
  char* language = (char*)jerry_get_utf8_string(args_p[1]);
  char* country = (char*)jerry_get_utf8_string(args_p[2]);
  ret = (ret_t)tklocale_change(tklocale, language, country);
  TKMEM_FREE(language);
  TKMEM_FREE(country);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_tklocale_off(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  tklocale_t* tklocale = (tklocale_t*)jerry_get_pointer(args_p[0], "tklocale_t*");
  uint32_t id = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)tklocale_off(tklocale, id);

  return jerry_create_number(ret);
  ;
};

ret_t tklocale_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"tklocale", wrap_tklocale);
  jerryx_handler_register_global((const jerry_char_t*)"tklocale_tr", wrap_tklocale_tr);
  jerryx_handler_register_global((const jerry_char_t*)"tklocale_change", wrap_tklocale_change);
  jerryx_handler_register_global((const jerry_char_t*)"tklocale_on", wrap_tklocale_on);
  jerryx_handler_register_global((const jerry_char_t*)"tklocale_off", wrap_tklocale_off);

  return RET_OK;
}

jerry_value_t get_RET_OK(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                         const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_OK);
}

jerry_value_t get_RET_OOM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                          const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_OOM);
}

jerry_value_t get_RET_FAIL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_FAIL);
}

jerry_value_t get_RET_NOT_IMPL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_NOT_IMPL);
}

jerry_value_t get_RET_QUIT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_QUIT);
}

jerry_value_t get_RET_FOUND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                            const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_FOUND);
}

jerry_value_t get_RET_REMOVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_REMOVE);
}

jerry_value_t get_RET_REPEAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_REPEAT);
}

jerry_value_t get_RET_NOT_FOUND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_NOT_FOUND);
}

jerry_value_t get_RET_DONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_DONE);
}

jerry_value_t get_RET_STOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                           const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_STOP);
}

jerry_value_t get_RET_CONTINUE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(RET_CONTINUE);
}

jerry_value_t get_RET_BAD_PARAMS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
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

jerry_value_t get_ALIGN_V_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(ALIGN_V_NONE);
}

jerry_value_t get_ALIGN_V_MIDDLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(ALIGN_V_MIDDLE);
}

jerry_value_t get_ALIGN_V_TOP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(ALIGN_V_TOP);
}

jerry_value_t get_ALIGN_V_BOTTOM(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(ALIGN_V_BOTTOM);
}

ret_t align_v_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_NONE", get_ALIGN_V_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_MIDDLE", get_ALIGN_V_MIDDLE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_TOP", get_ALIGN_V_TOP);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_V_BOTTOM", get_ALIGN_V_BOTTOM);

  return RET_OK;
}

jerry_value_t get_ALIGN_H_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(ALIGN_H_NONE);
}

jerry_value_t get_ALIGN_H_CENTER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(ALIGN_H_CENTER);
}

jerry_value_t get_ALIGN_H_LEFT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(ALIGN_H_LEFT);
}

jerry_value_t get_ALIGN_H_RIGHT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(ALIGN_H_RIGHT);
}

ret_t align_h_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_NONE", get_ALIGN_H_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_CENTER", get_ALIGN_H_CENTER);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_LEFT", get_ALIGN_H_LEFT);
  jerryx_handler_register_global((const jerry_char_t*)"ALIGN_H_RIGHT", get_ALIGN_H_RIGHT);

  return RET_OK;
}

jerry_value_t get_VALUE_TYPE_INVALID(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_INVALID);
}

jerry_value_t get_VALUE_TYPE_BOOL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_BOOL);
}

jerry_value_t get_VALUE_TYPE_INT8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_INT8);
}

jerry_value_t get_VALUE_TYPE_UINT8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_UINT8);
}

jerry_value_t get_VALUE_TYPE_INT16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_INT16);
}

jerry_value_t get_VALUE_TYPE_UINT16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_UINT16);
}

jerry_value_t get_VALUE_TYPE_INT32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_INT32);
}

jerry_value_t get_VALUE_TYPE_UINT32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_UINT32);
}

jerry_value_t get_VALUE_TYPE_INT64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_INT64);
}

jerry_value_t get_VALUE_TYPE_UINT64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_UINT64);
}

jerry_value_t get_VALUE_TYPE_POINTER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_POINTER);
}

jerry_value_t get_VALUE_TYPE_FLOAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_FLOAT);
}

jerry_value_t get_VALUE_TYPE_DOUBLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_DOUBLE);
}

jerry_value_t get_VALUE_TYPE_STRING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(VALUE_TYPE_STRING);
}

jerry_value_t get_VALUE_TYPE_WSTRING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
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
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_DOUBLE", get_VALUE_TYPE_DOUBLE);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_STRING", get_VALUE_TYPE_STRING);
  jerryx_handler_register_global((const jerry_char_t*)"VALUE_TYPE_WSTRING", get_VALUE_TYPE_WSTRING);

  return RET_OK;
}

jerry_value_t wrap_value_set_bool(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  bool_t value = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (value_t*)value_set_bool(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_bool(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  bool_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (bool_t)value_bool(v);

  return jerry_create_boolean(ret);
  ;
};

jerry_value_t wrap_value_set_int8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int8_t value = (int8_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int8(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_int8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int8_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int8_t)value_int8(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_uint8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  uint8_t value = (uint8_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_uint8(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_uint8(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int8_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int8_t)value_uint8(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_int16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int16_t value = (int16_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int16(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_int16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int16_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int16_t)value_int16(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_uint16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  uint16_t value = (uint16_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_uint16(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_uint16(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  uint16_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (uint16_t)value_uint16(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_int32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int32(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_int32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int32_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int32_t)value_int32(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_uint32(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  uint32_t value = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_uint32(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_set_int64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int64_t value = (int64_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int64(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_int64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int64_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int64_t)value_int64(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_uint64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  uint64_t value = (uint64_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_uint64(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_uint64(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  uint64_t ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (uint64_t)value_uint64(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_float(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  float value = (float)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_float(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_float(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  float ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (float)value_float(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_double(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  double value = (double)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_double(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_double(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  double ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (double)value_double(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  char* value = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (value_t*)value_set_str(v, value);
  TKMEM_FREE(value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  const char* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (const char*)value_str(v);

  return jerry_create_string_from_utf8((const jerry_char_t*)ret);
};

jerry_value_t wrap_value_is_null(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  bool_t ret = 0;
  value_t* value = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (bool_t)value_is_null(value);

  return jerry_create_boolean(ret);
  ;
};

jerry_value_t wrap_value_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int ret = 0;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  ret = (int)value_int(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_value_set_int(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (value_t*)value_set_int(v, value);

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* ret = NULL;
  ret = (value_t*)value_create();

  return jerry_create_pointer(ret, "value_t*");
};

jerry_value_t wrap_value_destroy(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  value_t* v = (value_t*)jerry_get_pointer(args_p[0], "value_t*");
  (void)value_destroy(v);
  return 0;
};

jerry_value_t wrap_value_t_get_prop_type(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  value_t* obj = (value_t*)jerry_get_pointer(args_p[0], "value_t*");

  return jerry_create_number(obj->type);
  ;
};

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
  jerryx_handler_register_global((const jerry_char_t*)"value_set_double", wrap_value_set_double);
  jerryx_handler_register_global((const jerry_char_t*)"value_double", wrap_value_double);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_str", wrap_value_set_str);
  jerryx_handler_register_global((const jerry_char_t*)"value_str", wrap_value_str);
  jerryx_handler_register_global((const jerry_char_t*)"value_is_null", wrap_value_is_null);
  jerryx_handler_register_global((const jerry_char_t*)"value_int", wrap_value_int);
  jerryx_handler_register_global((const jerry_char_t*)"value_set_int", wrap_value_set_int);
  jerryx_handler_register_global((const jerry_char_t*)"value_create", wrap_value_create);
  jerryx_handler_register_global((const jerry_char_t*)"value_destroy", wrap_value_destroy);
  jerryx_handler_register_global((const jerry_char_t*)"value_t_get_prop_type",
                                 wrap_value_t_get_prop_type);

  return RET_OK;
}

jerry_value_t wrap_view_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)view_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "view_t*");
};

jerry_value_t wrap_view_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                             const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)view_cast(widget);

  return jerry_create_pointer(ret, "view_t*");
};

ret_t view_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"view_create", wrap_view_create);
  jerryx_handler_register_global((const jerry_char_t*)"view_cast", wrap_view_cast);

  return RET_OK;
}

jerry_value_t get_WIDGET_PROP_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_X);
}

jerry_value_t get_WIDGET_PROP_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_Y);
}

jerry_value_t get_WIDGET_PROP_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_W);
}

jerry_value_t get_WIDGET_PROP_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_H);
}

jerry_value_t get_WIDGET_PROP_MIN_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_MIN_W);
}

jerry_value_t get_WIDGET_PROP_MAX_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_MAX_W);
}

jerry_value_t get_WIDGET_PROP_LAYOUT_W(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_LAYOUT_W);
}

jerry_value_t get_WIDGET_PROP_LAYOUT_H(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_LAYOUT_H);
}

jerry_value_t get_WIDGET_PROP_VIRTUAL_W(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_VIRTUAL_W);
}

jerry_value_t get_WIDGET_PROP_VIRTUAL_H(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_VIRTUAL_H);
}

jerry_value_t get_WIDGET_PROP_NAME(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_NAME);
}

jerry_value_t get_WIDGET_PROP_VALUE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_VALUE);
}

jerry_value_t get_WIDGET_PROP_TEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_TEXT);
}

jerry_value_t get_WIDGET_PROP_TR_TEXT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_TR_TEXT);
}

jerry_value_t get_WIDGET_PROP_STYLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_STYLE);
}

jerry_value_t get_WIDGET_PROP_ENABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ENABLE);
}

jerry_value_t get_WIDGET_PROP_MARGIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_MARGIN);
}

jerry_value_t get_WIDGET_PROP_SPACING(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SPACING);
}

jerry_value_t get_WIDGET_PROP_LEFT_MARGIN(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_LEFT_MARGIN);
}

jerry_value_t get_WIDGET_PROP_RIGHT_MARGIN(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_RIGHT_MARGIN);
}

jerry_value_t get_WIDGET_PROP_TOP_MARGIN(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_TOP_MARGIN);
}

jerry_value_t get_WIDGET_PROP_BOTTOM_MARGIN(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_BOTTOM_MARGIN);
}

jerry_value_t get_WIDGET_PROP_STEP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_STEP);
}

jerry_value_t get_WIDGET_PROP_VISIBLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_VISIBLE);
}

jerry_value_t get_WIDGET_PROP_ANIM_HINT(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ANIM_HINT);
}

jerry_value_t get_WIDGET_PROP_OPEN_ANIM_HINT(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_OPEN_ANIM_HINT);
}

jerry_value_t get_WIDGET_PROP_CLOSE_ANIM_HINT(const jerry_value_t func_obj_val,
                                              const jerry_value_t this_p,
                                              const jerry_value_t args_p[],
                                              const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_CLOSE_ANIM_HINT);
}

jerry_value_t get_WIDGET_PROP_MIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_MIN);
}

jerry_value_t get_WIDGET_PROP_TIPS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_TIPS);
}

jerry_value_t get_WIDGET_PROP_INPUT_TYPE(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_INPUT_TYPE);
}

jerry_value_t get_WIDGET_PROP_READONLY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_READONLY);
}

jerry_value_t get_WIDGET_PROP_PASSWORD_VISIBLE(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_PASSWORD_VISIBLE);
}

jerry_value_t get_WIDGET_PROP_ACTIVE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ACTIVE);
}

jerry_value_t get_WIDGET_PROP_VERTICAL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_VERTICAL);
}

jerry_value_t get_WIDGET_PROP_SHOW_TEXT(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SHOW_TEXT);
}

jerry_value_t get_WIDGET_PROP_XOFFSET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_XOFFSET);
}

jerry_value_t get_WIDGET_PROP_YOFFSET(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_YOFFSET);
}

jerry_value_t get_WIDGET_PROP_AUTO_PLAY(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_AUTO_PLAY);
}

jerry_value_t get_WIDGET_PROP_AUTO_FIX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_AUTO_FIX);
}

jerry_value_t get_WIDGET_PROP_X_MIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_X_MIN);
}

jerry_value_t get_WIDGET_PROP_X_MAX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_X_MAX);
}

jerry_value_t get_WIDGET_PROP_Y_MIN(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_Y_MIN);
}

jerry_value_t get_WIDGET_PROP_Y_MAX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_Y_MAX);
}

jerry_value_t get_WIDGET_PROP_MAX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_MAX);
}

jerry_value_t get_WIDGET_PROP_ROW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ROW);
}

jerry_value_t get_WIDGET_PROP_THEME(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_THEME);
}

jerry_value_t get_WIDGET_PROP_SCRIPT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SCRIPT);
}

jerry_value_t get_WIDGET_PROP_ITEM_WIDTH(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ITEM_WIDTH);
}

jerry_value_t get_WIDGET_PROP_ITEM_HEIGHT(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ITEM_HEIGHT);
}

jerry_value_t get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(const jerry_value_t func_obj_val,
                                                  const jerry_value_t this_p,
                                                  const jerry_value_t args_p[],
                                                  const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

jerry_value_t get_WIDGET_PROP_XSLIDABLE(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_XSLIDABLE);
}

jerry_value_t get_WIDGET_PROP_YSLIDABLE(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_YSLIDABLE);
}

jerry_value_t get_WIDGET_PROP_REPEAT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_REPEAT);
}

jerry_value_t get_WIDGET_PROP_ANIMATABLE(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ANIMATABLE);
}

jerry_value_t get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(const jerry_value_t func_obj_val,
                                                   const jerry_value_t this_p,
                                                   const jerry_value_t args_p[],
                                                   const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

jerry_value_t get_WIDGET_PROP_IMAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_IMAGE);
}

jerry_value_t get_WIDGET_PROP_DRAW_TYPE(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_DRAW_TYPE);
}

jerry_value_t get_WIDGET_PROP_SELECTABLE(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SELECTABLE);
}

jerry_value_t get_WIDGET_PROP_CLICKABLE(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_CLICKABLE);
}

jerry_value_t get_WIDGET_PROP_SCALE_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SCALE_X);
}

jerry_value_t get_WIDGET_PROP_SCALE_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SCALE_Y);
}

jerry_value_t get_WIDGET_PROP_ANCHOR_X(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ANCHOR_X);
}

jerry_value_t get_WIDGET_PROP_ANCHOR_Y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ANCHOR_Y);
}

jerry_value_t get_WIDGET_PROP_ROTATION(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ROTATION);
}

jerry_value_t get_WIDGET_PROP_SUB_THEME(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SUB_THEME);
}

jerry_value_t get_WIDGET_PROP_COMPACT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_COMPACT);
}

jerry_value_t get_WIDGET_PROP_ICON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ICON);
}

jerry_value_t get_WIDGET_PROP_OPTIONS(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_OPTIONS);
}

jerry_value_t get_WIDGET_PROP_SELECTED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SELECTED);
}

jerry_value_t get_WIDGET_PROP_ACTIVE_ICON(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_ACTIVE_ICON);
}

jerry_value_t get_WIDGET_PROP_OPEN_WINDOW(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_OPEN_WINDOW);
}

jerry_value_t get_WIDGET_PROP_SELECTED_INDEX(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_SELECTED_INDEX);
}

jerry_value_t get_WIDGET_PROP_CLOSE_WHEN_CLICK(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_CLOSE_WHEN_CLICK);
}

jerry_value_t get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(const jerry_value_t func_obj_val,
                                                       const jerry_value_t this_p,
                                                       const jerry_value_t args_p[],
                                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

jerry_value_t get_WIDGET_PROP_LINE_GAP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_PROP_LINE_GAP);
}

ret_t widget_prop_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X", get_WIDGET_PROP_X);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y", get_WIDGET_PROP_Y);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_W", get_WIDGET_PROP_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_H", get_WIDGET_PROP_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MIN_W", get_WIDGET_PROP_MIN_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MAX_W", get_WIDGET_PROP_MAX_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LAYOUT_W",
                                 get_WIDGET_PROP_LAYOUT_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_LAYOUT_H",
                                 get_WIDGET_PROP_LAYOUT_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VIRTUAL_W",
                                 get_WIDGET_PROP_VIRTUAL_W);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VIRTUAL_H",
                                 get_WIDGET_PROP_VIRTUAL_H);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_NAME", get_WIDGET_PROP_NAME);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_VALUE", get_WIDGET_PROP_VALUE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TEXT", get_WIDGET_PROP_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_TR_TEXT",
                                 get_WIDGET_PROP_TR_TEXT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_STYLE", get_WIDGET_PROP_STYLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ENABLE", get_WIDGET_PROP_ENABLE);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIM_HINT",
                                 get_WIDGET_PROP_ANIM_HINT);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_PLAY",
                                 get_WIDGET_PROP_AUTO_PLAY);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_FIX",
                                 get_WIDGET_PROP_AUTO_FIX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X_MIN", get_WIDGET_PROP_X_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_X_MAX", get_WIDGET_PROP_X_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y_MIN", get_WIDGET_PROP_Y_MIN);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_Y_MAX", get_WIDGET_PROP_Y_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_MAX", get_WIDGET_PROP_MAX);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ROW", get_WIDGET_PROP_ROW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_THEME", get_WIDGET_PROP_THEME);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SCRIPT", get_WIDGET_PROP_SCRIPT);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ANIMATABLE",
                                 get_WIDGET_PROP_ANIMATABLE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_AUTO_HIDE_SCROLL_BAR",
                                 get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_IMAGE", get_WIDGET_PROP_IMAGE);
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SUB_THEME",
                                 get_WIDGET_PROP_SUB_THEME);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_COMPACT",
                                 get_WIDGET_PROP_COMPACT);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ICON", get_WIDGET_PROP_ICON);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_OPTIONS",
                                 get_WIDGET_PROP_OPTIONS);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_SELECTED",
                                 get_WIDGET_PROP_SELECTED);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_PROP_ACTIVE_ICON",
                                 get_WIDGET_PROP_ACTIVE_ICON);
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

  return RET_OK;
}

jerry_value_t get_WIDGET_TYPE_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_NONE);
}

jerry_value_t get_WIDGET_TYPE_WINDOW_MANAGER(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_WINDOW_MANAGER);
}

jerry_value_t get_WIDGET_TYPE_NORMAL_WINDOW(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_NORMAL_WINDOW);
}

jerry_value_t get_WIDGET_TYPE_TOOL_BAR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_TOOL_BAR);
}

jerry_value_t get_WIDGET_TYPE_DIALOG(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_DIALOG);
}

jerry_value_t get_WIDGET_TYPE_POPUP(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_POPUP);
}

jerry_value_t get_WIDGET_TYPE_SPRITE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_SPRITE);
}

jerry_value_t get_WIDGET_TYPE_KEYBOARD(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_KEYBOARD);
}

jerry_value_t get_WIDGET_TYPE_DND(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_DND);
}

jerry_value_t get_WIDGET_TYPE_LABEL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_LABEL);
}

jerry_value_t get_WIDGET_TYPE_BUTTON(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_BUTTON);
}

jerry_value_t get_WIDGET_TYPE_IMAGE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_IMAGE);
}

jerry_value_t get_WIDGET_TYPE_EDIT(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_EDIT);
}

jerry_value_t get_WIDGET_TYPE_PROGRESS_BAR(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_PROGRESS_BAR);
}

jerry_value_t get_WIDGET_TYPE_GROUP_BOX(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_GROUP_BOX);
}

jerry_value_t get_WIDGET_TYPE_CHECK_BUTTON(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_CHECK_BUTTON);
}

jerry_value_t get_WIDGET_TYPE_RADIO_BUTTON(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_RADIO_BUTTON);
}

jerry_value_t get_WIDGET_TYPE_DIALOG_TITLE(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_DIALOG_TITLE);
}

jerry_value_t get_WIDGET_TYPE_DIALOG_CLIENT(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_DIALOG_CLIENT);
}

jerry_value_t get_WIDGET_TYPE_SLIDER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_SLIDER);
}

jerry_value_t get_WIDGET_TYPE_VIEW(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_VIEW);
}

jerry_value_t get_WIDGET_TYPE_COMBO_BOX(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_COMBO_BOX);
}

jerry_value_t get_WIDGET_TYPE_COMBO_BOX_ITEM(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_COMBO_BOX_ITEM);
}

jerry_value_t get_WIDGET_TYPE_SLIDE_VIEW(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_SLIDE_VIEW);
}

jerry_value_t get_WIDGET_TYPE_PAGES(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_PAGES);
}

jerry_value_t get_WIDGET_TYPE_TAB_BUTTON(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_TAB_BUTTON);
}

jerry_value_t get_WIDGET_TYPE_TAB_CONTROL(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_TAB_CONTROL);
}

jerry_value_t get_WIDGET_TYPE_TAB_BUTTON_GROUP(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_TAB_BUTTON_GROUP);
}

jerry_value_t get_WIDGET_TYPE_BUTTON_GROUP(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_BUTTON_GROUP);
}

jerry_value_t get_WIDGET_TYPE_CANDIDATES(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_CANDIDATES);
}

jerry_value_t get_WIDGET_TYPE_SPIN_BOX(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_SPIN_BOX);
}

jerry_value_t get_WIDGET_TYPE_DRAGGER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_DRAGGER);
}

jerry_value_t get_WIDGET_TYPE_SCROLL_BAR(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_SCROLL_BAR);
}

jerry_value_t get_WIDGET_TYPE_SCROLL_BAR_DESKTOP(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

jerry_value_t get_WIDGET_TYPE_SCROLL_BAR_MOBILE(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t args_p[],
                                                const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

jerry_value_t get_WIDGET_TYPE_SCROLL_VIEW(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_SCROLL_VIEW);
}

jerry_value_t get_WIDGET_TYPE_LIST_VIEW(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_LIST_VIEW);
}

jerry_value_t get_WIDGET_TYPE_LIST_VIEW_H(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_LIST_VIEW_H);
}

jerry_value_t get_WIDGET_TYPE_LIST_ITEM(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_string_from_utf8((const jerry_char_t*)WIDGET_TYPE_LIST_ITEM);
}

ret_t widget_type_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_NONE", get_WIDGET_TYPE_NONE);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_WINDOW_MANAGER",
                                 get_WIDGET_TYPE_WINDOW_MANAGER);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_NORMAL_WINDOW",
                                 get_WIDGET_TYPE_NORMAL_WINDOW);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_TOOL_BAR",
                                 get_WIDGET_TYPE_TOOL_BAR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_DIALOG", get_WIDGET_TYPE_DIALOG);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_TYPE_POPUP", get_WIDGET_TYPE_POPUP);
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

  return RET_OK;
}

jerry_value_t get_WIDGET_STATE_NONE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_NONE);
}

jerry_value_t get_WIDGET_STATE_NORMAL(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_NORMAL);
}

jerry_value_t get_WIDGET_STATE_PRESSED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_PRESSED);
}

jerry_value_t get_WIDGET_STATE_OVER(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_OVER);
}

jerry_value_t get_WIDGET_STATE_DISABLE(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_DISABLE);
}

jerry_value_t get_WIDGET_STATE_FOCUSED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_FOCUSED);
}

jerry_value_t get_WIDGET_STATE_CHECKED(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_CHECKED);
}

jerry_value_t get_WIDGET_STATE_UNCHECKED(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_UNCHECKED);
}

jerry_value_t get_WIDGET_STATE_EMPTY(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_EMPTY);
}

jerry_value_t get_WIDGET_STATE_ERROR(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_ERROR);
}

jerry_value_t get_WIDGET_STATE_SELECTED(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  return jerry_create_number(WIDGET_STATE_SELECTED);
}

ret_t widget_state_t_init(void) {
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
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_ERROR", get_WIDGET_STATE_ERROR);
  jerryx_handler_register_global((const jerry_char_t*)"WIDGET_STATE_SELECTED",
                                 get_WIDGET_STATE_SELECTED);

  return RET_OK;
}

jerry_value_t wrap_widget_count_children(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)widget_count_children(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_get_child(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t index = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (widget_t*)widget_get_child(widget, index);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_widget_index_of(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)widget_index_of(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_move(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)widget_move(widget, x, y);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_resize(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  wh_t w = (wh_t)jerry_get_number_value(args_p[1]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[2]);
  ret = (ret_t)widget_resize(widget, w, h);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_move_resize(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (ret_t)widget_move_resize(widget, x, y, w, h);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_set_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t value = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)widget_set_value(widget, value);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_use_style(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* style = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_use_style(widget, style);
  TKMEM_FREE(style);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_set_text_utf8(const jerry_value_t func_obj_val,
                                        const jerry_value_t this_p, const jerry_value_t args_p[],
                                        const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* text = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_text_utf8(widget, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_set_tr_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* text = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_tr_text(widget, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_get_value(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (int32_t)widget_get_value(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_get_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  wchar_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (wchar_t*)widget_get_text(widget);

  return jerry_create_string_from_wstring(ret);
};

jerry_value_t wrap_widget_set_name(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_name(widget, name);
  TKMEM_FREE(name);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_set_enable(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t enable = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)widget_set_enable(widget, enable);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_set_focused(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t focused = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)widget_set_focused(widget, focused);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_lookup(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  bool_t recursive = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (widget_t*)widget_lookup(widget, name, recursive);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_widget_lookup_by_type(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* type = (char*)jerry_get_utf8_string(args_p[1]);
  bool_t recursive = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
  TKMEM_FREE(type);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_widget_set_visible(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t visible = (bool_t)jerry_get_boolean_value(args_p[1]);
  bool_t recursive = (bool_t)jerry_get_boolean_value(args_p[2]);
  ret = (ret_t)widget_set_visible(widget, visible, recursive);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_off(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                              const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t id = (int32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)widget_off(widget, id);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_invalidate_force(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)widget_invalidate_force(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_set_prop_str(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* name = (char*)jerry_get_utf8_string(args_p[1]);
  char* v = (char*)jerry_get_utf8_string(args_p[2]);
  ret = (ret_t)widget_set_prop_str(widget, name, v);
  TKMEM_FREE(name);
  TKMEM_FREE(v);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_get_window(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                     const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)widget_get_window(widget);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_widget_get_type(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                   const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  char* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (char*)widget_get_type(widget);

  return jerry_create_string_from_utf8((const jerry_char_t*)ret);
};

jerry_value_t wrap_widget_clone(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[1], "widget_t*");
  ret = (widget_t*)widget_clone(widget, parent);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_widget_equal(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  widget_t* other = (widget_t*)jerry_get_pointer(args_p[1], "widget_t*");
  ret = (bool_t)widget_equal(widget, other);

  return jerry_create_boolean(ret);
  ;
};

jerry_value_t wrap_widget_set_self_layout_params(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* x = (char*)jerry_get_utf8_string(args_p[1]);
  char* y = (char*)jerry_get_utf8_string(args_p[2]);
  char* w = (char*)jerry_get_utf8_string(args_p[3]);
  char* h = (char*)jerry_get_utf8_string(args_p[4]);
  ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
  TKMEM_FREE(x);
  TKMEM_FREE(y);
  TKMEM_FREE(w);
  TKMEM_FREE(h);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_set_children_layout_params(const jerry_value_t func_obj_val,
                                                     const jerry_value_t this_p,
                                                     const jerry_value_t args_p[],
                                                     const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* params = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)widget_set_children_layout_params(widget, params);
  TKMEM_FREE(params);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_layout(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)widget_layout(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)widget_cast(widget);

  return jerry_create_pointer(ret, "widget_t*");
};

jerry_value_t wrap_widget_destroy(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)widget_destroy(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_widget_t_get_prop_x(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_number(obj->x);
  ;
};

jerry_value_t wrap_widget_t_get_prop_y(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_number(obj->y);
  ;
};

jerry_value_t wrap_widget_t_get_prop_w(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_number(obj->w);
  ;
};

jerry_value_t wrap_widget_t_get_prop_h(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_number(obj->h);
  ;
};

jerry_value_t wrap_widget_t_get_prop_style_name(const jerry_value_t func_obj_val,
                                                const jerry_value_t this_p,
                                                const jerry_value_t args_p[],
                                                const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->style_name);
};

jerry_value_t wrap_widget_t_get_prop_enable(const jerry_value_t func_obj_val,
                                            const jerry_value_t this_p,
                                            const jerry_value_t args_p[],
                                            const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_boolean(obj->enable);
  ;
};

jerry_value_t wrap_widget_t_set_prop_visible(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t visible = (bool_t)jerry_get_boolean_value(args_p[1]);
  obj->visible = visible;
  return jerry_create_number(RET_OK);
};

jerry_value_t wrap_widget_t_get_prop_visible(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_boolean(obj->visible);
  ;
};

jerry_value_t wrap_widget_t_get_prop_name(const jerry_value_t func_obj_val,
                                          const jerry_value_t this_p, const jerry_value_t args_p[],
                                          const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->name);
};

jerry_value_t wrap_widget_t_get_prop_tr_text(const jerry_value_t func_obj_val,
                                             const jerry_value_t this_p,
                                             const jerry_value_t args_p[],
                                             const jerry_length_t args_cnt) {
  widget_t* obj = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->tr_text);
};

ret_t widget_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"widget_count_children",
                                 wrap_widget_count_children);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_child", wrap_widget_get_child);
  jerryx_handler_register_global((const jerry_char_t*)"widget_index_of", wrap_widget_index_of);
  jerryx_handler_register_global((const jerry_char_t*)"widget_move", wrap_widget_move);
  jerryx_handler_register_global((const jerry_char_t*)"widget_resize", wrap_widget_resize);
  jerryx_handler_register_global((const jerry_char_t*)"widget_move_resize",
                                 wrap_widget_move_resize);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_value", wrap_widget_set_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_use_style", wrap_widget_use_style);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_text_utf8",
                                 wrap_widget_set_text_utf8);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_tr_text",
                                 wrap_widget_set_tr_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_value", wrap_widget_get_value);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_text", wrap_widget_get_text);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_name", wrap_widget_set_name);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_enable", wrap_widget_set_enable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_focused",
                                 wrap_widget_set_focused);
  jerryx_handler_register_global((const jerry_char_t*)"widget_lookup", wrap_widget_lookup);
  jerryx_handler_register_global((const jerry_char_t*)"widget_lookup_by_type",
                                 wrap_widget_lookup_by_type);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_visible",
                                 wrap_widget_set_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_on", wrap_widget_on);
  jerryx_handler_register_global((const jerry_char_t*)"widget_off", wrap_widget_off);
  jerryx_handler_register_global((const jerry_char_t*)"widget_invalidate_force",
                                 wrap_widget_invalidate_force);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_prop_str",
                                 wrap_widget_set_prop_str);
  jerryx_handler_register_global((const jerry_char_t*)"widget_foreach", wrap_widget_foreach);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_window", wrap_widget_get_window);
  jerryx_handler_register_global((const jerry_char_t*)"widget_get_type", wrap_widget_get_type);
  jerryx_handler_register_global((const jerry_char_t*)"widget_clone", wrap_widget_clone);
  jerryx_handler_register_global((const jerry_char_t*)"widget_equal", wrap_widget_equal);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_self_layout_params",
                                 wrap_widget_set_self_layout_params);
  jerryx_handler_register_global((const jerry_char_t*)"widget_set_children_layout_params",
                                 wrap_widget_set_children_layout_params);
  jerryx_handler_register_global((const jerry_char_t*)"widget_layout", wrap_widget_layout);
  jerryx_handler_register_global((const jerry_char_t*)"widget_cast", wrap_widget_cast);
  jerryx_handler_register_global((const jerry_char_t*)"widget_destroy", wrap_widget_destroy);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_x",
                                 wrap_widget_t_get_prop_x);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_y",
                                 wrap_widget_t_get_prop_y);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_w",
                                 wrap_widget_t_get_prop_w);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_h",
                                 wrap_widget_t_get_prop_h);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_style_name",
                                 wrap_widget_t_get_prop_style_name);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_enable",
                                 wrap_widget_t_get_prop_enable);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_set_prop_visible",
                                 wrap_widget_t_set_prop_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_visible",
                                 wrap_widget_t_get_prop_visible);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_name",
                                 wrap_widget_t_get_prop_name);
  jerryx_handler_register_global((const jerry_char_t*)"widget_t_get_prop_tr_text",
                                 wrap_widget_t_get_prop_tr_text);

  return RET_OK;
}

jerry_value_t wrap_window_manager(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                  const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  ret = (widget_t*)window_manager();

  return jerry_create_pointer(ret, "window_manager_t*");
};

jerry_value_t wrap_window_manager_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                       const jerry_value_t args_p[],
                                       const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)window_manager_cast(widget);

  return jerry_create_pointer(ret, "window_manager_t*");
};

jerry_value_t wrap_window_manager_set_show_fps(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  bool_t show_fps = (bool_t)jerry_get_boolean_value(args_p[1]);
  ret = (ret_t)window_manager_set_show_fps(widget, show_fps);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_window_manager_t_get_prop_show_fps(const jerry_value_t func_obj_val,
                                                      const jerry_value_t this_p,
                                                      const jerry_value_t args_p[],
                                                      const jerry_length_t args_cnt) {
  window_manager_t* obj = (window_manager_t*)jerry_get_pointer(args_p[0], "window_manager_t*");

  return jerry_create_boolean(obj->show_fps);
  ;
};

ret_t window_manager_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"window_manager", wrap_window_manager);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_cast",
                                 wrap_window_manager_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_set_show_fps",
                                 wrap_window_manager_set_show_fps);
  jerryx_handler_register_global((const jerry_char_t*)"window_manager_t_get_prop_show_fps",
                                 wrap_window_manager_t_get_prop_show_fps);

  return RET_OK;
}

jerry_value_t wrap_window_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                 const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)window_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "window_t*");
};

jerry_value_t wrap_window_cast(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (widget_t*)window_cast(widget);

  return jerry_create_pointer(ret, "window_t*");
};

jerry_value_t wrap_window_open(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                               const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  char* name = (char*)jerry_get_utf8_string(args_p[0]);
  ret = (widget_t*)window_open(name);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "window_t*");
};

jerry_value_t wrap_window_open_and_close(const jerry_value_t func_obj_val,
                                         const jerry_value_t this_p, const jerry_value_t args_p[],
                                         const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  char* name = (char*)jerry_get_utf8_string(args_p[0]);
  widget_t* to_close = (widget_t*)jerry_get_pointer(args_p[1], "widget_t*");
  ret = (widget_t*)window_open_and_close(name, to_close);
  TKMEM_FREE(name);

  return jerry_create_pointer(ret, "window_t*");
};

jerry_value_t wrap_window_close(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  ret = (ret_t)window_close(widget);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_window_t_get_prop_theme(const jerry_value_t func_obj_val,
                                           const jerry_value_t this_p, const jerry_value_t args_p[],
                                           const jerry_length_t args_cnt) {
  window_t* obj = (window_t*)jerry_get_pointer(args_p[0], "window_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->theme);
};

jerry_value_t wrap_window_t_get_prop_anim_hint(const jerry_value_t func_obj_val,
                                               const jerry_value_t this_p,
                                               const jerry_value_t args_p[],
                                               const jerry_length_t args_cnt) {
  window_t* obj = (window_t*)jerry_get_pointer(args_p[0], "window_t*");

  return jerry_create_string_from_utf8((const jerry_char_t*)obj->anim_hint);
};

ret_t window_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"window_create", wrap_window_create);
  jerryx_handler_register_global((const jerry_char_t*)"window_cast", wrap_window_cast);
  jerryx_handler_register_global((const jerry_char_t*)"window_open", wrap_window_open);
  jerryx_handler_register_global((const jerry_char_t*)"window_open_and_close",
                                 wrap_window_open_and_close);
  jerryx_handler_register_global((const jerry_char_t*)"window_close", wrap_window_close);
  jerryx_handler_register_global((const jerry_char_t*)"window_t_get_prop_theme",
                                 wrap_window_t_get_prop_theme);
  jerryx_handler_register_global((const jerry_char_t*)"window_t_get_prop_anim_hint",
                                 wrap_window_t_get_prop_anim_hint);

  return RET_OK;
}

jerry_value_t wrap_rich_text_create(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                    const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  xy_t x = (xy_t)jerry_get_number_value(args_p[1]);
  xy_t y = (xy_t)jerry_get_number_value(args_p[2]);
  wh_t w = (wh_t)jerry_get_number_value(args_p[3]);
  wh_t h = (wh_t)jerry_get_number_value(args_p[4]);
  ret = (widget_t*)rich_text_create(parent, x, y, w, h);

  return jerry_create_pointer(ret, "rich_text_t*");
};

jerry_value_t wrap_rich_text_set_text(const jerry_value_t func_obj_val, const jerry_value_t this_p,
                                      const jerry_value_t args_p[], const jerry_length_t args_cnt) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  char* text = (char*)jerry_get_utf8_string(args_p[1]);
  ret = (ret_t)rich_text_set_text(widget, text);
  TKMEM_FREE(text);

  return jerry_create_number(ret);
  ;
};

jerry_value_t wrap_rich_text_t_get_prop_line_gap(const jerry_value_t func_obj_val,
                                                 const jerry_value_t this_p,
                                                 const jerry_value_t args_p[],
                                                 const jerry_length_t args_cnt) {
  rich_text_t* obj = (rich_text_t*)jerry_get_pointer(args_p[0], "rich_text_t*");

  return jerry_create_number(obj->line_gap);
  ;
};

ret_t rich_text_t_init(void) {
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_create", wrap_rich_text_create);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_set_text",
                                 wrap_rich_text_set_text);
  jerryx_handler_register_global((const jerry_char_t*)"rich_text_t_get_prop_line_gap",
                                 wrap_rich_text_t_get_prop_line_gap);

  return RET_OK;
}

ret_t awtk_js_init(void) {
  bitmap_format_t_init();
  bitmap_flag_t_init();
  bitmap_t_init();
  image_draw_type_t_init();
  button_group_t_init();
  button_t_init();
  canvas_t_init();
  check_button_t_init();
  combo_box_item_t_init();
  combo_box_t_init();
  dialog_client_t_init();
  dialog_title_t_init();
  dialog_t_init();
  dragger_t_init();
  edit_t_init();
  event_type_t_init();
  event_t_init();
  wheel_event_t_init();
  prop_change_event_t_init();
  pointer_event_t_init();
  key_event_t_init();
  paint_event_t_init();
  group_box_t_init();
  idle_t_init();
  image_manager_t_init();
  image_t_init();
  input_type_t_init();
  label_t_init();
  list_item_t_init();
  list_view_h_t_init();
  list_view_t_init();
  pages_t_init();
  popup_t_init();
  progress_bar_t_init();
  point_t_init();
  rect_t_init();
  resource_type_t_init();
  resource_info_t_init();
  resource_manager_t_init();
  scroll_bar_t_init();
  scroll_view_t_init();
  slide_view_t_init();
  slider_t_init();
  spin_box_t_init();
  tab_button_group_t_init();
  tab_button_t_init();
  tab_control_t_init();
  timer_t_init();
  tklocale_t_init();
  ret_t_init();
  align_v_t_init();
  align_h_t_init();
  value_type_t_init();
  value_t_init();
  view_t_init();
  widget_prop_t_init();
  widget_type_t_init();
  widget_state_t_init();
  widget_t_init();
  window_manager_t_init();
  window_t_init();
  rich_text_t_init();

  return RET_OK;
}
