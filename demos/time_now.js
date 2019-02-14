
function application_init() {
  print(TimeNow.s());
  print(TimeNow.ms());

  var dt = DateTime.create();

  print(dt.year);
  print(dt.month);
  print(dt.day);
  print(dt.hour);
  print(dt.minute);
  print(dt.second);

  dt = null;
  gc();
}

application_init();
