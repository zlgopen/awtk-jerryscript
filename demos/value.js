
function application_init() {
  var v = TValue.create()
  var a = 100;

  v.setInt8(100);
  print(v.int())

  v.setStr("hello");
  print(v.str());

  v.setBool(true)
  v.setBool()
  print(v.bool());

  print(v.type);
  print(TValueType)
  print(TValueType.INVALID);
  print(TValueType.BOOL);
  print(TValueType.FLOAT);

  v = null

  gc()
}

application_init();

