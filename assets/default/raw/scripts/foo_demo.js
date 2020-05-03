var foo = require('foo');

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var label = TLabel.create(win, 0, 0, 0, 0);

  label.useStyle('big_green');
  label.setText("foo.add:" + foo.add(100, 200));
  label.setSelfLayoutParams("center", "middle", "50%", "30");

  win.layout();
}

applicationInit()
