
function createImage(win, imageName, drawType) { 
  var image = Image.create(win, 0, 0, 0, 0);

  image.useStyle('border');
  image.setDrawType(drawType);
  image.setImageName(imageName);

  return image;
}

function applicationInit() {
  var image = null;
  var win = Window.create(null, 0, 0, 0, 0);

  image = createImage(win, 'earth', ImageDrawType.ICON);
  image.setRotation(0.5);
  image.setScale(1, 2);

  image = createImage(win, 'earth', ImageDrawType.CENTER);
  image = createImage(win, 'earth', ImageDrawType.SCALE_AUTO);
  
  image = createImage(win, '1', ImageDrawType.SCALE);
  image = createImage(win, '2', ImageDrawType.SCALE_W);
  image = createImage(win, '3', ImageDrawType.SCALE_H);
  
  image = createImage(win, 'bricks', ImageDrawType.REPEAT);
  image = createImage(win, 'bricks', ImageDrawType.REPEAT_X);
  image = createImage(win, 'bricks', ImageDrawType.REPEAT_Y);

  win.setChildrenLayoutParams("rows:3 cols:3 margin:2 spacing:2");
  win.layout();
}

applicationInit()


