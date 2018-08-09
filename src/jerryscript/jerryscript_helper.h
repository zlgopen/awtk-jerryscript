
jerry_value_t
jerryx_obj_register_const_int(jerry_value_t obj, const jerry_char_t *name_p,
                                int32_t value);

jerry_value_t
jerryx_obj_register_const_string (jerry_value_t obj, const jerry_char_t *name_p,
                                const jerry_char_t *value_p);

jerry_value_t
jerryx_obj_register_func(jerry_value_t obj, const jerry_char_t *name_p,
                                jerry_external_handler_t handler_p);

jerry_value_t jerryx_handler_register_obj(const jerry_char_t *name_p);
