
function application_init() {
  print(TTimeNow.s());
  print(TTimeNow.ms());

  var dt = TDateTime.create();

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
