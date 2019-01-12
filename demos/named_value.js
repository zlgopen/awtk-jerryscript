var v = Value.create()
var nv = NamedValue.create()

nv.setName("name")
nv.setValue(v.setStr("hello"));

print(nv.name + ':' + nv.getValue().str());

nv.destroy();
v.destroy();


