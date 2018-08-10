
function application_init() {
  var win = Window.create(null, 0, 0, 0, 0);
  var label = Label.create(win, 0, 0, 0, 0);

  label.use_style('big_green');
  label.set_text_utf8("hello awtk!");
  label.set_self_layout_params("center", "middle", "50%", "30");

  win.layout();
}

application_init()
