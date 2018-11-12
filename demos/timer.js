
var count = 0;
Timer.add(function() {
  print(count);
  if(count < 10) {
    count += 1;
    return Ret.REPEAT;
  } else {
    tk_quit();
    return Ret.OK;
  }
}, 1000);
