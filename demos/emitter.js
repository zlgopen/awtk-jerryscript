
function application_init() {
  var emitter = TEmitter.create();
  var e = TEvent.create(TEventBaseType.PROP_CHANGED, null);

  emitter.on(TEventBaseType.PROP_CHANGED, function(e) {
    var evt = TEvent.cast(e);
    var em = TEmitter.cast(evt.target); 

    print("evt.type = " + evt.type);
    print("emitter.size() = " + em.size());
  });

  emitter.dispatch(e);

  e = null;
  emitter = null;
  gc();
}

application_init();

