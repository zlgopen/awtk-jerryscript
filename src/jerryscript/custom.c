
char* jerry_get_utf8_string(jerry_value_t v) {
  jerry_size_t size = jerry_get_utf8_string_size(v);
  char* str = (char*)TKMEM_ALLOC(size+1);
  return_value_if_fail(str != NULL, NULL);

  jerry_string_to_utf8_char_buffer(v, (jerry_char_t*)str, size);
  str[size] = '\0';

  return str;
}

wchar_t* jerry_get_wstring(jerry_value_t v) {
  wchar_t* wstr = NULL;
  jerry_size_t size = jerry_get_utf8_string_size(v);
  char* str = (char*)TKMEM_ALLOC(size+1);

  return_value_if_fail(str != NULL, NULL);

  wstr = (wchar_t*)TKMEM_ALLOC(sizeof(wchar_t) *(size+1));
  jerry_string_to_utf8_char_buffer(v, (jerry_char_t*)str, size);
  str[size] = '\0';

  utf8_to_utf16(str, wstr, size+1);
  TKMEM_FREE(str);

  return wstr;
}

jerry_value_t jerry_create_string_from_wstring(const wchar_t* wstr) {
  int32_t size = 0;
  char* str = NULL;
  jerry_value_t ret;
  if(wstr == NULL) {
    return jerry_create_null();
  }

  size = wcslen(wstr) * 4 + 1;
  str = (char*)TKMEM_ALLOC(size);
  if(str == NULL) {
    return jerry_create_null();
  }

  utf8_from_utf16(wstr, str, size);
  ret = jerry_create_string_from_utf8((jerry_char_t*)str);
  TKMEM_FREE(str);

  return ret;
}

void* jerry_get_pointer(jerry_value_t v, const char* type) {
  char str[64];
  void* p = NULL;
  jerry_value_t cls_type = jerry_create_string_from_utf8((jerry_char_t*)"class_type");
  jerry_value_t cls_type_value = jerry_get_property(v, cls_type);

  if(jerry_value_is_null(v) || jerry_value_is_undefined(v)) {
    return NULL;
  }

  memset(str, 0x00, sizeof(str));
  jerry_string_to_utf8_char_buffer(cls_type_value, (jerry_char_t*)str, sizeof(str));

  jerry_get_object_native_pointer(v, &p, NULL);

  return p;
}

jerry_value_t jerry_create_pointer(const void* ptr, const char* type) {
  if(ptr == NULL) {
    return jerry_create_null();
  } else {
    jerry_value_t obj = jerry_create_object();
    jerry_value_t cls_type = jerry_create_string_from_utf8((jerry_char_t*)"class_type");
    jerry_value_t cls_type_value = jerry_create_string_from_utf8((jerry_char_t*)type);
    
    jerry_set_property(obj, cls_type, cls_type_value);
    jerry_set_object_native_pointer(obj, (void*)ptr, NULL);

    return obj;
  }
}

static ret_t call_on_event(void* ctx, event_t* e) {
	jerry_value_t res;
  jerry_value_t args[1];
  jerry_value_t func = (jerry_value_t)((int32_t*)ctx - (int32_t*)NULL);
  jerry_value_t this_value = jerry_create_undefined ();

  args[0] = jerry_create_pointer(e, "event_t");
  res = jerry_call_function (func, this_value, args, 1);

  jerry_release_value (args[0]);
  jerry_release_value (this_value);

  return RET_OK;
}

jerry_value_t wrap_widget_on(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  event_type_t type = (event_type_t)jerry_get_number_value(args_p[1]);
  jerry_value_t on_event = jerry_acquire_value(args_p[2]);

  void* ctx =  (int32_t*)NULL + (int32_t)on_event;
  ret = (int32_t)widget_on(widget, type, call_on_event, ctx);

  return jerry_create_number(ret);;
};

jerry_value_t wrap_widget_off(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = RET_OK;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  int32_t id = (int32_t)jerry_get_number_value(args_p[1]);
	emitter_item_t* item = emitter_find(widget->emitter, id);
  
	if (item) {
		jerry_value_t func = (char*)(item->ctx) - (char*)NULL;
		ret = (ret_t)widget_off(widget, id);
  	jerry_release_value (func);
	}

  return jerry_create_number(ret);;
};

jerry_value_t wrap_tklocale_on(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint32_t ret = 0;
  tklocale_t* tklocale = (tklocale_t*)jerry_get_pointer(args_p[0], "tklocale_t*");
  event_type_t type = (event_type_t)jerry_get_number_value(args_p[1]);
  event_func_t on_event = (event_func_t)jerry_get_pointer(args_p[2], "event_func_t");
  void* ctx =  NULL;
  ret = (uint32_t)tklocale_on(tklocale, type, on_event, ctx);


  return jerry_create_number(ret);;
};

jerry_value_t wrap_tklocale_off(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  tklocale_t* tklocale = (tklocale_t*)jerry_get_pointer(args_p[0], "tklocale_t*");
  uint32_t id = (uint32_t)jerry_get_number_value(args_p[1]);
  ret = (ret_t)tklocale_off(tklocale, id);


  return jerry_create_number(ret);;
};

jerry_value_t wrap_timer_add(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint32_t ret = 0;
  timer_func_t on_timer = (timer_func_t)jerry_get_pointer(args_p[0], "timer_func_t");
  void* ctx =  NULL;
  uint32_t duration_ms = (uint32_t)jerry_get_number_value(args_p[2]);
  ret = (uint32_t)timer_add(on_timer, ctx, duration_ms);


  return jerry_create_number(ret);;
};

jerry_value_t wrap_timer_remove(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jerry_get_number_value(args_p[0]);
  ret = (ret_t)timer_remove(timer_id);


  return jerry_create_number(ret);;
};

jerry_value_t wrap_idle_add(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  uint32_t ret = 0;
  idle_func_t on_idle = (idle_func_t)jerry_get_pointer(args_p[0], "idle_func_t");
  void* ctx =  NULL;
  ret = (uint32_t)idle_add(on_idle, ctx);


  return jerry_create_number(ret);;
};

jerry_value_t wrap_idle_remove(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  uint32_t idle_id = (uint32_t)jerry_get_number_value(args_p[0]);
  ret = (ret_t)idle_remove(idle_id);


  return jerry_create_number(ret);;
};

jerry_value_t wrap_widget_foreach(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  ) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jerry_get_pointer(args_p[0], "widget_t*");
  tk_visit_t visit = (tk_visit_t)jerry_get_pointer(args_p[1], "tk_visit_t");
  void* ctx =  NULL;
  ret = (ret_t)widget_foreach(widget, visit, ctx);


  return jerry_create_number(ret);;
};

