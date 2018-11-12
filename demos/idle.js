
var count = 0;
Idle.add(function() {
  print(count);
  if(count < 10) {
    count += 1;
    return Ret.REPEAT;
  } else {
    return Ret.OK;
  }
});
