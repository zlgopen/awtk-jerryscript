
function application_init() {
  var win = Window.open("vgcanvas");

  win.child("paint_vgcanvas").on(EventType.PAINT, function(e) { 
    var evt = PaintEvent.cast(e);
    var c = Canvas.cast(evt.c);
    var vg = c.getVgcanvas();

    c.setFillColor("#f0f0f0");
    c.fillRect(0, 0, c.getWidth(), c.getHeight());

    vg.setFillColor("green");
    vg.rect(10, 10, vg.w-20, vg.h-20);
    vg.fill();
   
    vg.save();
    vg.setLineWidth(3);
    vg.setStrokeColor("blue");
    vg.rect(30, 30, vg.w-60, vg.h-60);
    vg.stroke();
    vg.restore();
  });
}

application_init()


