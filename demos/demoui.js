
var sPreloadRes = [
  {type : TAssetType.IMAGE, name : "bg800x480"},
  {type : TAssetType.IMAGE, name : "earth"},
  {type : TAssetType.IMAGE, name : "dialogTitle"},
  {type : TAssetType.IMAGE, name : "rgb"},
  {type : TAssetType.IMAGE, name : "rgba"}
]

function strContains(str, substr) {
  return str && str.indexOf(substr) >= 0;
}

function installOne(w) { 
  var iter = TWidget.cast(w);
  var widgetName = iter.name;

  if(strContains(widgetName, 'open')) {
    var name = iter.name.substr(5);
    iter.on(TEventType.CLICK, function(evt) {
      openWindow(name, null);
    })
    print('open window:' + name);
  } else if(strContains(widgetName, 'close')) {
    iter.on(TEventType.CLICK, function(evt) {
      TWindow.cast(iter.getWindow()).close();
    })
    print('close window: ' + widgetName);
  } else if(strContains(widgetName, 'quit')) {
    iter.on(TEventType.CLICK, function(evt) {
      TDialog.cast(iter.getWindow()).quit(0);
    })
    print('quit dialog.' + widgetName);
  } else if(strContains(widgetName, 'exit')) {
    iter.on(TEventType.CLICK, function(evt) {
      TGlobal.quit();
    })
  } else if(strContains(widgetName, 'key')) {
    iter.on(TEventType.CLICK, function(evt) {
      TInputMethod.instance().commitText(iter.getText());
      print('commitText');
    })
  } else if(strContains(widgetName, 'backspace')) {
    iter.on(TEventType.CLICK, function(evt) {
      TInputMethod.instance().dispatchKey(TKeyCode.KEY_BACKSPACE);
      print('dispatchKey');
    })
  } else if(strContains(widgetName, 'chinese')) {
    iter.on(TEventType.CLICK, function(evt) {
      Tklocale.instance().change('zh', 'CN');
    })
  } else if(strContains(widgetName, 'english')) {
    iter.on(TEventType.CLICK, function(evt) {
      Tklocale.instance().change('en', 'US');
    })
  } else if(strContains(widgetName, 'show_fps')) {
    iter.on(TEventType.CLICK, function(evt) {
      var wm = TWindowManager.instance();
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

  return TRet.OK;
}

function installHandlers(win) {
  print('installHandlers');
  win.foreach(installOne);
}

function openWindow(name, toClose) {
  var win = null;
  print('open ' + name);
  if(toClose) {
    win = TWindow.openAndClose(name, toClose);
  } else {
    win = TWindow.open(name);
  }

  installHandlers(win);

  print(win.getType() + '.' + TWidgetType.DIALOG);

  if(win.getType() == TWidgetType.DIALOG) {
    print('win.modal');
    TDialog.cast(win).modal();
  }
}

function showPreloadResWindow() {
  var win = TWindow.open('preload');
  var interval = 500 / sPreloadRes.length; 
  var bar = win.lookup('bar', true);
  var status = win.lookup('status', true);
  var total = sPreloadRes.length;
  var finish = 0;
  var bitmap = TBitmap.create();

  status.setText('ready');
  bar.setValue(10);

  TTimer.add(function(info) { 
    if(finish == total) {
      print('done')
      TWindow.open('system_bar');
      openWindow('main', win);
      bitmap = null;
      gc();

      return TRet.REMOVE;
    } else {
      var type = sPreloadRes[finish].type;
      var name = sPreloadRes[finish].name;

      if(type == TAssetType.IMAGE) {
        TImageManager.instance().getBitmap(name, bitmap);
      }

      finish = finish + 1;
      var value = finish * 100 / total;
      var text = 'Load. ' + name + '(' + (finish) + '/' + (total) + ')';
      
      bar.setValue(value);
      status.setText(text);

      return TRet.REPEAT;
    }
  }, interval);
}

function applicationInit() {
  showPreloadResWindow()
}

applicationInit()


