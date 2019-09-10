#ifndef JS_ENGINE_H
#define JS_ENGINE_H

typedef void JSContext;
typedef jerry_value_t jsvalue_t;
typedef jerry_value_t jsvalue_const_t;

#define JS_NULL jerry_create_null()
#define jsvalue_ref(ctx, v) jerry_acquire_value(v)
#define jsvalue_unref(ctx, v) jerry_release_value(v)
#define jsvalue_free_str(ctx, v) TKMEM_FREE(v)
#define jsfunc_call(ctx, func, this_value, argc, argv) \
  jerry_call_function(func, this_value, argv, argc)

#define JSFUNC_DECL(func_name)                                                      \
  jsvalue_t func_name(const jerry_value_t func_obj_val, const jerry_value_t this_p, \
                      const jerry_value_t argv[], const jerry_length_t argc) {      \
    void* ctx = NULL;

static inline jsvalue_t jsvalue_create_string(JSContext* ctx, const char* str) {
  return str != NULL ? jerry_create_string_from_utf8((const jerry_char_t*)str) : JS_NULL;
}

static inline jsvalue_t jsvalue_create_int(JSContext* ctx, uint32_t ret) {
  return jerry_create_number(ret);
}

static inline jsvalue_t jsvalue_create_bool(JSContext* ctx, bool_t ret) {
  return jerry_create_boolean(ret);
}

static inline jsvalue_t jsvalue_create_number(JSContext* ctx, double ret) {
  return jerry_create_number(ret);
}

static inline char* jsvalue_get_utf8_string(JSContext* ctx, jsvalue_t v) {
  jerry_size_t size = jerry_get_utf8_string_size(v);
  char* str = (char*)TKMEM_ALLOC(size + 1);
  return_value_if_fail(str != NULL, NULL);

  jerry_string_to_utf8_char_buffer(v, (jerry_char_t*)str, size);
  str[size] = '\0';

  return str;
}

static inline void* jsvalue_get_object(JSContext* ctx, jsvalue_t v, const char* type,
                                       const jerry_object_native_info_t* native_info_p) {
  if (jerry_value_is_null(v) || jerry_value_is_undefined(v)) {
    return NULL;
  } else {
    char str[64];
    void* p = NULL;
    jerry_value_t cls_type = jsvalue_create_string(ctx, "class_type");
    jerry_value_t cls_type_value = jerry_get_property(v, cls_type);

    memset(str, 0x00, sizeof(str));
    jerry_string_to_utf8_char_buffer(cls_type_value, (jerry_char_t*)str, sizeof(str));
    jerry_get_object_native_pointer(v, &p, native_info_p);
    jerry_release_value(cls_type);
    jerry_release_value(cls_type_value);

    return p;
  }
}

static inline void* jsvalue_get_pointer(JSContext* ctx, jsvalue_t v, const char* type) {
  return jsvalue_get_object(ctx, v, type, NULL);
}

static inline int32_t jsvalue_get_int_value(JSContext* ctx, jsvalue_t v) {
  return (int32_t)jerry_get_number_value(v);
}

static inline double jsvalue_get_number_value(JSContext* ctx, jsvalue_t v) {
  return (int32_t)jerry_get_number_value(v);
}

static inline bool_t jsvalue_get_boolean_value(JSContext* ctx, jsvalue_t v) {
  return jerry_value_to_boolean(v);
}

static inline jsvalue_t jsvalue_create_pointer(JSContext* ctx, const void* ptr, const char* type) {
  if (ptr == NULL) {
    return jerry_create_null();
  } else {
    jerry_value_t obj = jerry_create_object();
    jerry_value_t cls_type = jsvalue_create_string(ctx, "class_type");
    jerry_value_t cls_type_value = jsvalue_create_string(ctx, type);

    jerry_set_property(obj, cls_type, cls_type_value);
    jerry_set_object_native_pointer(obj, (void*)ptr, NULL);
    jerry_release_value(cls_type);
    jerry_release_value(cls_type_value);

    return obj;
  }
}

static inline jsvalue_t jsvalue_create_object(JSContext* ctx, const void* ptr, const char* type,
                                              const jerry_object_native_info_t* native_info_p) {
  if (ptr == NULL) {
    return jerry_create_null();
  } else {
    jerry_value_t obj = jerry_create_object();
    jerry_value_t cls_type = jsvalue_create_string(ctx, "class_type");
    jerry_value_t cls_type_value = jsvalue_create_string(ctx, type);

    jerry_set_property(obj, cls_type, cls_type_value);
    jerry_set_object_native_pointer(obj, (void*)ptr, native_info_p);
    jerry_release_value(cls_type);
    jerry_release_value(cls_type_value);

    return obj;
  }
}

#endif /*JS_ENGINE_H*/
