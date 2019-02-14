
function application_init() {
  var v = Value.create()
  var nv = NamedValue.create()

  nv.setName("name")
  nv.setValue(v.setStr("hello"));

  print(nv.name + ':' + nv.getValue().str());

  nv = null;
  v = null;
  gc()
}

application_init();
