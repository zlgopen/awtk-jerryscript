
var count = 0;
TTimer.add(function() {
  print(count);
  if(count < 10) {
    count += 1;
    return TRet.REPEAT;
  } else {
    tk_quit();
    return TRet.OK;
  }
}, 1000);
