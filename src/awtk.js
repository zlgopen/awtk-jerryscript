var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (b.hasOwnProperty(p)) d[p] = b[p]; };
        return extendStatics(d, b);
    }
    return function (d, b) {
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
var BitmapFormat = /** @class */ (function () {
    function BitmapFormat(nativeObj) {
        this.nativeObj = nativeObj;
    }
    BitmapFormat.BITMAP_FMT_NONE = BITMAP_FMT_NONE();
    BitmapFormat.BITMAP_FMT_RGBA = BITMAP_FMT_RGBA();
    BitmapFormat.BITMAP_FMT_BGRA = BITMAP_FMT_BGRA();
    BitmapFormat.BITMAP_FMT_RGB565 = BITMAP_FMT_RGB565();
    return BitmapFormat;
}());
var InputType = /** @class */ (function () {
    function InputType(nativeObj) {
        this.nativeObj = nativeObj;
    }
    InputType.INPUT_TEXT = INPUT_TEXT();
    InputType.INPUT_INT = INPUT_INT();
    InputType.INPUT_UINT = INPUT_UINT();
    InputType.INPUT_HEX = INPUT_HEX();
    InputType.INPUT_FLOAT = INPUT_FLOAT();
    InputType.INPUT_UFLOAT = INPUT_UFLOAT();
    InputType.INPUT_EMAIL = INPUT_EMAIL();
    InputType.INPUT_PASSWORD = INPUT_PASSWORD();
    InputType.INPUT_PHONE = INPUT_PHONE();
    return InputType;
}());
var BitmapFlag = /** @class */ (function () {
    function BitmapFlag(nativeObj) {
        this.nativeObj = nativeObj;
    }
    BitmapFlag.BITMAP_FLAG_NONE = BITMAP_FLAG_NONE();
    BitmapFlag.BITMAP_FLAG_OPAQUE = BITMAP_FLAG_OPAQUE();
    BitmapFlag.BITMAP_FLAG_IMMUTABLE = BITMAP_FLAG_IMMUTABLE();
    BitmapFlag.BITMAP_FLAG_TEXTURE = BITMAP_FLAG_TEXTURE();
    return BitmapFlag;
}());
var ResourceType = /** @class */ (function () {
    function ResourceType(nativeObj) {
        this.nativeObj = nativeObj;
    }
    ResourceType.RESOURCE_TYPE_NONE = RESOURCE_TYPE_NONE();
    ResourceType.RESOURCE_TYPE_FONT = RESOURCE_TYPE_FONT();
    ResourceType.RESOURCE_TYPE_IMAGE = RESOURCE_TYPE_IMAGE();
    ResourceType.RESOURCE_TYPE_THEME = RESOURCE_TYPE_THEME();
    ResourceType.RESOURCE_TYPE_UI = RESOURCE_TYPE_UI();
    ResourceType.RESOURCE_TYPE_XML = RESOURCE_TYPE_XML();
    ResourceType.RESOURCE_TYPE_STRINGS = RESOURCE_TYPE_STRINGS();
    ResourceType.RESOURCE_TYPE_DATA = RESOURCE_TYPE_DATA();
    return ResourceType;
}());
var EventType = /** @class */ (function () {
    function EventType(nativeObj) {
        this.nativeObj = nativeObj;
    }
    EventType.EVT_NONE = EVT_NONE();
    EventType.EVT_POINTER_DOWN = EVT_POINTER_DOWN();
    EventType.EVT_POINTER_DOWN_ABORT = EVT_POINTER_DOWN_ABORT();
    EventType.EVT_POINTER_MOVE = EVT_POINTER_MOVE();
    EventType.EVT_POINTER_UP = EVT_POINTER_UP();
    EventType.EVT_WHEEL = EVT_WHEEL();
    EventType.EVT_CONTEXT_MENU = EVT_CONTEXT_MENU();
    EventType.EVT_POINTER_ENTER = EVT_POINTER_ENTER();
    EventType.EVT_POINTER_LEAVE = EVT_POINTER_LEAVE();
    EventType.EVT_LONG_PRESS = EVT_LONG_PRESS();
    EventType.EVT_CLICK = EVT_CLICK();
    EventType.EVT_FOCUS = EVT_FOCUS();
    EventType.EVT_BLUR = EVT_BLUR();
    EventType.EVT_KEY_DOWN = EVT_KEY_DOWN();
    EventType.EVT_KEY_REPEAT = EVT_KEY_REPEAT();
    EventType.EVT_KEY_UP = EVT_KEY_UP();
    EventType.EVT_DESTROY = EVT_DESTROY();
    EventType.EVT_WILL_MOVE = EVT_WILL_MOVE();
    EventType.EVT_MOVE = EVT_MOVE();
    EventType.EVT_WILL_RESIZE = EVT_WILL_RESIZE();
    EventType.EVT_RESIZE = EVT_RESIZE();
    EventType.EVT_WILL_MOVE_RESIZE = EVT_WILL_MOVE_RESIZE();
    EventType.EVT_MOVE_RESIZE = EVT_MOVE_RESIZE();
    EventType.EVT_PROP_WILL_CHANGE = EVT_PROP_WILL_CHANGE();
    EventType.EVT_PROP_CHANGED = EVT_PROP_CHANGED();
    EventType.EVT_VALUE_WILL_CHANGE = EVT_VALUE_WILL_CHANGE();
    EventType.EVT_VALUE_CHANGED = EVT_VALUE_CHANGED();
    EventType.EVT_VALUE_CHANGING = EVT_VALUE_CHANGING();
    EventType.EVT_PAINT = EVT_PAINT();
    EventType.EVT_BEFORE_PAINT = EVT_BEFORE_PAINT();
    EventType.EVT_AFTER_PAINT = EVT_AFTER_PAINT();
    EventType.EVT_LOCALE_CHANGED = EVT_LOCALE_CHANGED();
    EventType.EVT_ANIM_START = EVT_ANIM_START();
    EventType.EVT_ANIM_STOP = EVT_ANIM_STOP();
    EventType.EVT_ANIM_ONCE = EVT_ANIM_ONCE();
    EventType.EVT_ANIM_END = EVT_ANIM_END();
    EventType.EVT_WINDOW_LOAD = EVT_WINDOW_LOAD();
    EventType.EVT_WINDOW_OPEN = EVT_WINDOW_OPEN();
    EventType.EVT_WINDOW_CLOSE = EVT_WINDOW_CLOSE();
    EventType.EVT_IM_COMMIT = EVT_IM_COMMIT();
    EventType.EVT_IM_SHOW_CANDIDATES = EVT_IM_SHOW_CANDIDATES();
    EventType.EVT_IM_ACTION = EVT_IM_ACTION();
    EventType.EVT_IM_ACTION_INFO = EVT_IM_ACTION_INFO();
    EventType.EVT_DRAG_START = EVT_DRAG_START();
    EventType.EVT_DRAG = EVT_DRAG();
    EventType.EVT_DRAG_END = EVT_DRAG_END();
    EventType.EVT_REQ_START = EVT_REQ_START();
    EventType.EVT_USER_START = EVT_USER_START();
    return EventType;
}());
var AlignV = /** @class */ (function () {
    function AlignV(nativeObj) {
        this.nativeObj = nativeObj;
    }
    AlignV.ALIGN_V_NONE = ALIGN_V_NONE();
    AlignV.ALIGN_V_MIDDLE = ALIGN_V_MIDDLE();
    AlignV.ALIGN_V_TOP = ALIGN_V_TOP();
    AlignV.ALIGN_V_BOTTOM = ALIGN_V_BOTTOM();
    return AlignV;
}());
var AlignH = /** @class */ (function () {
    function AlignH(nativeObj) {
        this.nativeObj = nativeObj;
    }
    AlignH.ALIGN_H_NONE = ALIGN_H_NONE();
    AlignH.ALIGN_H_CENTER = ALIGN_H_CENTER();
    AlignH.ALIGN_H_LEFT = ALIGN_H_LEFT();
    AlignH.ALIGN_H_RIGHT = ALIGN_H_RIGHT();
    return AlignH;
}());
var ValueType = /** @class */ (function () {
    function ValueType(nativeObj) {
        this.nativeObj = nativeObj;
    }
    ValueType.VALUE_TYPE_INVALID = VALUE_TYPE_INVALID();
    ValueType.VALUE_TYPE_BOOL = VALUE_TYPE_BOOL();
    ValueType.VALUE_TYPE_INT8 = VALUE_TYPE_INT8();
    ValueType.VALUE_TYPE_UINT8 = VALUE_TYPE_UINT8();
    ValueType.VALUE_TYPE_INT16 = VALUE_TYPE_INT16();
    ValueType.VALUE_TYPE_UINT16 = VALUE_TYPE_UINT16();
    ValueType.VALUE_TYPE_INT32 = VALUE_TYPE_INT32();
    ValueType.VALUE_TYPE_UINT32 = VALUE_TYPE_UINT32();
    ValueType.VALUE_TYPE_INT64 = VALUE_TYPE_INT64();
    ValueType.VALUE_TYPE_UINT64 = VALUE_TYPE_UINT64();
    ValueType.VALUE_TYPE_POINTER = VALUE_TYPE_POINTER();
    ValueType.VALUE_TYPE_FLOAT = VALUE_TYPE_FLOAT();
    ValueType.VALUE_TYPE_DOUBLE = VALUE_TYPE_DOUBLE();
    ValueType.VALUE_TYPE_STRING = VALUE_TYPE_STRING();
    ValueType.VALUE_TYPE_WSTRING = VALUE_TYPE_WSTRING();
    return ValueType;
}());
var WidgetProp = /** @class */ (function () {
    function WidgetProp(nativeObj) {
        this.nativeObj = nativeObj;
    }
    WidgetProp.WIDGET_PROP_X = WIDGET_PROP_X();
    WidgetProp.WIDGET_PROP_Y = WIDGET_PROP_Y();
    WidgetProp.WIDGET_PROP_W = WIDGET_PROP_W();
    WidgetProp.WIDGET_PROP_H = WIDGET_PROP_H();
    WidgetProp.WIDGET_PROP_MIN_W = WIDGET_PROP_MIN_W();
    WidgetProp.WIDGET_PROP_MAX_W = WIDGET_PROP_MAX_W();
    WidgetProp.WIDGET_PROP_LAYOUT_W = WIDGET_PROP_LAYOUT_W();
    WidgetProp.WIDGET_PROP_LAYOUT_H = WIDGET_PROP_LAYOUT_H();
    WidgetProp.WIDGET_PROP_VIRTUAL_W = WIDGET_PROP_VIRTUAL_W();
    WidgetProp.WIDGET_PROP_VIRTUAL_H = WIDGET_PROP_VIRTUAL_H();
    WidgetProp.WIDGET_PROP_NAME = WIDGET_PROP_NAME();
    WidgetProp.WIDGET_PROP_VALUE = WIDGET_PROP_VALUE();
    WidgetProp.WIDGET_PROP_TEXT = WIDGET_PROP_TEXT();
    WidgetProp.WIDGET_PROP_TR_TEXT = WIDGET_PROP_TR_TEXT();
    WidgetProp.WIDGET_PROP_STYLE = WIDGET_PROP_STYLE();
    WidgetProp.WIDGET_PROP_ENABLE = WIDGET_PROP_ENABLE();
    WidgetProp.WIDGET_PROP_MARGIN = WIDGET_PROP_MARGIN();
    WidgetProp.WIDGET_PROP_SPACING = WIDGET_PROP_SPACING();
    WidgetProp.WIDGET_PROP_LEFT_MARGIN = WIDGET_PROP_LEFT_MARGIN();
    WidgetProp.WIDGET_PROP_RIGHT_MARGIN = WIDGET_PROP_RIGHT_MARGIN();
    WidgetProp.WIDGET_PROP_TOP_MARGIN = WIDGET_PROP_TOP_MARGIN();
    WidgetProp.WIDGET_PROP_BOTTOM_MARGIN = WIDGET_PROP_BOTTOM_MARGIN();
    WidgetProp.WIDGET_PROP_STEP = WIDGET_PROP_STEP();
    WidgetProp.WIDGET_PROP_VISIBLE = WIDGET_PROP_VISIBLE();
    WidgetProp.WIDGET_PROP_ANIM_HINT = WIDGET_PROP_ANIM_HINT();
    WidgetProp.WIDGET_PROP_OPEN_ANIM_HINT = WIDGET_PROP_OPEN_ANIM_HINT();
    WidgetProp.WIDGET_PROP_CLOSE_ANIM_HINT = WIDGET_PROP_CLOSE_ANIM_HINT();
    WidgetProp.WIDGET_PROP_MIN = WIDGET_PROP_MIN();
    WidgetProp.WIDGET_PROP_TIPS = WIDGET_PROP_TIPS();
    WidgetProp.WIDGET_PROP_INPUT_TYPE = WIDGET_PROP_INPUT_TYPE();
    WidgetProp.WIDGET_PROP_READONLY = WIDGET_PROP_READONLY();
    WidgetProp.WIDGET_PROP_PASSWORD_VISIBLE = WIDGET_PROP_PASSWORD_VISIBLE();
    WidgetProp.WIDGET_PROP_ACTIVE = WIDGET_PROP_ACTIVE();
    WidgetProp.WIDGET_PROP_VERTICAL = WIDGET_PROP_VERTICAL();
    WidgetProp.WIDGET_PROP_SHOW_TEXT = WIDGET_PROP_SHOW_TEXT();
    WidgetProp.WIDGET_PROP_XOFFSET = WIDGET_PROP_XOFFSET();
    WidgetProp.WIDGET_PROP_YOFFSET = WIDGET_PROP_YOFFSET();
    WidgetProp.WIDGET_PROP_AUTO_PLAY = WIDGET_PROP_AUTO_PLAY();
    WidgetProp.WIDGET_PROP_AUTO_FIX = WIDGET_PROP_AUTO_FIX();
    WidgetProp.WIDGET_PROP_X_MIN = WIDGET_PROP_X_MIN();
    WidgetProp.WIDGET_PROP_X_MAX = WIDGET_PROP_X_MAX();
    WidgetProp.WIDGET_PROP_Y_MIN = WIDGET_PROP_Y_MIN();
    WidgetProp.WIDGET_PROP_Y_MAX = WIDGET_PROP_Y_MAX();
    WidgetProp.WIDGET_PROP_MAX = WIDGET_PROP_MAX();
    WidgetProp.WIDGET_PROP_ROW = WIDGET_PROP_ROW();
    WidgetProp.WIDGET_PROP_THEME = WIDGET_PROP_THEME();
    WidgetProp.WIDGET_PROP_SCRIPT = WIDGET_PROP_SCRIPT();
    WidgetProp.WIDGET_PROP_ITEM_WIDTH = WIDGET_PROP_ITEM_WIDTH();
    WidgetProp.WIDGET_PROP_ITEM_HEIGHT = WIDGET_PROP_ITEM_HEIGHT();
    WidgetProp.WIDGET_PROP_DEFAULT_ITEM_HEIGHT = WIDGET_PROP_DEFAULT_ITEM_HEIGHT();
    WidgetProp.WIDGET_PROP_XSLIDABLE = WIDGET_PROP_XSLIDABLE();
    WidgetProp.WIDGET_PROP_YSLIDABLE = WIDGET_PROP_YSLIDABLE();
    WidgetProp.WIDGET_PROP_REPEAT = WIDGET_PROP_REPEAT();
    WidgetProp.WIDGET_PROP_ANIMATABLE = WIDGET_PROP_ANIMATABLE();
    WidgetProp.WIDGET_PROP_AUTO_HIDE_SCROLL_BAR = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR();
    WidgetProp.WIDGET_PROP_IMAGE = WIDGET_PROP_IMAGE();
    WidgetProp.WIDGET_PROP_DRAW_TYPE = WIDGET_PROP_DRAW_TYPE();
    WidgetProp.WIDGET_PROP_SELECTABLE = WIDGET_PROP_SELECTABLE();
    WidgetProp.WIDGET_PROP_CLICKABLE = WIDGET_PROP_CLICKABLE();
    WidgetProp.WIDGET_PROP_SCALE_X = WIDGET_PROP_SCALE_X();
    WidgetProp.WIDGET_PROP_SCALE_Y = WIDGET_PROP_SCALE_Y();
    WidgetProp.WIDGET_PROP_ANCHOR_X = WIDGET_PROP_ANCHOR_X();
    WidgetProp.WIDGET_PROP_ANCHOR_Y = WIDGET_PROP_ANCHOR_Y();
    WidgetProp.WIDGET_PROP_ROTATION = WIDGET_PROP_ROTATION();
    WidgetProp.WIDGET_PROP_SUB_THEME = WIDGET_PROP_SUB_THEME();
    WidgetProp.WIDGET_PROP_COMPACT = WIDGET_PROP_COMPACT();
    WidgetProp.WIDGET_PROP_ICON = WIDGET_PROP_ICON();
    WidgetProp.WIDGET_PROP_OPTIONS = WIDGET_PROP_OPTIONS();
    WidgetProp.WIDGET_PROP_SELECTED = WIDGET_PROP_SELECTED();
    WidgetProp.WIDGET_PROP_ACTIVE_ICON = WIDGET_PROP_ACTIVE_ICON();
    WidgetProp.WIDGET_PROP_OPEN_WINDOW = WIDGET_PROP_OPEN_WINDOW();
    WidgetProp.WIDGET_PROP_SELECTED_INDEX = WIDGET_PROP_SELECTED_INDEX();
    WidgetProp.WIDGET_PROP_CLOSE_WHEN_CLICK = WIDGET_PROP_CLOSE_WHEN_CLICK();
    WidgetProp.WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE();
    WidgetProp.WIDGET_PROP_LINE_GAP = WIDGET_PROP_LINE_GAP();
    return WidgetProp;
}());
var WidgetType = /** @class */ (function () {
    function WidgetType(nativeObj) {
        this.nativeObj = nativeObj;
    }
    WidgetType.WIDGET_TYPE_NONE = WIDGET_TYPE_NONE();
    WidgetType.WIDGET_TYPE_WINDOW_MANAGER = WIDGET_TYPE_WINDOW_MANAGER();
    WidgetType.WIDGET_TYPE_NORMAL_WINDOW = WIDGET_TYPE_NORMAL_WINDOW();
    WidgetType.WIDGET_TYPE_TOOL_BAR = WIDGET_TYPE_TOOL_BAR();
    WidgetType.WIDGET_TYPE_DIALOG = WIDGET_TYPE_DIALOG();
    WidgetType.WIDGET_TYPE_POPUP = WIDGET_TYPE_POPUP();
    WidgetType.WIDGET_TYPE_SPRITE = WIDGET_TYPE_SPRITE();
    WidgetType.WIDGET_TYPE_KEYBOARD = WIDGET_TYPE_KEYBOARD();
    WidgetType.WIDGET_TYPE_DND = WIDGET_TYPE_DND();
    WidgetType.WIDGET_TYPE_LABEL = WIDGET_TYPE_LABEL();
    WidgetType.WIDGET_TYPE_BUTTON = WIDGET_TYPE_BUTTON();
    WidgetType.WIDGET_TYPE_IMAGE = WIDGET_TYPE_IMAGE();
    WidgetType.WIDGET_TYPE_EDIT = WIDGET_TYPE_EDIT();
    WidgetType.WIDGET_TYPE_PROGRESS_BAR = WIDGET_TYPE_PROGRESS_BAR();
    WidgetType.WIDGET_TYPE_GROUP_BOX = WIDGET_TYPE_GROUP_BOX();
    WidgetType.WIDGET_TYPE_CHECK_BUTTON = WIDGET_TYPE_CHECK_BUTTON();
    WidgetType.WIDGET_TYPE_RADIO_BUTTON = WIDGET_TYPE_RADIO_BUTTON();
    WidgetType.WIDGET_TYPE_DIALOG_TITLE = WIDGET_TYPE_DIALOG_TITLE();
    WidgetType.WIDGET_TYPE_DIALOG_CLIENT = WIDGET_TYPE_DIALOG_CLIENT();
    WidgetType.WIDGET_TYPE_SLIDER = WIDGET_TYPE_SLIDER();
    WidgetType.WIDGET_TYPE_VIEW = WIDGET_TYPE_VIEW();
    WidgetType.WIDGET_TYPE_COMBO_BOX = WIDGET_TYPE_COMBO_BOX();
    WidgetType.WIDGET_TYPE_COMBO_BOX_ITEM = WIDGET_TYPE_COMBO_BOX_ITEM();
    WidgetType.WIDGET_TYPE_SLIDE_VIEW = WIDGET_TYPE_SLIDE_VIEW();
    WidgetType.WIDGET_TYPE_PAGES = WIDGET_TYPE_PAGES();
    WidgetType.WIDGET_TYPE_TAB_BUTTON = WIDGET_TYPE_TAB_BUTTON();
    WidgetType.WIDGET_TYPE_TAB_CONTROL = WIDGET_TYPE_TAB_CONTROL();
    WidgetType.WIDGET_TYPE_TAB_BUTTON_GROUP = WIDGET_TYPE_TAB_BUTTON_GROUP();
    WidgetType.WIDGET_TYPE_BUTTON_GROUP = WIDGET_TYPE_BUTTON_GROUP();
    WidgetType.WIDGET_TYPE_CANDIDATES = WIDGET_TYPE_CANDIDATES();
    WidgetType.WIDGET_TYPE_SPIN_BOX = WIDGET_TYPE_SPIN_BOX();
    WidgetType.WIDGET_TYPE_DRAGGER = WIDGET_TYPE_DRAGGER();
    WidgetType.WIDGET_TYPE_SCROLL_BAR = WIDGET_TYPE_SCROLL_BAR();
    WidgetType.WIDGET_TYPE_SCROLL_BAR_DESKTOP = WIDGET_TYPE_SCROLL_BAR_DESKTOP();
    WidgetType.WIDGET_TYPE_SCROLL_BAR_MOBILE = WIDGET_TYPE_SCROLL_BAR_MOBILE();
    WidgetType.WIDGET_TYPE_SCROLL_VIEW = WIDGET_TYPE_SCROLL_VIEW();
    WidgetType.WIDGET_TYPE_LIST_VIEW = WIDGET_TYPE_LIST_VIEW();
    WidgetType.WIDGET_TYPE_LIST_VIEW_H = WIDGET_TYPE_LIST_VIEW_H();
    WidgetType.WIDGET_TYPE_LIST_ITEM = WIDGET_TYPE_LIST_ITEM();
    return WidgetType;
}());
var ImageDrawType = /** @class */ (function () {
    function ImageDrawType(nativeObj) {
        this.nativeObj = nativeObj;
    }
    ImageDrawType.IMAGE_DRAW_DEFAULT = IMAGE_DRAW_DEFAULT();
    ImageDrawType.IMAGE_DRAW_CENTER = IMAGE_DRAW_CENTER();
    ImageDrawType.IMAGE_DRAW_ICON = IMAGE_DRAW_ICON();
    ImageDrawType.IMAGE_DRAW_SCALE = IMAGE_DRAW_SCALE();
    ImageDrawType.IMAGE_DRAW_SCALE_AUTO = IMAGE_DRAW_SCALE_AUTO();
    ImageDrawType.IMAGE_DRAW_SCALE_W = IMAGE_DRAW_SCALE_W();
    ImageDrawType.IMAGE_DRAW_SCALE_H = IMAGE_DRAW_SCALE_H();
    ImageDrawType.IMAGE_DRAW_REPEAT = IMAGE_DRAW_REPEAT();
    ImageDrawType.IMAGE_DRAW_REPEAT_X = IMAGE_DRAW_REPEAT_X();
    ImageDrawType.IMAGE_DRAW_REPEAT_Y = IMAGE_DRAW_REPEAT_Y();
    ImageDrawType.IMAGE_DRAW_9PATCH = IMAGE_DRAW_9PATCH();
    ImageDrawType.IMAGE_DRAW_3PATCH_X = IMAGE_DRAW_3PATCH_X();
    ImageDrawType.IMAGE_DRAW_3PATCH_Y = IMAGE_DRAW_3PATCH_Y();
    ImageDrawType.IMAGE_DRAW_3PATCH_X_SCALE_Y = IMAGE_DRAW_3PATCH_X_SCALE_Y();
    ImageDrawType.IMAGE_DRAW_3PATCH_Y_SCALE_X = IMAGE_DRAW_3PATCH_Y_SCALE_X();
    return ImageDrawType;
}());
var WidgetState = /** @class */ (function () {
    function WidgetState(nativeObj) {
        this.nativeObj = nativeObj;
    }
    WidgetState.WIDGET_STATE_NONE = WIDGET_STATE_NONE();
    WidgetState.WIDGET_STATE_NORMAL = WIDGET_STATE_NORMAL();
    WidgetState.WIDGET_STATE_PRESSED = WIDGET_STATE_PRESSED();
    WidgetState.WIDGET_STATE_OVER = WIDGET_STATE_OVER();
    WidgetState.WIDGET_STATE_DISABLE = WIDGET_STATE_DISABLE();
    WidgetState.WIDGET_STATE_FOCUSED = WIDGET_STATE_FOCUSED();
    WidgetState.WIDGET_STATE_CHECKED = WIDGET_STATE_CHECKED();
    WidgetState.WIDGET_STATE_UNCHECKED = WIDGET_STATE_UNCHECKED();
    WidgetState.WIDGET_STATE_EMPTY = WIDGET_STATE_EMPTY();
    WidgetState.WIDGET_STATE_ERROR = WIDGET_STATE_ERROR();
    WidgetState.WIDGET_STATE_SELECTED = WIDGET_STATE_SELECTED();
    return WidgetState;
}());
var Ret = /** @class */ (function () {
    function Ret(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Ret.RET_OK = RET_OK();
    Ret.RET_OOM = RET_OOM();
    Ret.RET_FAIL = RET_FAIL();
    Ret.RET_NOT_IMPL = RET_NOT_IMPL();
    Ret.RET_QUIT = RET_QUIT();
    Ret.RET_FOUND = RET_FOUND();
    Ret.RET_REMOVE = RET_REMOVE();
    Ret.RET_REPEAT = RET_REPEAT();
    Ret.RET_NOT_FOUND = RET_NOT_FOUND();
    Ret.RET_DONE = RET_DONE();
    Ret.RET_STOP = RET_STOP();
    Ret.RET_CONTINUE = RET_CONTINUE();
    Ret.RET_BAD_PARAMS = RET_BAD_PARAMS();
    return Ret;
}());
var Bitmap = /** @class */ (function () {
    function Bitmap(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Bitmap.create = function () {
        return new Bitmap(bitmap_create());
    };
    Bitmap.prototype.destroy = function () {
        return bitmap_destroy(this.nativeObj);
    };
    Object.defineProperty(Bitmap.prototype, "w", {
        get: function () {
            return bitmap_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Bitmap.prototype, "h", {
        get: function () {
            return bitmap_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Bitmap.prototype, "flags", {
        get: function () {
            return bitmap_t_get_prop_flags(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Bitmap.prototype, "format", {
        get: function () {
            return bitmap_t_get_prop_format(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Bitmap.prototype, "name", {
        get: function () {
            return bitmap_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Bitmap;
}());
var ResourceManager = /** @class */ (function () {
    function ResourceManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    ResourceManager.instance = function () {
        return new ResourceManager(resource_manager());
    };
    ResourceManager.prototype.ref = function (type, name) {
        return resource_manager_ref(this.nativeObj, type, name);
    };
    ResourceManager.prototype.unref = function (info) {
        return resource_manager_unref(this.nativeObj, info);
    };
    return ResourceManager;
}());
var Timer = /** @class */ (function () {
    function Timer(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Timer.add = function (on_timer, ctx, duration_ms) {
        return timer_add(on_timer, ctx, duration_ms);
    };
    Timer.remove = function (timer_id) {
        return timer_remove(timer_id);
    };
    return Timer;
}());
var Tklocale = /** @class */ (function () {
    function Tklocale(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Tklocale.instance = function () {
        return new Tklocale(tklocale());
    };
    Tklocale.prototype.tr = function (text) {
        return tklocale_tr(this.nativeObj, text);
    };
    Tklocale.prototype.change = function (language, country) {
        return tklocale_change(this.nativeObj, language, country);
    };
    Tklocale.prototype.on = function (type, on_event, ctx) {
        return tklocale_on(this.nativeObj, type, on_event, ctx);
    };
    Tklocale.prototype.off = function (id) {
        return tklocale_off(this.nativeObj, id);
    };
    return Tklocale;
}());
var Idle = /** @class */ (function () {
    function Idle(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Idle.add = function (on_idle, ctx) {
        return idle_add(on_idle, ctx);
    };
    Idle.remove = function (idle_id) {
        return idle_remove(idle_id);
    };
    return Idle;
}());
var ImageManager = /** @class */ (function () {
    function ImageManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    ImageManager.instance = function () {
        return new ImageManager(image_manager());
    };
    ImageManager.prototype.load = function (name, image) {
        return image_manager_load(this.nativeObj, name, image);
    };
    return ImageManager;
}());
var Canvas = /** @class */ (function () {
    function Canvas(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return Canvas;
}());
var Value = /** @class */ (function () {
    function Value(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Value.prototype.setBool = function (value) {
        return value_set_bool(this.nativeObj, value);
    };
    Value.prototype.bool = function () {
        return value_bool(this.nativeObj);
    };
    Value.prototype.setInt8 = function (value) {
        return value_set_int8(this.nativeObj, value);
    };
    Value.prototype.int8 = function () {
        return value_int8(this.nativeObj);
    };
    Value.prototype.setUint8 = function (value) {
        return value_set_uint8(this.nativeObj, value);
    };
    Value.prototype.uint8 = function () {
        return value_uint8(this.nativeObj);
    };
    Value.prototype.setInt16 = function (value) {
        return value_set_int16(this.nativeObj, value);
    };
    Value.prototype.int16 = function () {
        return value_int16(this.nativeObj);
    };
    Value.prototype.setUint16 = function (value) {
        return value_set_uint16(this.nativeObj, value);
    };
    Value.prototype.uint16 = function () {
        return value_uint16(this.nativeObj);
    };
    Value.prototype.setInt32 = function (value) {
        return value_set_int32(this.nativeObj, value);
    };
    Value.prototype.int32 = function () {
        return value_int32(this.nativeObj);
    };
    Value.prototype.setUint32 = function (value) {
        return value_set_uint32(this.nativeObj, value);
    };
    Value.prototype.setInt64 = function (value) {
        return value_set_int64(this.nativeObj, value);
    };
    Value.prototype.int64 = function () {
        return value_int64(this.nativeObj);
    };
    Value.prototype.setUint64 = function (value) {
        return value_set_uint64(this.nativeObj, value);
    };
    Value.prototype.uint64 = function () {
        return value_uint64(this.nativeObj);
    };
    Value.prototype.setFloat = function (value) {
        return value_set_float(this.nativeObj, value);
    };
    Value.prototype.float = function () {
        return value_float(this.nativeObj);
    };
    Value.prototype.setDouble = function (value) {
        return value_set_double(this.nativeObj, value);
    };
    Value.prototype.double = function () {
        return value_double(this.nativeObj);
    };
    Value.prototype.setStr = function (value) {
        return value_set_str(this.nativeObj, value);
    };
    Value.prototype.str = function () {
        return value_str(this.nativeObj);
    };
    Value.prototype.isNull = function () {
        return value_is_null(this.nativeObj);
    };
    Value.prototype.int = function () {
        return value_int(this.nativeObj);
    };
    Value.prototype.setInt = function (value) {
        return value_set_int(this.nativeObj, value);
    };
    Value.create = function () {
        return new Value(value_create());
    };
    Value.prototype.destroy = function () {
        return value_destroy(this.nativeObj);
    };
    Object.defineProperty(Value.prototype, "type", {
        get: function () {
            return value_t_get_prop_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Value;
}());
var Point = /** @class */ (function () {
    function Point(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return Point;
}());
var Rect = /** @class */ (function () {
    function Rect(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return Rect;
}());
var Event = /** @class */ (function () {
    function Event(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Object.defineProperty(Event.prototype, "type", {
        get: function () {
            return event_t_get_prop_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Event.prototype, "time", {
        get: function () {
            return event_t_get_prop_time(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Event.prototype, "target", {
        get: function () {
            return event_t_get_prop_target(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Event;
}());
var Widget = /** @class */ (function () {
    function Widget(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Widget.prototype.countChildren = function () {
        return widget_count_children(this.nativeObj);
    };
    Widget.prototype.getChild = function (index) {
        return widget_get_child(this.nativeObj, index);
    };
    Widget.prototype.indexOf = function () {
        return widget_index_of(this.nativeObj);
    };
    Widget.prototype.move = function (x, y) {
        return widget_move(this.nativeObj, x, y);
    };
    Widget.prototype.resize = function (w, h) {
        return widget_resize(this.nativeObj, w, h);
    };
    Widget.prototype.moveResize = function (x, y, w, h) {
        return widget_move_resize(this.nativeObj, x, y, w, h);
    };
    Widget.prototype.setValue = function (value) {
        return widget_set_value(this.nativeObj, value);
    };
    Widget.prototype.setText = function (text) {
        return widget_set_text(this.nativeObj, text);
    };
    Widget.prototype.useStyle = function (style) {
        return widget_use_style(this.nativeObj, style);
    };
    Widget.prototype.setTextUtf8 = function (text) {
        return widget_set_text_utf8(this.nativeObj, text);
    };
    Widget.prototype.setTrText = function (text) {
        return widget_set_tr_text(this.nativeObj, text);
    };
    Widget.prototype.getValue = function () {
        return widget_get_value(this.nativeObj);
    };
    Widget.prototype.getText = function () {
        return widget_get_text(this.nativeObj);
    };
    Widget.prototype.setName = function (name) {
        return widget_set_name(this.nativeObj, name);
    };
    Widget.prototype.setEnable = function (enable) {
        return widget_set_enable(this.nativeObj, enable);
    };
    Widget.prototype.setFocused = function (focused) {
        return widget_set_focused(this.nativeObj, focused);
    };
    Widget.prototype.lookup = function (name, recursive) {
        return widget_lookup(this.nativeObj, name, recursive);
    };
    Widget.prototype.lookupByType = function (type, recursive) {
        return widget_lookup_by_type(this.nativeObj, type, recursive);
    };
    Widget.prototype.setVisible = function (visible, recursive) {
        return widget_set_visible(this.nativeObj, visible, recursive);
    };
    Widget.prototype.on = function (type, on_event, ctx) {
        return widget_on(this.nativeObj, type, on_event, ctx);
    };
    Widget.prototype.off = function (id) {
        return widget_off(this.nativeObj, id);
    };
    Widget.prototype.invalidateForce = function () {
        return widget_invalidate_force(this.nativeObj);
    };
    Widget.prototype.setPropStr = function (name, v) {
        return widget_set_prop_str(this.nativeObj, name, v);
    };
    Widget.prototype.foreach = function (visit, ctx) {
        return widget_foreach(this.nativeObj, visit, ctx);
    };
    Widget.prototype.getWindow = function () {
        return widget_get_window(this.nativeObj);
    };
    Widget.prototype.getType = function () {
        return widget_get_type(this.nativeObj);
    };
    Widget.prototype.clone = function (parent) {
        return widget_clone(this.nativeObj, parent);
    };
    Widget.prototype.equal = function (other) {
        return widget_equal(this.nativeObj, other);
    };
    Widget.prototype.setSelfLayoutParams = function (x, y, w, h) {
        return widget_set_self_layout_params(this.nativeObj, x, y, w, h);
    };
    Widget.prototype.setChildrenLayoutParams = function (params) {
        return widget_set_children_layout_params(this.nativeObj, params);
    };
    Widget.prototype.layout = function () {
        return widget_layout(this.nativeObj);
    };
    Widget.prototype.destroy = function () {
        return widget_destroy(this.nativeObj);
    };
    Object.defineProperty(Widget.prototype, "x", {
        get: function () {
            return widget_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "y", {
        get: function () {
            return widget_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "w", {
        get: function () {
            return widget_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "h", {
        get: function () {
            return widget_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "styleName", {
        get: function () {
            return widget_t_get_prop_style_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "enable", {
        get: function () {
            return widget_t_get_prop_enable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "visible", {
        get: function () {
            return widget_t_get_prop_visible(this.nativeObj);
        },
        set: function (value) {
            widget_t_set_prop_visible(this.nativeObj, value);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "name", {
        get: function () {
            return widget_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "trText", {
        get: function () {
            return widget_t_get_prop_tr_text(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Widget;
}());
var ResourceInfo = /** @class */ (function () {
    function ResourceInfo(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Object.defineProperty(ResourceInfo.prototype, "type", {
        get: function () {
            return resource_info_t_get_prop_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ResourceInfo.prototype, "size", {
        get: function () {
            return resource_info_t_get_prop_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ResourceInfo.prototype, "name", {
        get: function () {
            return resource_info_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ResourceInfo;
}());
var Label = /** @class */ (function (_super) {
    __extends(Label, _super);
    function Label(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Label.create = function (parent, x, y, w, h) {
        return new Label(label_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    return Label;
}(Widget));
var ListItem = /** @class */ (function (_super) {
    __extends(ListItem, _super);
    function ListItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ListItem.create = function (parent, x, y, w, h) {
        return new ListItem(list_item_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ListItem.cast = function (widget) {
        return new ListItem(list_item_cast(widget));
    };
    return ListItem;
}(Widget));
var ListViewH = /** @class */ (function (_super) {
    __extends(ListViewH, _super);
    function ListViewH(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ListViewH.create = function (parent, x, y, w, h) {
        return new ListViewH(list_view_h_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ListViewH.prototype.setItemWidth = function (item_width) {
        return list_view_h_set_item_width(this.nativeObj, item_width);
    };
    ListViewH.prototype.setSpacing = function (spacing) {
        return list_view_h_set_spacing(this.nativeObj, spacing);
    };
    ListViewH.cast = function (widget) {
        return new ListViewH(list_view_h_cast(widget));
    };
    Object.defineProperty(ListViewH.prototype, "itemWidth", {
        get: function () {
            return list_view_h_t_get_prop_item_width(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ListViewH.prototype, "spacing", {
        get: function () {
            return list_view_h_t_get_prop_spacing(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ListViewH;
}(Widget));
var ListView = /** @class */ (function (_super) {
    __extends(ListView, _super);
    function ListView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ListView.create = function (parent, x, y, w, h) {
        return new ListView(list_view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ListView.prototype.setItemHeight = function (item_height) {
        return list_view_set_item_height(this.nativeObj, item_height);
    };
    ListView.prototype.setDefaultItemHeight = function (default_item_height) {
        return list_view_set_default_item_height(this.nativeObj, default_item_height);
    };
    ListView.prototype.setAutoHideScrollBar = function (auto_hide_scroll_bar) {
        return list_view_set_auto_hide_scroll_bar(this.nativeObj, auto_hide_scroll_bar);
    };
    ListView.cast = function (widget) {
        return new ListView(list_view_cast(widget));
    };
    Object.defineProperty(ListView.prototype, "itemHeight", {
        get: function () {
            return list_view_t_get_prop_item_height(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ListView.prototype, "defaultItemHeight", {
        get: function () {
            return list_view_t_get_prop_default_item_height(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ListView.prototype, "autoHideScrollBar", {
        get: function () {
            return list_view_t_get_prop_auto_hide_scroll_bar(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ListView;
}(Widget));
var ComboBox = /** @class */ (function (_super) {
    __extends(ComboBox, _super);
    function ComboBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ComboBox.create = function (parent, x, y, w, h) {
        return new ComboBox(combo_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ComboBox.cast = function (widget) {
        return new ComboBox(combo_box_cast(widget));
    };
    ComboBox.prototype.setOpenWindow = function (open_window) {
        return combo_box_set_open_window(this.nativeObj, open_window);
    };
    ComboBox.prototype.resetOptions = function () {
        return combo_box_reset_options(this.nativeObj);
    };
    ComboBox.prototype.countOptions = function () {
        return combo_box_count_options(this.nativeObj);
    };
    ComboBox.prototype.setSelectedIndex = function (index) {
        return combo_box_set_selected_index(this.nativeObj, index);
    };
    ComboBox.prototype.appendOption = function (value, text) {
        return combo_box_append_option(this.nativeObj, value, text);
    };
    ComboBox.prototype.setOptions = function (options) {
        return combo_box_set_options(this.nativeObj, options);
    };
    ComboBox.prototype.getValue = function () {
        return combo_box_get_value(this.nativeObj);
    };
    ComboBox.prototype.getText = function () {
        return combo_box_get_text(this.nativeObj);
    };
    Object.defineProperty(ComboBox.prototype, "openWindow", {
        get: function () {
            return combo_box_t_get_prop_open_window(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ComboBox.prototype, "selectedIndex", {
        get: function () {
            return combo_box_t_get_prop_selected_index(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ComboBox.prototype, "value", {
        get: function () {
            return combo_box_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ComboBox.prototype, "options", {
        get: function () {
            return combo_box_t_get_prop_options(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ComboBox;
}(Widget));
var Popup = /** @class */ (function (_super) {
    __extends(Popup, _super);
    function Popup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Popup.create = function (parent, x, y, w, h) {
        return new Popup(popup_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Popup.cast = function (widget) {
        return new Popup(popup_cast(widget));
    };
    Object.defineProperty(Popup.prototype, "theme", {
        get: function () {
            return popup_t_get_prop_theme(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Popup.prototype, "animHint", {
        get: function () {
            return popup_t_get_prop_anim_hint(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Popup.prototype, "closeWhenClick", {
        get: function () {
            return popup_t_get_prop_close_when_click(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Popup.prototype, "closeWhenClickOutside", {
        get: function () {
            return popup_t_get_prop_close_when_click_outside(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Popup;
}(Widget));
var ProgressBar = /** @class */ (function (_super) {
    __extends(ProgressBar, _super);
    function ProgressBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ProgressBar.create = function (parent, x, y, w, h) {
        return new ProgressBar(progress_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ProgressBar.cast = function (widget) {
        return new ProgressBar(progress_bar_cast(widget));
    };
    ProgressBar.prototype.setValue = function (value) {
        return progress_bar_set_value(this.nativeObj, value);
    };
    ProgressBar.prototype.setVertical = function (vertical) {
        return progress_bar_set_vertical(this.nativeObj, vertical);
    };
    ProgressBar.prototype.setShowText = function (show_text) {
        return progress_bar_set_show_text(this.nativeObj, show_text);
    };
    Object.defineProperty(ProgressBar.prototype, "value", {
        get: function () {
            return progress_bar_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ProgressBar.prototype, "vertical", {
        get: function () {
            return progress_bar_t_get_prop_vertical(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ProgressBar.prototype, "showText", {
        get: function () {
            return progress_bar_t_get_prop_show_text(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ProgressBar;
}(Widget));
var DialogClient = /** @class */ (function (_super) {
    __extends(DialogClient, _super);
    function DialogClient(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    DialogClient.create = function (parent, x, y, w, h) {
        return new DialogClient(dialog_client_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    DialogClient.cast = function (widget) {
        return new DialogClient(dialog_client_cast(widget));
    };
    return DialogClient;
}(Widget));
var DialogTitle = /** @class */ (function (_super) {
    __extends(DialogTitle, _super);
    function DialogTitle(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    DialogTitle.create = function (parent, x, y, w, h) {
        return new DialogTitle(dialog_title_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    DialogTitle.cast = function (widget) {
        return new DialogTitle(dialog_title_cast(widget));
    };
    return DialogTitle;
}(Widget));
var Dialog = /** @class */ (function (_super) {
    __extends(Dialog, _super);
    function Dialog(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Dialog.create = function (parent, x, y, w, h) {
        return new Dialog(dialog_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Dialog.createSimple = function (parent, x, y, w, h) {
        return new Dialog(dialog_create_simple(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Dialog.cast = function (widget) {
        return new Dialog(dialog_cast(widget));
    };
    Dialog.open = function (name) {
        return new Dialog(dialog_open(name));
    };
    Dialog.prototype.setTitle = function (title) {
        return dialog_set_title(this.nativeObj, title);
    };
    Dialog.prototype.modal = function () {
        return dialog_modal(this.nativeObj);
    };
    Dialog.prototype.quit = function (code) {
        return dialog_quit(this.nativeObj, code);
    };
    return Dialog;
}(Widget));
var Dragger = /** @class */ (function (_super) {
    __extends(Dragger, _super);
    function Dragger(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Dragger.create = function (parent, x, y, w, h) {
        return new Dragger(dragger_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Dragger.cast = function (widget) {
        return new Dragger(dragger_cast(widget));
    };
    Dragger.prototype.setRange = function (x_min, y_min, x_max, y_max) {
        return dragger_set_range(this.nativeObj, x_min, y_min, x_max, y_max);
    };
    Object.defineProperty(Dragger.prototype, "xMin", {
        get: function () {
            return dragger_t_get_prop_x_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Dragger.prototype, "yMin", {
        get: function () {
            return dragger_t_get_prop_y_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Dragger.prototype, "xMax", {
        get: function () {
            return dragger_t_get_prop_x_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Dragger.prototype, "yMax", {
        get: function () {
            return dragger_t_get_prop_y_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Dragger;
}(Widget));
var Edit = /** @class */ (function (_super) {
    __extends(Edit, _super);
    function Edit(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Edit.create = function (parent, x, y, w, h) {
        return new Edit(edit_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Edit.cast = function (widget) {
        return new Edit(edit_cast(widget));
    };
    Edit.prototype.getInt = function () {
        return edit_get_int(this.nativeObj);
    };
    Edit.prototype.getDouble = function () {
        return edit_get_double(this.nativeObj);
    };
    Edit.prototype.setTextLimit = function (min, max) {
        return edit_set_text_limit(this.nativeObj, min, max);
    };
    Edit.prototype.setIntLimit = function (min, max, step) {
        return edit_set_int_limit(this.nativeObj, min, max, step);
    };
    Edit.prototype.setFloatLimit = function (min, max, step) {
        return edit_set_float_limit(this.nativeObj, min, max, step);
    };
    Edit.prototype.setReadonly = function (readonly) {
        return edit_set_readonly(this.nativeObj, readonly);
    };
    Edit.prototype.setAutoFix = function (auto_fix) {
        return edit_set_auto_fix(this.nativeObj, auto_fix);
    };
    Edit.prototype.setInputType = function (type) {
        return edit_set_input_type(this.nativeObj, type);
    };
    Edit.prototype.setInputTips = function (tips) {
        return edit_set_input_tips(this.nativeObj, tips);
    };
    Edit.prototype.setPasswordVisible = function (password_visible) {
        return edit_set_password_visible(this.nativeObj, password_visible);
    };
    Object.defineProperty(Edit.prototype, "readonly", {
        get: function () {
            return edit_t_get_prop_readonly(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Edit.prototype, "passwordVisible", {
        get: function () {
            return edit_t_get_prop_password_visible(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Edit.prototype, "autoFix", {
        get: function () {
            return edit_t_get_prop_auto_fix(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Edit.prototype, "topMargin", {
        get: function () {
            return edit_t_get_prop_top_margin(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Edit.prototype, "bottomMargin", {
        get: function () {
            return edit_t_get_prop_bottom_margin(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Edit.prototype, "leftMargin", {
        get: function () {
            return edit_t_get_prop_left_margin(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Edit.prototype, "rightMargin", {
        get: function () {
            return edit_t_get_prop_right_margin(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Edit.prototype, "tips", {
        get: function () {
            return edit_t_get_prop_tips(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Edit;
}(Widget));
var ScrollBar = /** @class */ (function (_super) {
    __extends(ScrollBar, _super);
    function ScrollBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ScrollBar.create = function (parent, x, y, w, h) {
        return new ScrollBar(scroll_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ScrollBar.cast = function (widget) {
        return new ScrollBar(scroll_bar_cast(widget));
    };
    ScrollBar.createMobile = function (parent, x, y, w, h) {
        return new ScrollBar(scroll_bar_create_mobile(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ScrollBar.createDesktop = function (parent, x, y, w, h) {
        return new ScrollBar(scroll_bar_create_desktop(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ScrollBar.prototype.setParams = function (virtual_size, row) {
        return scroll_bar_set_params(this.nativeObj, virtual_size, row);
    };
    ScrollBar.prototype.scrollTo = function (value, duration) {
        return scroll_bar_scroll_to(this.nativeObj, value, duration);
    };
    ScrollBar.prototype.setValue = function (value) {
        return scroll_bar_set_value(this.nativeObj, value);
    };
    ScrollBar.prototype.addDelta = function (delta) {
        return scroll_bar_add_delta(this.nativeObj, delta);
    };
    ScrollBar.prototype.scrollDelta = function (delta) {
        return scroll_bar_scroll_delta(this.nativeObj, delta);
    };
    ScrollBar.prototype.setValueOnly = function (value) {
        return scroll_bar_set_value_only(this.nativeObj, value);
    };
    ScrollBar.prototype.isMobile = function () {
        return scroll_bar_is_mobile(this.nativeObj);
    };
    Object.defineProperty(ScrollBar.prototype, "virtualSize", {
        get: function () {
            return scroll_bar_t_get_prop_virtual_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ScrollBar.prototype, "value", {
        get: function () {
            return scroll_bar_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ScrollBar.prototype, "row", {
        get: function () {
            return scroll_bar_t_get_prop_row(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ScrollBar.prototype, "animatable", {
        get: function () {
            return scroll_bar_t_get_prop_animatable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ScrollBar;
}(Widget));
var ScrollView = /** @class */ (function (_super) {
    __extends(ScrollView, _super);
    function ScrollView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ScrollView.create = function (parent, x, y, w, h) {
        return new ScrollView(scroll_view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ScrollView.cast = function (widget) {
        return new ScrollView(scroll_view_cast(widget));
    };
    ScrollView.prototype.setVirtualW = function (w) {
        return scroll_view_set_virtual_w(this.nativeObj, w);
    };
    ScrollView.prototype.setVirtualH = function (h) {
        return scroll_view_set_virtual_h(this.nativeObj, h);
    };
    ScrollView.prototype.setXslidable = function (xslidable) {
        return scroll_view_set_xslidable(this.nativeObj, xslidable);
    };
    ScrollView.prototype.setYslidable = function (yslidable) {
        return scroll_view_set_yslidable(this.nativeObj, yslidable);
    };
    ScrollView.prototype.setOffset = function (xoffset, yoffset) {
        return scroll_view_set_offset(this.nativeObj, xoffset, yoffset);
    };
    ScrollView.prototype.scrollTo = function (xoffset_end, yoffset_end, duration) {
        return scroll_view_scroll_to(this.nativeObj, xoffset_end, yoffset_end, duration);
    };
    Object.defineProperty(ScrollView.prototype, "virtualW", {
        get: function () {
            return scroll_view_t_get_prop_virtual_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ScrollView.prototype, "virtualH", {
        get: function () {
            return scroll_view_t_get_prop_virtual_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ScrollView.prototype, "xoffset", {
        get: function () {
            return scroll_view_t_get_prop_xoffset(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ScrollView.prototype, "yoffset", {
        get: function () {
            return scroll_view_t_get_prop_yoffset(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ScrollView.prototype, "xslidable", {
        get: function () {
            return scroll_view_t_get_prop_xslidable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ScrollView.prototype, "yslidable", {
        get: function () {
            return scroll_view_t_get_prop_yslidable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ScrollView;
}(Widget));
var SlideView = /** @class */ (function (_super) {
    __extends(SlideView, _super);
    function SlideView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    SlideView.create = function (parent, x, y, w, h) {
        return new SlideView(slide_view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    SlideView.cast = function (widget) {
        return new SlideView(slide_view_cast(widget));
    };
    SlideView.prototype.setAutoPlay = function (auto_play) {
        return slide_view_set_auto_play(this.nativeObj, auto_play);
    };
    SlideView.prototype.setActive = function (index) {
        return slide_view_set_active(this.nativeObj, index);
    };
    SlideView.prototype.setVertical = function (vertical) {
        return slide_view_set_vertical(this.nativeObj, vertical);
    };
    Object.defineProperty(SlideView.prototype, "vertical", {
        get: function () {
            return slide_view_t_get_prop_vertical(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(SlideView.prototype, "autoPlay", {
        get: function () {
            return slide_view_t_get_prop_auto_play(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return SlideView;
}(Widget));
var Slider = /** @class */ (function (_super) {
    __extends(Slider, _super);
    function Slider(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Slider.create = function (parent, x, y, w, h) {
        return new Slider(slider_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Slider.cast = function (widget) {
        return new Slider(slider_cast(widget));
    };
    Slider.prototype.setValue = function (value) {
        return slider_set_value(this.nativeObj, value);
    };
    Slider.prototype.setMin = function (min) {
        return slider_set_min(this.nativeObj, min);
    };
    Slider.prototype.setMax = function (max) {
        return slider_set_max(this.nativeObj, max);
    };
    Slider.prototype.setStep = function (step) {
        return slider_set_step(this.nativeObj, step);
    };
    Slider.prototype.setVertical = function (vertical) {
        return slider_set_vertical(this.nativeObj, vertical);
    };
    Object.defineProperty(Slider.prototype, "value", {
        get: function () {
            return slider_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Slider.prototype, "min", {
        get: function () {
            return slider_t_get_prop_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Slider.prototype, "max", {
        get: function () {
            return slider_t_get_prop_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Slider.prototype, "step", {
        get: function () {
            return slider_t_get_prop_step(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Slider.prototype, "vertical", {
        get: function () {
            return slider_t_get_prop_vertical(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Slider;
}(Widget));
var SpinBox = /** @class */ (function (_super) {
    __extends(SpinBox, _super);
    function SpinBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    SpinBox.create = function (parent, x, y, w, h) {
        return new SpinBox(spin_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    SpinBox.cast = function (widget) {
        return new SpinBox(spin_box_cast(widget));
    };
    return SpinBox;
}(Edit));
var TabButtonGroup = /** @class */ (function (_super) {
    __extends(TabButtonGroup, _super);
    function TabButtonGroup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TabButtonGroup.create = function (parent, x, y, w, h) {
        return new TabButtonGroup(tab_button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TabButtonGroup.cast = function (widget) {
        return new TabButtonGroup(tab_button_group_cast(widget));
    };
    Object.defineProperty(TabButtonGroup.prototype, "compact", {
        get: function () {
            return tab_button_group_t_get_prop_compact(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TabButtonGroup;
}(Widget));
var TabButton = /** @class */ (function (_super) {
    __extends(TabButton, _super);
    function TabButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TabButton.create = function (parent, x, y, w, h) {
        return new TabButton(tab_button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TabButton.cast = function (widget) {
        return new TabButton(tab_button_cast(widget));
    };
    TabButton.prototype.setValue = function (value) {
        return tab_button_set_value(this.nativeObj, value);
    };
    TabButton.prototype.setIcon = function (name) {
        return tab_button_set_icon(this.nativeObj, name);
    };
    TabButton.prototype.setActiveIcon = function (name) {
        return tab_button_set_active_icon(this.nativeObj, name);
    };
    Object.defineProperty(TabButton.prototype, "value", {
        get: function () {
            return tab_button_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TabButton.prototype, "activeIcon", {
        get: function () {
            return tab_button_t_get_prop_active_icon(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TabButton.prototype, "icon", {
        get: function () {
            return tab_button_t_get_prop_icon(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TabButton;
}(Widget));
var TabControl = /** @class */ (function (_super) {
    __extends(TabControl, _super);
    function TabControl(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TabControl.create = function (parent, x, y, w, h) {
        return new TabControl(tab_control_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TabControl.cast = function (widget) {
        return new TabControl(tab_control_cast(widget));
    };
    return TabControl;
}(Widget));
var ButtonGroup = /** @class */ (function (_super) {
    __extends(ButtonGroup, _super);
    function ButtonGroup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ButtonGroup.create = function (parent, x, y, w, h) {
        return new ButtonGroup(button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ButtonGroup.cast = function (widget) {
        return new ButtonGroup(button_group_cast(widget));
    };
    return ButtonGroup;
}(Widget));
var Button = /** @class */ (function (_super) {
    __extends(Button, _super);
    function Button(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Button.create = function (parent, x, y, w, h) {
        return new Button(button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Button.cast = function (widget) {
        return new Button(button_cast(widget));
    };
    Button.prototype.setRepeat = function (repeat) {
        return button_set_repeat(this.nativeObj, repeat);
    };
    Object.defineProperty(Button.prototype, "repeat", {
        get: function () {
            return button_t_get_prop_repeat(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Button;
}(Widget));
var WheelEvent = /** @class */ (function (_super) {
    __extends(WheelEvent, _super);
    function WheelEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    WheelEvent.cast = function (event) {
        return new WheelEvent(wheel_event_cast(event));
    };
    Object.defineProperty(WheelEvent.prototype, "dx", {
        get: function () {
            return wheel_event_t_get_prop_dx(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(WheelEvent.prototype, "dy", {
        get: function () {
            return wheel_event_t_get_prop_dy(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(WheelEvent.prototype, "alt", {
        get: function () {
            return wheel_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(WheelEvent.prototype, "ctrl", {
        get: function () {
            return wheel_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(WheelEvent.prototype, "shift", {
        get: function () {
            return wheel_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return WheelEvent;
}(Event));
var PropChangeEvent = /** @class */ (function (_super) {
    __extends(PropChangeEvent, _super);
    function PropChangeEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    PropChangeEvent.cast = function (event) {
        return new PropChangeEvent(prop_change_event_cast(event));
    };
    Object.defineProperty(PropChangeEvent.prototype, "name", {
        get: function () {
            return prop_change_event_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(PropChangeEvent.prototype, "value", {
        get: function () {
            return prop_change_event_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return PropChangeEvent;
}(Event));
var PointerEvent = /** @class */ (function (_super) {
    __extends(PointerEvent, _super);
    function PointerEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    PointerEvent.cast = function (event) {
        return new PointerEvent(pointer_event_cast(event));
    };
    Object.defineProperty(PointerEvent.prototype, "x", {
        get: function () {
            return pointer_event_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(PointerEvent.prototype, "y", {
        get: function () {
            return pointer_event_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(PointerEvent.prototype, "button", {
        get: function () {
            return pointer_event_t_get_prop_button(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(PointerEvent.prototype, "pressed", {
        get: function () {
            return pointer_event_t_get_prop_pressed(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(PointerEvent.prototype, "alt", {
        get: function () {
            return pointer_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(PointerEvent.prototype, "ctrl", {
        get: function () {
            return pointer_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(PointerEvent.prototype, "shift", {
        get: function () {
            return pointer_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return PointerEvent;
}(Event));
var KeyEvent = /** @class */ (function (_super) {
    __extends(KeyEvent, _super);
    function KeyEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    KeyEvent.cast = function (event) {
        return new KeyEvent(key_event_cast(event));
    };
    Object.defineProperty(KeyEvent.prototype, "key", {
        get: function () {
            return key_event_t_get_prop_key(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(KeyEvent.prototype, "alt", {
        get: function () {
            return key_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(KeyEvent.prototype, "ctrl", {
        get: function () {
            return key_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(KeyEvent.prototype, "shift", {
        get: function () {
            return key_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(KeyEvent.prototype, "caplock", {
        get: function () {
            return key_event_t_get_prop_caplock(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return KeyEvent;
}(Event));
var PaintEvent = /** @class */ (function (_super) {
    __extends(PaintEvent, _super);
    function PaintEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    PaintEvent.cast = function (event) {
        return new PaintEvent(paint_event_cast(event));
    };
    Object.defineProperty(PaintEvent.prototype, "c", {
        get: function () {
            return paint_event_t_get_prop_c(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return PaintEvent;
}(Event));
var View = /** @class */ (function (_super) {
    __extends(View, _super);
    function View(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    View.create = function (parent, x, y, w, h) {
        return new View(view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    View.cast = function (widget) {
        return new View(view_cast(widget));
    };
    return View;
}(Widget));
var GroupBox = /** @class */ (function (_super) {
    __extends(GroupBox, _super);
    function GroupBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    GroupBox.create = function (parent, x, y, w, h) {
        return new GroupBox(group_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    GroupBox.cast = function (widget) {
        return new GroupBox(group_box_cast(widget));
    };
    return GroupBox;
}(Widget));
var RichText = /** @class */ (function (_super) {
    __extends(RichText, _super);
    function RichText(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    RichText.create = function (parent, x, y, w, h) {
        return new RichText(rich_text_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    RichText.prototype.setText = function (text) {
        return rich_text_set_text(this.nativeObj, text);
    };
    Object.defineProperty(RichText.prototype, "lineGap", {
        get: function () {
            return rich_text_t_get_prop_line_gap(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return RichText;
}(Widget));
var CheckButton = /** @class */ (function (_super) {
    __extends(CheckButton, _super);
    function CheckButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    CheckButton.create = function (parent, x, y, w, h) {
        return new CheckButton(check_button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    CheckButton.createRadio = function (parent, x, y, w, h) {
        return new CheckButton(check_button_create_radio(parent ? parent.nativeObj : null, x, y, w, h));
    };
    CheckButton.prototype.setValue = function (value) {
        return check_button_set_value(this.nativeObj, value);
    };
    CheckButton.cast = function (widget) {
        return new CheckButton(check_button_cast(widget));
    };
    Object.defineProperty(CheckButton.prototype, "value", {
        get: function () {
            return check_button_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return CheckButton;
}(Widget));
var Image = /** @class */ (function (_super) {
    __extends(Image, _super);
    function Image(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Image.create = function (parent, x, y, w, h) {
        return new Image(image_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Image.prototype.setImageName = function (name) {
        return image_set_image_name(this.nativeObj, name);
    };
    Image.prototype.setDrawType = function (draw_type) {
        return image_set_draw_type(this.nativeObj, draw_type);
    };
    Image.prototype.setRotation = function (rotation) {
        return image_set_rotation(this.nativeObj, rotation);
    };
    Image.prototype.setScale = function (scale_x, scale_y) {
        return image_set_scale(this.nativeObj, scale_x, scale_y);
    };
    Image.prototype.setAnchor = function (anchor_x, anchor_y) {
        return image_set_anchor(this.nativeObj, anchor_x, anchor_y);
    };
    Image.prototype.setSelected = function (selected) {
        return image_set_selected(this.nativeObj, selected);
    };
    Image.prototype.setSelectable = function (selectable) {
        return image_set_selectable(this.nativeObj, selectable);
    };
    Image.prototype.setClickable = function (clickable) {
        return image_set_clickable(this.nativeObj, clickable);
    };
    Object.defineProperty(Image.prototype, "anchorX", {
        get: function () {
            return image_t_get_prop_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Image.prototype, "anchorY", {
        get: function () {
            return image_t_get_prop_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Image.prototype, "scaleX", {
        get: function () {
            return image_t_get_prop_scale_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Image;
}(Widget));
var WindowManager = /** @class */ (function (_super) {
    __extends(WindowManager, _super);
    function WindowManager(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    WindowManager.instance = function () {
        return new WindowManager(window_manager());
    };
    WindowManager.cast = function (widget) {
        return new WindowManager(window_manager_cast(widget));
    };
    WindowManager.prototype.setShowFps = function (show_fps) {
        return window_manager_set_show_fps(this.nativeObj, show_fps);
    };
    Object.defineProperty(WindowManager.prototype, "showFps", {
        get: function () {
            return window_manager_t_get_prop_show_fps(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return WindowManager;
}(Widget));
var Window = /** @class */ (function (_super) {
    __extends(Window, _super);
    function Window(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Window.create = function (parent, x, y, w, h) {
        return new Window(window_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Window.cast = function (widget) {
        return new Window(window_cast(widget));
    };
    Window.open = function (name) {
        return new Window(window_open(name));
    };
    Window.openAndClose = function (name, to_close) {
        return new Window(window_open_and_close(name, to_close));
    };
    Window.prototype.close = function () {
        return window_close(this.nativeObj);
    };
    Object.defineProperty(Window.prototype, "theme", {
        get: function () {
            return window_t_get_prop_theme(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Window.prototype, "animHint", {
        get: function () {
            return window_t_get_prop_anim_hint(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Window;
}(Widget));
var ComboBoxItem = /** @class */ (function (_super) {
    __extends(ComboBoxItem, _super);
    function ComboBoxItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ComboBoxItem.create = function (parent, x, y, w, h) {
        return new ComboBoxItem(combo_box_item_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ComboBoxItem.cast = function (widget) {
        return new ComboBoxItem(combo_box_item_cast(widget));
    };
    ComboBoxItem.prototype.setSelected = function (selected) {
        return combo_box_item_set_selected(this.nativeObj, selected);
    };
    ComboBoxItem.prototype.setValue = function (value) {
        return combo_box_item_set_value(this.nativeObj, value);
    };
    Object.defineProperty(ComboBoxItem.prototype, "value", {
        get: function () {
            return combo_box_item_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ComboBoxItem.prototype, "selected", {
        get: function () {
            return combo_box_item_t_get_prop_selected(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ComboBoxItem;
}(Widget));
var Pages = /** @class */ (function (_super) {
    __extends(Pages, _super);
    function Pages(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Pages.create = function (parent, x, y, w, h) {
        return new Pages(pages_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Pages.cast = function (widget) {
        return new Pages(pages_cast(widget));
    };
    Pages.prototype.setActive = function (index) {
        return pages_set_active(this.nativeObj, index);
    };
    Pages.prototype.setActiveByName = function (name) {
        return pages_set_active_by_name(this.nativeObj, name);
    };
    Object.defineProperty(Pages.prototype, "active", {
        get: function () {
            return pages_t_get_prop_active(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Pages;
}(Widget));
//# sourceMappingURL=awtk.js.map