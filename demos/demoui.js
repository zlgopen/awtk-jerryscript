
var sPreloadRes = [
  {type : AssetType.IMAGE, name : "bg800x480"},
  {type : AssetType.IMAGE, name : "earth"},
  {type : AssetType.IMAGE, name : "dialogTitle"},
  {type : AssetType.IMAGE, name : "rgb"},
  {type : AssetType.IMAGE, name : "rgba"}
]

function strContains(str, substr) {
  return str && str.indexOf(substr) >= 0;
}

function installOne(w) { 
  var iter = Widget.cast(w);
  var widgetName = iter.name;

  if(strContains(widgetName, 'open')) {
    var name = iter.name.substr(5);
    iter.on(EventType.CLICK, function(evt) {
      openWindow(name, null);
    })
    print('open window:' + name);
  } else if(strContains(widgetName, 'close')) {
    iter.on(EventType.CLICK, function(evt) {
      Window.cast(iter.getWindow()).close();
    })
    print('close window: ' + widgetName);
  } else if(strContains(widgetName, 'quit')) {
    iter.on(EventType.CLICK, function(evt) {
      Dialog.cast(iter.getWindow()).quit(0);
    })
    print('quit dialog.' + widgetName);
  } else if(strContains(widgetName, 'exit')) {
    iter.on(EventType.CLICK, function(evt) {
      Tk.quit();
    })
  } else if(strContains(widgetName, 'key')) {
    iter.on(EventType.CLICK, function(evt) {
      InputMethod.instance().commitText(iter.getText());
      print('commitText');
    })
  } else if(strContains(widgetName, 'backspace')) {
    iter.on(EventType.CLICK, function(evt) {
      InputMethod.instance().dispatchKey(KeyCode.KEY_BACKSPACE);
      print('dispatchKey');
    })
  } else if(strContains(widgetName, 'chinese')) {
    iter.on(EventType.CLICK, function(evt) {
      Tklocale.instance().change('zh', 'CN');
    })
  } else if(strContains(widgetName, 'english')) {
    iter.on(EventType.CLICK, function(evt) {
      Tklocale.instance().change('en', 'US');
    })
  } else if(strContains(widgetName, 'show_fps')) {
    iter.on(EventType.CLICK, function(evt) {
      var wm = WindowManager.instance();
      print(wm.showFps)
      if(wm.showFps) {
        wm.setShowFps(false);
        iter.setText("Show FPS");
      } else {
        wm.setShowFps(true);
        iter.setText("Hide FPS");
      }
    })
    print('close window.' + widgetName);
  }

  return Ret.OK;
}

function installHandlers(win) {
  print('installHandlers');
  win.foreach(installOne);
}

function openWindow(name, toClose) {
  var win = null;
  print('open ' + name);
  if(toClose) {
    win = Window.openAndClose(name, toClose);
  } else {
    win = Window.open(name);
  }

  installHandlers(win);

  print(win.getType() + '.' + WidgetType.DIALOG);

  if(win.getType() == WidgetType.DIALOG) {
    print('win.modal');
    Dialog.cast(win).modal();
  }
}

function showPreloadResWindow() {
  var win = Window.open('preload');
  var interval = 500 / sPreloadRes.length; 
  var bar = win.lookup('bar', true);
  var status = win.lookup('status', true);
  var total = sPreloadRes.length;
  var finish = 0;
  var bitmap = Bitmap.create();

  status.setText('ready');
  bar.setValue(10);

  Timer.add(function(info) { 
    if(finish == total) {
      print('done')
      Window.open('system_bar');
      openWindow('main', win);
      bitmap = null;
      gc();

      return Ret.REMOVE;
    } else {
      var type = sPreloadRes[finish].type;
      var name = sPreloadRes[finish].name;

      if(type == AssetType.IMAGE) {
        ImageManager.instance().getBitmap(name, bitmap);
      }

      finish = finish + 1;
      var value = finish * 100 / total;
      var text = 'Load. ' + name + '(' + (finish) + '/' + (total) + ')';
      
      bar.setValue(value);
      status.setText(text);

      return Ret.REPEAT;
    }
  }, interval);
}

function applicationInit() {
  showPreloadResWindow()
}

applicationInit()


