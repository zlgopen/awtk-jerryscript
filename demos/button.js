function application_init() {
  var win = Window.create(null, 0, 0, 0, 0);
  var ok = Button.create(win, 0, 0, 0, 0);

  ok.setText("ok");
  ok.setSelfLayoutParams("center", "middle", "50%", "30");

  ok.on(EventType.CLICK, function(evt) {
    var e = PointerEvent.cast(evt);
    print("on click: " + e.x + " " + e.y);

    return Ret.OK;
  });

  win.layout();
}

application_init()


