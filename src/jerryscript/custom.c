
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

