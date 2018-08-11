
function application_init() {
  var win = window_create(null, 0, 0, 0, 0);
  var ok = button_create(win, 0, 0, 0, 0);

  widget_set_text_utf8(ok, "ok");
  widget_set_self_layout_params(ok, "center", "middle", "50%", "30");

  widget_on(ok, EVT_CLICK(), function(evt) { 
    var e = pointer_event_cast(evt);
    print("on click: " + pointer_event_t_get_prop_x(e) + " " + pointer_event_t_get_prop_y(e))
    return Ret.OK;
  })

  widget_layout(win);
}

application_init()


