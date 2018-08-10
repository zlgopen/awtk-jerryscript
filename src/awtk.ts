declare function BITMAP_FMT_NONE();
declare function BITMAP_FMT_RGBA();
declare function BITMAP_FMT_BGRA();
declare function BITMAP_FMT_RGB565();
declare function INPUT_TEXT();
declare function INPUT_INT();
declare function INPUT_UINT();
declare function INPUT_HEX();
declare function INPUT_FLOAT();
declare function INPUT_UFLOAT();
declare function INPUT_EMAIL();
declare function INPUT_PASSWORD();
declare function INPUT_PHONE();
declare function BITMAP_FLAG_NONE();
declare function BITMAP_FLAG_OPAQUE();
declare function BITMAP_FLAG_IMMUTABLE();
declare function BITMAP_FLAG_TEXTURE();
declare function RESOURCE_TYPE_NONE();
declare function RESOURCE_TYPE_FONT();
declare function RESOURCE_TYPE_IMAGE();
declare function RESOURCE_TYPE_THEME();
declare function RESOURCE_TYPE_UI();
declare function RESOURCE_TYPE_XML();
declare function RESOURCE_TYPE_STRINGS();
declare function RESOURCE_TYPE_DATA();
declare function EVT_NONE();
declare function EVT_POINTER_DOWN();
declare function EVT_POINTER_DOWN_ABORT();
declare function EVT_POINTER_MOVE();
declare function EVT_POINTER_UP();
declare function EVT_WHEEL();
declare function EVT_CONTEXT_MENU();
declare function EVT_POINTER_ENTER();
declare function EVT_POINTER_LEAVE();
declare function EVT_LONG_PRESS();
declare function EVT_CLICK();
declare function EVT_FOCUS();
declare function EVT_BLUR();
declare function EVT_KEY_DOWN();
declare function EVT_KEY_REPEAT();
declare function EVT_KEY_UP();
declare function EVT_DESTROY();
declare function EVT_WILL_MOVE();
declare function EVT_MOVE();
declare function EVT_WILL_RESIZE();
declare function EVT_RESIZE();
declare function EVT_WILL_MOVE_RESIZE();
declare function EVT_MOVE_RESIZE();
declare function EVT_PROP_WILL_CHANGE();
declare function EVT_PROP_CHANGED();
declare function EVT_VALUE_WILL_CHANGE();
declare function EVT_VALUE_CHANGED();
declare function EVT_VALUE_CHANGING();
declare function EVT_PAINT();
declare function EVT_BEFORE_PAINT();
declare function EVT_AFTER_PAINT();
declare function EVT_LOCALE_CHANGED();
declare function EVT_ANIM_START();
declare function EVT_ANIM_STOP();
declare function EVT_ANIM_ONCE();
declare function EVT_ANIM_END();
declare function EVT_WINDOW_LOAD();
declare function EVT_WINDOW_OPEN();
declare function EVT_WINDOW_CLOSE();
declare function EVT_IM_COMMIT();
declare function EVT_IM_SHOW_CANDIDATES();
declare function EVT_IM_ACTION();
declare function EVT_IM_ACTION_INFO();
declare function EVT_DRAG_START();
declare function EVT_DRAG();
declare function EVT_DRAG_END();
declare function EVT_REQ_START();
declare function EVT_USER_START();
declare function ALIGN_V_NONE();
declare function ALIGN_V_MIDDLE();
declare function ALIGN_V_TOP();
declare function ALIGN_V_BOTTOM();
declare function ALIGN_H_NONE();
declare function ALIGN_H_CENTER();
declare function ALIGN_H_LEFT();
declare function ALIGN_H_RIGHT();
declare function VALUE_TYPE_INVALID();
declare function VALUE_TYPE_BOOL();
declare function VALUE_TYPE_INT8();
declare function VALUE_TYPE_UINT8();
declare function VALUE_TYPE_INT16();
declare function VALUE_TYPE_UINT16();
declare function VALUE_TYPE_INT32();
declare function VALUE_TYPE_UINT32();
declare function VALUE_TYPE_INT64();
declare function VALUE_TYPE_UINT64();
declare function VALUE_TYPE_POINTER();
declare function VALUE_TYPE_FLOAT();
declare function VALUE_TYPE_DOUBLE();
declare function VALUE_TYPE_STRING();
declare function VALUE_TYPE_WSTRING();
declare function WIDGET_PROP_X();
declare function WIDGET_PROP_Y();
declare function WIDGET_PROP_W();
declare function WIDGET_PROP_H();
declare function WIDGET_PROP_MIN_W();
declare function WIDGET_PROP_MAX_W();
declare function WIDGET_PROP_LAYOUT_W();
declare function WIDGET_PROP_LAYOUT_H();
declare function WIDGET_PROP_VIRTUAL_W();
declare function WIDGET_PROP_VIRTUAL_H();
declare function WIDGET_PROP_NAME();
declare function WIDGET_PROP_VALUE();
declare function WIDGET_PROP_TEXT();
declare function WIDGET_PROP_TR_TEXT();
declare function WIDGET_PROP_STYLE();
declare function WIDGET_PROP_ENABLE();
declare function WIDGET_PROP_MARGIN();
declare function WIDGET_PROP_SPACING();
declare function WIDGET_PROP_LEFT_MARGIN();
declare function WIDGET_PROP_RIGHT_MARGIN();
declare function WIDGET_PROP_TOP_MARGIN();
declare function WIDGET_PROP_BOTTOM_MARGIN();
declare function WIDGET_PROP_STEP();
declare function WIDGET_PROP_VISIBLE();
declare function WIDGET_PROP_ANIM_HINT();
declare function WIDGET_PROP_OPEN_ANIM_HINT();
declare function WIDGET_PROP_CLOSE_ANIM_HINT();
declare function WIDGET_PROP_MIN();
declare function WIDGET_PROP_TIPS();
declare function WIDGET_PROP_INPUT_TYPE();
declare function WIDGET_PROP_READONLY();
declare function WIDGET_PROP_PASSWORD_VISIBLE();
declare function WIDGET_PROP_ACTIVE();
declare function WIDGET_PROP_VERTICAL();
declare function WIDGET_PROP_SHOW_TEXT();
declare function WIDGET_PROP_XOFFSET();
declare function WIDGET_PROP_YOFFSET();
declare function WIDGET_PROP_AUTO_PLAY();
declare function WIDGET_PROP_AUTO_FIX();
declare function WIDGET_PROP_X_MIN();
declare function WIDGET_PROP_X_MAX();
declare function WIDGET_PROP_Y_MIN();
declare function WIDGET_PROP_Y_MAX();
declare function WIDGET_PROP_MAX();
declare function WIDGET_PROP_ROW();
declare function WIDGET_PROP_THEME();
declare function WIDGET_PROP_SCRIPT();
declare function WIDGET_PROP_ITEM_WIDTH();
declare function WIDGET_PROP_ITEM_HEIGHT();
declare function WIDGET_PROP_DEFAULT_ITEM_HEIGHT();
declare function WIDGET_PROP_XSLIDABLE();
declare function WIDGET_PROP_YSLIDABLE();
declare function WIDGET_PROP_REPEAT();
declare function WIDGET_PROP_ANIMATABLE();
declare function WIDGET_PROP_AUTO_HIDE_SCROLL_BAR();
declare function WIDGET_PROP_IMAGE();
declare function WIDGET_PROP_DRAW_TYPE();
declare function WIDGET_PROP_SELECTABLE();
declare function WIDGET_PROP_CLICKABLE();
declare function WIDGET_PROP_SCALE_X();
declare function WIDGET_PROP_SCALE_Y();
declare function WIDGET_PROP_ANCHOR_X();
declare function WIDGET_PROP_ANCHOR_Y();
declare function WIDGET_PROP_ROTATION();
declare function WIDGET_PROP_SUB_THEME();
declare function WIDGET_PROP_COMPACT();
declare function WIDGET_PROP_ICON();
declare function WIDGET_PROP_OPTIONS();
declare function WIDGET_PROP_SELECTED();
declare function WIDGET_PROP_ACTIVE_ICON();
declare function WIDGET_PROP_OPEN_WINDOW();
declare function WIDGET_PROP_SELECTED_INDEX();
declare function WIDGET_PROP_CLOSE_WHEN_CLICK();
declare function WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE();
declare function WIDGET_PROP_LINE_GAP();
declare function WIDGET_TYPE_NONE();
declare function WIDGET_TYPE_WINDOW_MANAGER();
declare function WIDGET_TYPE_NORMAL_WINDOW();
declare function WIDGET_TYPE_TOOL_BAR();
declare function WIDGET_TYPE_DIALOG();
declare function WIDGET_TYPE_POPUP();
declare function WIDGET_TYPE_SPRITE();
declare function WIDGET_TYPE_KEYBOARD();
declare function WIDGET_TYPE_DND();
declare function WIDGET_TYPE_LABEL();
declare function WIDGET_TYPE_BUTTON();
declare function WIDGET_TYPE_IMAGE();
declare function WIDGET_TYPE_EDIT();
declare function WIDGET_TYPE_PROGRESS_BAR();
declare function WIDGET_TYPE_GROUP_BOX();
declare function WIDGET_TYPE_CHECK_BUTTON();
declare function WIDGET_TYPE_RADIO_BUTTON();
declare function WIDGET_TYPE_DIALOG_TITLE();
declare function WIDGET_TYPE_DIALOG_CLIENT();
declare function WIDGET_TYPE_SLIDER();
declare function WIDGET_TYPE_VIEW();
declare function WIDGET_TYPE_COMBO_BOX();
declare function WIDGET_TYPE_COMBO_BOX_ITEM();
declare function WIDGET_TYPE_SLIDE_VIEW();
declare function WIDGET_TYPE_PAGES();
declare function WIDGET_TYPE_TAB_BUTTON();
declare function WIDGET_TYPE_TAB_CONTROL();
declare function WIDGET_TYPE_TAB_BUTTON_GROUP();
declare function WIDGET_TYPE_BUTTON_GROUP();
declare function WIDGET_TYPE_CANDIDATES();
declare function WIDGET_TYPE_SPIN_BOX();
declare function WIDGET_TYPE_DRAGGER();
declare function WIDGET_TYPE_SCROLL_BAR();
declare function WIDGET_TYPE_SCROLL_BAR_DESKTOP();
declare function WIDGET_TYPE_SCROLL_BAR_MOBILE();
declare function WIDGET_TYPE_SCROLL_VIEW();
declare function WIDGET_TYPE_LIST_VIEW();
declare function WIDGET_TYPE_LIST_VIEW_H();
declare function WIDGET_TYPE_LIST_ITEM();
declare function IMAGE_DRAW_DEFAULT();
declare function IMAGE_DRAW_CENTER();
declare function IMAGE_DRAW_ICON();
declare function IMAGE_DRAW_SCALE();
declare function IMAGE_DRAW_SCALE_AUTO();
declare function IMAGE_DRAW_SCALE_W();
declare function IMAGE_DRAW_SCALE_H();
declare function IMAGE_DRAW_REPEAT();
declare function IMAGE_DRAW_REPEAT_X();
declare function IMAGE_DRAW_REPEAT_Y();
declare function IMAGE_DRAW_9PATCH();
declare function IMAGE_DRAW_3PATCH_X();
declare function IMAGE_DRAW_3PATCH_Y();
declare function IMAGE_DRAW_3PATCH_X_SCALE_Y();
declare function IMAGE_DRAW_3PATCH_Y_SCALE_X();
declare function WIDGET_STATE_NONE();
declare function WIDGET_STATE_NORMAL();
declare function WIDGET_STATE_PRESSED();
declare function WIDGET_STATE_OVER();
declare function WIDGET_STATE_DISABLE();
declare function WIDGET_STATE_FOCUSED();
declare function WIDGET_STATE_CHECKED();
declare function WIDGET_STATE_UNCHECKED();
declare function WIDGET_STATE_EMPTY();
declare function WIDGET_STATE_ERROR();
declare function WIDGET_STATE_SELECTED();
declare function RET_OK();
declare function RET_OOM();
declare function RET_FAIL();
declare function RET_NOT_IMPL();
declare function RET_QUIT();
declare function RET_FOUND();
declare function RET_REMOVE();
declare function RET_REPEAT();
declare function RET_NOT_FOUND();
declare function RET_DONE();
declare function RET_STOP();
declare function RET_CONTINUE();
declare function RET_BAD_PARAMS();
declare function bitmap_create();
declare function bitmap_destroy(bitmap);
declare function bitmap_t_get_prop_w(nativeObj);
declare function bitmap_t_get_prop_h(nativeObj);
declare function bitmap_t_get_prop_flags(nativeObj);
declare function bitmap_t_get_prop_format(nativeObj);
declare function bitmap_t_get_prop_name(nativeObj);
declare function resource_manager();
declare function resource_manager_ref(rm, type, name);
declare function resource_manager_unref(rm, info);
declare function timer_add(on_timer, ctx, duration_ms);
declare function timer_remove(timer_id);
declare function tklocale();
declare function tklocale_tr(tklocale, text);
declare function tklocale_change(tklocale, language, country);
declare function tklocale_on(tklocale, type, on_event, ctx);
declare function tklocale_off(tklocale, id);
declare function idle_add(on_idle, ctx);
declare function idle_remove(idle_id);
declare function image_manager();
declare function image_manager_load(imm, name, image);
declare function value_set_bool(v, value);
declare function value_bool(v);
declare function value_set_int8(v, value);
declare function value_int8(v);
declare function value_set_uint8(v, value);
declare function value_uint8(v);
declare function value_set_int16(v, value);
declare function value_int16(v);
declare function value_set_uint16(v, value);
declare function value_uint16(v);
declare function value_set_int32(v, value);
declare function value_int32(v);
declare function value_set_uint32(v, value);
declare function value_set_int64(v, value);
declare function value_int64(v);
declare function value_set_uint64(v, value);
declare function value_uint64(v);
declare function value_set_float(v, value);
declare function value_float(v);
declare function value_set_double(v, value);
declare function value_double(v);
declare function value_set_str(v, value);
declare function value_str(v);
declare function value_is_null(value);
declare function value_int(v);
declare function value_set_int(v, value);
declare function value_create();
declare function value_destroy(v);
declare function value_t_get_prop_type(nativeObj);
declare function event_t_get_prop_type(nativeObj);
declare function event_t_get_prop_time(nativeObj);
declare function event_t_get_prop_target(nativeObj);
declare function widget_count_children(widget);
declare function widget_get_child(widget, index);
declare function widget_index_of(widget);
declare function widget_move(widget, x, y);
declare function widget_resize(widget, w, h);
declare function widget_move_resize(widget, x, y, w, h);
declare function widget_set_value(widget, value);
declare function widget_set_text(widget, text);
declare function widget_use_style(widget, style);
declare function widget_set_text_utf8(widget, text);
declare function widget_set_tr_text(widget, text);
declare function widget_get_value(widget);
declare function widget_get_text(widget);
declare function widget_set_name(widget, name);
declare function widget_set_enable(widget, enable);
declare function widget_set_focused(widget, focused);
declare function widget_lookup(widget, name, recursive);
declare function widget_lookup_by_type(widget, type, recursive);
declare function widget_set_visible(widget, visible, recursive);
declare function widget_on(widget, type, on_event, ctx);
declare function widget_off(widget, id);
declare function widget_invalidate_force(widget);
declare function widget_set_prop_str(widget, name, v);
declare function widget_foreach(widget, visit, ctx);
declare function widget_get_window(widget);
declare function widget_get_type(widget);
declare function widget_clone(widget, parent);
declare function widget_equal(widget, other);
declare function widget_set_self_layout_params(widget, x, y, w, h);
declare function widget_set_children_layout_params(widget, params);
declare function widget_layout(widget);
declare function widget_destroy(widget);
declare function widget_t_get_prop_x(nativeObj);
declare function widget_t_get_prop_y(nativeObj);
declare function widget_t_get_prop_w(nativeObj);
declare function widget_t_get_prop_h(nativeObj);
declare function widget_t_get_prop_style_name(nativeObj);
declare function widget_t_get_prop_enable(nativeObj);
declare function widget_t_get_prop_visible(nativeObj);
declare function widget_t_set_prop_visible(nativeObj, value);
declare function widget_t_get_prop_name(nativeObj);
declare function widget_t_get_prop_tr_text(nativeObj);
declare function resource_info_t_get_prop_type(nativeObj);
declare function resource_info_t_get_prop_size(nativeObj);
declare function resource_info_t_get_prop_name(nativeObj);
declare function label_create(parent, x, y, w, h);
declare function list_item_create(parent, x, y, w, h);
declare function list_item_cast(widget);
declare function list_view_h_create(parent, x, y, w, h);
declare function list_view_h_set_item_width(widget, item_width);
declare function list_view_h_set_spacing(widget, spacing);
declare function list_view_h_cast(widget);
declare function list_view_h_t_get_prop_item_width(nativeObj);
declare function list_view_h_t_get_prop_spacing(nativeObj);
declare function list_view_create(parent, x, y, w, h);
declare function list_view_set_item_height(widget, item_height);
declare function list_view_set_default_item_height(widget, default_item_height);
declare function list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);
declare function list_view_cast(widget);
declare function list_view_t_get_prop_item_height(nativeObj);
declare function list_view_t_get_prop_default_item_height(nativeObj);
declare function list_view_t_get_prop_auto_hide_scroll_bar(nativeObj);
declare function combo_box_create(parent, x, y, w, h);
declare function combo_box_cast(widget);
declare function combo_box_set_open_window(widget, open_window);
declare function combo_box_reset_options(widget);
declare function combo_box_count_options(widget);
declare function combo_box_set_selected_index(widget, index);
declare function combo_box_append_option(widget, value, text);
declare function combo_box_set_options(widget, options);
declare function combo_box_get_value(widget);
declare function combo_box_get_text(widget);
declare function combo_box_t_get_prop_open_window(nativeObj);
declare function combo_box_t_get_prop_selected_index(nativeObj);
declare function combo_box_t_get_prop_value(nativeObj);
declare function combo_box_t_get_prop_options(nativeObj);
declare function popup_create(parent, x, y, w, h);
declare function popup_cast(widget);
declare function popup_t_get_prop_theme(nativeObj);
declare function popup_t_get_prop_anim_hint(nativeObj);
declare function popup_t_get_prop_close_when_click(nativeObj);
declare function popup_t_get_prop_close_when_click_outside(nativeObj);
declare function progress_bar_create(parent, x, y, w, h);
declare function progress_bar_cast(widget);
declare function progress_bar_set_value(widget, value);
declare function progress_bar_set_vertical(widget, vertical);
declare function progress_bar_set_show_text(widget, show_text);
declare function progress_bar_t_get_prop_value(nativeObj);
declare function progress_bar_t_get_prop_vertical(nativeObj);
declare function progress_bar_t_get_prop_show_text(nativeObj);
declare function dialog_client_create(parent, x, y, w, h);
declare function dialog_client_cast(widget);
declare function dialog_title_create(parent, x, y, w, h);
declare function dialog_title_cast(widget);
declare function dialog_create(parent, x, y, w, h);
declare function dialog_create_simple(parent, x, y, w, h);
declare function dialog_cast(widget);
declare function dialog_open(name);
declare function dialog_set_title(widget, title);
declare function dialog_modal(widget);
declare function dialog_quit(widget, code);
declare function dragger_create(parent, x, y, w, h);
declare function dragger_cast(widget);
declare function dragger_set_range(widget, x_min, y_min, x_max, y_max);
declare function dragger_t_get_prop_x_min(nativeObj);
declare function dragger_t_get_prop_y_min(nativeObj);
declare function dragger_t_get_prop_x_max(nativeObj);
declare function dragger_t_get_prop_y_max(nativeObj);
declare function edit_create(parent, x, y, w, h);
declare function edit_cast(widget);
declare function edit_get_int(widget);
declare function edit_get_double(widget);
declare function edit_set_text_limit(widget, min, max);
declare function edit_set_int_limit(widget, min, max, step);
declare function edit_set_float_limit(widget, min, max, step);
declare function edit_set_readonly(widget, readonly);
declare function edit_set_auto_fix(widget, auto_fix);
declare function edit_set_input_type(widget, type);
declare function edit_set_input_tips(widget, tips);
declare function edit_set_password_visible(widget, password_visible);
declare function edit_t_get_prop_readonly(nativeObj);
declare function edit_t_get_prop_password_visible(nativeObj);
declare function edit_t_get_prop_auto_fix(nativeObj);
declare function edit_t_get_prop_top_margin(nativeObj);
declare function edit_t_get_prop_bottom_margin(nativeObj);
declare function edit_t_get_prop_left_margin(nativeObj);
declare function edit_t_get_prop_right_margin(nativeObj);
declare function edit_t_get_prop_tips(nativeObj);
declare function scroll_bar_create(parent, x, y, w, h);
declare function scroll_bar_cast(widget);
declare function scroll_bar_create_mobile(parent, x, y, w, h);
declare function scroll_bar_create_desktop(parent, x, y, w, h);
declare function scroll_bar_set_params(widget, virtual_size, row);
declare function scroll_bar_scroll_to(widget, value, duration);
declare function scroll_bar_set_value(widget, value);
declare function scroll_bar_add_delta(widget, delta);
declare function scroll_bar_scroll_delta(widget, delta);
declare function scroll_bar_set_value_only(widget, value);
declare function scroll_bar_is_mobile(widget);
declare function scroll_bar_t_get_prop_virtual_size(nativeObj);
declare function scroll_bar_t_get_prop_value(nativeObj);
declare function scroll_bar_t_get_prop_row(nativeObj);
declare function scroll_bar_t_get_prop_animatable(nativeObj);
declare function scroll_view_create(parent, x, y, w, h);
declare function scroll_view_cast(widget);
declare function scroll_view_set_virtual_w(widget, w);
declare function scroll_view_set_virtual_h(widget, h);
declare function scroll_view_set_xslidable(widget, xslidable);
declare function scroll_view_set_yslidable(widget, yslidable);
declare function scroll_view_set_offset(widget, xoffset, yoffset);
declare function scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);
declare function scroll_view_t_get_prop_virtual_w(nativeObj);
declare function scroll_view_t_get_prop_virtual_h(nativeObj);
declare function scroll_view_t_get_prop_xoffset(nativeObj);
declare function scroll_view_t_get_prop_yoffset(nativeObj);
declare function scroll_view_t_get_prop_xslidable(nativeObj);
declare function scroll_view_t_get_prop_yslidable(nativeObj);
declare function slide_view_create(parent, x, y, w, h);
declare function slide_view_cast(widget);
declare function slide_view_set_auto_play(widget, auto_play);
declare function slide_view_set_active(widget, index);
declare function slide_view_set_vertical(widget, vertical);
declare function slide_view_t_get_prop_vertical(nativeObj);
declare function slide_view_t_get_prop_auto_play(nativeObj);
declare function slider_create(parent, x, y, w, h);
declare function slider_cast(widget);
declare function slider_set_value(widget, value);
declare function slider_set_min(widget, min);
declare function slider_set_max(widget, max);
declare function slider_set_step(widget, step);
declare function slider_set_vertical(widget, vertical);
declare function slider_t_get_prop_value(nativeObj);
declare function slider_t_get_prop_min(nativeObj);
declare function slider_t_get_prop_max(nativeObj);
declare function slider_t_get_prop_step(nativeObj);
declare function slider_t_get_prop_vertical(nativeObj);
declare function spin_box_create(parent, x, y, w, h);
declare function spin_box_cast(widget);
declare function tab_button_group_create(parent, x, y, w, h);
declare function tab_button_group_cast(widget);
declare function tab_button_group_t_get_prop_compact(nativeObj);
declare function tab_button_create(parent, x, y, w, h);
declare function tab_button_cast(widget);
declare function tab_button_set_value(widget, value);
declare function tab_button_set_icon(widget, name);
declare function tab_button_set_active_icon(widget, name);
declare function tab_button_t_get_prop_value(nativeObj);
declare function tab_button_t_get_prop_active_icon(nativeObj);
declare function tab_button_t_get_prop_icon(nativeObj);
declare function tab_control_create(parent, x, y, w, h);
declare function tab_control_cast(widget);
declare function button_group_create(parent, x, y, w, h);
declare function button_group_cast(widget);
declare function button_create(parent, x, y, w, h);
declare function button_cast(widget);
declare function button_set_repeat(widget, repeat);
declare function button_t_get_prop_repeat(nativeObj);
declare function wheel_event_cast(event);
declare function wheel_event_t_get_prop_dx(nativeObj);
declare function wheel_event_t_get_prop_dy(nativeObj);
declare function wheel_event_t_get_prop_alt(nativeObj);
declare function wheel_event_t_get_prop_ctrl(nativeObj);
declare function wheel_event_t_get_prop_shift(nativeObj);
declare function prop_change_event_cast(event);
declare function prop_change_event_t_get_prop_name(nativeObj);
declare function prop_change_event_t_get_prop_value(nativeObj);
declare function pointer_event_cast(event);
declare function pointer_event_t_get_prop_x(nativeObj);
declare function pointer_event_t_get_prop_y(nativeObj);
declare function pointer_event_t_get_prop_button(nativeObj);
declare function pointer_event_t_get_prop_pressed(nativeObj);
declare function pointer_event_t_get_prop_alt(nativeObj);
declare function pointer_event_t_get_prop_ctrl(nativeObj);
declare function pointer_event_t_get_prop_shift(nativeObj);
declare function key_event_cast(event);
declare function key_event_t_get_prop_key(nativeObj);
declare function key_event_t_get_prop_alt(nativeObj);
declare function key_event_t_get_prop_ctrl(nativeObj);
declare function key_event_t_get_prop_shift(nativeObj);
declare function key_event_t_get_prop_caplock(nativeObj);
declare function paint_event_cast(event);
declare function paint_event_t_get_prop_c(nativeObj);
declare function view_create(parent, x, y, w, h);
declare function view_cast(widget);
declare function group_box_create(parent, x, y, w, h);
declare function group_box_cast(widget);
declare function rich_text_create(parent, x, y, w, h);
declare function rich_text_set_text(widget, text);
declare function rich_text_t_get_prop_line_gap(nativeObj);
declare function check_button_create(parent, x, y, w, h);
declare function check_button_create_radio(parent, x, y, w, h);
declare function check_button_set_value(widget, value);
declare function check_button_cast(widget);
declare function check_button_t_get_prop_value(nativeObj);
declare function image_create(parent, x, y, w, h);
declare function image_set_image_name(widget, name);
declare function image_set_draw_type(widget, draw_type);
declare function image_set_rotation(widget, rotation);
declare function image_set_scale(widget, scale_x, scale_y);
declare function image_set_anchor(widget, anchor_x, anchor_y);
declare function image_set_selected(widget, selected);
declare function image_set_selectable(widget, selectable);
declare function image_set_clickable(widget, clickable);
declare function image_t_get_prop_anchor_x(nativeObj);
declare function image_t_get_prop_anchor_y(nativeObj);
declare function image_t_get_prop_scale_x(nativeObj);
declare function window_manager();
declare function window_manager_cast(widget);
declare function window_manager_set_show_fps(widget, show_fps);
declare function window_manager_t_get_prop_show_fps(nativeObj);
declare function window_create(parent, x, y, w, h);
declare function window_cast(widget);
declare function window_open(name);
declare function window_open_and_close(name, to_close);
declare function window_close(widget);
declare function window_t_get_prop_theme(nativeObj);
declare function window_t_get_prop_anim_hint(nativeObj);
declare function combo_box_item_create(parent, x, y, w, h);
declare function combo_box_item_cast(widget);
declare function combo_box_item_set_selected(widget, selected);
declare function combo_box_item_set_value(widget, value);
declare function combo_box_item_t_get_prop_value(nativeObj);
declare function combo_box_item_t_get_prop_selected(nativeObj);
declare function pages_create(parent, x, y, w, h);
declare function pages_cast(widget);
declare function pages_set_active(widget, index);
declare function pages_set_active_by_name(widget, name);
declare function pages_t_get_prop_active(nativeObj);
class BitmapFormat {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static BITMAP_FMT_NONE = BITMAP_FMT_NONE();
 public  static BITMAP_FMT_RGBA = BITMAP_FMT_RGBA();
 public  static BITMAP_FMT_BGRA = BITMAP_FMT_BGRA();
 public  static BITMAP_FMT_RGB565 = BITMAP_FMT_RGB565();
}

class InputType {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static INPUT_TEXT = INPUT_TEXT();
 public  static INPUT_INT = INPUT_INT();
 public  static INPUT_UINT = INPUT_UINT();
 public  static INPUT_HEX = INPUT_HEX();
 public  static INPUT_FLOAT = INPUT_FLOAT();
 public  static INPUT_UFLOAT = INPUT_UFLOAT();
 public  static INPUT_EMAIL = INPUT_EMAIL();
 public  static INPUT_PASSWORD = INPUT_PASSWORD();
 public  static INPUT_PHONE = INPUT_PHONE();
}

class BitmapFlag {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static BITMAP_FLAG_NONE = BITMAP_FLAG_NONE();
 public  static BITMAP_FLAG_OPAQUE = BITMAP_FLAG_OPAQUE();
 public  static BITMAP_FLAG_IMMUTABLE = BITMAP_FLAG_IMMUTABLE();
 public  static BITMAP_FLAG_TEXTURE = BITMAP_FLAG_TEXTURE();
}

class ResourceType {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static RESOURCE_TYPE_NONE = RESOURCE_TYPE_NONE();
 public  static RESOURCE_TYPE_FONT = RESOURCE_TYPE_FONT();
 public  static RESOURCE_TYPE_IMAGE = RESOURCE_TYPE_IMAGE();
 public  static RESOURCE_TYPE_THEME = RESOURCE_TYPE_THEME();
 public  static RESOURCE_TYPE_UI = RESOURCE_TYPE_UI();
 public  static RESOURCE_TYPE_XML = RESOURCE_TYPE_XML();
 public  static RESOURCE_TYPE_STRINGS = RESOURCE_TYPE_STRINGS();
 public  static RESOURCE_TYPE_DATA = RESOURCE_TYPE_DATA();
}

class EventType {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static EVT_NONE = EVT_NONE();
 public  static EVT_POINTER_DOWN = EVT_POINTER_DOWN();
 public  static EVT_POINTER_DOWN_ABORT = EVT_POINTER_DOWN_ABORT();
 public  static EVT_POINTER_MOVE = EVT_POINTER_MOVE();
 public  static EVT_POINTER_UP = EVT_POINTER_UP();
 public  static EVT_WHEEL = EVT_WHEEL();
 public  static EVT_CONTEXT_MENU = EVT_CONTEXT_MENU();
 public  static EVT_POINTER_ENTER = EVT_POINTER_ENTER();
 public  static EVT_POINTER_LEAVE = EVT_POINTER_LEAVE();
 public  static EVT_LONG_PRESS = EVT_LONG_PRESS();
 public  static EVT_CLICK = EVT_CLICK();
 public  static EVT_FOCUS = EVT_FOCUS();
 public  static EVT_BLUR = EVT_BLUR();
 public  static EVT_KEY_DOWN = EVT_KEY_DOWN();
 public  static EVT_KEY_REPEAT = EVT_KEY_REPEAT();
 public  static EVT_KEY_UP = EVT_KEY_UP();
 public  static EVT_DESTROY = EVT_DESTROY();
 public  static EVT_WILL_MOVE = EVT_WILL_MOVE();
 public  static EVT_MOVE = EVT_MOVE();
 public  static EVT_WILL_RESIZE = EVT_WILL_RESIZE();
 public  static EVT_RESIZE = EVT_RESIZE();
 public  static EVT_WILL_MOVE_RESIZE = EVT_WILL_MOVE_RESIZE();
 public  static EVT_MOVE_RESIZE = EVT_MOVE_RESIZE();
 public  static EVT_PROP_WILL_CHANGE = EVT_PROP_WILL_CHANGE();
 public  static EVT_PROP_CHANGED = EVT_PROP_CHANGED();
 public  static EVT_VALUE_WILL_CHANGE = EVT_VALUE_WILL_CHANGE();
 public  static EVT_VALUE_CHANGED = EVT_VALUE_CHANGED();
 public  static EVT_VALUE_CHANGING = EVT_VALUE_CHANGING();
 public  static EVT_PAINT = EVT_PAINT();
 public  static EVT_BEFORE_PAINT = EVT_BEFORE_PAINT();
 public  static EVT_AFTER_PAINT = EVT_AFTER_PAINT();
 public  static EVT_LOCALE_CHANGED = EVT_LOCALE_CHANGED();
 public  static EVT_ANIM_START = EVT_ANIM_START();
 public  static EVT_ANIM_STOP = EVT_ANIM_STOP();
 public  static EVT_ANIM_ONCE = EVT_ANIM_ONCE();
 public  static EVT_ANIM_END = EVT_ANIM_END();
 public  static EVT_WINDOW_LOAD = EVT_WINDOW_LOAD();
 public  static EVT_WINDOW_OPEN = EVT_WINDOW_OPEN();
 public  static EVT_WINDOW_CLOSE = EVT_WINDOW_CLOSE();
 public  static EVT_IM_COMMIT = EVT_IM_COMMIT();
 public  static EVT_IM_SHOW_CANDIDATES = EVT_IM_SHOW_CANDIDATES();
 public  static EVT_IM_ACTION = EVT_IM_ACTION();
 public  static EVT_IM_ACTION_INFO = EVT_IM_ACTION_INFO();
 public  static EVT_DRAG_START = EVT_DRAG_START();
 public  static EVT_DRAG = EVT_DRAG();
 public  static EVT_DRAG_END = EVT_DRAG_END();
 public  static EVT_REQ_START = EVT_REQ_START();
 public  static EVT_USER_START = EVT_USER_START();
}

class AlignV {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static ALIGN_V_NONE = ALIGN_V_NONE();
 public  static ALIGN_V_MIDDLE = ALIGN_V_MIDDLE();
 public  static ALIGN_V_TOP = ALIGN_V_TOP();
 public  static ALIGN_V_BOTTOM = ALIGN_V_BOTTOM();
}

class AlignH {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static ALIGN_H_NONE = ALIGN_H_NONE();
 public  static ALIGN_H_CENTER = ALIGN_H_CENTER();
 public  static ALIGN_H_LEFT = ALIGN_H_LEFT();
 public  static ALIGN_H_RIGHT = ALIGN_H_RIGHT();
}

class ValueType {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static VALUE_TYPE_INVALID = VALUE_TYPE_INVALID();
 public  static VALUE_TYPE_BOOL = VALUE_TYPE_BOOL();
 public  static VALUE_TYPE_INT8 = VALUE_TYPE_INT8();
 public  static VALUE_TYPE_UINT8 = VALUE_TYPE_UINT8();
 public  static VALUE_TYPE_INT16 = VALUE_TYPE_INT16();
 public  static VALUE_TYPE_UINT16 = VALUE_TYPE_UINT16();
 public  static VALUE_TYPE_INT32 = VALUE_TYPE_INT32();
 public  static VALUE_TYPE_UINT32 = VALUE_TYPE_UINT32();
 public  static VALUE_TYPE_INT64 = VALUE_TYPE_INT64();
 public  static VALUE_TYPE_UINT64 = VALUE_TYPE_UINT64();
 public  static VALUE_TYPE_POINTER = VALUE_TYPE_POINTER();
 public  static VALUE_TYPE_FLOAT = VALUE_TYPE_FLOAT();
 public  static VALUE_TYPE_DOUBLE = VALUE_TYPE_DOUBLE();
 public  static VALUE_TYPE_STRING = VALUE_TYPE_STRING();
 public  static VALUE_TYPE_WSTRING = VALUE_TYPE_WSTRING();
}

class WidgetProp {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static WIDGET_PROP_X = WIDGET_PROP_X();
 public  static WIDGET_PROP_Y = WIDGET_PROP_Y();
 public  static WIDGET_PROP_W = WIDGET_PROP_W();
 public  static WIDGET_PROP_H = WIDGET_PROP_H();
 public  static WIDGET_PROP_MIN_W = WIDGET_PROP_MIN_W();
 public  static WIDGET_PROP_MAX_W = WIDGET_PROP_MAX_W();
 public  static WIDGET_PROP_LAYOUT_W = WIDGET_PROP_LAYOUT_W();
 public  static WIDGET_PROP_LAYOUT_H = WIDGET_PROP_LAYOUT_H();
 public  static WIDGET_PROP_VIRTUAL_W = WIDGET_PROP_VIRTUAL_W();
 public  static WIDGET_PROP_VIRTUAL_H = WIDGET_PROP_VIRTUAL_H();
 public  static WIDGET_PROP_NAME = WIDGET_PROP_NAME();
 public  static WIDGET_PROP_VALUE = WIDGET_PROP_VALUE();
 public  static WIDGET_PROP_TEXT = WIDGET_PROP_TEXT();
 public  static WIDGET_PROP_TR_TEXT = WIDGET_PROP_TR_TEXT();
 public  static WIDGET_PROP_STYLE = WIDGET_PROP_STYLE();
 public  static WIDGET_PROP_ENABLE = WIDGET_PROP_ENABLE();
 public  static WIDGET_PROP_MARGIN = WIDGET_PROP_MARGIN();
 public  static WIDGET_PROP_SPACING = WIDGET_PROP_SPACING();
 public  static WIDGET_PROP_LEFT_MARGIN = WIDGET_PROP_LEFT_MARGIN();
 public  static WIDGET_PROP_RIGHT_MARGIN = WIDGET_PROP_RIGHT_MARGIN();
 public  static WIDGET_PROP_TOP_MARGIN = WIDGET_PROP_TOP_MARGIN();
 public  static WIDGET_PROP_BOTTOM_MARGIN = WIDGET_PROP_BOTTOM_MARGIN();
 public  static WIDGET_PROP_STEP = WIDGET_PROP_STEP();
 public  static WIDGET_PROP_VISIBLE = WIDGET_PROP_VISIBLE();
 public  static WIDGET_PROP_ANIM_HINT = WIDGET_PROP_ANIM_HINT();
 public  static WIDGET_PROP_OPEN_ANIM_HINT = WIDGET_PROP_OPEN_ANIM_HINT();
 public  static WIDGET_PROP_CLOSE_ANIM_HINT = WIDGET_PROP_CLOSE_ANIM_HINT();
 public  static WIDGET_PROP_MIN = WIDGET_PROP_MIN();
 public  static WIDGET_PROP_TIPS = WIDGET_PROP_TIPS();
 public  static WIDGET_PROP_INPUT_TYPE = WIDGET_PROP_INPUT_TYPE();
 public  static WIDGET_PROP_READONLY = WIDGET_PROP_READONLY();
 public  static WIDGET_PROP_PASSWORD_VISIBLE = WIDGET_PROP_PASSWORD_VISIBLE();
 public  static WIDGET_PROP_ACTIVE = WIDGET_PROP_ACTIVE();
 public  static WIDGET_PROP_VERTICAL = WIDGET_PROP_VERTICAL();
 public  static WIDGET_PROP_SHOW_TEXT = WIDGET_PROP_SHOW_TEXT();
 public  static WIDGET_PROP_XOFFSET = WIDGET_PROP_XOFFSET();
 public  static WIDGET_PROP_YOFFSET = WIDGET_PROP_YOFFSET();
 public  static WIDGET_PROP_AUTO_PLAY = WIDGET_PROP_AUTO_PLAY();
 public  static WIDGET_PROP_AUTO_FIX = WIDGET_PROP_AUTO_FIX();
 public  static WIDGET_PROP_X_MIN = WIDGET_PROP_X_MIN();
 public  static WIDGET_PROP_X_MAX = WIDGET_PROP_X_MAX();
 public  static WIDGET_PROP_Y_MIN = WIDGET_PROP_Y_MIN();
 public  static WIDGET_PROP_Y_MAX = WIDGET_PROP_Y_MAX();
 public  static WIDGET_PROP_MAX = WIDGET_PROP_MAX();
 public  static WIDGET_PROP_ROW = WIDGET_PROP_ROW();
 public  static WIDGET_PROP_THEME = WIDGET_PROP_THEME();
 public  static WIDGET_PROP_SCRIPT = WIDGET_PROP_SCRIPT();
 public  static WIDGET_PROP_ITEM_WIDTH = WIDGET_PROP_ITEM_WIDTH();
 public  static WIDGET_PROP_ITEM_HEIGHT = WIDGET_PROP_ITEM_HEIGHT();
 public  static WIDGET_PROP_DEFAULT_ITEM_HEIGHT = WIDGET_PROP_DEFAULT_ITEM_HEIGHT();
 public  static WIDGET_PROP_XSLIDABLE = WIDGET_PROP_XSLIDABLE();
 public  static WIDGET_PROP_YSLIDABLE = WIDGET_PROP_YSLIDABLE();
 public  static WIDGET_PROP_REPEAT = WIDGET_PROP_REPEAT();
 public  static WIDGET_PROP_ANIMATABLE = WIDGET_PROP_ANIMATABLE();
 public  static WIDGET_PROP_AUTO_HIDE_SCROLL_BAR = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR();
 public  static WIDGET_PROP_IMAGE = WIDGET_PROP_IMAGE();
 public  static WIDGET_PROP_DRAW_TYPE = WIDGET_PROP_DRAW_TYPE();
 public  static WIDGET_PROP_SELECTABLE = WIDGET_PROP_SELECTABLE();
 public  static WIDGET_PROP_CLICKABLE = WIDGET_PROP_CLICKABLE();
 public  static WIDGET_PROP_SCALE_X = WIDGET_PROP_SCALE_X();
 public  static WIDGET_PROP_SCALE_Y = WIDGET_PROP_SCALE_Y();
 public  static WIDGET_PROP_ANCHOR_X = WIDGET_PROP_ANCHOR_X();
 public  static WIDGET_PROP_ANCHOR_Y = WIDGET_PROP_ANCHOR_Y();
 public  static WIDGET_PROP_ROTATION = WIDGET_PROP_ROTATION();
 public  static WIDGET_PROP_SUB_THEME = WIDGET_PROP_SUB_THEME();
 public  static WIDGET_PROP_COMPACT = WIDGET_PROP_COMPACT();
 public  static WIDGET_PROP_ICON = WIDGET_PROP_ICON();
 public  static WIDGET_PROP_OPTIONS = WIDGET_PROP_OPTIONS();
 public  static WIDGET_PROP_SELECTED = WIDGET_PROP_SELECTED();
 public  static WIDGET_PROP_ACTIVE_ICON = WIDGET_PROP_ACTIVE_ICON();
 public  static WIDGET_PROP_OPEN_WINDOW = WIDGET_PROP_OPEN_WINDOW();
 public  static WIDGET_PROP_SELECTED_INDEX = WIDGET_PROP_SELECTED_INDEX();
 public  static WIDGET_PROP_CLOSE_WHEN_CLICK = WIDGET_PROP_CLOSE_WHEN_CLICK();
 public  static WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE();
 public  static WIDGET_PROP_LINE_GAP = WIDGET_PROP_LINE_GAP();
}

class WidgetType {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static WIDGET_TYPE_NONE = WIDGET_TYPE_NONE();
 public  static WIDGET_TYPE_WINDOW_MANAGER = WIDGET_TYPE_WINDOW_MANAGER();
 public  static WIDGET_TYPE_NORMAL_WINDOW = WIDGET_TYPE_NORMAL_WINDOW();
 public  static WIDGET_TYPE_TOOL_BAR = WIDGET_TYPE_TOOL_BAR();
 public  static WIDGET_TYPE_DIALOG = WIDGET_TYPE_DIALOG();
 public  static WIDGET_TYPE_POPUP = WIDGET_TYPE_POPUP();
 public  static WIDGET_TYPE_SPRITE = WIDGET_TYPE_SPRITE();
 public  static WIDGET_TYPE_KEYBOARD = WIDGET_TYPE_KEYBOARD();
 public  static WIDGET_TYPE_DND = WIDGET_TYPE_DND();
 public  static WIDGET_TYPE_LABEL = WIDGET_TYPE_LABEL();
 public  static WIDGET_TYPE_BUTTON = WIDGET_TYPE_BUTTON();
 public  static WIDGET_TYPE_IMAGE = WIDGET_TYPE_IMAGE();
 public  static WIDGET_TYPE_EDIT = WIDGET_TYPE_EDIT();
 public  static WIDGET_TYPE_PROGRESS_BAR = WIDGET_TYPE_PROGRESS_BAR();
 public  static WIDGET_TYPE_GROUP_BOX = WIDGET_TYPE_GROUP_BOX();
 public  static WIDGET_TYPE_CHECK_BUTTON = WIDGET_TYPE_CHECK_BUTTON();
 public  static WIDGET_TYPE_RADIO_BUTTON = WIDGET_TYPE_RADIO_BUTTON();
 public  static WIDGET_TYPE_DIALOG_TITLE = WIDGET_TYPE_DIALOG_TITLE();
 public  static WIDGET_TYPE_DIALOG_CLIENT = WIDGET_TYPE_DIALOG_CLIENT();
 public  static WIDGET_TYPE_SLIDER = WIDGET_TYPE_SLIDER();
 public  static WIDGET_TYPE_VIEW = WIDGET_TYPE_VIEW();
 public  static WIDGET_TYPE_COMBO_BOX = WIDGET_TYPE_COMBO_BOX();
 public  static WIDGET_TYPE_COMBO_BOX_ITEM = WIDGET_TYPE_COMBO_BOX_ITEM();
 public  static WIDGET_TYPE_SLIDE_VIEW = WIDGET_TYPE_SLIDE_VIEW();
 public  static WIDGET_TYPE_PAGES = WIDGET_TYPE_PAGES();
 public  static WIDGET_TYPE_TAB_BUTTON = WIDGET_TYPE_TAB_BUTTON();
 public  static WIDGET_TYPE_TAB_CONTROL = WIDGET_TYPE_TAB_CONTROL();
 public  static WIDGET_TYPE_TAB_BUTTON_GROUP = WIDGET_TYPE_TAB_BUTTON_GROUP();
 public  static WIDGET_TYPE_BUTTON_GROUP = WIDGET_TYPE_BUTTON_GROUP();
 public  static WIDGET_TYPE_CANDIDATES = WIDGET_TYPE_CANDIDATES();
 public  static WIDGET_TYPE_SPIN_BOX = WIDGET_TYPE_SPIN_BOX();
 public  static WIDGET_TYPE_DRAGGER = WIDGET_TYPE_DRAGGER();
 public  static WIDGET_TYPE_SCROLL_BAR = WIDGET_TYPE_SCROLL_BAR();
 public  static WIDGET_TYPE_SCROLL_BAR_DESKTOP = WIDGET_TYPE_SCROLL_BAR_DESKTOP();
 public  static WIDGET_TYPE_SCROLL_BAR_MOBILE = WIDGET_TYPE_SCROLL_BAR_MOBILE();
 public  static WIDGET_TYPE_SCROLL_VIEW = WIDGET_TYPE_SCROLL_VIEW();
 public  static WIDGET_TYPE_LIST_VIEW = WIDGET_TYPE_LIST_VIEW();
 public  static WIDGET_TYPE_LIST_VIEW_H = WIDGET_TYPE_LIST_VIEW_H();
 public  static WIDGET_TYPE_LIST_ITEM = WIDGET_TYPE_LIST_ITEM();
}

class ImageDrawType {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static IMAGE_DRAW_DEFAULT = IMAGE_DRAW_DEFAULT();
 public  static IMAGE_DRAW_CENTER = IMAGE_DRAW_CENTER();
 public  static IMAGE_DRAW_ICON = IMAGE_DRAW_ICON();
 public  static IMAGE_DRAW_SCALE = IMAGE_DRAW_SCALE();
 public  static IMAGE_DRAW_SCALE_AUTO = IMAGE_DRAW_SCALE_AUTO();
 public  static IMAGE_DRAW_SCALE_W = IMAGE_DRAW_SCALE_W();
 public  static IMAGE_DRAW_SCALE_H = IMAGE_DRAW_SCALE_H();
 public  static IMAGE_DRAW_REPEAT = IMAGE_DRAW_REPEAT();
 public  static IMAGE_DRAW_REPEAT_X = IMAGE_DRAW_REPEAT_X();
 public  static IMAGE_DRAW_REPEAT_Y = IMAGE_DRAW_REPEAT_Y();
 public  static IMAGE_DRAW_9PATCH = IMAGE_DRAW_9PATCH();
 public  static IMAGE_DRAW_3PATCH_X = IMAGE_DRAW_3PATCH_X();
 public  static IMAGE_DRAW_3PATCH_Y = IMAGE_DRAW_3PATCH_Y();
 public  static IMAGE_DRAW_3PATCH_X_SCALE_Y = IMAGE_DRAW_3PATCH_X_SCALE_Y();
 public  static IMAGE_DRAW_3PATCH_Y_SCALE_X = IMAGE_DRAW_3PATCH_Y_SCALE_X();
}

class WidgetState {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static WIDGET_STATE_NONE = WIDGET_STATE_NONE();
 public  static WIDGET_STATE_NORMAL = WIDGET_STATE_NORMAL();
 public  static WIDGET_STATE_PRESSED = WIDGET_STATE_PRESSED();
 public  static WIDGET_STATE_OVER = WIDGET_STATE_OVER();
 public  static WIDGET_STATE_DISABLE = WIDGET_STATE_DISABLE();
 public  static WIDGET_STATE_FOCUSED = WIDGET_STATE_FOCUSED();
 public  static WIDGET_STATE_CHECKED = WIDGET_STATE_CHECKED();
 public  static WIDGET_STATE_UNCHECKED = WIDGET_STATE_UNCHECKED();
 public  static WIDGET_STATE_EMPTY = WIDGET_STATE_EMPTY();
 public  static WIDGET_STATE_ERROR = WIDGET_STATE_ERROR();
 public  static WIDGET_STATE_SELECTED = WIDGET_STATE_SELECTED();
}

class Ret {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 public  static RET_OK = RET_OK();
 public  static RET_OOM = RET_OOM();
 public  static RET_FAIL = RET_FAIL();
 public  static RET_NOT_IMPL = RET_NOT_IMPL();
 public  static RET_QUIT = RET_QUIT();
 public  static RET_FOUND = RET_FOUND();
 public  static RET_REMOVE = RET_REMOVE();
 public  static RET_REPEAT = RET_REPEAT();
 public  static RET_NOT_FOUND = RET_NOT_FOUND();
 public  static RET_DONE = RET_DONE();
 public  static RET_STOP = RET_STOP();
 public  static RET_CONTINUE = RET_CONTINUE();
 public  static RET_BAD_PARAMS = RET_BAD_PARAMS();
}

class Bitmap {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new Bitmap(bitmap_create());
 }

 destroy() {
   return bitmap_destroy(this.nativeObj);
 }

 get w() {
   return bitmap_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return bitmap_t_get_prop_h(this.nativeObj);
 }

 get flags() {
   return bitmap_t_get_prop_flags(this.nativeObj);
 }

 get format() {
   return bitmap_t_get_prop_format(this.nativeObj);
 }

 get name() {
   return bitmap_t_get_prop_name(this.nativeObj);
 }

}

class ResourceManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new ResourceManager(resource_manager());
 }

 ref(type, name) {
   return resource_manager_ref(this.nativeObj, type, name);
 }

 unref(info) {
   return resource_manager_unref(this.nativeObj, info);
 }

}

class Timer {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static add(on_timer, ctx, duration_ms) {
   return timer_add(on_timer, ctx, duration_ms);
 }

 static remove(timer_id) {
   return timer_remove(timer_id);
 }

}

class Tklocale {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new Tklocale(tklocale());
 }

 tr(text) {
   return tklocale_tr(this.nativeObj, text);
 }

 change(language, country) {
   return tklocale_change(this.nativeObj, language, country);
 }

 on(type, on_event, ctx) {
   return tklocale_on(this.nativeObj, type, on_event, ctx);
 }

 off(id) {
   return tklocale_off(this.nativeObj, id);
 }

}

class Idle {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static add(on_idle, ctx) {
   return idle_add(on_idle, ctx);
 }

 static remove(idle_id) {
   return idle_remove(idle_id);
 }

}

class ImageManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new ImageManager(image_manager());
 }

 load(name, image) {
   return image_manager_load(this.nativeObj, name, image);
 }

}

class Canvas {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class Value {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 setBool(value) {
   return value_set_bool(this.nativeObj, value);
 }

 bool() {
   return value_bool(this.nativeObj);
 }

 setInt8(value) {
   return value_set_int8(this.nativeObj, value);
 }

 int8() {
   return value_int8(this.nativeObj);
 }

 setUint8(value) {
   return value_set_uint8(this.nativeObj, value);
 }

 uint8() {
   return value_uint8(this.nativeObj);
 }

 setInt16(value) {
   return value_set_int16(this.nativeObj, value);
 }

 int16() {
   return value_int16(this.nativeObj);
 }

 setUint16(value) {
   return value_set_uint16(this.nativeObj, value);
 }

 uint16() {
   return value_uint16(this.nativeObj);
 }

 setInt32(value) {
   return value_set_int32(this.nativeObj, value);
 }

 int32() {
   return value_int32(this.nativeObj);
 }

 setUint32(value) {
   return value_set_uint32(this.nativeObj, value);
 }

 setInt64(value) {
   return value_set_int64(this.nativeObj, value);
 }

 int64() {
   return value_int64(this.nativeObj);
 }

 setUint64(value) {
   return value_set_uint64(this.nativeObj, value);
 }

 uint64() {
   return value_uint64(this.nativeObj);
 }

 setFloat(value) {
   return value_set_float(this.nativeObj, value);
 }

 float() {
   return value_float(this.nativeObj);
 }

 setDouble(value) {
   return value_set_double(this.nativeObj, value);
 }

 double() {
   return value_double(this.nativeObj);
 }

 setStr(value) {
   return value_set_str(this.nativeObj, value);
 }

 str() {
   return value_str(this.nativeObj);
 }

 isNull() {
   return value_is_null(this.nativeObj);
 }

 int() {
   return value_int(this.nativeObj);
 }

 setInt(value) {
   return value_set_int(this.nativeObj, value);
 }

 static create() {
   return new Value(value_create());
 }

 destroy() {
   return value_destroy(this.nativeObj);
 }

 get type() {
   return value_t_get_prop_type(this.nativeObj);
 }

}

class Point {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class Rect {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class Event {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 get type() {
   return event_t_get_prop_type(this.nativeObj);
 }

 get time() {
   return event_t_get_prop_time(this.nativeObj);
 }

 get target() {
   return event_t_get_prop_target(this.nativeObj);
 }

}

class Widget {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 countChildren() {
   return widget_count_children(this.nativeObj);
 }

 getChild(index) {
   return widget_get_child(this.nativeObj, index);
 }

 indexOf() {
   return widget_index_of(this.nativeObj);
 }

 move(x, y) {
   return widget_move(this.nativeObj, x, y);
 }

 resize(w, h) {
   return widget_resize(this.nativeObj, w, h);
 }

 moveResize(x, y, w, h) {
   return widget_move_resize(this.nativeObj, x, y, w, h);
 }

 setValue(value) {
   return widget_set_value(this.nativeObj, value);
 }

 setText(text) {
   return widget_set_text(this.nativeObj, text);
 }

 useStyle(style) {
   return widget_use_style(this.nativeObj, style);
 }

 setTextUtf8(text) {
   return widget_set_text_utf8(this.nativeObj, text);
 }

 setTrText(text) {
   return widget_set_tr_text(this.nativeObj, text);
 }

 getValue() {
   return widget_get_value(this.nativeObj);
 }

 getText() {
   return widget_get_text(this.nativeObj);
 }

 setName(name) {
   return widget_set_name(this.nativeObj, name);
 }

 setEnable(enable) {
   return widget_set_enable(this.nativeObj, enable);
 }

 setFocused(focused) {
   return widget_set_focused(this.nativeObj, focused);
 }

 lookup(name, recursive) {
   return widget_lookup(this.nativeObj, name, recursive);
 }

 lookupByType(type, recursive) {
   return widget_lookup_by_type(this.nativeObj, type, recursive);
 }

 setVisible(visible, recursive) {
   return widget_set_visible(this.nativeObj, visible, recursive);
 }

 on(type, on_event, ctx) {
   return widget_on(this.nativeObj, type, on_event, ctx);
 }

 off(id) {
   return widget_off(this.nativeObj, id);
 }

 invalidateForce() {
   return widget_invalidate_force(this.nativeObj);
 }

 setPropStr(name, v) {
   return widget_set_prop_str(this.nativeObj, name, v);
 }

 foreach(visit, ctx) {
   return widget_foreach(this.nativeObj, visit, ctx);
 }

 getWindow() {
   return widget_get_window(this.nativeObj);
 }

 getType() {
   return widget_get_type(this.nativeObj);
 }

 clone(parent) {
   return widget_clone(this.nativeObj, parent);
 }

 equal(other) {
   return widget_equal(this.nativeObj, other);
 }

 setSelfLayoutParams(x, y, w, h) {
   return widget_set_self_layout_params(this.nativeObj, x, y, w, h);
 }

 setChildrenLayoutParams(params) {
   return widget_set_children_layout_params(this.nativeObj, params);
 }

 layout() {
   return widget_layout(this.nativeObj);
 }

 destroy() {
   return widget_destroy(this.nativeObj);
 }

 get x() {
   return widget_t_get_prop_x(this.nativeObj);
 }

 get y() {
   return widget_t_get_prop_y(this.nativeObj);
 }

 get w() {
   return widget_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return widget_t_get_prop_h(this.nativeObj);
 }

 get styleName() {
   return widget_t_get_prop_style_name(this.nativeObj);
 }

 get enable() {
   return widget_t_get_prop_enable(this.nativeObj);
 }

 set visible(value) {
   widget_t_set_prop_visible(this.nativeObj, value);
 }

 get visible() {
   return widget_t_get_prop_visible(this.nativeObj);
 }

 get name() {
   return widget_t_get_prop_name(this.nativeObj);
 }

 get trText() {
   return widget_t_get_prop_tr_text(this.nativeObj);
 }

}

class ResourceInfo {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 get type() {
   return resource_info_t_get_prop_type(this.nativeObj);
 }

 get size() {
   return resource_info_t_get_prop_size(this.nativeObj);
 }

 get name() {
   return resource_info_t_get_prop_name(this.nativeObj);
 }

}

class Label extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Label(label_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

}

class ListItem extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ListItem(list_item_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new ListItem(list_item_cast(widget));
 }

}

class ListViewH extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ListViewH(list_view_h_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setItemWidth(item_width) {
   return list_view_h_set_item_width(this.nativeObj, item_width);
 }

 setSpacing(spacing) {
   return list_view_h_set_spacing(this.nativeObj, spacing);
 }

 static cast(widget) {
   return new ListViewH(list_view_h_cast(widget));
 }

 get itemWidth() {
   return list_view_h_t_get_prop_item_width(this.nativeObj);
 }

 get spacing() {
   return list_view_h_t_get_prop_spacing(this.nativeObj);
 }

}

class ListView extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ListView(list_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setItemHeight(item_height) {
   return list_view_set_item_height(this.nativeObj, item_height);
 }

 setDefaultItemHeight(default_item_height) {
   return list_view_set_default_item_height(this.nativeObj, default_item_height);
 }

 setAutoHideScrollBar(auto_hide_scroll_bar) {
   return list_view_set_auto_hide_scroll_bar(this.nativeObj, auto_hide_scroll_bar);
 }

 static cast(widget) {
   return new ListView(list_view_cast(widget));
 }

 get itemHeight() {
   return list_view_t_get_prop_item_height(this.nativeObj);
 }

 get defaultItemHeight() {
   return list_view_t_get_prop_default_item_height(this.nativeObj);
 }

 get autoHideScrollBar() {
   return list_view_t_get_prop_auto_hide_scroll_bar(this.nativeObj);
 }

}

class ComboBox extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ComboBox(combo_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new ComboBox(combo_box_cast(widget));
 }

 setOpenWindow(open_window) {
   return combo_box_set_open_window(this.nativeObj, open_window);
 }

 resetOptions() {
   return combo_box_reset_options(this.nativeObj);
 }

 countOptions() {
   return combo_box_count_options(this.nativeObj);
 }

 setSelectedIndex(index) {
   return combo_box_set_selected_index(this.nativeObj, index);
 }

 appendOption(value, text) {
   return combo_box_append_option(this.nativeObj, value, text);
 }

 setOptions(options) {
   return combo_box_set_options(this.nativeObj, options);
 }

 getValue() {
   return combo_box_get_value(this.nativeObj);
 }

 getText() {
   return combo_box_get_text(this.nativeObj);
 }

 get openWindow() {
   return combo_box_t_get_prop_open_window(this.nativeObj);
 }

 get selectedIndex() {
   return combo_box_t_get_prop_selected_index(this.nativeObj);
 }

 get value() {
   return combo_box_t_get_prop_value(this.nativeObj);
 }

 get options() {
   return combo_box_t_get_prop_options(this.nativeObj);
 }

}

class Popup extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Popup(popup_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new Popup(popup_cast(widget));
 }

 get theme() {
   return popup_t_get_prop_theme(this.nativeObj);
 }

 get animHint() {
   return popup_t_get_prop_anim_hint(this.nativeObj);
 }

 get closeWhenClick() {
   return popup_t_get_prop_close_when_click(this.nativeObj);
 }

 get closeWhenClickOutside() {
   return popup_t_get_prop_close_when_click_outside(this.nativeObj);
 }

}

class ProgressBar extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ProgressBar(progress_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new ProgressBar(progress_bar_cast(widget));
 }

 setValue(value) {
   return progress_bar_set_value(this.nativeObj, value);
 }

 setVertical(vertical) {
   return progress_bar_set_vertical(this.nativeObj, vertical);
 }

 setShowText(show_text) {
   return progress_bar_set_show_text(this.nativeObj, show_text);
 }

 get value() {
   return progress_bar_t_get_prop_value(this.nativeObj);
 }

 get vertical() {
   return progress_bar_t_get_prop_vertical(this.nativeObj);
 }

 get showText() {
   return progress_bar_t_get_prop_show_text(this.nativeObj);
 }

}

class DialogClient extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new DialogClient(dialog_client_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new DialogClient(dialog_client_cast(widget));
 }

}

class DialogTitle extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new DialogTitle(dialog_title_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new DialogTitle(dialog_title_cast(widget));
 }

}

class Dialog extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Dialog(dialog_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createSimple(parent, x, y, w, h) {
   return new Dialog(dialog_create_simple(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new Dialog(dialog_cast(widget));
 }

 static open(name) {
   return new Dialog(dialog_open(name));
 }

 setTitle(title) {
   return dialog_set_title(this.nativeObj, title);
 }

 modal() {
   return dialog_modal(this.nativeObj);
 }

 quit(code) {
   return dialog_quit(this.nativeObj, code);
 }

}

class Dragger extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Dragger(dragger_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new Dragger(dragger_cast(widget));
 }

 setRange(x_min, y_min, x_max, y_max) {
   return dragger_set_range(this.nativeObj, x_min, y_min, x_max, y_max);
 }

 get xMin() {
   return dragger_t_get_prop_x_min(this.nativeObj);
 }

 get yMin() {
   return dragger_t_get_prop_y_min(this.nativeObj);
 }

 get xMax() {
   return dragger_t_get_prop_x_max(this.nativeObj);
 }

 get yMax() {
   return dragger_t_get_prop_y_max(this.nativeObj);
 }

}

class Edit extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Edit(edit_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new Edit(edit_cast(widget));
 }

 getInt() {
   return edit_get_int(this.nativeObj);
 }

 getDouble() {
   return edit_get_double(this.nativeObj);
 }

 setTextLimit(min, max) {
   return edit_set_text_limit(this.nativeObj, min, max);
 }

 setIntLimit(min, max, step) {
   return edit_set_int_limit(this.nativeObj, min, max, step);
 }

 setFloatLimit(min, max, step) {
   return edit_set_float_limit(this.nativeObj, min, max, step);
 }

 setReadonly(readonly) {
   return edit_set_readonly(this.nativeObj, readonly);
 }

 setAutoFix(auto_fix) {
   return edit_set_auto_fix(this.nativeObj, auto_fix);
 }

 setInputType(type) {
   return edit_set_input_type(this.nativeObj, type);
 }

 setInputTips(tips) {
   return edit_set_input_tips(this.nativeObj, tips);
 }

 setPasswordVisible(password_visible) {
   return edit_set_password_visible(this.nativeObj, password_visible);
 }

 get readonly() {
   return edit_t_get_prop_readonly(this.nativeObj);
 }

 get passwordVisible() {
   return edit_t_get_prop_password_visible(this.nativeObj);
 }

 get autoFix() {
   return edit_t_get_prop_auto_fix(this.nativeObj);
 }

 get topMargin() {
   return edit_t_get_prop_top_margin(this.nativeObj);
 }

 get bottomMargin() {
   return edit_t_get_prop_bottom_margin(this.nativeObj);
 }

 get leftMargin() {
   return edit_t_get_prop_left_margin(this.nativeObj);
 }

 get rightMargin() {
   return edit_t_get_prop_right_margin(this.nativeObj);
 }

 get tips() {
   return edit_t_get_prop_tips(this.nativeObj);
 }

}

class ScrollBar extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ScrollBar(scroll_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new ScrollBar(scroll_bar_cast(widget));
 }

 static createMobile(parent, x, y, w, h) {
   return new ScrollBar(scroll_bar_create_mobile(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createDesktop(parent, x, y, w, h) {
   return new ScrollBar(scroll_bar_create_desktop(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setParams(virtual_size, row) {
   return scroll_bar_set_params(this.nativeObj, virtual_size, row);
 }

 scrollTo(value, duration) {
   return scroll_bar_scroll_to(this.nativeObj, value, duration);
 }

 setValue(value) {
   return scroll_bar_set_value(this.nativeObj, value);
 }

 addDelta(delta) {
   return scroll_bar_add_delta(this.nativeObj, delta);
 }

 scrollDelta(delta) {
   return scroll_bar_scroll_delta(this.nativeObj, delta);
 }

 setValueOnly(value) {
   return scroll_bar_set_value_only(this.nativeObj, value);
 }

 isMobile() {
   return scroll_bar_is_mobile(this.nativeObj);
 }

 get virtualSize() {
   return scroll_bar_t_get_prop_virtual_size(this.nativeObj);
 }

 get value() {
   return scroll_bar_t_get_prop_value(this.nativeObj);
 }

 get row() {
   return scroll_bar_t_get_prop_row(this.nativeObj);
 }

 get animatable() {
   return scroll_bar_t_get_prop_animatable(this.nativeObj);
 }

}

class ScrollView extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ScrollView(scroll_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new ScrollView(scroll_view_cast(widget));
 }

 setVirtualW(w) {
   return scroll_view_set_virtual_w(this.nativeObj, w);
 }

 setVirtualH(h) {
   return scroll_view_set_virtual_h(this.nativeObj, h);
 }

 setXslidable(xslidable) {
   return scroll_view_set_xslidable(this.nativeObj, xslidable);
 }

 setYslidable(yslidable) {
   return scroll_view_set_yslidable(this.nativeObj, yslidable);
 }

 setOffset(xoffset, yoffset) {
   return scroll_view_set_offset(this.nativeObj, xoffset, yoffset);
 }

 scrollTo(xoffset_end, yoffset_end, duration) {
   return scroll_view_scroll_to(this.nativeObj, xoffset_end, yoffset_end, duration);
 }

 get virtualW() {
   return scroll_view_t_get_prop_virtual_w(this.nativeObj);
 }

 get virtualH() {
   return scroll_view_t_get_prop_virtual_h(this.nativeObj);
 }

 get xoffset() {
   return scroll_view_t_get_prop_xoffset(this.nativeObj);
 }

 get yoffset() {
   return scroll_view_t_get_prop_yoffset(this.nativeObj);
 }

 get xslidable() {
   return scroll_view_t_get_prop_xslidable(this.nativeObj);
 }

 get yslidable() {
   return scroll_view_t_get_prop_yslidable(this.nativeObj);
 }

}

class SlideView extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new SlideView(slide_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new SlideView(slide_view_cast(widget));
 }

 setAutoPlay(auto_play) {
   return slide_view_set_auto_play(this.nativeObj, auto_play);
 }

 setActive(index) {
   return slide_view_set_active(this.nativeObj, index);
 }

 setVertical(vertical) {
   return slide_view_set_vertical(this.nativeObj, vertical);
 }

 get vertical() {
   return slide_view_t_get_prop_vertical(this.nativeObj);
 }

 get autoPlay() {
   return slide_view_t_get_prop_auto_play(this.nativeObj);
 }

}

class Slider extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Slider(slider_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new Slider(slider_cast(widget));
 }

 setValue(value) {
   return slider_set_value(this.nativeObj, value);
 }

 setMin(min) {
   return slider_set_min(this.nativeObj, min);
 }

 setMax(max) {
   return slider_set_max(this.nativeObj, max);
 }

 setStep(step) {
   return slider_set_step(this.nativeObj, step);
 }

 setVertical(vertical) {
   return slider_set_vertical(this.nativeObj, vertical);
 }

 get value() {
   return slider_t_get_prop_value(this.nativeObj);
 }

 get min() {
   return slider_t_get_prop_min(this.nativeObj);
 }

 get max() {
   return slider_t_get_prop_max(this.nativeObj);
 }

 get step() {
   return slider_t_get_prop_step(this.nativeObj);
 }

 get vertical() {
   return slider_t_get_prop_vertical(this.nativeObj);
 }

}

class SpinBox extends Edit {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new SpinBox(spin_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new SpinBox(spin_box_cast(widget));
 }

}

class TabButtonGroup extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TabButtonGroup(tab_button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TabButtonGroup(tab_button_group_cast(widget));
 }

 get compact() {
   return tab_button_group_t_get_prop_compact(this.nativeObj);
 }

}

class TabButton extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TabButton(tab_button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TabButton(tab_button_cast(widget));
 }

 setValue(value) {
   return tab_button_set_value(this.nativeObj, value);
 }

 setIcon(name) {
   return tab_button_set_icon(this.nativeObj, name);
 }

 setActiveIcon(name) {
   return tab_button_set_active_icon(this.nativeObj, name);
 }

 get value() {
   return tab_button_t_get_prop_value(this.nativeObj);
 }

 get activeIcon() {
   return tab_button_t_get_prop_active_icon(this.nativeObj);
 }

 get icon() {
   return tab_button_t_get_prop_icon(this.nativeObj);
 }

}

class TabControl extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TabControl(tab_control_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TabControl(tab_control_cast(widget));
 }

}

class ButtonGroup extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ButtonGroup(button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new ButtonGroup(button_group_cast(widget));
 }

}

class Button extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Button(button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new Button(button_cast(widget));
 }

 setRepeat(repeat) {
   return button_set_repeat(this.nativeObj, repeat);
 }

 get repeat() {
   return button_t_get_prop_repeat(this.nativeObj);
 }

}

class WheelEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new WheelEvent(wheel_event_cast(event));
 }

 get dx() {
   return wheel_event_t_get_prop_dx(this.nativeObj);
 }

 get dy() {
   return wheel_event_t_get_prop_dy(this.nativeObj);
 }

 get alt() {
   return wheel_event_t_get_prop_alt(this.nativeObj);
 }

 get ctrl() {
   return wheel_event_t_get_prop_ctrl(this.nativeObj);
 }

 get shift() {
   return wheel_event_t_get_prop_shift(this.nativeObj);
 }

}

class PropChangeEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new PropChangeEvent(prop_change_event_cast(event));
 }

 get name() {
   return prop_change_event_t_get_prop_name(this.nativeObj);
 }

 get value() {
   return prop_change_event_t_get_prop_value(this.nativeObj);
 }

}

class PointerEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new PointerEvent(pointer_event_cast(event));
 }

 get x() {
   return pointer_event_t_get_prop_x(this.nativeObj);
 }

 get y() {
   return pointer_event_t_get_prop_y(this.nativeObj);
 }

 get button() {
   return pointer_event_t_get_prop_button(this.nativeObj);
 }

 get pressed() {
   return pointer_event_t_get_prop_pressed(this.nativeObj);
 }

 get alt() {
   return pointer_event_t_get_prop_alt(this.nativeObj);
 }

 get ctrl() {
   return pointer_event_t_get_prop_ctrl(this.nativeObj);
 }

 get shift() {
   return pointer_event_t_get_prop_shift(this.nativeObj);
 }

}

class KeyEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new KeyEvent(key_event_cast(event));
 }

 get key() {
   return key_event_t_get_prop_key(this.nativeObj);
 }

 get alt() {
   return key_event_t_get_prop_alt(this.nativeObj);
 }

 get ctrl() {
   return key_event_t_get_prop_ctrl(this.nativeObj);
 }

 get shift() {
   return key_event_t_get_prop_shift(this.nativeObj);
 }

 get caplock() {
   return key_event_t_get_prop_caplock(this.nativeObj);
 }

}

class PaintEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new PaintEvent(paint_event_cast(event));
 }

 get c() {
   return paint_event_t_get_prop_c(this.nativeObj);
 }

}

class View extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new View(view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new View(view_cast(widget));
 }

}

class GroupBox extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new GroupBox(group_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new GroupBox(group_box_cast(widget));
 }

}

class RichText extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new RichText(rich_text_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setText(text) {
   return rich_text_set_text(this.nativeObj, text);
 }

 get lineGap() {
   return rich_text_t_get_prop_line_gap(this.nativeObj);
 }

}

class CheckButton extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new CheckButton(check_button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createRadio(parent, x, y, w, h) {
   return new CheckButton(check_button_create_radio(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setValue(value) {
   return check_button_set_value(this.nativeObj, value);
 }

 static cast(widget) {
   return new CheckButton(check_button_cast(widget));
 }

 get value() {
   return check_button_t_get_prop_value(this.nativeObj);
 }

}

class Image extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Image(image_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setImageName(name) {
   return image_set_image_name(this.nativeObj, name);
 }

 setDrawType(draw_type) {
   return image_set_draw_type(this.nativeObj, draw_type);
 }

 setRotation(rotation) {
   return image_set_rotation(this.nativeObj, rotation);
 }

 setScale(scale_x, scale_y) {
   return image_set_scale(this.nativeObj, scale_x, scale_y);
 }

 setAnchor(anchor_x, anchor_y) {
   return image_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 setSelected(selected) {
   return image_set_selected(this.nativeObj, selected);
 }

 setSelectable(selectable) {
   return image_set_selectable(this.nativeObj, selectable);
 }

 setClickable(clickable) {
   return image_set_clickable(this.nativeObj, clickable);
 }

 get anchorX() {
   return image_t_get_prop_anchor_x(this.nativeObj);
 }

 get anchorY() {
   return image_t_get_prop_anchor_y(this.nativeObj);
 }

 get scaleX() {
   return image_t_get_prop_scale_x(this.nativeObj);
 }

}

class WindowManager extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static instance() {
   return new WindowManager(window_manager());
 }

 static cast(widget) {
   return new WindowManager(window_manager_cast(widget));
 }

 setShowFps(show_fps) {
   return window_manager_set_show_fps(this.nativeObj, show_fps);
 }

 get showFps() {
   return window_manager_t_get_prop_show_fps(this.nativeObj);
 }

}

class Window extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Window(window_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new Window(window_cast(widget));
 }

 static open(name) {
   return new Window(window_open(name));
 }

 static openAndClose(name, to_close) {
   return new Window(window_open_and_close(name, to_close));
 }

 close() {
   return window_close(this.nativeObj);
 }

 get theme() {
   return window_t_get_prop_theme(this.nativeObj);
 }

 get animHint() {
   return window_t_get_prop_anim_hint(this.nativeObj);
 }

}

class ComboBoxItem extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ComboBoxItem(combo_box_item_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new ComboBoxItem(combo_box_item_cast(widget));
 }

 setSelected(selected) {
   return combo_box_item_set_selected(this.nativeObj, selected);
 }

 setValue(value) {
   return combo_box_item_set_value(this.nativeObj, value);
 }

 get value() {
   return combo_box_item_t_get_prop_value(this.nativeObj);
 }

 get selected() {
   return combo_box_item_t_get_prop_selected(this.nativeObj);
 }

}

class Pages extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Pages(pages_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new Pages(pages_cast(widget));
 }

 setActive(index) {
   return pages_set_active(this.nativeObj, index);
 }

 setActiveByName(name) {
   return pages_set_active_by_name(this.nativeObj, name);
 }

 get active() {
   return pages_t_get_prop_active(this.nativeObj);
 }

}

