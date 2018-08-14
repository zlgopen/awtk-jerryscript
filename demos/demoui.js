
var sPreloadRes = [
  {type : ResourceType.IMAGE, name : "bg800x480"},
  {type : ResourceType.IMAGE, name : "earth"},
  {type : ResourceType.IMAGE, name : "dialogTitle"},
  {type : ResourceType.IMAGE, name : "rgb"},
  {type : ResourceType.IMAGE, name : "rgba"}
]

function strContains(str, substr) {
  return str.indexOf(substr) >= 0;
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
  } else if(strContains(widgetName, 'chinese')) {
    iter.on(EventType.CLICK, function(evt) {
      Tklocale.instance().change('zh', 'CN');
    })
  } else if(strContains(widgetName, 'english')) {
    iter.on(EventType.CLICK, function(evt) {
      Tklocale.instance().change('en', 'US');
    })
  } else if(strContains(widgetName, 'showFps')) {
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
      openWindow('main', win);
      bitmap.destroy();

      return Ret.REMOVE;
    } else {
      var type = sPreloadRes[finish].type;
      var name = sPreloadRes[finish].name;

      if(type == ResourceType.IMAGE) {
        ImageManager.instance().load(name, bitmap);
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


