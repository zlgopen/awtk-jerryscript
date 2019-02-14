
function application_init() {
  var emitter = Emitter.create();
  var e = Event.create(EventBaseType.PROP_CHANGED, null);

  emitter.on(EventBaseType.PROP_CHANGED, function(e) {
    var evt = Event.cast(e);
    var em = Emitter.cast(evt.target); 

    print("evt.type = " + evt.type);
    print("emitter.size() = " + em.size());
  });

  emitter.dispatch(e);

  e = null;
  emitter = null;
  gc();
}

application_init();

