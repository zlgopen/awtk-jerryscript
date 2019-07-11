function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var ok = TButton.create(win, 0, 0, 0, 0);

  ok.setText("ok");
  ok.setSelfLayoutParams("center", "middle", "50%", "30");

  ok.on(TEventType.CLICK, function(evt) {
    var e = TPointerEvent.cast(evt);
    console.log("on click: " + e.x + " " + e.y);
    console.log("global: " + global.get_pointer_x() + " " + global.get_pointer_y() + " " + global.is_pointer_pressed());

    return TRet.OK;
  });

  win.layout();
}

applicationInit()


