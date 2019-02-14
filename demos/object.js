
function application_init() {
  var obj = ObjectDefault.create();
  var v = Value.create();
  var e = Event.create(EventBaseType.PROP_CHANGED, null);

  obj.on(EventBaseType.PROP_CHANGED, function(e) {
    var evt = PropChangeEvent.cast(e);
    print(evt.type);
    print(evt.name);
    print(Value.cast(evt.value).str());
  });

  obj.setProp("prop_name", v.setStr("prop_value"));

  e = null;
  v = null;
  obj = null;

  gc();
}

application_init();
