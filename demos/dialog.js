function onClick(evt) { 
  var dlg = Dialog.createSimple(null, 0, 0, 240, 160);

  dlg.setTitle('Dialog');

  var ok = Button.create(dlg.getClient(), 20, 80, 80, 30);
  ok.setText('Go');

  var cancel = Button.create(dlg.getClient(), 140, 80, 80, 30);
  cancel.setText('Cancel');

  var label = Label.create(dlg.getClient(), 10, 30, 200, 30);
  label.setText('AWTK is cool!');

  ok.on(EventType.CLICK, function(evt) { 
    dlg.quit(1);
    return Ret.OK;
  })

  cancel.on(EventType.CLICK, function(evt) { 
    dlg.quit(2);
    return Ret.OK;
  })

  var code = dlg.modal();
  print('code=' + (code));
}

function applicationInit() {
  var win = Window.create(null, 0, 0, 0, 0);
  var ok = Button.create(win, 0, 0, 0, 0);

  ok.setText("Show Dialog");
  ok.setSelfLayoutParams("center", "middle", "50%", "30");
  ok.on(EventType.CLICK, onClick);

  win.layout();
}

applicationInit()


