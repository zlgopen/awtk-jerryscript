
function application_init() {
  var win = Window.open("basic");

  win.lookup("inc_value", true).on(EventType.CLICK, function(evt) { 
    win.child("bar1").addValue(10);
    win.child("bar2").addValue(10);
  });
  
  win.lookup("dec_value", true).on(EventType.CLICK, function(evt) { 
    win.child("bar1").addValue(-10);
    win.child("bar2").addValue(-10);
  });
  
  win.lookup("close", true).on(EventType.CLICK, function(evt) { 
    print('bar1 value:' + win.child("bar1").getValue());
    print('bar2 value:' + win.child("bar2").getValue());
  });
}

application_init()


