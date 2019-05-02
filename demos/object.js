
function application_init() {
  var obj = TObjectDefault.create();
  var v = TValue.create();
  var e = TEvent.create(TEventBaseType.PROP_CHANGED, null);

  obj.on(TEventBaseType.PROP_CHANGED, function(e) {
    var evt = TPropChangeEvent.cast(e);
    print(evt.type);
    print(evt.name);
    print(TValue.cast(evt.value).str());
  });

  obj.setProp("prop_name", v.setStr("prop_value"));

  e = null;
  v = null;
  obj = null;

  gc();
}

application_init();
