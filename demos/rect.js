function application_init() {
  var r = TRect.create(1, 2, 3, 4);

  print(r.x);
  print(r.y);
  print(r.w);
  print(r.h);

  r.set(10, 20, 30, 40);

  print(r.x);
  print(r.y);
  print(r.w);
  print(r.h);

  r = null;
  gc();
}

application_init();
