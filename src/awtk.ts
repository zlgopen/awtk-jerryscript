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
declare function IMAGE_DRAW_PATCH9();
declare function IMAGE_DRAW_PATCH3_X();
declare function IMAGE_DRAW_PATCH3_Y();
declare function IMAGE_DRAW_PATCH3_X_SCALE_Y();
declare function IMAGE_DRAW_PATCH3_Y_SCALE_X();
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
declare function WIDGET_TYPE_COLOR_PICKER();
declare function WIDGET_TYPE_COLOR_COMPONENT();
declare function WIDGET_TYPE_COLOR_TILE();
declare function WIDGET_TYPE_RICH_TEXT();
declare function WIDGET_TYPE_APP_BAR();
declare function WIDGET_TYPE_GRID();
declare function WIDGET_TYPE_ROW();
declare function WIDGET_TYPE_COLUMN();
declare function WIDGET_TYPE_CALIBRATION_WIN();
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
declare function ALIGN_H_NONE();
declare function ALIGN_H_CENTER();
declare function ALIGN_H_LEFT();
declare function ALIGN_H_RIGHT();
declare function BITMAP_FLAG_NONE();
declare function BITMAP_FLAG_OPAQUE();
declare function BITMAP_FLAG_IMMUTABLE();
declare function BITMAP_FLAG_TEXTURE();
declare function BITMAP_FLAG_CHANGED();
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
declare function EVT_WINDOW_WILL_OPEN();
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
declare function INPUT_TEXT();
declare function INPUT_INT();
declare function INPUT_UINT();
declare function INPUT_HEX();
declare function INPUT_FLOAT();
declare function INPUT_UFLOAT();
declare function INPUT_EMAIL();
declare function INPUT_PASSWORD();
declare function INPUT_PHONE();
declare function BITMAP_FMT_NONE();
declare function BITMAP_FMT_RGBA8888();
declare function BITMAP_FMT_ABGR8888();
declare function BITMAP_FMT_BGRA8888();
declare function BITMAP_FMT_ARGB8888();
declare function BITMAP_FMT_RGB565();
declare function BITMAP_FMT_BGR565();
declare function BITMAP_FMT_RGB888();
declare function BITMAP_FMT_BGR888();
declare function ASSET_TYPE_NONE();
declare function ASSET_TYPE_FONT();
declare function ASSET_TYPE_IMAGE();
declare function ASSET_TYPE_STYLE();
declare function ASSET_TYPE_UI();
declare function ASSET_TYPE_XML();
declare function ASSET_TYPE_STRINGS();
declare function ASSET_TYPE_DATA();
declare function ALIGN_V_NONE();
declare function ALIGN_V_MIDDLE();
declare function ALIGN_V_TOP();
declare function ALIGN_V_BOTTOM();
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
declare function WIDGET_PROP_CURSOR();
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
declare function WIDGET_PROP_ANIMATION();
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
declare function WIDGET_PROP_BG_COLOR();
declare function WIDGET_PROP_BORDER_COLOR();
declare function WIDGET_PROP_DELAY();
declare function timer_add(on_timer, ctx, duration_ms);
declare function timer_remove(timer_id);
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
declare function widget_count_children(widget);
declare function widget_get_child(widget, index);
declare function widget_index_of(widget);
declare function widget_move(widget, x, y);
declare function widget_resize(widget, w, h);
declare function widget_move_resize(widget, x, y, w, h);
declare function widget_set_value(widget, value);
declare function widget_add_value(widget, delta);
declare function widget_use_style(widget, style);
declare function widget_set_text_utf8(widget, text);
declare function widget_set_tr_text(widget, text);
declare function widget_get_value(widget);
declare function widget_get_text(widget);
declare function widget_set_name(widget, name);
declare function widget_set_cursor(widget, cursor);
declare function widget_set_animation(widget, animation);
declare function widget_set_enable(widget, enable);
declare function widget_set_focused(widget, focused);
declare function widget_child(widget, name);
declare function widget_lookup(widget, name, recursive);
declare function widget_lookup_by_type(widget, type, recursive);
declare function widget_set_visible(widget, visible, recursive);
declare function widget_on(widget, type, on_event, ctx);
declare function widget_off(widget, id);
declare function widget_invalidate_force(widget);
declare function widget_set_prop_str(widget, name, v);
declare function widget_foreach(widget, visit, ctx);
declare function widget_get_window(widget);
declare function widget_get_window_manager(widget);
declare function widget_get_type(widget);
declare function widget_clone(widget, parent);
declare function widget_equal(widget, other);
declare function widget_set_self_layout_params(widget, x, y, w, h);
declare function widget_set_children_layout_params(widget, params);
declare function widget_layout(widget);
declare function widget_cast(widget);
declare function widget_destroy(widget);
declare function widget_t_get_prop_x(nativeObj);
declare function widget_t_get_prop_y(nativeObj);
declare function widget_t_get_prop_w(nativeObj);
declare function widget_t_get_prop_h(nativeObj);
declare function widget_t_get_prop_name(nativeObj);
declare function widget_t_get_prop_tr_text(nativeObj);
declare function widget_t_get_prop_style(nativeObj);
declare function widget_t_get_prop_animation(nativeObj);
declare function widget_t_get_prop_enable(nativeObj);
declare function widget_t_get_prop_visible(nativeObj);
declare function widget_t_set_prop_visible(nativeObj, value);
declare function asset_info_t_get_prop_type(nativeObj);
declare function asset_info_t_get_prop_subtype(nativeObj);
declare function asset_info_t_get_prop_is_in_rom(nativeObj);
declare function asset_info_t_get_prop_size(nativeObj);
declare function asset_info_t_get_prop_refcount(nativeObj);
declare function asset_info_t_get_prop_name(nativeObj);
declare function event_cast(event);
declare function event_t_get_prop_type(nativeObj);
declare function event_t_get_prop_time(nativeObj);
declare function event_t_get_prop_target(nativeObj);
declare function locale_info();
declare function locale_info_tr(locale_info, text);
declare function locale_info_change(locale_info, language, country);
declare function locale_info_on(locale_info, type, on_event, ctx);
declare function locale_info_off(locale_info, id);
declare function bitmap_create();
declare function bitmap_create_ex(w, h, format);
declare function bitmap_get_bpp(bitmap);
declare function bitmap_destroy(bitmap);
declare function bitmap_t_get_prop_w(nativeObj);
declare function bitmap_t_get_prop_h(nativeObj);
declare function bitmap_t_get_prop_flags(nativeObj);
declare function bitmap_t_get_prop_format(nativeObj);
declare function bitmap_t_get_prop_name(nativeObj);
declare function image_manager();
declare function image_manager_load(imm, name, image);
declare function idle_add(on_idle, ctx);
declare function idle_remove(idle_id);
declare function assets_manager();
declare function assets_manager_ref(rm, type, name);
declare function assets_manager_unref(rm, info);
declare function app_bar_create(parent, x, y, w, h);
declare function app_bar_cast(widget);
declare function button_group_create(parent, x, y, w, h);
declare function button_group_cast(widget);
declare function button_create(parent, x, y, w, h);
declare function button_cast(widget);
declare function button_set_repeat(widget, repeat);
declare function button_t_get_prop_repeat(nativeObj);
declare function check_button_create(parent, x, y, w, h);
declare function check_button_create_radio(parent, x, y, w, h);
declare function check_button_set_value(widget, value);
declare function check_button_cast(widget);
declare function check_button_t_get_prop_value(nativeObj);
declare function color_picker_create(parent, x, y, w, h);
declare function color_picker_set_color(widget, color);
declare function color_picker_cast(widget);
declare function color_picker_t_get_prop_value(nativeObj);
declare function color_tile_create(parent, x, y, w, h);
declare function color_tile_cast(widget);
declare function color_tile_set_bg_color(widget, color);
declare function color_tile_t_get_prop_bg_color(nativeObj);
declare function color_tile_t_get_prop_border_color(nativeObj);
declare function column_create(parent, x, y, w, h);
declare function column_cast(widget);
declare function combo_box_item_create(parent, x, y, w, h);
declare function combo_box_item_cast(widget);
declare function combo_box_item_set_selected(widget, selected);
declare function combo_box_item_set_value(widget, value);
declare function combo_box_item_t_get_prop_value(nativeObj);
declare function combo_box_item_t_get_prop_selected(nativeObj);
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
declare function dialog_client_create(parent, x, y, w, h);
declare function dialog_client_cast(widget);
declare function dialog_create(parent, x, y, w, h);
declare function dialog_create_simple(parent, x, y, w, h);
declare function dialog_cast(widget);
declare function dialog_get_title(widget);
declare function dialog_get_client(widget);
declare function dialog_open(name);
declare function dialog_set_title(widget, title);
declare function dialog_modal(widget);
declare function dialog_quit(widget, code);
declare function dialog_title_create(parent, x, y, w, h);
declare function dialog_title_cast(widget);
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
declare function edit_set_int(widget, value);
declare function edit_set_double(widget, value);
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
declare function grid_create(parent, x, y, w, h);
declare function grid_cast(widget);
declare function group_box_create(parent, x, y, w, h);
declare function group_box_cast(widget);
declare function guage_create(parent, x, y, w, h);
declare function guage_cast(widget);
declare function guage_set_angle(widget, angle);
declare function guage_set_pointer_image(widget, angle);
declare function guage_set_bg_image(widget, bg_image);
declare function guage_t_get_prop_angle(nativeObj);
declare function guage_t_get_prop_bg_image(nativeObj);
declare function guage_t_get_prop_pointer_image(nativeObj);
declare function image_animation_create(parent, x, y, w, h);
declare function image_animation_set_loop(widget, loop);
declare function image_animation_set_image(widget, image);
declare function image_animation_set_interval(widget, interval);
declare function image_animation_set_delay(widget, delay);
declare function image_animation_set_auto_play(widget, auto_play);
declare function image_animation_set_sequence(widget, sequence);
declare function image_animation_play(widget);
declare function image_animation_stop(widget);
declare function image_animation_pause(widget);
declare function image_animation_cast(widget);
declare function image_animation_t_get_prop_image(nativeObj);
declare function image_animation_t_get_prop_sequence(nativeObj);
declare function image_animation_t_get_prop_loop(nativeObj);
declare function image_animation_t_get_prop_auto_play(nativeObj);
declare function image_animation_t_get_prop_interval(nativeObj);
declare function image_animation_t_get_prop_delay(nativeObj);
declare function image_create(parent, x, y, w, h);
declare function image_set_image(widget, name);
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
declare function image_t_get_prop_scale_y(nativeObj);
declare function image_t_get_prop_rotation(nativeObj);
declare function image_t_get_prop_clickable(nativeObj);
declare function image_t_get_prop_selectable(nativeObj);
declare function image_t_get_prop_image(nativeObj);
declare function image_t_get_prop_draw_type(nativeObj);
declare function image_t_get_prop_selected(nativeObj);
declare function key_event_cast(event);
declare function key_event_t_get_prop_key(nativeObj);
declare function key_event_t_get_prop_alt(nativeObj);
declare function key_event_t_get_prop_ctrl(nativeObj);
declare function key_event_t_get_prop_shift(nativeObj);
declare function key_event_t_get_prop_caplock(nativeObj);
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
declare function pages_create(parent, x, y, w, h);
declare function pages_cast(widget);
declare function pages_set_active(widget, index);
declare function pages_set_active_by_name(widget, name);
declare function pages_t_get_prop_active(nativeObj);
declare function paint_event_cast(event);
declare function paint_event_t_get_prop_c(nativeObj);
declare function pointer_event_cast(event);
declare function pointer_event_t_get_prop_x(nativeObj);
declare function pointer_event_t_get_prop_y(nativeObj);
declare function pointer_event_t_get_prop_button(nativeObj);
declare function pointer_event_t_get_prop_pressed(nativeObj);
declare function pointer_event_t_get_prop_alt(nativeObj);
declare function pointer_event_t_get_prop_ctrl(nativeObj);
declare function pointer_event_t_get_prop_shift(nativeObj);
declare function popup_create(parent, x, y, w, h);
declare function popup_cast(widget);
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
declare function prop_change_event_cast(event);
declare function prop_change_event_t_get_prop_name(nativeObj);
declare function prop_change_event_t_get_prop_value(nativeObj);
declare function rich_text_create(parent, x, y, w, h);
declare function rich_text_set_text(widget, text);
declare function rich_text_t_get_prop_line_gap(nativeObj);
declare function row_create(parent, x, y, w, h);
declare function row_cast(widget);
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
declare function switch_create(parent, x, y, w, h);
declare function switch_set_value(widget, value);
declare function switch_cast(widget);
declare function switch_t_get_prop_value(nativeObj);
declare function switch_t_get_prop_max_xoffset_ratio(nativeObj);
declare function switch_t_get_prop_round_radius(nativeObj);
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
declare function text_selector_create(parent, x, y, w, h);
declare function text_selector_cast(widget);
declare function text_selector_reset_options(widget);
declare function text_selector_count_options(widget);
declare function text_selector_append_option(widget, value, text);
declare function text_selector_set_options(widget, options);
declare function text_selector_set_range_options(widget, start, nr, step);
declare function text_selector_get_value(widget);
declare function text_selector_set_value(widget, value);
declare function text_selector_get_text(widget);
declare function text_selector_set_text(widget, text);
declare function text_selector_set_selected_index(widget, index);
declare function text_selector_set_visible_nr(widget, visible_nr);
declare function text_selector_t_get_prop_visible_nr(nativeObj);
declare function text_selector_t_get_prop_selected_index(nativeObj);
declare function text_selector_t_get_prop_options(nativeObj);
declare function time_clock_create(parent, x, y, w, h);
declare function time_clock_cast(widget);
declare function time_clock_set_hour(widget, hour);
declare function time_clock_set_minute(widget, minute);
declare function time_clock_set_second(widget, second);
declare function time_clock_set_hour_image(widget, hour);
declare function time_clock_set_minute_image(widget, minute_image);
declare function time_clock_set_second_image(widget, second_image);
declare function time_clock_set_bg_image(widget, bg_image);
declare function time_clock_set_image(widget, image);
declare function time_clock_t_get_prop_hour(nativeObj);
declare function time_clock_t_get_prop_minute(nativeObj);
declare function time_clock_t_get_prop_second(nativeObj);
declare function time_clock_t_get_prop_image(nativeObj);
declare function time_clock_t_get_prop_bg_image(nativeObj);
declare function time_clock_t_get_prop_hour_image(nativeObj);
declare function time_clock_t_get_prop_minute_image(nativeObj);
declare function time_clock_t_get_prop_second_image(nativeObj);
declare function view_create(parent, x, y, w, h);
declare function view_cast(widget);
declare function wheel_event_cast(event);
declare function wheel_event_t_get_prop_dx(nativeObj);
declare function wheel_event_t_get_prop_dy(nativeObj);
declare function wheel_event_t_get_prop_alt(nativeObj);
declare function wheel_event_t_get_prop_ctrl(nativeObj);
declare function wheel_event_t_get_prop_shift(nativeObj);
declare function window_base_t_get_prop_theme(nativeObj);
declare function window_manager();
declare function window_manager_cast(widget);
declare function window_manager_set_show_fps(widget, show_fps);
declare function window_manager_set_cursor(widget, cursor);
declare function window_manager_t_get_prop_show_fps(nativeObj);
declare function window_create(parent, x, y, w, h);
declare function window_open(name);
declare function window_open_and_close(name, to_close);
declare function window_close(widget);
declare function window_cast(widget);

enum ImageDrawType {
 DEFAULT = IMAGE_DRAW_DEFAULT(),
 CENTER = IMAGE_DRAW_CENTER(),
 ICON = IMAGE_DRAW_ICON(),
 SCALE = IMAGE_DRAW_SCALE(),
 SCALE_AUTO = IMAGE_DRAW_SCALE_AUTO(),
 SCALE_W = IMAGE_DRAW_SCALE_W(),
 SCALE_H = IMAGE_DRAW_SCALE_H(),
 REPEAT = IMAGE_DRAW_REPEAT(),
 REPEAT_X = IMAGE_DRAW_REPEAT_X(),
 REPEAT_Y = IMAGE_DRAW_REPEAT_Y(),
 PATCH9 = IMAGE_DRAW_PATCH9(),
 PATCH3_X = IMAGE_DRAW_PATCH3_X(),
 PATCH3_Y = IMAGE_DRAW_PATCH3_Y(),
 PATCH3_X_SCALE_Y = IMAGE_DRAW_PATCH3_X_SCALE_Y(),
 PATCH3_Y_SCALE_X = IMAGE_DRAW_PATCH3_Y_SCALE_X(),
};

enum WidgetType {
 NONE = WIDGET_TYPE_NONE(),
 WINDOW_MANAGER = WIDGET_TYPE_WINDOW_MANAGER(),
 NORMAL_WINDOW = WIDGET_TYPE_NORMAL_WINDOW(),
 TOOL_BAR = WIDGET_TYPE_TOOL_BAR(),
 DIALOG = WIDGET_TYPE_DIALOG(),
 POPUP = WIDGET_TYPE_POPUP(),
 SPRITE = WIDGET_TYPE_SPRITE(),
 KEYBOARD = WIDGET_TYPE_KEYBOARD(),
 DND = WIDGET_TYPE_DND(),
 LABEL = WIDGET_TYPE_LABEL(),
 BUTTON = WIDGET_TYPE_BUTTON(),
 IMAGE = WIDGET_TYPE_IMAGE(),
 EDIT = WIDGET_TYPE_EDIT(),
 PROGRESS_BAR = WIDGET_TYPE_PROGRESS_BAR(),
 GROUP_BOX = WIDGET_TYPE_GROUP_BOX(),
 CHECK_BUTTON = WIDGET_TYPE_CHECK_BUTTON(),
 RADIO_BUTTON = WIDGET_TYPE_RADIO_BUTTON(),
 DIALOG_TITLE = WIDGET_TYPE_DIALOG_TITLE(),
 DIALOG_CLIENT = WIDGET_TYPE_DIALOG_CLIENT(),
 SLIDER = WIDGET_TYPE_SLIDER(),
 VIEW = WIDGET_TYPE_VIEW(),
 COMBO_BOX = WIDGET_TYPE_COMBO_BOX(),
 COMBO_BOX_ITEM = WIDGET_TYPE_COMBO_BOX_ITEM(),
 SLIDE_VIEW = WIDGET_TYPE_SLIDE_VIEW(),
 PAGES = WIDGET_TYPE_PAGES(),
 TAB_BUTTON = WIDGET_TYPE_TAB_BUTTON(),
 TAB_CONTROL = WIDGET_TYPE_TAB_CONTROL(),
 TAB_BUTTON_GROUP = WIDGET_TYPE_TAB_BUTTON_GROUP(),
 BUTTON_GROUP = WIDGET_TYPE_BUTTON_GROUP(),
 CANDIDATES = WIDGET_TYPE_CANDIDATES(),
 SPIN_BOX = WIDGET_TYPE_SPIN_BOX(),
 DRAGGER = WIDGET_TYPE_DRAGGER(),
 SCROLL_BAR = WIDGET_TYPE_SCROLL_BAR(),
 SCROLL_BAR_DESKTOP = WIDGET_TYPE_SCROLL_BAR_DESKTOP(),
 SCROLL_BAR_MOBILE = WIDGET_TYPE_SCROLL_BAR_MOBILE(),
 SCROLL_VIEW = WIDGET_TYPE_SCROLL_VIEW(),
 LIST_VIEW = WIDGET_TYPE_LIST_VIEW(),
 LIST_VIEW_H = WIDGET_TYPE_LIST_VIEW_H(),
 LIST_ITEM = WIDGET_TYPE_LIST_ITEM(),
 COLOR_PICKER = WIDGET_TYPE_COLOR_PICKER(),
 COLOR_COMPONENT = WIDGET_TYPE_COLOR_COMPONENT(),
 COLOR_TILE = WIDGET_TYPE_COLOR_TILE(),
 RICH_TEXT = WIDGET_TYPE_RICH_TEXT(),
 APP_BAR = WIDGET_TYPE_APP_BAR(),
 GRID = WIDGET_TYPE_GRID(),
 ROW = WIDGET_TYPE_ROW(),
 COLUMN = WIDGET_TYPE_COLUMN(),
 CALIBRATION_WIN = WIDGET_TYPE_CALIBRATION_WIN(),
};

enum ValueType {
 INVALID = VALUE_TYPE_INVALID(),
 BOOL = VALUE_TYPE_BOOL(),
 INT8 = VALUE_TYPE_INT8(),
 UINT8 = VALUE_TYPE_UINT8(),
 INT16 = VALUE_TYPE_INT16(),
 UINT16 = VALUE_TYPE_UINT16(),
 INT32 = VALUE_TYPE_INT32(),
 UINT32 = VALUE_TYPE_UINT32(),
 INT64 = VALUE_TYPE_INT64(),
 UINT64 = VALUE_TYPE_UINT64(),
 POINTER = VALUE_TYPE_POINTER(),
 FLOAT = VALUE_TYPE_FLOAT(),
 DOUBLE = VALUE_TYPE_DOUBLE(),
 STRING = VALUE_TYPE_STRING(),
 WSTRING = VALUE_TYPE_WSTRING(),
};

enum AlignH {
 NONE = ALIGN_H_NONE(),
 CENTER = ALIGN_H_CENTER(),
 LEFT = ALIGN_H_LEFT(),
 RIGHT = ALIGN_H_RIGHT(),
};

enum BitmapFlag {
 NONE = BITMAP_FLAG_NONE(),
 OPAQUE = BITMAP_FLAG_OPAQUE(),
 IMMUTABLE = BITMAP_FLAG_IMMUTABLE(),
 TEXTURE = BITMAP_FLAG_TEXTURE(),
 CHANGED = BITMAP_FLAG_CHANGED(),
};

enum Ret {
 OK = RET_OK(),
 OOM = RET_OOM(),
 FAIL = RET_FAIL(),
 NOT_IMPL = RET_NOT_IMPL(),
 QUIT = RET_QUIT(),
 FOUND = RET_FOUND(),
 REMOVE = RET_REMOVE(),
 REPEAT = RET_REPEAT(),
 NOT_FOUND = RET_NOT_FOUND(),
 DONE = RET_DONE(),
 STOP = RET_STOP(),
 CONTINUE = RET_CONTINUE(),
 BAD_PARAMS = RET_BAD_PARAMS(),
};

enum WidgetState {
 STATE_NONE = WIDGET_STATE_NONE(),
 STATE_NORMAL = WIDGET_STATE_NORMAL(),
 STATE_PRESSED = WIDGET_STATE_PRESSED(),
 STATE_OVER = WIDGET_STATE_OVER(),
 STATE_DISABLE = WIDGET_STATE_DISABLE(),
 STATE_FOCUSED = WIDGET_STATE_FOCUSED(),
 STATE_CHECKED = WIDGET_STATE_CHECKED(),
 STATE_UNCHECKED = WIDGET_STATE_UNCHECKED(),
 STATE_EMPTY = WIDGET_STATE_EMPTY(),
 STATE_ERROR = WIDGET_STATE_ERROR(),
 STATE_SELECTED = WIDGET_STATE_SELECTED(),
};

enum EventType {
 NONE = EVT_NONE(),
 POINTER_DOWN = EVT_POINTER_DOWN(),
 POINTER_DOWN_ABORT = EVT_POINTER_DOWN_ABORT(),
 POINTER_MOVE = EVT_POINTER_MOVE(),
 POINTER_UP = EVT_POINTER_UP(),
 WHEEL = EVT_WHEEL(),
 CONTEXT_MENU = EVT_CONTEXT_MENU(),
 POINTER_ENTER = EVT_POINTER_ENTER(),
 POINTER_LEAVE = EVT_POINTER_LEAVE(),
 LONG_PRESS = EVT_LONG_PRESS(),
 CLICK = EVT_CLICK(),
 FOCUS = EVT_FOCUS(),
 BLUR = EVT_BLUR(),
 KEY_DOWN = EVT_KEY_DOWN(),
 KEY_REPEAT = EVT_KEY_REPEAT(),
 KEY_UP = EVT_KEY_UP(),
 DESTROY = EVT_DESTROY(),
 WILL_MOVE = EVT_WILL_MOVE(),
 MOVE = EVT_MOVE(),
 WILL_RESIZE = EVT_WILL_RESIZE(),
 RESIZE = EVT_RESIZE(),
 WILL_MOVE_RESIZE = EVT_WILL_MOVE_RESIZE(),
 MOVE_RESIZE = EVT_MOVE_RESIZE(),
 PROP_WILL_CHANGE = EVT_PROP_WILL_CHANGE(),
 PROP_CHANGED = EVT_PROP_CHANGED(),
 VALUE_WILL_CHANGE = EVT_VALUE_WILL_CHANGE(),
 VALUE_CHANGED = EVT_VALUE_CHANGED(),
 VALUE_CHANGING = EVT_VALUE_CHANGING(),
 PAINT = EVT_PAINT(),
 BEFORE_PAINT = EVT_BEFORE_PAINT(),
 AFTER_PAINT = EVT_AFTER_PAINT(),
 LOCALE_CHANGED = EVT_LOCALE_CHANGED(),
 ANIM_START = EVT_ANIM_START(),
 ANIM_STOP = EVT_ANIM_STOP(),
 ANIM_ONCE = EVT_ANIM_ONCE(),
 ANIM_END = EVT_ANIM_END(),
 WINDOW_LOAD = EVT_WINDOW_LOAD(),
 WINDOW_WILL_OPEN = EVT_WINDOW_WILL_OPEN(),
 WINDOW_OPEN = EVT_WINDOW_OPEN(),
 WINDOW_CLOSE = EVT_WINDOW_CLOSE(),
 IM_COMMIT = EVT_IM_COMMIT(),
 IM_SHOW_CANDIDATES = EVT_IM_SHOW_CANDIDATES(),
 IM_ACTION = EVT_IM_ACTION(),
 IM_ACTION_INFO = EVT_IM_ACTION_INFO(),
 DRAG_START = EVT_DRAG_START(),
 DRAG = EVT_DRAG(),
 DRAG_END = EVT_DRAG_END(),
 REQ_START = EVT_REQ_START(),
 USER_START = EVT_USER_START(),
};

enum InputType {
 TEXT = INPUT_TEXT(),
 INT = INPUT_INT(),
 UINT = INPUT_UINT(),
 HEX = INPUT_HEX(),
 FLOAT = INPUT_FLOAT(),
 UFLOAT = INPUT_UFLOAT(),
 EMAIL = INPUT_EMAIL(),
 PASSWORD = INPUT_PASSWORD(),
 PHONE = INPUT_PHONE(),
};

enum BitmapFormat {
 NONE = BITMAP_FMT_NONE(),
 RGBA8888 = BITMAP_FMT_RGBA8888(),
 ABGR8888 = BITMAP_FMT_ABGR8888(),
 BGRA8888 = BITMAP_FMT_BGRA8888(),
 ARGB8888 = BITMAP_FMT_ARGB8888(),
 RGB565 = BITMAP_FMT_RGB565(),
 BGR565 = BITMAP_FMT_BGR565(),
 RGB888 = BITMAP_FMT_RGB888(),
 BGR888 = BITMAP_FMT_BGR888(),
};

enum AssetType {
 NONE = ASSET_TYPE_NONE(),
 FONT = ASSET_TYPE_FONT(),
 IMAGE = ASSET_TYPE_IMAGE(),
 STYLE = ASSET_TYPE_STYLE(),
 UI = ASSET_TYPE_UI(),
 XML = ASSET_TYPE_XML(),
 STRINGS = ASSET_TYPE_STRINGS(),
 DATA = ASSET_TYPE_DATA(),
};

enum AlignV {
 NONE = ALIGN_V_NONE(),
 MIDDLE = ALIGN_V_MIDDLE(),
 TOP = ALIGN_V_TOP(),
 BOTTOM = ALIGN_V_BOTTOM(),
};

enum WidgetProp {
 X = WIDGET_PROP_X(),
 Y = WIDGET_PROP_Y(),
 W = WIDGET_PROP_W(),
 H = WIDGET_PROP_H(),
 MIN_W = WIDGET_PROP_MIN_W(),
 MAX_W = WIDGET_PROP_MAX_W(),
 LAYOUT_W = WIDGET_PROP_LAYOUT_W(),
 LAYOUT_H = WIDGET_PROP_LAYOUT_H(),
 VIRTUAL_W = WIDGET_PROP_VIRTUAL_W(),
 VIRTUAL_H = WIDGET_PROP_VIRTUAL_H(),
 NAME = WIDGET_PROP_NAME(),
 CURSOR = WIDGET_PROP_CURSOR(),
 VALUE = WIDGET_PROP_VALUE(),
 TEXT = WIDGET_PROP_TEXT(),
 TR_TEXT = WIDGET_PROP_TR_TEXT(),
 STYLE = WIDGET_PROP_STYLE(),
 ENABLE = WIDGET_PROP_ENABLE(),
 MARGIN = WIDGET_PROP_MARGIN(),
 SPACING = WIDGET_PROP_SPACING(),
 LEFT_MARGIN = WIDGET_PROP_LEFT_MARGIN(),
 RIGHT_MARGIN = WIDGET_PROP_RIGHT_MARGIN(),
 TOP_MARGIN = WIDGET_PROP_TOP_MARGIN(),
 BOTTOM_MARGIN = WIDGET_PROP_BOTTOM_MARGIN(),
 STEP = WIDGET_PROP_STEP(),
 VISIBLE = WIDGET_PROP_VISIBLE(),
 ANIMATION = WIDGET_PROP_ANIMATION(),
 ANIM_HINT = WIDGET_PROP_ANIM_HINT(),
 OPEN_ANIM_HINT = WIDGET_PROP_OPEN_ANIM_HINT(),
 CLOSE_ANIM_HINT = WIDGET_PROP_CLOSE_ANIM_HINT(),
 MIN = WIDGET_PROP_MIN(),
 TIPS = WIDGET_PROP_TIPS(),
 INPUT_TYPE = WIDGET_PROP_INPUT_TYPE(),
 READONLY = WIDGET_PROP_READONLY(),
 PASSWORD_VISIBLE = WIDGET_PROP_PASSWORD_VISIBLE(),
 ACTIVE = WIDGET_PROP_ACTIVE(),
 VERTICAL = WIDGET_PROP_VERTICAL(),
 SHOW_TEXT = WIDGET_PROP_SHOW_TEXT(),
 XOFFSET = WIDGET_PROP_XOFFSET(),
 YOFFSET = WIDGET_PROP_YOFFSET(),
 AUTO_PLAY = WIDGET_PROP_AUTO_PLAY(),
 AUTO_FIX = WIDGET_PROP_AUTO_FIX(),
 X_MIN = WIDGET_PROP_X_MIN(),
 X_MAX = WIDGET_PROP_X_MAX(),
 Y_MIN = WIDGET_PROP_Y_MIN(),
 Y_MAX = WIDGET_PROP_Y_MAX(),
 MAX = WIDGET_PROP_MAX(),
 ROW = WIDGET_PROP_ROW(),
 THEME = WIDGET_PROP_THEME(),
 SCRIPT = WIDGET_PROP_SCRIPT(),
 ITEM_WIDTH = WIDGET_PROP_ITEM_WIDTH(),
 ITEM_HEIGHT = WIDGET_PROP_ITEM_HEIGHT(),
 DEFAULT_ITEM_HEIGHT = WIDGET_PROP_DEFAULT_ITEM_HEIGHT(),
 XSLIDABLE = WIDGET_PROP_XSLIDABLE(),
 YSLIDABLE = WIDGET_PROP_YSLIDABLE(),
 REPEAT = WIDGET_PROP_REPEAT(),
 ANIMATABLE = WIDGET_PROP_ANIMATABLE(),
 AUTO_HIDE_SCROLL_BAR = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(),
 IMAGE = WIDGET_PROP_IMAGE(),
 DRAW_TYPE = WIDGET_PROP_DRAW_TYPE(),
 SELECTABLE = WIDGET_PROP_SELECTABLE(),
 CLICKABLE = WIDGET_PROP_CLICKABLE(),
 SCALE_X = WIDGET_PROP_SCALE_X(),
 SCALE_Y = WIDGET_PROP_SCALE_Y(),
 ANCHOR_X = WIDGET_PROP_ANCHOR_X(),
 ANCHOR_Y = WIDGET_PROP_ANCHOR_Y(),
 ROTATION = WIDGET_PROP_ROTATION(),
 SUB_THEME = WIDGET_PROP_SUB_THEME(),
 COMPACT = WIDGET_PROP_COMPACT(),
 ICON = WIDGET_PROP_ICON(),
 OPTIONS = WIDGET_PROP_OPTIONS(),
 SELECTED = WIDGET_PROP_SELECTED(),
 ACTIVE_ICON = WIDGET_PROP_ACTIVE_ICON(),
 OPEN_WINDOW = WIDGET_PROP_OPEN_WINDOW(),
 SELECTED_INDEX = WIDGET_PROP_SELECTED_INDEX(),
 CLOSE_WHEN_CLICK = WIDGET_PROP_CLOSE_WHEN_CLICK(),
 CLOSE_WHEN_CLICK_OUTSIDE = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(),
 LINE_GAP = WIDGET_PROP_LINE_GAP(),
 BG_COLOR = WIDGET_PROP_BG_COLOR(),
 BORDER_COLOR = WIDGET_PROP_BORDER_COLOR(),
 DELAY = WIDGET_PROP_DELAY(),
};

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

class Widget {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 countChildren() {
   return widget_count_children(this.nativeObj);
 }

 getChild(index) {
   return new Widget(widget_get_child(this.nativeObj, index));
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

 addValue(delta) {
   return widget_add_value(this.nativeObj, delta);
 }

 useStyle(style) {
   return widget_use_style(this.nativeObj, style);
 }

 setText(text) {
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

 setCursor(cursor) {
   return widget_set_cursor(this.nativeObj, cursor);
 }

 setAnimation(animation) {
   return widget_set_animation(this.nativeObj, animation);
 }

 setEnable(enable) {
   return widget_set_enable(this.nativeObj, enable);
 }

 setFocused(focused) {
   return widget_set_focused(this.nativeObj, focused);
 }

 child(name) {
   return new Widget(widget_child(this.nativeObj, name));
 }

 lookup(name, recursive) {
   return new Widget(widget_lookup(this.nativeObj, name, recursive));
 }

 lookupByType(type, recursive) {
   return new Widget(widget_lookup_by_type(this.nativeObj, type, recursive));
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
   return new Widget(widget_get_window(this.nativeObj));
 }

 getWindowManager() {
   return new Widget(widget_get_window_manager(this.nativeObj));
 }

 getType() {
   return widget_get_type(this.nativeObj);
 }

 clone(parent) {
   return new Widget(widget_clone(this.nativeObj, parent ? (parent.nativeObj || parent) : null));
 }

 equal(other) {
   return widget_equal(this.nativeObj, other ? (other.nativeObj || other) : null);
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

 static cast(widget) {
   return new Widget(widget_cast(widget ? (widget.nativeObj || widget) : null));
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

 get name() {
   return widget_t_get_prop_name(this.nativeObj);
 }

 get trText() {
   return widget_t_get_prop_tr_text(this.nativeObj);
 }

 get style() {
   return widget_t_get_prop_style(this.nativeObj);
 }

 get animation() {
   return widget_t_get_prop_animation(this.nativeObj);
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

}

class Canvas {
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

class Point {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class AssetInfo {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 get type() {
   return asset_info_t_get_prop_type(this.nativeObj);
 }

 get subtype() {
   return asset_info_t_get_prop_subtype(this.nativeObj);
 }

 get isInRom() {
   return asset_info_t_get_prop_is_in_rom(this.nativeObj);
 }

 get size() {
   return asset_info_t_get_prop_size(this.nativeObj);
 }

 get refcount() {
   return asset_info_t_get_prop_refcount(this.nativeObj);
 }

 get name() {
   return asset_info_t_get_prop_name(this.nativeObj);
 }

}

class Event {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static cast(event) {
   return new Event(event_cast(event ? (event.nativeObj || event) : null));
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

class LocaleInfo {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new LocaleInfo(locale_info());
 }

 tr(text) {
   return locale_info_tr(this.nativeObj, text);
 }

 change(language, country) {
   return locale_info_change(this.nativeObj, language, country);
 }

 on(type, on_event, ctx) {
   return locale_info_on(this.nativeObj, type, on_event, ctx);
 }

 off(id) {
   return locale_info_off(this.nativeObj, id);
 }

}

class Bitmap {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new Bitmap(bitmap_create());
 }

 static createEx(w, h, format) {
   return new Bitmap(bitmap_create_ex(w, h, format));
 }

 getBpp() {
   return bitmap_get_bpp(this.nativeObj);
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

class ImageManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new ImageManager(image_manager());
 }

 load(name, image) {
   return image_manager_load(this.nativeObj, name, image ? (image.nativeObj || image) : null);
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

class AssetsManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new AssetsManager(assets_manager());
 }

 ref(type, name) {
   return assets_manager_ref(this.nativeObj, type, name);
 }

 unref(info) {
   return assets_manager_unref(this.nativeObj, info ? (info.nativeObj || info) : null);
 }

}

class AppBar extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new AppBar(app_bar_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new AppBar(app_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class ButtonGroup extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ButtonGroup(button_group_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new ButtonGroup(button_group_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class Button extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Button(button_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Button(button_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setRepeat(repeat) {
   return button_set_repeat(this.nativeObj, repeat);
 }

 get repeat() {
   return button_t_get_prop_repeat(this.nativeObj);
 }

}

class CheckButton extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new CheckButton(check_button_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static createRadio(parent, x, y, w, h) {
   return new CheckButton(check_button_create_radio(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 setValue(value) {
   return check_button_set_value(this.nativeObj, value);
 }

 static cast(widget) {
   return new CheckButton(check_button_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return check_button_t_get_prop_value(this.nativeObj);
 }

}

class ColorPicker extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ColorPicker(color_picker_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 setColor(color) {
   return color_picker_set_color(this.nativeObj, color);
 }

 static cast(widget) {
   return new ColorPicker(color_picker_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return color_picker_t_get_prop_value(this.nativeObj);
 }

}

class ColorTile extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ColorTile(color_tile_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new ColorTile(color_tile_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setBgColor(color) {
   return color_tile_set_bg_color(this.nativeObj, color);
 }

 get bgColor() {
   return color_tile_t_get_prop_bg_color(this.nativeObj);
 }

 get borderColor() {
   return color_tile_t_get_prop_border_color(this.nativeObj);
 }

}

class Column extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Column(column_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Column(column_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class ComboBoxItem extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ComboBoxItem(combo_box_item_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new ComboBoxItem(combo_box_item_cast(widget ? (widget.nativeObj || widget) : null));
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

class ComboBox extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ComboBox(combo_box_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new ComboBox(combo_box_cast(widget ? (widget.nativeObj || widget) : null));
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

class DialogClient extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new DialogClient(dialog_client_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new DialogClient(dialog_client_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class Dialog extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Dialog(dialog_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static createSimple(parent, x, y, w, h) {
   return new Dialog(dialog_create_simple(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Dialog(dialog_cast(widget ? (widget.nativeObj || widget) : null));
 }

 getTitle() {
   return new Widget(dialog_get_title(this.nativeObj));
 }

 getClient() {
   return new Widget(dialog_get_client(this.nativeObj));
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

class DialogTitle extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new DialogTitle(dialog_title_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new DialogTitle(dialog_title_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class Dragger extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Dragger(dragger_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Dragger(dragger_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setRange(x_min, y_min, x_max, y_max) {
   return new Widget(dragger_set_range(this.nativeObj, x_min, y_min, x_max, y_max));
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
   return new Edit(edit_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Edit(edit_cast(widget ? (widget.nativeObj || widget) : null));
 }

 getInt() {
   return edit_get_int(this.nativeObj);
 }

 getDouble() {
   return edit_get_double(this.nativeObj);
 }

 setInt(value) {
   return edit_set_int(this.nativeObj, value);
 }

 setDouble(value) {
   return edit_set_double(this.nativeObj, value);
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

class Grid extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Grid(grid_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Grid(grid_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class GroupBox extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new GroupBox(group_box_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new GroupBox(group_box_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class Guage extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Guage(guage_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Guage(guage_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setAngle(angle) {
   return guage_set_angle(this.nativeObj, angle);
 }

 setPointerImage(angle) {
   return guage_set_pointer_image(this.nativeObj, angle);
 }

 setBgImage(bg_image) {
   return guage_set_bg_image(this.nativeObj, bg_image);
 }

 get angle() {
   return guage_t_get_prop_angle(this.nativeObj);
 }

 get bgImage() {
   return guage_t_get_prop_bg_image(this.nativeObj);
 }

 get pointerImage() {
   return guage_t_get_prop_pointer_image(this.nativeObj);
 }

}

class ImageAnimation extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ImageAnimation(image_animation_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 setLoop(loop) {
   return image_animation_set_loop(this.nativeObj, loop);
 }

 setImage(image) {
   return image_animation_set_image(this.nativeObj, image);
 }

 setInterval(interval) {
   return image_animation_set_interval(this.nativeObj, interval);
 }

 setDelay(delay) {
   return image_animation_set_delay(this.nativeObj, delay);
 }

 setAutoPlay(auto_play) {
   return image_animation_set_auto_play(this.nativeObj, auto_play);
 }

 setSequence(sequence) {
   return image_animation_set_sequence(this.nativeObj, sequence);
 }

 play() {
   return image_animation_play(this.nativeObj);
 }

 stop() {
   return image_animation_stop(this.nativeObj);
 }

 pause() {
   return image_animation_pause(this.nativeObj);
 }

 static cast(widget) {
   return new ImageAnimation(image_animation_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get image() {
   return image_animation_t_get_prop_image(this.nativeObj);
 }

 get sequence() {
   return image_animation_t_get_prop_sequence(this.nativeObj);
 }

 get loop() {
   return image_animation_t_get_prop_loop(this.nativeObj);
 }

 get autoPlay() {
   return image_animation_t_get_prop_auto_play(this.nativeObj);
 }

 get interval() {
   return image_animation_t_get_prop_interval(this.nativeObj);
 }

 get delay() {
   return image_animation_t_get_prop_delay(this.nativeObj);
 }

}

class Image extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Image(image_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 setImage(name) {
   return image_set_image(this.nativeObj, name);
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

 get scaleY() {
   return image_t_get_prop_scale_y(this.nativeObj);
 }

 get rotation() {
   return image_t_get_prop_rotation(this.nativeObj);
 }

 get clickable() {
   return image_t_get_prop_clickable(this.nativeObj);
 }

 get selectable() {
   return image_t_get_prop_selectable(this.nativeObj);
 }

 get image() {
   return image_t_get_prop_image(this.nativeObj);
 }

 get drawType() {
   return image_t_get_prop_draw_type(this.nativeObj);
 }

 get selected() {
   return image_t_get_prop_selected(this.nativeObj);
 }

}

class KeyEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new KeyEvent(key_event_cast(event ? (event.nativeObj || event) : null));
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

class Label extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Label(label_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

}

class ListItem extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ListItem(list_item_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new ListItem(list_item_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class ListViewH extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ListViewH(list_view_h_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 setItemWidth(item_width) {
   return list_view_h_set_item_width(this.nativeObj, item_width);
 }

 setSpacing(spacing) {
   return list_view_h_set_spacing(this.nativeObj, spacing);
 }

 static cast(widget) {
   return new ListViewH(list_view_h_cast(widget ? (widget.nativeObj || widget) : null));
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
   return new ListView(list_view_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
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
   return new ListView(list_view_cast(widget ? (widget.nativeObj || widget) : null));
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

class Pages extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Pages(pages_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Pages(pages_cast(widget ? (widget.nativeObj || widget) : null));
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

class PaintEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new PaintEvent(paint_event_cast(event ? (event.nativeObj || event) : null));
 }

 get c() {
   return paint_event_t_get_prop_c(this.nativeObj);
 }

}

class PointerEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new PointerEvent(pointer_event_cast(event ? (event.nativeObj || event) : null));
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

class Popup extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Popup(popup_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Popup(popup_cast(widget ? (widget.nativeObj || widget) : null));
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
   return new ProgressBar(progress_bar_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new ProgressBar(progress_bar_cast(widget ? (widget.nativeObj || widget) : null));
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

class PropChangeEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new PropChangeEvent(prop_change_event_cast(event ? (event.nativeObj || event) : null));
 }

 get name() {
   return prop_change_event_t_get_prop_name(this.nativeObj);
 }

 get value() {
   return prop_change_event_t_get_prop_value(this.nativeObj);
 }

}

class RichText extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new RichText(rich_text_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 setText(text) {
   return rich_text_set_text(this.nativeObj, text);
 }

 get lineGap() {
   return rich_text_t_get_prop_line_gap(this.nativeObj);
 }

}

class Row extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Row(row_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Row(row_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class ScrollBar extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new ScrollBar(scroll_bar_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new ScrollBar(scroll_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

 static createMobile(parent, x, y, w, h) {
   return new ScrollBar(scroll_bar_create_mobile(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static createDesktop(parent, x, y, w, h) {
   return new ScrollBar(scroll_bar_create_desktop(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
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
   return new ScrollView(scroll_view_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new ScrollView(scroll_view_cast(widget ? (widget.nativeObj || widget) : null));
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
   return new SlideView(slide_view_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new SlideView(slide_view_cast(widget ? (widget.nativeObj || widget) : null));
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
   return new Slider(slider_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new Slider(slider_cast(widget ? (widget.nativeObj || widget) : null));
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
   return new SpinBox(spin_box_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new SpinBox(spin_box_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class Switch extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new Switch(switch_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 setValue(value) {
   return switch_set_value(this.nativeObj, value);
 }

 static cast(widget) {
   return new Switch(switch_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return switch_t_get_prop_value(this.nativeObj);
 }

 get maxXoffsetRatio() {
   return switch_t_get_prop_max_xoffset_ratio(this.nativeObj);
 }

 get roundRadius() {
   return switch_t_get_prop_round_radius(this.nativeObj);
 }

}

class TabButtonGroup extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TabButtonGroup(tab_button_group_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new TabButtonGroup(tab_button_group_cast(widget ? (widget.nativeObj || widget) : null));
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
   return new TabButton(tab_button_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new TabButton(tab_button_cast(widget ? (widget.nativeObj || widget) : null));
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
   return new TabControl(tab_control_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new TabControl(tab_control_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TextSelector extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TextSelector(text_selector_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new TextSelector(text_selector_cast(widget ? (widget.nativeObj || widget) : null));
 }

 resetOptions() {
   return text_selector_reset_options(this.nativeObj);
 }

 countOptions() {
   return text_selector_count_options(this.nativeObj);
 }

 appendOption(value, text) {
   return text_selector_append_option(this.nativeObj, value, text);
 }

 setOptions(options) {
   return text_selector_set_options(this.nativeObj, options);
 }

 setRangeOptions(start, nr, step) {
   return text_selector_set_range_options(this.nativeObj, start, nr, step);
 }

 getValue() {
   return text_selector_get_value(this.nativeObj);
 }

 setValue(value) {
   return text_selector_set_value(this.nativeObj, value);
 }

 getText() {
   return text_selector_get_text(this.nativeObj);
 }

 setText(text) {
   return text_selector_set_text(this.nativeObj, text);
 }

 setSelectedIndex(index) {
   return text_selector_set_selected_index(this.nativeObj, index);
 }

 setVisibleNr(visible_nr) {
   return text_selector_set_visible_nr(this.nativeObj, visible_nr);
 }

 get visibleNr() {
   return text_selector_t_get_prop_visible_nr(this.nativeObj);
 }

 get selectedIndex() {
   return text_selector_t_get_prop_selected_index(this.nativeObj);
 }

 get options() {
   return text_selector_t_get_prop_options(this.nativeObj);
 }

}

class TimeClock extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TimeClock(time_clock_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new TimeClock(time_clock_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setHour(hour) {
   return time_clock_set_hour(this.nativeObj, hour);
 }

 setMinute(minute) {
   return time_clock_set_minute(this.nativeObj, minute);
 }

 setSecond(second) {
   return time_clock_set_second(this.nativeObj, second);
 }

 setHourImage(hour) {
   return time_clock_set_hour_image(this.nativeObj, hour);
 }

 setMinuteImage(minute_image) {
   return time_clock_set_minute_image(this.nativeObj, minute_image);
 }

 setSecondImage(second_image) {
   return time_clock_set_second_image(this.nativeObj, second_image);
 }

 setBgImage(bg_image) {
   return time_clock_set_bg_image(this.nativeObj, bg_image);
 }

 setImage(image) {
   return time_clock_set_image(this.nativeObj, image);
 }

 get hour() {
   return time_clock_t_get_prop_hour(this.nativeObj);
 }

 get minute() {
   return time_clock_t_get_prop_minute(this.nativeObj);
 }

 get second() {
   return time_clock_t_get_prop_second(this.nativeObj);
 }

 get image() {
   return time_clock_t_get_prop_image(this.nativeObj);
 }

 get bgImage() {
   return time_clock_t_get_prop_bg_image(this.nativeObj);
 }

 get hourImage() {
   return time_clock_t_get_prop_hour_image(this.nativeObj);
 }

 get minuteImage() {
   return time_clock_t_get_prop_minute_image(this.nativeObj);
 }

 get secondImage() {
   return time_clock_t_get_prop_second_image(this.nativeObj);
 }

}

class View extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new View(view_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static cast(widget) {
   return new View(view_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class WheelEvent extends Event {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new WheelEvent(wheel_event_cast(event ? (event.nativeObj || event) : null));
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

class WindowBase extends Widget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 get theme() {
   return window_base_t_get_prop_theme(this.nativeObj);
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
   return new WindowManager(window_manager_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setShowFps(show_fps) {
   return window_manager_set_show_fps(this.nativeObj, show_fps);
 }

 setCursor(cursor) {
   return window_manager_set_cursor(this.nativeObj, cursor);
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
   return new Window(window_create(parent ? (parent.nativeObj || parent) : null, x, y, w, h));
 }

 static open(name) {
   return new Window(window_open(name));
 }

 static openAndClose(name, to_close) {
   return new Window(window_open_and_close(name, to_close ? (to_close.nativeObj || to_close) : null));
 }

 close() {
   return window_close(this.nativeObj);
 }

 static cast(widget) {
   return new Window(window_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

