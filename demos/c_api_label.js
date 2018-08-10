
function application_init() {
  var win = window_create(null, 0, 0, 0, 0);
  var label = label_create(win, 0, 0, 0, 0);

  widget_use_style(label, 'big_green');
  widget_set_text_utf8(label, "hello awtk!");
  widget_set_self_layout_params(label, "center", "middle", "50%", "30");

  widget_layout();
}

application_init()
