function application_init() {
  var c = Color.create(1, 2, 3, 4);

  print(c.r());
  print(c.g());
  print(c.b());
  print(c.a());

  c.fromStr("gold");

  print(c.r());
  print(c.g());
  print(c.b());
  print(c.a());
  c = null;

  gc();
}

application_init();
