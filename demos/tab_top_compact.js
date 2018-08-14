function createTabButton(tabButtonGroup, text) {
  var tabButton = TabButton.create(tabButtonGroup, 0, 0, 0, 0);
  tabButton.setText(text);

  return tabButton;
}

function createPage(pages, text) { 
  var view = View.create(pages, 0, 0, 0, 0);
  view.setSelfLayoutParams('0', '0', '100%', '100%');

  var label = Label.create(view, 0, 0, 0, 0);
  label.setSelfLayoutParams('0', 'middle', '100%', '30');
  label.setText(text);

  return view;
}

function applicationInit() {
  var win = Window.create(null, 0, 0, 0, 0);
  var tabButtonGroup = TabButtonGroup.create(win, 0, 0, 0, 0);

  win.setPropStr(WidgetProp.THEME, 'tab_top_compact');

  tabButtonGroup.setPropStr(WidgetProp.COMPACT, 'true');
  tabButtonGroup.setSelfLayoutParams('center', '12', '90%', '30');

  createTabButton(tabButtonGroup, 'General');
  createTabButton(tabButtonGroup, 'Network');
  createTabButton(tabButtonGroup, 'Security');

  var  pages = Pages.create(win, 0, 0, 0, 0);
  pages.setSelfLayoutParams('center', '42', '90%', '-60');

  createPage(pages, 'General');
  createPage(pages, 'Network');
  createPage(pages, 'Security');

  win.layout();
}

applicationInit()


