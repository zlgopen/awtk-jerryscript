
function createProgressBar(win, vertical, name) {
  var slider = Slider.create(win, 0, 0, 0, 0);

  slider.on(EventType.VALUE_CHANGED, function(evt) { 
    print(slider.name + ' changed. ' + slider.value);
    return Ret.OK;
  });
  
  slider.on(EventType.VALUE_CHANGING, function(evt) { 
    print(slider.name + ' changing. ' + slider.value);
    return Ret.OK;
  });

  slider.setName(name);
  slider.setValue(10);
  slider.setVertical(vertical);

  if(vertical) {
    slider.setSelfLayoutParams("center", "10", "20", "80%");
  } else {
    slider.setSelfLayoutParams("center", "bottom:10", "90%", "20");
  }

  return slider;
}

function applicationInit() {
  var win = Window.create(null, 0, 0, 0, 0);
  var slider1 = createProgressBar(win, false, 'slider1');
  var slider2 = createProgressBar(win, true, 'slider2');

  win.layout();
}

applicationInit()


