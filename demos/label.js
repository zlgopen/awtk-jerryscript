
function applicationInit() {
  var win = Window.create(null, 0, 0, 0, 0);
  var label = Label.create(win, 0, 0, 0, 0);

  label.useStyle('big_green');
  label.setText("hello awtk!");
  label.setSelfLayoutParams("center", "middle", "50%", "30");

  win.layout();
}

applicationInit()
