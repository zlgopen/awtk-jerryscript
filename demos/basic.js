
function application_init() {
  var win = Window.open("basic");

  win.child("inc_value").on(EventType.CLICK, function(evt) { 
    win.child("bar1").addValue(10);
    win.child("bar2").addValue(10);
  });
  
  win.child("dec_value").on(EventType.CLICK, function(evt) { 
    win.child("bar1").addValue(-10);
    win.child("bar2").addValue(-10);
  });
  
  win.child("close").on(EventType.CLICK, function(evt) { 
    print('bar1 value:' + win.child("bar1").getValue());
    print('bar2 value:' + win.child("bar2").getValue());
  });
}

application_init()


