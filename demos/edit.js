
function onChanged(evt) { 
  var target = Event.cast(evt).target;
  var edit = Edit.cast(target);

  print(edit.name + ' *onChanged*');

  return Ret.OK;
}

function createEdit(win, type, name, text, x, y, w, h) {
  var edit = Edit.create(win, x, y, w, h);

  edit.on(EventType.VALUE_CHANGED, function(evt) { 
    print(edit.name + ' changed');
    return Ret.OK;
  });
  
  edit.on(EventType.VALUE_CHANGING, function(evt) { 
    print(edit.name + ' changing');
    return Ret.OK;
  });
  
  edit.on(EventType.VALUE_CHANGED, onChanged);

  edit.setName(name);
  edit.setText(text);
  edit.setInputTips(name);
  edit.setInputType(type);

  return edit;
}

function applicationInit() {
  var win = Window.create(null, 0, 0, 0, 0);

  var edit1 = createEdit(win, InputType.TEXT, 'text[3-8]', '', 10, 10, 228, 30);
  edit1.setTextLimit(3, 8);

  var edit2 = createEdit(win, InputType.INT, 'int auto fix[1-100]', '', 10, 50, 228, 30);
  edit2.setIntLimit(1, 100, 1);
  edit2.setAutoFix(true);

  var edit3 = createEdit(win, InputType.FLOAT, 'float[1-10]', '1.23', 10, 90, 228, 30);
  edit3.setFloatLimit(1, 10, 1);

  var edit4 = createEdit(win, InputType.PASSWORD, 'password', '', 10, 10+128, 228, 30);
  var edit5 = createEdit(win, InputType.TEXT, 'text', 'readonly', 10, 50+128, 228, 30);
  edit5.setReadonly(true);

  var edit6 = createEdit(win, InputType.HEX, 'hex', '', 10, 90+128, 228, 30);
  var edit7 = createEdit(win, InputType.EMAIL, 'email', '', 10, 130+128, 228, 30);

  win.layout();
}

applicationInit()


