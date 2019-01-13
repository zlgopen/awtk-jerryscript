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
var Tk = /** @class */ (function () {
    function Tk(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Tk.quit = function () {
        return tk_quit();
    };
    return Tk;
}());
var AssetInfo = /** @class */ (function () {
    function AssetInfo(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Object.defineProperty(AssetInfo.prototype, "type", {
        get: function () {
            return asset_info_t_get_prop_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(AssetInfo.prototype, "subtype", {
        get: function () {
            return asset_info_t_get_prop_subtype(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(AssetInfo.prototype, "isInRom", {
        get: function () {
            return asset_info_t_get_prop_is_in_rom(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(AssetInfo.prototype, "size", {
        get: function () {
            return asset_info_t_get_prop_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(AssetInfo.prototype, "refcount", {
        get: function () {
            return asset_info_t_get_prop_refcount(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(AssetInfo.prototype, "name", {
        get: function () {
            return asset_info_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return AssetInfo;
}());
var AssetsManager = /** @class */ (function () {
    function AssetsManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    AssetsManager.instance = function () {
        return new AssetsManager(assets_manager());
    };
    AssetsManager.prototype.ref = function (type, name) {
        return new AssetInfo(assets_manager_ref(this.nativeObj, type, name));
    };
    AssetsManager.prototype.unref = function (info) {
        return assets_manager_unref(this.nativeObj, info ? info.nativeObj : null);
    };
    return AssetsManager;
}());
var BitmapFormat;
(function (BitmapFormat) {
    BitmapFormat[BitmapFormat["NONE"] = BITMAP_FMT_NONE()] = "NONE";
    BitmapFormat[BitmapFormat["RGBA8888"] = BITMAP_FMT_RGBA8888()] = "RGBA8888";
    BitmapFormat[BitmapFormat["ABGR8888"] = BITMAP_FMT_ABGR8888()] = "ABGR8888";
    BitmapFormat[BitmapFormat["BGRA8888"] = BITMAP_FMT_BGRA8888()] = "BGRA8888";
    BitmapFormat[BitmapFormat["ARGB8888"] = BITMAP_FMT_ARGB8888()] = "ARGB8888";
    BitmapFormat[BitmapFormat["RGB565"] = BITMAP_FMT_RGB565()] = "RGB565";
    BitmapFormat[BitmapFormat["BGR565"] = BITMAP_FMT_BGR565()] = "BGR565";
    BitmapFormat[BitmapFormat["RGB888"] = BITMAP_FMT_RGB888()] = "RGB888";
    BitmapFormat[BitmapFormat["BGR888"] = BITMAP_FMT_BGR888()] = "BGR888";
})(BitmapFormat || (BitmapFormat = {}));
;
var BitmapFlag;
(function (BitmapFlag) {
    BitmapFlag[BitmapFlag["NONE"] = BITMAP_FLAG_NONE()] = "NONE";
    BitmapFlag[BitmapFlag["OPAQUE"] = BITMAP_FLAG_OPAQUE()] = "OPAQUE";
    BitmapFlag[BitmapFlag["IMMUTABLE"] = BITMAP_FLAG_IMMUTABLE()] = "IMMUTABLE";
    BitmapFlag[BitmapFlag["TEXTURE"] = BITMAP_FLAG_TEXTURE()] = "TEXTURE";
    BitmapFlag[BitmapFlag["CHANGED"] = BITMAP_FLAG_CHANGED()] = "CHANGED";
})(BitmapFlag || (BitmapFlag = {}));
;
var Bitmap = /** @class */ (function () {
    function Bitmap(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Bitmap.create = function () {
        return new Bitmap(bitmap_create());
    };
    Bitmap.createEx = function (w, h, line_length, format) {
        return new Bitmap(bitmap_create_ex(w, h, line_length, format));
    };
    Bitmap.prototype.getBpp = function () {
        return bitmap_get_bpp(this.nativeObj);
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
    Object.defineProperty(Bitmap.prototype, "lineLength", {
        get: function () {
            return bitmap_t_get_prop_line_length(this.nativeObj);
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
var ImageDrawType;
(function (ImageDrawType) {
    ImageDrawType[ImageDrawType["DEFAULT"] = IMAGE_DRAW_DEFAULT()] = "DEFAULT";
    ImageDrawType[ImageDrawType["CENTER"] = IMAGE_DRAW_CENTER()] = "CENTER";
    ImageDrawType[ImageDrawType["ICON"] = IMAGE_DRAW_ICON()] = "ICON";
    ImageDrawType[ImageDrawType["SCALE"] = IMAGE_DRAW_SCALE()] = "SCALE";
    ImageDrawType[ImageDrawType["SCALE_AUTO"] = IMAGE_DRAW_SCALE_AUTO()] = "SCALE_AUTO";
    ImageDrawType[ImageDrawType["SCALE_DOWN"] = IMAGE_DRAW_SCALE_DOWN()] = "SCALE_DOWN";
    ImageDrawType[ImageDrawType["SCALE_W"] = IMAGE_DRAW_SCALE_W()] = "SCALE_W";
    ImageDrawType[ImageDrawType["SCALE_H"] = IMAGE_DRAW_SCALE_H()] = "SCALE_H";
    ImageDrawType[ImageDrawType["REPEAT"] = IMAGE_DRAW_REPEAT()] = "REPEAT";
    ImageDrawType[ImageDrawType["REPEAT_X"] = IMAGE_DRAW_REPEAT_X()] = "REPEAT_X";
    ImageDrawType[ImageDrawType["REPEAT_Y"] = IMAGE_DRAW_REPEAT_Y()] = "REPEAT_Y";
    ImageDrawType[ImageDrawType["PATCH9"] = IMAGE_DRAW_PATCH9()] = "PATCH9";
    ImageDrawType[ImageDrawType["PATCH3_X"] = IMAGE_DRAW_PATCH3_X()] = "PATCH3_X";
    ImageDrawType[ImageDrawType["PATCH3_Y"] = IMAGE_DRAW_PATCH3_Y()] = "PATCH3_Y";
    ImageDrawType[ImageDrawType["PATCH3_X_SCALE_Y"] = IMAGE_DRAW_PATCH3_X_SCALE_Y()] = "PATCH3_X_SCALE_Y";
    ImageDrawType[ImageDrawType["PATCH3_Y_SCALE_X"] = IMAGE_DRAW_PATCH3_Y_SCALE_X()] = "PATCH3_Y_SCALE_X";
})(ImageDrawType || (ImageDrawType = {}));
;
var Canvas = /** @class */ (function () {
    function Canvas(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Canvas.prototype.getWidth = function () {
        return canvas_get_width(this.nativeObj);
    };
    Canvas.prototype.getHeight = function () {
        return canvas_get_height(this.nativeObj);
    };
    Canvas.prototype.getClipRect = function (r) {
        return canvas_get_clip_rect(this.nativeObj, r ? r.nativeObj : null);
    };
    Canvas.prototype.setClipRect = function (r) {
        return canvas_set_clip_rect(this.nativeObj, r ? r.nativeObj : null);
    };
    Canvas.prototype.setClipRectEx = function (r, translate) {
        return canvas_set_clip_rect_ex(this.nativeObj, r ? r.nativeObj : null, translate);
    };
    Canvas.prototype.setFillColor = function (color) {
        return canvas_set_fill_color_str(this.nativeObj, color);
    };
    Canvas.prototype.setTextColor = function (color) {
        return canvas_set_text_color_str(this.nativeObj, color);
    };
    Canvas.prototype.setStrokeColor = function (color) {
        return canvas_set_stroke_color_str(this.nativeObj, color);
    };
    Canvas.prototype.setGlobalAlpha = function (alpha) {
        return canvas_set_global_alpha(this.nativeObj, alpha);
    };
    Canvas.prototype.translate = function (dx, dy) {
        return canvas_translate(this.nativeObj, dx, dy);
    };
    Canvas.prototype.untranslate = function (dx, dy) {
        return canvas_untranslate(this.nativeObj, dx, dy);
    };
    Canvas.prototype.drawVline = function (x, y, h) {
        return canvas_draw_vline(this.nativeObj, x, y, h);
    };
    Canvas.prototype.drawHline = function (x, y, w) {
        return canvas_draw_hline(this.nativeObj, x, y, w);
    };
    Canvas.prototype.fillRect = function (x, y, w, h) {
        return canvas_fill_rect(this.nativeObj, x, y, w, h);
    };
    Canvas.prototype.strokeRect = function (x, y, w, h) {
        return canvas_stroke_rect(this.nativeObj, x, y, w, h);
    };
    Canvas.prototype.setFont = function (name, size) {
        return canvas_set_font(this.nativeObj, name, size);
    };
    Canvas.prototype.measureText = function (str) {
        return canvas_measure_utf8(this.nativeObj, str);
    };
    Canvas.prototype.drawText = function (str, x, y) {
        return canvas_draw_utf8(this.nativeObj, str, x, y);
    };
    Canvas.prototype.drawTextInRect = function (str, r) {
        return canvas_draw_utf8_in_rect(this.nativeObj, str, r ? r.nativeObj : null);
    };
    Canvas.prototype.drawIcon = function (img, cx, cy) {
        return canvas_draw_icon(this.nativeObj, img ? img.nativeObj : null, cx, cy);
    };
    Canvas.prototype.drawImage = function (img, src, dst) {
        return canvas_draw_image(this.nativeObj, img ? img.nativeObj : null, src ? src.nativeObj : null, dst ? dst.nativeObj : null);
    };
    Canvas.prototype.getVgcanvas = function () {
        return new Vgcanvas(canvas_get_vgcanvas(this.nativeObj));
    };
    Canvas.cast = function (c) {
        return new Canvas(canvas_cast(c ? (c.nativeObj || c) : null));
    };
    Object.defineProperty(Canvas.prototype, "ox", {
        get: function () {
            return canvas_t_get_prop_ox(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Canvas.prototype, "oy", {
        get: function () {
            return canvas_t_get_prop_oy(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Canvas;
}());
var ClipBoardDataType;
(function (ClipBoardDataType) {
    ClipBoardDataType[ClipBoardDataType["NONE"] = CLIP_BOARD_DATA_TYPE_NONE()] = "NONE";
    ClipBoardDataType[ClipBoardDataType["TEXT"] = CLIP_BOARD_DATA_TYPE_TEXT()] = "TEXT";
})(ClipBoardDataType || (ClipBoardDataType = {}));
;
var ClipBoard = /** @class */ (function () {
    function ClipBoard(nativeObj) {
        this.nativeObj = nativeObj;
    }
    ClipBoard.setText = function (text) {
        return clip_board_set_text(text);
    };
    ClipBoard.getText = function () {
        return clip_board_get_text();
    };
    return ClipBoard;
}());
var EventType;
(function (EventType) {
    EventType[EventType["NONE"] = EVT_NONE()] = "NONE";
    EventType[EventType["POINTER_DOWN"] = EVT_POINTER_DOWN()] = "POINTER_DOWN";
    EventType[EventType["POINTER_DOWN_ABORT"] = EVT_POINTER_DOWN_ABORT()] = "POINTER_DOWN_ABORT";
    EventType[EventType["POINTER_MOVE"] = EVT_POINTER_MOVE()] = "POINTER_MOVE";
    EventType[EventType["POINTER_UP"] = EVT_POINTER_UP()] = "POINTER_UP";
    EventType[EventType["WHEEL"] = EVT_WHEEL()] = "WHEEL";
    EventType[EventType["CONTEXT_MENU"] = EVT_CONTEXT_MENU()] = "CONTEXT_MENU";
    EventType[EventType["POINTER_ENTER"] = EVT_POINTER_ENTER()] = "POINTER_ENTER";
    EventType[EventType["POINTER_LEAVE"] = EVT_POINTER_LEAVE()] = "POINTER_LEAVE";
    EventType[EventType["LONG_PRESS"] = EVT_LONG_PRESS()] = "LONG_PRESS";
    EventType[EventType["CLICK"] = EVT_CLICK()] = "CLICK";
    EventType[EventType["FOCUS"] = EVT_FOCUS()] = "FOCUS";
    EventType[EventType["BLUR"] = EVT_BLUR()] = "BLUR";
    EventType[EventType["KEY_DOWN"] = EVT_KEY_DOWN()] = "KEY_DOWN";
    EventType[EventType["KEY_REPEAT"] = EVT_KEY_REPEAT()] = "KEY_REPEAT";
    EventType[EventType["KEY_UP"] = EVT_KEY_UP()] = "KEY_UP";
    EventType[EventType["WILL_MOVE"] = EVT_WILL_MOVE()] = "WILL_MOVE";
    EventType[EventType["MOVE"] = EVT_MOVE()] = "MOVE";
    EventType[EventType["WILL_RESIZE"] = EVT_WILL_RESIZE()] = "WILL_RESIZE";
    EventType[EventType["RESIZE"] = EVT_RESIZE()] = "RESIZE";
    EventType[EventType["WILL_MOVE_RESIZE"] = EVT_WILL_MOVE_RESIZE()] = "WILL_MOVE_RESIZE";
    EventType[EventType["MOVE_RESIZE"] = EVT_MOVE_RESIZE()] = "MOVE_RESIZE";
    EventType[EventType["VALUE_WILL_CHANGE"] = EVT_VALUE_WILL_CHANGE()] = "VALUE_WILL_CHANGE";
    EventType[EventType["VALUE_CHANGED"] = EVT_VALUE_CHANGED()] = "VALUE_CHANGED";
    EventType[EventType["VALUE_CHANGING"] = EVT_VALUE_CHANGING()] = "VALUE_CHANGING";
    EventType[EventType["PAINT"] = EVT_PAINT()] = "PAINT";
    EventType[EventType["BEFORE_PAINT"] = EVT_BEFORE_PAINT()] = "BEFORE_PAINT";
    EventType[EventType["AFTER_PAINT"] = EVT_AFTER_PAINT()] = "AFTER_PAINT";
    EventType[EventType["LOCALE_CHANGED"] = EVT_LOCALE_CHANGED()] = "LOCALE_CHANGED";
    EventType[EventType["ANIM_START"] = EVT_ANIM_START()] = "ANIM_START";
    EventType[EventType["ANIM_STOP"] = EVT_ANIM_STOP()] = "ANIM_STOP";
    EventType[EventType["ANIM_PAUSE"] = EVT_ANIM_PAUSE()] = "ANIM_PAUSE";
    EventType[EventType["ANIM_ONCE"] = EVT_ANIM_ONCE()] = "ANIM_ONCE";
    EventType[EventType["ANIM_END"] = EVT_ANIM_END()] = "ANIM_END";
    EventType[EventType["WINDOW_LOAD"] = EVT_WINDOW_LOAD()] = "WINDOW_LOAD";
    EventType[EventType["WINDOW_WILL_OPEN"] = EVT_WINDOW_WILL_OPEN()] = "WINDOW_WILL_OPEN";
    EventType[EventType["WINDOW_OPEN"] = EVT_WINDOW_OPEN()] = "WINDOW_OPEN";
    EventType[EventType["WINDOW_CLOSE"] = EVT_WINDOW_CLOSE()] = "WINDOW_CLOSE";
    EventType[EventType["REQUEST_CLOSE_WINDOW"] = EVT_REQUEST_CLOSE_WINDOW()] = "REQUEST_CLOSE_WINDOW";
    EventType[EventType["TOP_WINDOW_CHANGED"] = EVT_TOP_WINDOW_CHANGED()] = "TOP_WINDOW_CHANGED";
    EventType[EventType["IM_COMMIT"] = EVT_IM_COMMIT()] = "IM_COMMIT";
    EventType[EventType["IM_SHOW_CANDIDATES"] = EVT_IM_SHOW_CANDIDATES()] = "IM_SHOW_CANDIDATES";
    EventType[EventType["IM_ACTION"] = EVT_IM_ACTION()] = "IM_ACTION";
    EventType[EventType["IM_ACTION_INFO"] = EVT_IM_ACTION_INFO()] = "IM_ACTION_INFO";
    EventType[EventType["DRAG_START"] = EVT_DRAG_START()] = "DRAG_START";
    EventType[EventType["DRAG"] = EVT_DRAG()] = "DRAG";
    EventType[EventType["DRAG_END"] = EVT_DRAG_END()] = "DRAG_END";
    EventType[EventType["REQ_START"] = EVT_REQ_START()] = "REQ_START";
    EventType[EventType["USER_START"] = EVT_USER_START()] = "USER_START";
})(EventType || (EventType = {}));
;
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
    ImageManager.prototype.getBitmap = function (name, image) {
        return image_manager_get_bitmap(this.nativeObj, name, image ? image.nativeObj : null);
    };
    return ImageManager;
}());
var InputType;
(function (InputType) {
    InputType[InputType["TEXT"] = INPUT_TEXT()] = "TEXT";
    InputType[InputType["INT"] = INPUT_INT()] = "INT";
    InputType[InputType["UINT"] = INPUT_UINT()] = "UINT";
    InputType[InputType["HEX"] = INPUT_HEX()] = "HEX";
    InputType[InputType["FLOAT"] = INPUT_FLOAT()] = "FLOAT";
    InputType[InputType["UFLOAT"] = INPUT_UFLOAT()] = "UFLOAT";
    InputType[InputType["EMAIL"] = INPUT_EMAIL()] = "EMAIL";
    InputType[InputType["PASSWORD"] = INPUT_PASSWORD()] = "PASSWORD";
    InputType[InputType["PHONE"] = INPUT_PHONE()] = "PHONE";
})(InputType || (InputType = {}));
;
var LocaleInfo = /** @class */ (function () {
    function LocaleInfo(nativeObj) {
        this.nativeObj = nativeObj;
    }
    LocaleInfo.instance = function () {
        return new LocaleInfo(locale_info());
    };
    LocaleInfo.prototype.tr = function (text) {
        return locale_info_tr(this.nativeObj, text);
    };
    LocaleInfo.prototype.change = function (language, country) {
        return locale_info_change(this.nativeObj, language, country);
    };
    LocaleInfo.prototype.on = function (type, on_event, ctx) {
        return locale_info_on(this.nativeObj, type, on_event, ctx);
    };
    LocaleInfo.prototype.off = function (id) {
        return locale_info_off(this.nativeObj, id);
    };
    return LocaleInfo;
}());
var StyleId;
(function (StyleId) {
    StyleId[StyleId["_ID_BG_COLOR"] = STYLE_ID_BG_COLOR()] = "_ID_BG_COLOR";
    StyleId[StyleId["_ID_FG_COLOR"] = STYLE_ID_FG_COLOR()] = "_ID_FG_COLOR";
    StyleId[StyleId["_ID_MASK_COLOR"] = STYLE_ID_MASK_COLOR()] = "_ID_MASK_COLOR";
    StyleId[StyleId["_ID_FONT_NAME"] = STYLE_ID_FONT_NAME()] = "_ID_FONT_NAME";
    StyleId[StyleId["_ID_FONT_SIZE"] = STYLE_ID_FONT_SIZE()] = "_ID_FONT_SIZE";
    StyleId[StyleId["_ID_FONT_STYLE"] = STYLE_ID_FONT_STYLE()] = "_ID_FONT_STYLE";
    StyleId[StyleId["_ID_TEXT_COLOR"] = STYLE_ID_TEXT_COLOR()] = "_ID_TEXT_COLOR";
    StyleId[StyleId["_ID_TIPS_TEXT_COLOR"] = STYLE_ID_TIPS_TEXT_COLOR()] = "_ID_TIPS_TEXT_COLOR";
    StyleId[StyleId["_ID_TEXT_ALIGN_H"] = STYLE_ID_TEXT_ALIGN_H()] = "_ID_TEXT_ALIGN_H";
    StyleId[StyleId["_ID_TEXT_ALIGN_V"] = STYLE_ID_TEXT_ALIGN_V()] = "_ID_TEXT_ALIGN_V";
    StyleId[StyleId["_ID_BORDER_COLOR"] = STYLE_ID_BORDER_COLOR()] = "_ID_BORDER_COLOR";
    StyleId[StyleId["_ID_BORDER"] = STYLE_ID_BORDER()] = "_ID_BORDER";
    StyleId[StyleId["_ID_BG_IMAGE"] = STYLE_ID_BG_IMAGE()] = "_ID_BG_IMAGE";
    StyleId[StyleId["_ID_BG_IMAGE_DRAW_TYPE"] = STYLE_ID_BG_IMAGE_DRAW_TYPE()] = "_ID_BG_IMAGE_DRAW_TYPE";
    StyleId[StyleId["_ID_ICON"] = STYLE_ID_ICON()] = "_ID_ICON";
    StyleId[StyleId["_ID_FG_IMAGE"] = STYLE_ID_FG_IMAGE()] = "_ID_FG_IMAGE";
    StyleId[StyleId["_ID_FG_IMAGE_DRAW_TYPE"] = STYLE_ID_FG_IMAGE_DRAW_TYPE()] = "_ID_FG_IMAGE_DRAW_TYPE";
    StyleId[StyleId["_ID_MARGIN"] = STYLE_ID_MARGIN()] = "_ID_MARGIN";
    StyleId[StyleId["_ID_ICON_AT"] = STYLE_ID_ICON_AT()] = "_ID_ICON_AT";
    StyleId[StyleId["_ID_ACTIVE_ICON"] = STYLE_ID_ACTIVE_ICON()] = "_ID_ACTIVE_ICON";
    StyleId[StyleId["_ID_X_OFFSET"] = STYLE_ID_X_OFFSET()] = "_ID_X_OFFSET";
    StyleId[StyleId["_ID_Y_OFFSET"] = STYLE_ID_Y_OFFSET()] = "_ID_Y_OFFSET";
    StyleId[StyleId["_ID_SELECTED_BG_COLOR"] = STYLE_ID_SELECTED_BG_COLOR()] = "_ID_SELECTED_BG_COLOR";
    StyleId[StyleId["_ID_SELECTED_FG_COLOR"] = STYLE_ID_SELECTED_FG_COLOR()] = "_ID_SELECTED_FG_COLOR";
    StyleId[StyleId["_ID_SELECTED_TEXT_COLOR"] = STYLE_ID_SELECTED_TEXT_COLOR()] = "_ID_SELECTED_TEXT_COLOR";
    StyleId[StyleId["_ID_ROUND_RADIUS"] = STYLE_ID_ROUND_RADIUS()] = "_ID_ROUND_RADIUS";
})(StyleId || (StyleId = {}));
;
var Style = /** @class */ (function () {
    function Style(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Style.prototype.notifyWidgetStateChanged = function (widget) {
        return style_notify_widget_state_changed(this.nativeObj, widget ? widget.nativeObj : null);
    };
    Style.prototype.isValid = function () {
        return style_is_valid(this.nativeObj);
    };
    Style.prototype.getInt = function (name, defval) {
        return style_get_int(this.nativeObj, name, defval);
    };
    Style.prototype.getStr = function (name, defval) {
        return style_get_str(this.nativeObj, name, defval);
    };
    return Style;
}());
var Timer = /** @class */ (function () {
    function Timer(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Timer.add = function (on_timer, ctx, duration) {
        return timer_add(on_timer, ctx, duration);
    };
    Timer.remove = function (timer_id) {
        return timer_remove(timer_id);
    };
    return Timer;
}());
var AlignV;
(function (AlignV) {
    AlignV[AlignV["NONE"] = ALIGN_V_NONE()] = "NONE";
    AlignV[AlignV["MIDDLE"] = ALIGN_V_MIDDLE()] = "MIDDLE";
    AlignV[AlignV["TOP"] = ALIGN_V_TOP()] = "TOP";
    AlignV[AlignV["BOTTOM"] = ALIGN_V_BOTTOM()] = "BOTTOM";
})(AlignV || (AlignV = {}));
;
var AlignH;
(function (AlignH) {
    AlignH[AlignH["NONE"] = ALIGN_H_NONE()] = "NONE";
    AlignH[AlignH["CENTER"] = ALIGN_H_CENTER()] = "CENTER";
    AlignH[AlignH["LEFT"] = ALIGN_H_LEFT()] = "LEFT";
    AlignH[AlignH["RIGHT"] = ALIGN_H_RIGHT()] = "RIGHT";
})(AlignH || (AlignH = {}));
;
var Vgcanvas = /** @class */ (function () {
    function Vgcanvas(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Vgcanvas.cast = function (vg) {
        return new Vgcanvas(vgcanvas_cast(vg ? (vg.nativeObj || vg) : null));
    };
    Vgcanvas.prototype.flush = function () {
        return vgcanvas_flush(this.nativeObj);
    };
    Vgcanvas.prototype.beginPath = function () {
        return vgcanvas_begin_path(this.nativeObj);
    };
    Vgcanvas.prototype.moveTo = function (x, y) {
        return vgcanvas_move_to(this.nativeObj, x, y);
    };
    Vgcanvas.prototype.lineTo = function (x, y) {
        return vgcanvas_line_to(this.nativeObj, x, y);
    };
    Vgcanvas.prototype.quadTo = function (cpx, cpy, x, y) {
        return vgcanvas_quad_to(this.nativeObj, cpx, cpy, x, y);
    };
    Vgcanvas.prototype.bezierTo = function (cp1x, cp1y, cp2x, cp2y, x, y) {
        return vgcanvas_bezier_to(this.nativeObj, cp1x, cp1y, cp2x, cp2y, x, y);
    };
    Vgcanvas.prototype.arcTo = function (x1, y1, x2, y2, r) {
        return vgcanvas_arc_to(this.nativeObj, x1, y1, x2, y2, r);
    };
    Vgcanvas.prototype.arc = function (x, y, r, start_angle, end_angle, ccw) {
        return vgcanvas_arc(this.nativeObj, x, y, r, start_angle, end_angle, ccw);
    };
    Vgcanvas.prototype.isPointInPath = function (x, y) {
        return vgcanvas_is_point_in_path(this.nativeObj, x, y);
    };
    Vgcanvas.prototype.rect = function (x, y, w, h) {
        return vgcanvas_rect(this.nativeObj, x, y, w, h);
    };
    Vgcanvas.prototype.roundedRect = function (x, y, w, h, r) {
        return vgcanvas_rounded_rect(this.nativeObj, x, y, w, h, r);
    };
    Vgcanvas.prototype.ellipse = function (x, y, rx, ry) {
        return vgcanvas_ellipse(this.nativeObj, x, y, rx, ry);
    };
    Vgcanvas.prototype.closePath = function () {
        return vgcanvas_close_path(this.nativeObj);
    };
    Vgcanvas.prototype.rotate = function (rad) {
        return vgcanvas_rotate(this.nativeObj, rad);
    };
    Vgcanvas.prototype.scale = function (x, y) {
        return vgcanvas_scale(this.nativeObj, x, y);
    };
    Vgcanvas.prototype.translate = function (x, y) {
        return vgcanvas_translate(this.nativeObj, x, y);
    };
    Vgcanvas.prototype.transform = function (a, b, c, d, e, f) {
        return vgcanvas_transform(this.nativeObj, a, b, c, d, e, f);
    };
    Vgcanvas.prototype.setTransform = function (a, b, c, d, e, f) {
        return vgcanvas_set_transform(this.nativeObj, a, b, c, d, e, f);
    };
    Vgcanvas.prototype.clipRect = function (x, y, w, h) {
        return vgcanvas_clip_rect(this.nativeObj, x, y, w, h);
    };
    Vgcanvas.prototype.fill = function () {
        return vgcanvas_fill(this.nativeObj);
    };
    Vgcanvas.prototype.stroke = function () {
        return vgcanvas_stroke(this.nativeObj);
    };
    Vgcanvas.prototype.paint = function (stroke, img) {
        return vgcanvas_paint(this.nativeObj, stroke, img ? img.nativeObj : null);
    };
    Vgcanvas.prototype.setFont = function (font) {
        return vgcanvas_set_font(this.nativeObj, font);
    };
    Vgcanvas.prototype.setFontSize = function (font) {
        return vgcanvas_set_font_size(this.nativeObj, font);
    };
    Vgcanvas.prototype.setTextAlign = function (value) {
        return vgcanvas_set_text_align(this.nativeObj, value);
    };
    Vgcanvas.prototype.setTextBaseline = function (value) {
        return vgcanvas_set_text_baseline(this.nativeObj, value);
    };
    Vgcanvas.prototype.fillText = function (text, x, y, max_width) {
        return vgcanvas_fill_text(this.nativeObj, text, x, y, max_width);
    };
    Vgcanvas.prototype.measureText = function (text) {
        return vgcanvas_measure_text(this.nativeObj, text);
    };
    Vgcanvas.prototype.drawImage = function (img, sx, sy, sw, sh, dx, dy, dw, dh) {
        return vgcanvas_draw_image(this.nativeObj, img ? img.nativeObj : null, sx, sy, sw, sh, dx, dy, dw, dh);
    };
    Vgcanvas.prototype.drawIcon = function (img, sx, sy, sw, sh, dx, dy, dw, dh) {
        return vgcanvas_draw_icon(this.nativeObj, img ? img.nativeObj : null, sx, sy, sw, sh, dx, dy, dw, dh);
    };
    Vgcanvas.prototype.setAntialias = function (value) {
        return vgcanvas_set_antialias(this.nativeObj, value);
    };
    Vgcanvas.prototype.setGlobalAlpha = function (alpha) {
        return vgcanvas_set_global_alpha(this.nativeObj, alpha);
    };
    Vgcanvas.prototype.setLineWidth = function (value) {
        return vgcanvas_set_line_width(this.nativeObj, value);
    };
    Vgcanvas.prototype.setFillColor = function (color) {
        return vgcanvas_set_fill_color_str(this.nativeObj, color);
    };
    Vgcanvas.prototype.setStrokeColor = function (color) {
        return vgcanvas_set_stroke_color_str(this.nativeObj, color);
    };
    Vgcanvas.prototype.setLineCap = function (value) {
        return vgcanvas_set_line_cap(this.nativeObj, value);
    };
    Vgcanvas.prototype.setLineJoin = function (value) {
        return vgcanvas_set_line_join(this.nativeObj, value);
    };
    Vgcanvas.prototype.setMiterLimit = function (value) {
        return vgcanvas_set_miter_limit(this.nativeObj, value);
    };
    Vgcanvas.prototype.save = function () {
        return vgcanvas_save(this.nativeObj);
    };
    Vgcanvas.prototype.restore = function () {
        return vgcanvas_restore(this.nativeObj);
    };
    Object.defineProperty(Vgcanvas.prototype, "w", {
        get: function () {
            return vgcanvas_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "h", {
        get: function () {
            return vgcanvas_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "ratio", {
        get: function () {
            return vgcanvas_t_get_prop_ratio(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "antiAlias", {
        get: function () {
            return vgcanvas_t_get_prop_anti_alias(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "lineWidth", {
        get: function () {
            return vgcanvas_t_get_prop_line_width(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "globalAlpha", {
        get: function () {
            return vgcanvas_t_get_prop_global_alpha(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "miterLimit", {
        get: function () {
            return vgcanvas_t_get_prop_miter_limit(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "lineCap", {
        get: function () {
            return vgcanvas_t_get_prop_line_cap(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "lineJoin", {
        get: function () {
            return vgcanvas_t_get_prop_line_join(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "font", {
        get: function () {
            return vgcanvas_t_get_prop_font(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "fontSize", {
        get: function () {
            return vgcanvas_t_get_prop_font_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "textAlign", {
        get: function () {
            return vgcanvas_t_get_prop_text_align(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Vgcanvas.prototype, "textBaseline", {
        get: function () {
            return vgcanvas_t_get_prop_text_baseline(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Vgcanvas;
}());
var WidgetProp;
(function (WidgetProp) {
    WidgetProp[WidgetProp["X"] = WIDGET_PROP_X()] = "X";
    WidgetProp[WidgetProp["Y"] = WIDGET_PROP_Y()] = "Y";
    WidgetProp[WidgetProp["W"] = WIDGET_PROP_W()] = "W";
    WidgetProp[WidgetProp["H"] = WIDGET_PROP_H()] = "H";
    WidgetProp[WidgetProp["OPACITY"] = WIDGET_PROP_OPACITY()] = "OPACITY";
    WidgetProp[WidgetProp["MIN_W"] = WIDGET_PROP_MIN_W()] = "MIN_W";
    WidgetProp[WidgetProp["MAX_W"] = WIDGET_PROP_MAX_W()] = "MAX_W";
    WidgetProp[WidgetProp["CHILDREN_LAYOUT"] = WIDGET_PROP_CHILDREN_LAYOUT()] = "CHILDREN_LAYOUT";
    WidgetProp[WidgetProp["LAYOUT"] = WIDGET_PROP_LAYOUT()] = "LAYOUT";
    WidgetProp[WidgetProp["SELF_LAYOUT"] = WIDGET_PROP_SELF_LAYOUT()] = "SELF_LAYOUT";
    WidgetProp[WidgetProp["LAYOUT_W"] = WIDGET_PROP_LAYOUT_W()] = "LAYOUT_W";
    WidgetProp[WidgetProp["LAYOUT_H"] = WIDGET_PROP_LAYOUT_H()] = "LAYOUT_H";
    WidgetProp[WidgetProp["VIRTUAL_W"] = WIDGET_PROP_VIRTUAL_W()] = "VIRTUAL_W";
    WidgetProp[WidgetProp["VIRTUAL_H"] = WIDGET_PROP_VIRTUAL_H()] = "VIRTUAL_H";
    WidgetProp[WidgetProp["NAME"] = WIDGET_PROP_NAME()] = "NAME";
    WidgetProp[WidgetProp["CLOSABLE"] = WIDGET_PROP_CLOSABLE()] = "CLOSABLE";
    WidgetProp[WidgetProp["CURSOR"] = WIDGET_PROP_CURSOR()] = "CURSOR";
    WidgetProp[WidgetProp["VALUE"] = WIDGET_PROP_VALUE()] = "VALUE";
    WidgetProp[WidgetProp["LENGTH"] = WIDGET_PROP_LENGTH()] = "LENGTH";
    WidgetProp[WidgetProp["TEXT"] = WIDGET_PROP_TEXT()] = "TEXT";
    WidgetProp[WidgetProp["TR_TEXT"] = WIDGET_PROP_TR_TEXT()] = "TR_TEXT";
    WidgetProp[WidgetProp["STYLE"] = WIDGET_PROP_STYLE()] = "STYLE";
    WidgetProp[WidgetProp["ENABLE"] = WIDGET_PROP_ENABLE()] = "ENABLE";
    WidgetProp[WidgetProp["FLOATING"] = WIDGET_PROP_FLOATING()] = "FLOATING";
    WidgetProp[WidgetProp["MARGIN"] = WIDGET_PROP_MARGIN()] = "MARGIN";
    WidgetProp[WidgetProp["SPACING"] = WIDGET_PROP_SPACING()] = "SPACING";
    WidgetProp[WidgetProp["LEFT_MARGIN"] = WIDGET_PROP_LEFT_MARGIN()] = "LEFT_MARGIN";
    WidgetProp[WidgetProp["RIGHT_MARGIN"] = WIDGET_PROP_RIGHT_MARGIN()] = "RIGHT_MARGIN";
    WidgetProp[WidgetProp["TOP_MARGIN"] = WIDGET_PROP_TOP_MARGIN()] = "TOP_MARGIN";
    WidgetProp[WidgetProp["BOTTOM_MARGIN"] = WIDGET_PROP_BOTTOM_MARGIN()] = "BOTTOM_MARGIN";
    WidgetProp[WidgetProp["STEP"] = WIDGET_PROP_STEP()] = "STEP";
    WidgetProp[WidgetProp["VISIBLE"] = WIDGET_PROP_VISIBLE()] = "VISIBLE";
    WidgetProp[WidgetProp["SENSITIVE"] = WIDGET_PROP_SENSITIVE()] = "SENSITIVE";
    WidgetProp[WidgetProp["ANIMATION"] = WIDGET_PROP_ANIMATION()] = "ANIMATION";
    WidgetProp[WidgetProp["ANIM_HINT"] = WIDGET_PROP_ANIM_HINT()] = "ANIM_HINT";
    WidgetProp[WidgetProp["OPEN_ANIM_HINT"] = WIDGET_PROP_OPEN_ANIM_HINT()] = "OPEN_ANIM_HINT";
    WidgetProp[WidgetProp["CLOSE_ANIM_HINT"] = WIDGET_PROP_CLOSE_ANIM_HINT()] = "CLOSE_ANIM_HINT";
    WidgetProp[WidgetProp["MIN"] = WIDGET_PROP_MIN()] = "MIN";
    WidgetProp[WidgetProp["TIPS"] = WIDGET_PROP_TIPS()] = "TIPS";
    WidgetProp[WidgetProp["INPUT_TYPE"] = WIDGET_PROP_INPUT_TYPE()] = "INPUT_TYPE";
    WidgetProp[WidgetProp["READONLY"] = WIDGET_PROP_READONLY()] = "READONLY";
    WidgetProp[WidgetProp["PASSWORD_VISIBLE"] = WIDGET_PROP_PASSWORD_VISIBLE()] = "PASSWORD_VISIBLE";
    WidgetProp[WidgetProp["ACTIVE"] = WIDGET_PROP_ACTIVE()] = "ACTIVE";
    WidgetProp[WidgetProp["VERTICAL"] = WIDGET_PROP_VERTICAL()] = "VERTICAL";
    WidgetProp[WidgetProp["SHOW_TEXT"] = WIDGET_PROP_SHOW_TEXT()] = "SHOW_TEXT";
    WidgetProp[WidgetProp["XOFFSET"] = WIDGET_PROP_XOFFSET()] = "XOFFSET";
    WidgetProp[WidgetProp["YOFFSET"] = WIDGET_PROP_YOFFSET()] = "YOFFSET";
    WidgetProp[WidgetProp["ALIGN_V"] = WIDGET_PROP_ALIGN_V()] = "ALIGN_V";
    WidgetProp[WidgetProp["ALIGN_H"] = WIDGET_PROP_ALIGN_H()] = "ALIGN_H";
    WidgetProp[WidgetProp["AUTO_PLAY"] = WIDGET_PROP_AUTO_PLAY()] = "AUTO_PLAY";
    WidgetProp[WidgetProp["AUTO_FIX"] = WIDGET_PROP_AUTO_FIX()] = "AUTO_FIX";
    WidgetProp[WidgetProp["X_MIN"] = WIDGET_PROP_X_MIN()] = "X_MIN";
    WidgetProp[WidgetProp["X_MAX"] = WIDGET_PROP_X_MAX()] = "X_MAX";
    WidgetProp[WidgetProp["Y_MIN"] = WIDGET_PROP_Y_MIN()] = "Y_MIN";
    WidgetProp[WidgetProp["Y_MAX"] = WIDGET_PROP_Y_MAX()] = "Y_MAX";
    WidgetProp[WidgetProp["MAX"] = WIDGET_PROP_MAX()] = "MAX";
    WidgetProp[WidgetProp["ROW"] = WIDGET_PROP_ROW()] = "ROW";
    WidgetProp[WidgetProp["STATE_FOR_STYLE"] = WIDGET_PROP_STATE_FOR_STYLE()] = "STATE_FOR_STYLE";
    WidgetProp[WidgetProp["THEME"] = WIDGET_PROP_THEME()] = "THEME";
    WidgetProp[WidgetProp["STAGE"] = WIDGET_PROP_STAGE()] = "STAGE";
    WidgetProp[WidgetProp["IMAGE_MANAGER"] = WIDGET_PROP_IMAGE_MANAGER()] = "IMAGE_MANAGER";
    WidgetProp[WidgetProp["ASSETS_MANAGER"] = WIDGET_PROP_ASSETS_MANAGER()] = "ASSETS_MANAGER";
    WidgetProp[WidgetProp["FONT_MANAGER"] = WIDGET_PROP_FONT_MANAGER()] = "FONT_MANAGER";
    WidgetProp[WidgetProp["THEME_OBJ"] = WIDGET_PROP_THEME_OBJ()] = "THEME_OBJ";
    WidgetProp[WidgetProp["DEFAULT_THEME_OBJ"] = WIDGET_PROP_DEFAULT_THEME_OBJ()] = "DEFAULT_THEME_OBJ";
    WidgetProp[WidgetProp["SCRIPT"] = WIDGET_PROP_SCRIPT()] = "SCRIPT";
    WidgetProp[WidgetProp["ITEM_WIDTH"] = WIDGET_PROP_ITEM_WIDTH()] = "ITEM_WIDTH";
    WidgetProp[WidgetProp["ITEM_HEIGHT"] = WIDGET_PROP_ITEM_HEIGHT()] = "ITEM_HEIGHT";
    WidgetProp[WidgetProp["DEFAULT_ITEM_HEIGHT"] = WIDGET_PROP_DEFAULT_ITEM_HEIGHT()] = "DEFAULT_ITEM_HEIGHT";
    WidgetProp[WidgetProp["XSLIDABLE"] = WIDGET_PROP_XSLIDABLE()] = "XSLIDABLE";
    WidgetProp[WidgetProp["YSLIDABLE"] = WIDGET_PROP_YSLIDABLE()] = "YSLIDABLE";
    WidgetProp[WidgetProp["REPEAT"] = WIDGET_PROP_REPEAT()] = "REPEAT";
    WidgetProp[WidgetProp["ANIMATABLE"] = WIDGET_PROP_ANIMATABLE()] = "ANIMATABLE";
    WidgetProp[WidgetProp["AUTO_HIDE_SCROLL_BAR"] = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR()] = "AUTO_HIDE_SCROLL_BAR";
    WidgetProp[WidgetProp["IMAGE"] = WIDGET_PROP_IMAGE()] = "IMAGE";
    WidgetProp[WidgetProp["FORMAT"] = WIDGET_PROP_FORMAT()] = "FORMAT";
    WidgetProp[WidgetProp["DRAW_TYPE"] = WIDGET_PROP_DRAW_TYPE()] = "DRAW_TYPE";
    WidgetProp[WidgetProp["SELECTABLE"] = WIDGET_PROP_SELECTABLE()] = "SELECTABLE";
    WidgetProp[WidgetProp["CLICKABLE"] = WIDGET_PROP_CLICKABLE()] = "CLICKABLE";
    WidgetProp[WidgetProp["SCALE_X"] = WIDGET_PROP_SCALE_X()] = "SCALE_X";
    WidgetProp[WidgetProp["SCALE_Y"] = WIDGET_PROP_SCALE_Y()] = "SCALE_Y";
    WidgetProp[WidgetProp["ANCHOR_X"] = WIDGET_PROP_ANCHOR_X()] = "ANCHOR_X";
    WidgetProp[WidgetProp["ANCHOR_Y"] = WIDGET_PROP_ANCHOR_Y()] = "ANCHOR_Y";
    WidgetProp[WidgetProp["ROTATION"] = WIDGET_PROP_ROTATION()] = "ROTATION";
    WidgetProp[WidgetProp["COMPACT"] = WIDGET_PROP_COMPACT()] = "COMPACT";
    WidgetProp[WidgetProp["ICON"] = WIDGET_PROP_ICON()] = "ICON";
    WidgetProp[WidgetProp["OPTIONS"] = WIDGET_PROP_OPTIONS()] = "OPTIONS";
    WidgetProp[WidgetProp["SELECTED"] = WIDGET_PROP_SELECTED()] = "SELECTED";
    WidgetProp[WidgetProp["CHECKED"] = WIDGET_PROP_CHECKED()] = "CHECKED";
    WidgetProp[WidgetProp["ACTIVE_ICON"] = WIDGET_PROP_ACTIVE_ICON()] = "ACTIVE_ICON";
    WidgetProp[WidgetProp["OPEN_WINDOW"] = WIDGET_PROP_OPEN_WINDOW()] = "OPEN_WINDOW";
    WidgetProp[WidgetProp["SELECTED_INDEX"] = WIDGET_PROP_SELECTED_INDEX()] = "SELECTED_INDEX";
    WidgetProp[WidgetProp["CLOSE_WHEN_CLICK"] = WIDGET_PROP_CLOSE_WHEN_CLICK()] = "CLOSE_WHEN_CLICK";
    WidgetProp[WidgetProp["CLOSE_WHEN_CLICK_OUTSIDE"] = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE()] = "CLOSE_WHEN_CLICK_OUTSIDE";
    WidgetProp[WidgetProp["LINE_GAP"] = WIDGET_PROP_LINE_GAP()] = "LINE_GAP";
    WidgetProp[WidgetProp["BG_COLOR"] = WIDGET_PROP_BG_COLOR()] = "BG_COLOR";
    WidgetProp[WidgetProp["BORDER_COLOR"] = WIDGET_PROP_BORDER_COLOR()] = "BORDER_COLOR";
    WidgetProp[WidgetProp["DELAY"] = WIDGET_PROP_DELAY()] = "DELAY";
})(WidgetProp || (WidgetProp = {}));
;
var WidgetType;
(function (WidgetType) {
    WidgetType[WidgetType["NONE"] = WIDGET_TYPE_NONE()] = "NONE";
    WidgetType[WidgetType["WINDOW_MANAGER"] = WIDGET_TYPE_WINDOW_MANAGER()] = "WINDOW_MANAGER";
    WidgetType[WidgetType["NORMAL_WINDOW"] = WIDGET_TYPE_NORMAL_WINDOW()] = "NORMAL_WINDOW";
    WidgetType[WidgetType["TOOL_BAR"] = WIDGET_TYPE_TOOL_BAR()] = "TOOL_BAR";
    WidgetType[WidgetType["DIALOG"] = WIDGET_TYPE_DIALOG()] = "DIALOG";
    WidgetType[WidgetType["POPUP"] = WIDGET_TYPE_POPUP()] = "POPUP";
    WidgetType[WidgetType["SYSTEM_BAR"] = WIDGET_TYPE_SYSTEM_BAR()] = "SYSTEM_BAR";
    WidgetType[WidgetType["SPRITE"] = WIDGET_TYPE_SPRITE()] = "SPRITE";
    WidgetType[WidgetType["KEYBOARD"] = WIDGET_TYPE_KEYBOARD()] = "KEYBOARD";
    WidgetType[WidgetType["DND"] = WIDGET_TYPE_DND()] = "DND";
    WidgetType[WidgetType["LABEL"] = WIDGET_TYPE_LABEL()] = "LABEL";
    WidgetType[WidgetType["BUTTON"] = WIDGET_TYPE_BUTTON()] = "BUTTON";
    WidgetType[WidgetType["IMAGE"] = WIDGET_TYPE_IMAGE()] = "IMAGE";
    WidgetType[WidgetType["EDIT"] = WIDGET_TYPE_EDIT()] = "EDIT";
    WidgetType[WidgetType["PROGRESS_BAR"] = WIDGET_TYPE_PROGRESS_BAR()] = "PROGRESS_BAR";
    WidgetType[WidgetType["GROUP_BOX"] = WIDGET_TYPE_GROUP_BOX()] = "GROUP_BOX";
    WidgetType[WidgetType["CHECK_BUTTON"] = WIDGET_TYPE_CHECK_BUTTON()] = "CHECK_BUTTON";
    WidgetType[WidgetType["RADIO_BUTTON"] = WIDGET_TYPE_RADIO_BUTTON()] = "RADIO_BUTTON";
    WidgetType[WidgetType["DIALOG_TITLE"] = WIDGET_TYPE_DIALOG_TITLE()] = "DIALOG_TITLE";
    WidgetType[WidgetType["DIALOG_CLIENT"] = WIDGET_TYPE_DIALOG_CLIENT()] = "DIALOG_CLIENT";
    WidgetType[WidgetType["SLIDER"] = WIDGET_TYPE_SLIDER()] = "SLIDER";
    WidgetType[WidgetType["VIEW"] = WIDGET_TYPE_VIEW()] = "VIEW";
    WidgetType[WidgetType["COMBO_BOX"] = WIDGET_TYPE_COMBO_BOX()] = "COMBO_BOX";
    WidgetType[WidgetType["COMBO_BOX_ITEM"] = WIDGET_TYPE_COMBO_BOX_ITEM()] = "COMBO_BOX_ITEM";
    WidgetType[WidgetType["SLIDE_VIEW"] = WIDGET_TYPE_SLIDE_VIEW()] = "SLIDE_VIEW";
    WidgetType[WidgetType["PAGES"] = WIDGET_TYPE_PAGES()] = "PAGES";
    WidgetType[WidgetType["TAB_BUTTON"] = WIDGET_TYPE_TAB_BUTTON()] = "TAB_BUTTON";
    WidgetType[WidgetType["TAB_CONTROL"] = WIDGET_TYPE_TAB_CONTROL()] = "TAB_CONTROL";
    WidgetType[WidgetType["TAB_BUTTON_GROUP"] = WIDGET_TYPE_TAB_BUTTON_GROUP()] = "TAB_BUTTON_GROUP";
    WidgetType[WidgetType["BUTTON_GROUP"] = WIDGET_TYPE_BUTTON_GROUP()] = "BUTTON_GROUP";
    WidgetType[WidgetType["CANDIDATES"] = WIDGET_TYPE_CANDIDATES()] = "CANDIDATES";
    WidgetType[WidgetType["SPIN_BOX"] = WIDGET_TYPE_SPIN_BOX()] = "SPIN_BOX";
    WidgetType[WidgetType["DRAGGER"] = WIDGET_TYPE_DRAGGER()] = "DRAGGER";
    WidgetType[WidgetType["SCROLL_BAR"] = WIDGET_TYPE_SCROLL_BAR()] = "SCROLL_BAR";
    WidgetType[WidgetType["SCROLL_BAR_DESKTOP"] = WIDGET_TYPE_SCROLL_BAR_DESKTOP()] = "SCROLL_BAR_DESKTOP";
    WidgetType[WidgetType["SCROLL_BAR_MOBILE"] = WIDGET_TYPE_SCROLL_BAR_MOBILE()] = "SCROLL_BAR_MOBILE";
    WidgetType[WidgetType["SCROLL_VIEW"] = WIDGET_TYPE_SCROLL_VIEW()] = "SCROLL_VIEW";
    WidgetType[WidgetType["LIST_VIEW"] = WIDGET_TYPE_LIST_VIEW()] = "LIST_VIEW";
    WidgetType[WidgetType["LIST_VIEW_H"] = WIDGET_TYPE_LIST_VIEW_H()] = "LIST_VIEW_H";
    WidgetType[WidgetType["LIST_ITEM"] = WIDGET_TYPE_LIST_ITEM()] = "LIST_ITEM";
    WidgetType[WidgetType["COLOR_PICKER"] = WIDGET_TYPE_COLOR_PICKER()] = "COLOR_PICKER";
    WidgetType[WidgetType["COLOR_COMPONENT"] = WIDGET_TYPE_COLOR_COMPONENT()] = "COLOR_COMPONENT";
    WidgetType[WidgetType["COLOR_TILE"] = WIDGET_TYPE_COLOR_TILE()] = "COLOR_TILE";
    WidgetType[WidgetType["RICH_TEXT"] = WIDGET_TYPE_RICH_TEXT()] = "RICH_TEXT";
    WidgetType[WidgetType["APP_BAR"] = WIDGET_TYPE_APP_BAR()] = "APP_BAR";
    WidgetType[WidgetType["GRID"] = WIDGET_TYPE_GRID()] = "GRID";
    WidgetType[WidgetType["GRID_ITEM"] = WIDGET_TYPE_GRID_ITEM()] = "GRID_ITEM";
    WidgetType[WidgetType["ROW"] = WIDGET_TYPE_ROW()] = "ROW";
    WidgetType[WidgetType["COLUMN"] = WIDGET_TYPE_COLUMN()] = "COLUMN";
    WidgetType[WidgetType["CALIBRATION_WIN"] = WIDGET_TYPE_CALIBRATION_WIN()] = "CALIBRATION_WIN";
})(WidgetType || (WidgetType = {}));
;
var WindowStage;
(function (WindowStage) {
    WindowStage[WindowStage["NONE"] = WINDOW_STAGE_NONE()] = "NONE";
    WindowStage[WindowStage["CREATED"] = WINDOW_STAGE_CREATED()] = "CREATED";
    WindowStage[WindowStage["OPENED"] = WINDOW_STAGE_OPENED()] = "OPENED";
    WindowStage[WindowStage["CLOSED"] = WINDOW_STAGE_CLOSED()] = "CLOSED";
})(WindowStage || (WindowStage = {}));
;
var WindowClosable;
(function (WindowClosable) {
    WindowClosable[WindowClosable["YES"] = WINDOW_CLOSABLE_YES()] = "YES";
    WindowClosable[WindowClosable["NO"] = WINDOW_CLOSABLE_NO()] = "NO";
    WindowClosable[WindowClosable["CONFIRM"] = WINDOW_CLOSABLE_CONFIRM()] = "CONFIRM";
})(WindowClosable || (WindowClosable = {}));
;
var WidgetState;
(function (WidgetState) {
    WidgetState[WidgetState["STATE_NONE"] = WIDGET_STATE_NONE()] = "STATE_NONE";
    WidgetState[WidgetState["STATE_NORMAL"] = WIDGET_STATE_NORMAL()] = "STATE_NORMAL";
    WidgetState[WidgetState["STATE_PRESSED"] = WIDGET_STATE_PRESSED()] = "STATE_PRESSED";
    WidgetState[WidgetState["STATE_OVER"] = WIDGET_STATE_OVER()] = "STATE_OVER";
    WidgetState[WidgetState["STATE_DISABLE"] = WIDGET_STATE_DISABLE()] = "STATE_DISABLE";
    WidgetState[WidgetState["STATE_FOCUSED"] = WIDGET_STATE_FOCUSED()] = "STATE_FOCUSED";
    WidgetState[WidgetState["STATE_CHECKED"] = WIDGET_STATE_CHECKED()] = "STATE_CHECKED";
    WidgetState[WidgetState["STATE_UNCHECKED"] = WIDGET_STATE_UNCHECKED()] = "STATE_UNCHECKED";
    WidgetState[WidgetState["STATE_EMPTY"] = WIDGET_STATE_EMPTY()] = "STATE_EMPTY";
    WidgetState[WidgetState["STATE_ERROR"] = WIDGET_STATE_ERROR()] = "STATE_ERROR";
    WidgetState[WidgetState["STATE_SELECTED"] = WIDGET_STATE_SELECTED()] = "STATE_SELECTED";
    WidgetState[WidgetState["STATE_NORMAL_OF_CHECKED"] = WIDGET_STATE_NORMAL_OF_CHECKED()] = "STATE_NORMAL_OF_CHECKED";
    WidgetState[WidgetState["STATE_PRESSED_OF_CHECKED"] = WIDGET_STATE_PRESSED_OF_CHECKED()] = "STATE_PRESSED_OF_CHECKED";
    WidgetState[WidgetState["STATE_OVER_OF_CHECKED"] = WIDGET_STATE_OVER_OF_CHECKED()] = "STATE_OVER_OF_CHECKED";
    WidgetState[WidgetState["STATE_NORMAL_OF_ACTIVE"] = WIDGET_STATE_NORMAL_OF_ACTIVE()] = "STATE_NORMAL_OF_ACTIVE";
    WidgetState[WidgetState["STATE_PRESSED_OF_ACTIVE"] = WIDGET_STATE_PRESSED_OF_ACTIVE()] = "STATE_PRESSED_OF_ACTIVE";
    WidgetState[WidgetState["STATE_OVER_OF_ACTIVE"] = WIDGET_STATE_OVER_OF_ACTIVE()] = "STATE_OVER_OF_ACTIVE";
})(WidgetState || (WidgetState = {}));
;
var Widget = /** @class */ (function () {
    function Widget(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Widget.prototype.countChildren = function () {
        return widget_count_children(this.nativeObj);
    };
    Widget.prototype.getChild = function (index) {
        return new Widget(widget_get_child(this.nativeObj, index));
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
    Widget.prototype.animateValueTo = function (value, duration) {
        return widget_animate_value_to(this.nativeObj, value, duration);
    };
    Widget.prototype.addValue = function (delta) {
        return widget_add_value(this.nativeObj, delta);
    };
    Widget.prototype.useStyle = function (style) {
        return widget_use_style(this.nativeObj, style);
    };
    Widget.prototype.setText = function (text) {
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
    Widget.prototype.setCursor = function (cursor) {
        return widget_set_cursor(this.nativeObj, cursor);
    };
    Widget.prototype.setAnimation = function (animation) {
        return widget_set_animation(this.nativeObj, animation);
    };
    Widget.prototype.createAnimator = function (animation) {
        return widget_create_animator(this.nativeObj, animation);
    };
    Widget.prototype.startAnimator = function (name) {
        return widget_start_animator(this.nativeObj, name);
    };
    Widget.prototype.setAnimatorTimeScale = function (name, time_scale) {
        return widget_set_animator_time_scale(this.nativeObj, name, time_scale);
    };
    Widget.prototype.pauseAnimator = function (name) {
        return widget_pause_animator(this.nativeObj, name);
    };
    Widget.prototype.stopAnimator = function (name) {
        return widget_stop_animator(this.nativeObj, name);
    };
    Widget.prototype.destroyAnimator = function (name) {
        return widget_destroy_animator(this.nativeObj, name);
    };
    Widget.prototype.setEnable = function (enable) {
        return widget_set_enable(this.nativeObj, enable);
    };
    Widget.prototype.setFloating = function (floating) {
        return widget_set_floating(this.nativeObj, floating);
    };
    Widget.prototype.setFocused = function (focused) {
        return widget_set_focused(this.nativeObj, focused);
    };
    Widget.prototype.child = function (name) {
        return new Widget(widget_child(this.nativeObj, name));
    };
    Widget.prototype.lookup = function (name, recursive) {
        return new Widget(widget_lookup(this.nativeObj, name, recursive));
    };
    Widget.prototype.lookupByType = function (type, recursive) {
        return new Widget(widget_lookup_by_type(this.nativeObj, type, recursive));
    };
    Widget.prototype.setVisible = function (visible, recursive) {
        return widget_set_visible(this.nativeObj, visible, recursive);
    };
    Widget.prototype.setSensitive = function (sensitive) {
        return widget_set_sensitive(this.nativeObj, sensitive);
    };
    Widget.prototype.on = function (type, on_event, ctx) {
        return widget_on(this.nativeObj, type, on_event, ctx);
    };
    Widget.prototype.off = function (id) {
        return widget_off(this.nativeObj, id);
    };
    Widget.prototype.invalidateForce = function (r) {
        return widget_invalidate_force(this.nativeObj, r ? r.nativeObj : null);
    };
    Widget.prototype.setPropStr = function (name, v) {
        return widget_set_prop_str(this.nativeObj, name, v);
    };
    Widget.prototype.getPropStr = function (name, defval) {
        return widget_get_prop_str(this.nativeObj, name, defval);
    };
    Widget.prototype.setPropInt = function (name, v) {
        return widget_set_prop_int(this.nativeObj, name, v);
    };
    Widget.prototype.getPropInt = function (name, defval) {
        return widget_get_prop_int(this.nativeObj, name, defval);
    };
    Widget.prototype.setPropBool = function (name, v) {
        return widget_set_prop_bool(this.nativeObj, name, v);
    };
    Widget.prototype.getPropBool = function (name, defval) {
        return widget_get_prop_bool(this.nativeObj, name, defval);
    };
    Widget.prototype.isWindowOpened = function () {
        return widget_is_window_opened(this.nativeObj);
    };
    Widget.prototype.foreach = function (visit, ctx) {
        return widget_foreach(this.nativeObj, visit, ctx);
    };
    Widget.prototype.getWindow = function () {
        return new Widget(widget_get_window(this.nativeObj));
    };
    Widget.prototype.getWindowManager = function () {
        return new Widget(widget_get_window_manager(this.nativeObj));
    };
    Widget.prototype.getType = function () {
        return widget_get_type(this.nativeObj);
    };
    Widget.prototype.clone = function (parent) {
        return new Widget(widget_clone(this.nativeObj, parent ? parent.nativeObj : null));
    };
    Widget.prototype.equal = function (other) {
        return widget_equal(this.nativeObj, other ? other.nativeObj : null);
    };
    Widget.cast = function (widget) {
        return new Widget(widget_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Widget.prototype.destroy = function () {
        return widget_destroy(this.nativeObj);
    };
    Widget.prototype.layout = function () {
        return widget_layout(this.nativeObj);
    };
    Widget.prototype.setSelfLayout = function (params) {
        return widget_set_self_layout(this.nativeObj, params);
    };
    Widget.prototype.setChildrenLayout = function (params) {
        return widget_set_children_layout(this.nativeObj, params);
    };
    Widget.prototype.setSelfLayoutParams = function (x, y, w, h) {
        return widget_set_self_layout_params(this.nativeObj, x, y, w, h);
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
    Object.defineProperty(Widget.prototype, "style", {
        get: function () {
            return widget_t_get_prop_style(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "animation", {
        get: function () {
            return widget_t_get_prop_animation(this.nativeObj);
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
    Object.defineProperty(Widget.prototype, "sensitive", {
        get: function () {
            return widget_t_get_prop_sensitive(this.nativeObj);
        },
        set: function (value) {
            widget_t_set_prop_sensitive(this.nativeObj, value);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Widget.prototype, "floating", {
        get: function () {
            return widget_t_get_prop_floating(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Widget;
}());
var AssetType;
(function (AssetType) {
    AssetType[AssetType["NONE"] = ASSET_TYPE_NONE()] = "NONE";
    AssetType[AssetType["FONT"] = ASSET_TYPE_FONT()] = "FONT";
    AssetType[AssetType["IMAGE"] = ASSET_TYPE_IMAGE()] = "IMAGE";
    AssetType[AssetType["STYLE"] = ASSET_TYPE_STYLE()] = "STYLE";
    AssetType[AssetType["UI"] = ASSET_TYPE_UI()] = "UI";
    AssetType[AssetType["XML"] = ASSET_TYPE_XML()] = "XML";
    AssetType[AssetType["STRINGS"] = ASSET_TYPE_STRINGS()] = "STRINGS";
    AssetType[AssetType["DATA"] = ASSET_TYPE_DATA()] = "DATA";
})(AssetType || (AssetType = {}));
;
var Color = /** @class */ (function () {
    function Color(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Color.create = function (r, b, g, a) {
        return new Color(color_create(r, b, g, a));
    };
    Color.prototype.fromStr = function (str) {
        return new Color(color_from_str(this.nativeObj, str));
    };
    Color.prototype.r = function () {
        return color_r(this.nativeObj);
    };
    Color.prototype.g = function () {
        return color_g(this.nativeObj);
    };
    Color.prototype.b = function () {
        return color_b(this.nativeObj);
    };
    Color.prototype.a = function () {
        return color_a(this.nativeObj);
    };
    Color.cast = function (color) {
        return new Color(color_cast(color ? (color.nativeObj || color) : null));
    };
    Color.prototype.destroy = function () {
        return color_destroy(this.nativeObj);
    };
    Object.defineProperty(Color.prototype, "color", {
        get: function () {
            return color_t_get_prop_color(this.nativeObj);
        },
        set: function (value) {
            color_t_set_prop_color(this.nativeObj, value);
        },
        enumerable: true,
        configurable: true
    });
    return Color;
}());
var DateTime = /** @class */ (function () {
    function DateTime(nativeObj) {
        this.nativeObj = nativeObj;
    }
    DateTime.create = function () {
        return new DateTime(date_time_create());
    };
    DateTime.prototype.destroy = function () {
        return date_time_destroy(this.nativeObj);
    };
    return DateTime;
}());
var Emitter = /** @class */ (function () {
    function Emitter(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Emitter.create = function () {
        return new Emitter(emitter_create());
    };
    Emitter.prototype.dispatch = function (e) {
        return emitter_dispatch(this.nativeObj, e ? e.nativeObj : null);
    };
    Emitter.prototype.on = function (type, on_event, ctx) {
        return emitter_on(this.nativeObj, type, on_event, ctx);
    };
    Emitter.prototype.off = function (id) {
        return emitter_off(this.nativeObj, id);
    };
    Emitter.prototype.enable = function () {
        return emitter_enable(this.nativeObj);
    };
    Emitter.prototype.disable = function () {
        return emitter_disable(this.nativeObj);
    };
    Emitter.prototype.size = function () {
        return emitter_size(this.nativeObj);
    };
    Emitter.prototype.destroy = function () {
        return emitter_destroy(this.nativeObj);
    };
    Emitter.cast = function (emitter) {
        return new Emitter(emitter_cast(emitter ? (emitter.nativeObj || emitter) : null));
    };
    return Emitter;
}());
var EventBaseType;
(function (EventBaseType) {
    EventBaseType[EventBaseType["PROP_WILL_CHANGE"] = EVT_PROP_WILL_CHANGE()] = "PROP_WILL_CHANGE";
    EventBaseType[EventBaseType["PROP_CHANGED"] = EVT_PROP_CHANGED()] = "PROP_CHANGED";
    EventBaseType[EventBaseType["DESTROY"] = EVT_DESTROY()] = "DESTROY";
})(EventBaseType || (EventBaseType = {}));
;
var Event = /** @class */ (function () {
    function Event(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Event.cast = function (event) {
        return new Event(event_cast(event ? (event.nativeObj || event) : null));
    };
    Event.create = function (type, target) {
        return new Event(event_create(type, target));
    };
    Event.prototype.destroy = function () {
        return event_destroy(this.nativeObj);
    };
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
var NamedValue = /** @class */ (function () {
    function NamedValue(nativeObj) {
        this.nativeObj = nativeObj;
    }
    NamedValue.create = function () {
        return new NamedValue(named_value_create());
    };
    NamedValue.cast = function (nv) {
        return new NamedValue(named_value_cast(nv ? (nv.nativeObj || nv) : null));
    };
    NamedValue.prototype.setName = function (name) {
        return named_value_set_name(this.nativeObj, name);
    };
    NamedValue.prototype.setValue = function (value) {
        return named_value_set_value(this.nativeObj, value ? value.nativeObj : null);
    };
    NamedValue.prototype.getValue = function () {
        return new Value(named_value_get_value(this.nativeObj));
    };
    NamedValue.prototype.destroy = function () {
        return named_value_destroy(this.nativeObj);
    };
    Object.defineProperty(NamedValue.prototype, "name", {
        get: function () {
            return named_value_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return NamedValue;
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
    Rect.create = function (x, y, w, h) {
        return new Rect(rect_create(x, y, w, h));
    };
    Rect.cast = function (rect) {
        return new Rect(rect_cast(rect ? (rect.nativeObj || rect) : null));
    };
    Rect.prototype.destroy = function () {
        return rect_destroy(this.nativeObj);
    };
    Object.defineProperty(Rect.prototype, "x", {
        get: function () {
            return rect_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Rect.prototype, "y", {
        get: function () {
            return rect_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Rect.prototype, "w", {
        get: function () {
            return rect_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Rect.prototype, "h", {
        get: function () {
            return rect_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Rect;
}());
var TimeNow = /** @class */ (function () {
    function TimeNow(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TimeNow.s = function () {
        return time_now_s();
    };
    TimeNow.ms = function () {
        return time_now_ms();
    };
    return TimeNow;
}());
var Ret;
(function (Ret) {
    Ret[Ret["OK"] = RET_OK()] = "OK";
    Ret[Ret["OOM"] = RET_OOM()] = "OOM";
    Ret[Ret["FAIL"] = RET_FAIL()] = "FAIL";
    Ret[Ret["NOT_IMPL"] = RET_NOT_IMPL()] = "NOT_IMPL";
    Ret[Ret["QUIT"] = RET_QUIT()] = "QUIT";
    Ret[Ret["FOUND"] = RET_FOUND()] = "FOUND";
    Ret[Ret["BUSY"] = RET_BUSY()] = "BUSY";
    Ret[Ret["REMOVE"] = RET_REMOVE()] = "REMOVE";
    Ret[Ret["REPEAT"] = RET_REPEAT()] = "REPEAT";
    Ret[Ret["NOT_FOUND"] = RET_NOT_FOUND()] = "NOT_FOUND";
    Ret[Ret["DONE"] = RET_DONE()] = "DONE";
    Ret[Ret["STOP"] = RET_STOP()] = "STOP";
    Ret[Ret["CONTINUE"] = RET_CONTINUE()] = "CONTINUE";
    Ret[Ret["BAD_PARAMS"] = RET_BAD_PARAMS()] = "BAD_PARAMS";
})(Ret || (Ret = {}));
;
var ValueType;
(function (ValueType) {
    ValueType[ValueType["INVALID"] = VALUE_TYPE_INVALID()] = "INVALID";
    ValueType[ValueType["BOOL"] = VALUE_TYPE_BOOL()] = "BOOL";
    ValueType[ValueType["INT8"] = VALUE_TYPE_INT8()] = "INT8";
    ValueType[ValueType["UINT8"] = VALUE_TYPE_UINT8()] = "UINT8";
    ValueType[ValueType["INT16"] = VALUE_TYPE_INT16()] = "INT16";
    ValueType[ValueType["UINT16"] = VALUE_TYPE_UINT16()] = "UINT16";
    ValueType[ValueType["INT32"] = VALUE_TYPE_INT32()] = "INT32";
    ValueType[ValueType["UINT32"] = VALUE_TYPE_UINT32()] = "UINT32";
    ValueType[ValueType["INT64"] = VALUE_TYPE_INT64()] = "INT64";
    ValueType[ValueType["UINT64"] = VALUE_TYPE_UINT64()] = "UINT64";
    ValueType[ValueType["POINTER"] = VALUE_TYPE_POINTER()] = "POINTER";
    ValueType[ValueType["FLOAT"] = VALUE_TYPE_FLOAT()] = "FLOAT";
    ValueType[ValueType["FLOAT32"] = VALUE_TYPE_FLOAT32()] = "FLOAT32";
    ValueType[ValueType["DOUBLE"] = VALUE_TYPE_DOUBLE()] = "DOUBLE";
    ValueType[ValueType["STRING"] = VALUE_TYPE_STRING()] = "STRING";
    ValueType[ValueType["WSTRING"] = VALUE_TYPE_WSTRING()] = "WSTRING";
    ValueType[ValueType["OBJECT"] = VALUE_TYPE_OBJECT()] = "OBJECT";
})(ValueType || (ValueType = {}));
;
var Value = /** @class */ (function () {
    function Value(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Value.prototype.setBool = function (value) {
        return new Value(value_set_bool(this.nativeObj, value));
    };
    Value.prototype.bool = function () {
        return value_bool(this.nativeObj);
    };
    Value.prototype.setInt8 = function (value) {
        return new Value(value_set_int8(this.nativeObj, value));
    };
    Value.prototype.int8 = function () {
        return value_int8(this.nativeObj);
    };
    Value.prototype.setUint8 = function (value) {
        return new Value(value_set_uint8(this.nativeObj, value));
    };
    Value.prototype.uint8 = function () {
        return value_uint8(this.nativeObj);
    };
    Value.prototype.setInt16 = function (value) {
        return new Value(value_set_int16(this.nativeObj, value));
    };
    Value.prototype.int16 = function () {
        return value_int16(this.nativeObj);
    };
    Value.prototype.setUint16 = function (value) {
        return new Value(value_set_uint16(this.nativeObj, value));
    };
    Value.prototype.uint16 = function () {
        return value_uint16(this.nativeObj);
    };
    Value.prototype.setInt32 = function (value) {
        return new Value(value_set_int32(this.nativeObj, value));
    };
    Value.prototype.int32 = function () {
        return value_int32(this.nativeObj);
    };
    Value.prototype.setUint32 = function (value) {
        return new Value(value_set_uint32(this.nativeObj, value));
    };
    Value.prototype.setInt64 = function (value) {
        return new Value(value_set_int64(this.nativeObj, value));
    };
    Value.prototype.int64 = function () {
        return value_int64(this.nativeObj);
    };
    Value.prototype.setUint64 = function (value) {
        return new Value(value_set_uint64(this.nativeObj, value));
    };
    Value.prototype.uint64 = function () {
        return value_uint64(this.nativeObj);
    };
    Value.prototype.setFloat = function (value) {
        return new Value(value_set_float(this.nativeObj, value));
    };
    Value.prototype.float = function () {
        return value_float(this.nativeObj);
    };
    Value.prototype.setFloat32 = function (value) {
        return new Value(value_set_float32(this.nativeObj, value));
    };
    Value.prototype.float32 = function () {
        return value_float32(this.nativeObj);
    };
    Value.prototype.setDouble = function (value) {
        return new Value(value_set_double(this.nativeObj, value));
    };
    Value.prototype.double = function () {
        return value_double(this.nativeObj);
    };
    Value.prototype.setStr = function (value) {
        return new Value(value_dup_str(this.nativeObj, value));
    };
    Value.prototype.str = function () {
        return value_str(this.nativeObj);
    };
    Value.prototype.wstr = function () {
        return value_wstr(this.nativeObj);
    };
    Value.prototype.isNull = function () {
        return value_is_null(this.nativeObj);
    };
    Value.prototype.int = function () {
        return value_int(this.nativeObj);
    };
    Value.prototype.setInt = function (value) {
        return new Value(value_set_int(this.nativeObj, value));
    };
    Value.prototype.setObject = function (value) {
        return new Value(value_set_object(this.nativeObj, value ? value.nativeObj : null));
    };
    Value.object = function (v) {
        return new ObjectBase(value_object(v ? v.nativeObj : null));
    };
    Value.create = function () {
        return new Value(value_create());
    };
    Value.prototype.destroy = function () {
        return value_destroy(this.nativeObj);
    };
    Value.prototype.reset = function () {
        return value_reset(this.nativeObj);
    };
    Value.cast = function (value) {
        return new Value(value_cast(value ? (value.nativeObj || value) : null));
    };
    return Value;
}());
var ListViewH = /** @class */ (function (_super) {
    __extends(ListViewH, _super);
    function ListViewH(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ListViewH.create = function (parent, x, y, w, h) {
        return new Widget(list_view_h_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ListViewH.prototype.setItemWidth = function (item_width) {
        return list_view_h_set_item_width(this.nativeObj, item_width);
    };
    ListViewH.prototype.setSpacing = function (spacing) {
        return list_view_h_set_spacing(this.nativeObj, spacing);
    };
    ListViewH.cast = function (widget) {
        return new Widget(list_view_h_cast(widget ? (widget.nativeObj || widget) : null));
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
        return new Widget(list_view_create(parent ? parent.nativeObj : null, x, y, w, h));
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
        return new Widget(list_view_cast(widget ? (widget.nativeObj || widget) : null));
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
var ScrollBar = /** @class */ (function (_super) {
    __extends(ScrollBar, _super);
    function ScrollBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ScrollBar.create = function (parent, x, y, w, h) {
        return new Widget(scroll_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ScrollBar.cast = function (widget) {
        return new Widget(scroll_bar_cast(widget ? (widget.nativeObj || widget) : null));
    };
    ScrollBar.createMobile = function (parent, x, y, w, h) {
        return new Widget(scroll_bar_create_mobile(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ScrollBar.createDesktop = function (parent, x, y, w, h) {
        return new Widget(scroll_bar_create_desktop(parent ? parent.nativeObj : null, x, y, w, h));
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
        return new Widget(scroll_view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ScrollView.cast = function (widget) {
        return new Widget(scroll_view_cast(widget ? (widget.nativeObj || widget) : null));
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
var SlideMenu = /** @class */ (function (_super) {
    __extends(SlideMenu, _super);
    function SlideMenu(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    SlideMenu.create = function (parent, x, y, w, h) {
        return new Widget(slide_menu_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    SlideMenu.cast = function (widget) {
        return new Widget(slide_menu_cast(widget ? (widget.nativeObj || widget) : null));
    };
    SlideMenu.prototype.setValue = function (value) {
        return slide_menu_set_value(this.nativeObj, value);
    };
    SlideMenu.prototype.setAlignV = function (align_v) {
        return slide_menu_set_align_v(this.nativeObj, align_v);
    };
    SlideMenu.prototype.setMinScale = function (min_scale) {
        return slide_menu_set_min_scale(this.nativeObj, min_scale);
    };
    Object.defineProperty(SlideMenu.prototype, "value", {
        get: function () {
            return slide_menu_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(SlideMenu.prototype, "alignV", {
        get: function () {
            return slide_menu_t_get_prop_align_v(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(SlideMenu.prototype, "minScale", {
        get: function () {
            return slide_menu_t_get_prop_min_scale(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return SlideMenu;
}(Widget));
var SlideView = /** @class */ (function (_super) {
    __extends(SlideView, _super);
    function SlideView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    SlideView.create = function (parent, x, y, w, h) {
        return new Widget(slide_view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    SlideView.cast = function (widget) {
        return new Widget(slide_view_cast(widget ? (widget.nativeObj || widget) : null));
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
var TabButtonGroup = /** @class */ (function (_super) {
    __extends(TabButtonGroup, _super);
    function TabButtonGroup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TabButtonGroup.create = function (parent, x, y, w, h) {
        return new Widget(tab_button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TabButtonGroup.cast = function (widget) {
        return new Widget(tab_button_group_cast(widget ? (widget.nativeObj || widget) : null));
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
var Switch = /** @class */ (function (_super) {
    __extends(Switch, _super);
    function Switch(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Switch.create = function (parent, x, y, w, h) {
        return new Widget(switch_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Switch.prototype.setValue = function (value) {
        return switch_set_value(this.nativeObj, value);
    };
    Switch.cast = function (widget) {
        return new Widget(switch_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(Switch.prototype, "value", {
        get: function () {
            return switch_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Switch.prototype, "maxXoffsetRatio", {
        get: function () {
            return switch_t_get_prop_max_xoffset_ratio(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Switch.prototype, "roundRadius", {
        get: function () {
            return switch_t_get_prop_round_radius(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Switch;
}(Widget));
var TextSelector = /** @class */ (function (_super) {
    __extends(TextSelector, _super);
    function TextSelector(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TextSelector.create = function (parent, x, y, w, h) {
        return new Widget(text_selector_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TextSelector.cast = function (widget) {
        return new Widget(text_selector_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TextSelector.prototype.resetOptions = function () {
        return text_selector_reset_options(this.nativeObj);
    };
    TextSelector.prototype.countOptions = function () {
        return text_selector_count_options(this.nativeObj);
    };
    TextSelector.prototype.appendOption = function (value, text) {
        return text_selector_append_option(this.nativeObj, value, text);
    };
    TextSelector.prototype.setOptions = function (options) {
        return text_selector_set_options(this.nativeObj, options);
    };
    TextSelector.prototype.setRangeOptions = function (start, nr, step) {
        return text_selector_set_range_options(this.nativeObj, start, nr, step);
    };
    TextSelector.prototype.getValue = function () {
        return text_selector_get_value(this.nativeObj);
    };
    TextSelector.prototype.setValue = function (value) {
        return text_selector_set_value(this.nativeObj, value);
    };
    TextSelector.prototype.getText = function () {
        return text_selector_get_text(this.nativeObj);
    };
    TextSelector.prototype.setText = function (text) {
        return text_selector_set_text(this.nativeObj, text);
    };
    TextSelector.prototype.setSelectedIndex = function (index) {
        return text_selector_set_selected_index(this.nativeObj, index);
    };
    TextSelector.prototype.setVisibleNr = function (visible_nr) {
        return text_selector_set_visible_nr(this.nativeObj, visible_nr);
    };
    Object.defineProperty(TextSelector.prototype, "visibleNr", {
        get: function () {
            return text_selector_t_get_prop_visible_nr(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TextSelector.prototype, "selectedIndex", {
        get: function () {
            return text_selector_t_get_prop_selected_index(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TextSelector.prototype, "options", {
        get: function () {
            return text_selector_t_get_prop_options(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TextSelector;
}(Widget));
var DigitClock = /** @class */ (function (_super) {
    __extends(DigitClock, _super);
    function DigitClock(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    DigitClock.create = function (parent, x, y, w, h) {
        return new Widget(digit_clock_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    DigitClock.cast = function (widget) {
        return new Widget(digit_clock_cast(widget ? (widget.nativeObj || widget) : null));
    };
    DigitClock.prototype.setFormat = function (format) {
        return digit_clock_set_format(this.nativeObj, format);
    };
    Object.defineProperty(DigitClock.prototype, "format", {
        get: function () {
            return digit_clock_t_get_prop_format(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return DigitClock;
}(Widget));
var TimeClock = /** @class */ (function (_super) {
    __extends(TimeClock, _super);
    function TimeClock(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TimeClock.create = function (parent, x, y, w, h) {
        return new Widget(time_clock_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TimeClock.cast = function (widget) {
        return new Widget(time_clock_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TimeClock.prototype.setHour = function (hour) {
        return time_clock_set_hour(this.nativeObj, hour);
    };
    TimeClock.prototype.setMinute = function (minute) {
        return time_clock_set_minute(this.nativeObj, minute);
    };
    TimeClock.prototype.setSecond = function (second) {
        return time_clock_set_second(this.nativeObj, second);
    };
    TimeClock.prototype.setHourImage = function (hour) {
        return time_clock_set_hour_image(this.nativeObj, hour);
    };
    TimeClock.prototype.setMinuteImage = function (minute_image) {
        return time_clock_set_minute_image(this.nativeObj, minute_image);
    };
    TimeClock.prototype.setSecondImage = function (second_image) {
        return time_clock_set_second_image(this.nativeObj, second_image);
    };
    TimeClock.prototype.setBgImage = function (bg_image) {
        return time_clock_set_bg_image(this.nativeObj, bg_image);
    };
    TimeClock.prototype.setImage = function (image) {
        return time_clock_set_image(this.nativeObj, image);
    };
    Object.defineProperty(TimeClock.prototype, "hour", {
        get: function () {
            return time_clock_t_get_prop_hour(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimeClock.prototype, "minute", {
        get: function () {
            return time_clock_t_get_prop_minute(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimeClock.prototype, "second", {
        get: function () {
            return time_clock_t_get_prop_second(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimeClock.prototype, "image", {
        get: function () {
            return time_clock_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimeClock.prototype, "bgImage", {
        get: function () {
            return time_clock_t_get_prop_bg_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimeClock.prototype, "hourImage", {
        get: function () {
            return time_clock_t_get_prop_hour_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimeClock.prototype, "minuteImage", {
        get: function () {
            return time_clock_t_get_prop_minute_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimeClock.prototype, "secondImage", {
        get: function () {
            return time_clock_t_get_prop_second_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TimeClock;
}(Widget));
var WindowEvent = /** @class */ (function (_super) {
    __extends(WindowEvent, _super);
    function WindowEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    WindowEvent.cast = function (event) {
        return new WindowEvent(window_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(WindowEvent.prototype, "window", {
        get: function () {
            return window_event_t_get_prop_window(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return WindowEvent;
}(Event));
var TabControl = /** @class */ (function (_super) {
    __extends(TabControl, _super);
    function TabControl(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TabControl.create = function (parent, x, y, w, h) {
        return new Widget(tab_control_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TabControl.cast = function (widget) {
        return new Widget(tab_control_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TabControl;
}(Widget));
var ImageBase = /** @class */ (function (_super) {
    __extends(ImageBase, _super);
    function ImageBase(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ImageBase.prototype.imageSetImage = function (name) {
        return image_set_image(this.nativeObj, name);
    };
    ImageBase.prototype.imageSetRotation = function (rotation) {
        return image_set_rotation(this.nativeObj, rotation);
    };
    ImageBase.prototype.imageSetScale = function (scale_x, scale_y) {
        return image_set_scale(this.nativeObj, scale_x, scale_y);
    };
    ImageBase.prototype.imageSetAnchor = function (anchor_x, anchor_y) {
        return image_set_anchor(this.nativeObj, anchor_x, anchor_y);
    };
    ImageBase.prototype.imageSetSelected = function (selected) {
        return image_set_selected(this.nativeObj, selected);
    };
    ImageBase.prototype.imageSetSelectable = function (selectable) {
        return image_set_selectable(this.nativeObj, selectable);
    };
    ImageBase.prototype.imageSetClickable = function (clickable) {
        return image_set_clickable(this.nativeObj, clickable);
    };
    ImageBase.cast = function (widget) {
        return new Widget(image_base_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(ImageBase.prototype, "image", {
        get: function () {
            return image_base_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageBase.prototype, "anchorX", {
        get: function () {
            return image_base_t_get_prop_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageBase.prototype, "anchorY", {
        get: function () {
            return image_base_t_get_prop_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageBase.prototype, "scaleX", {
        get: function () {
            return image_base_t_get_prop_scale_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageBase.prototype, "scaleY", {
        get: function () {
            return image_base_t_get_prop_scale_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageBase.prototype, "rotation", {
        get: function () {
            return image_base_t_get_prop_rotation(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageBase.prototype, "clickable", {
        get: function () {
            return image_base_t_get_prop_clickable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageBase.prototype, "selectable", {
        get: function () {
            return image_base_t_get_prop_selectable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageBase.prototype, "selected", {
        get: function () {
            return image_base_t_get_prop_selected(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ImageBase;
}(Widget));
var Window = /** @class */ (function (_super) {
    __extends(Window, _super);
    function Window(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Window.create = function (parent, x, y, w, h) {
        return new Widget(window_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Window.open = function (name) {
        return new Widget(window_open(name));
    };
    Window.openAndClose = function (name, to_close) {
        return new Widget(window_open_and_close(name, to_close ? to_close.nativeObj : null));
    };
    Window.prototype.close = function () {
        return window_close(this.nativeObj);
    };
    Window.cast = function (widget) {
        return new Widget(window_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return Window;
}(Widget));
var WheelEvent = /** @class */ (function (_super) {
    __extends(WheelEvent, _super);
    function WheelEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    WheelEvent.cast = function (event) {
        return new WheelEvent(wheel_event_cast(event ? (event.nativeObj || event) : null));
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
var PointerEvent = /** @class */ (function (_super) {
    __extends(PointerEvent, _super);
    function PointerEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    PointerEvent.cast = function (event) {
        return new PointerEvent(pointer_event_cast(event ? (event.nativeObj || event) : null));
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
        return new KeyEvent(key_event_cast(event ? (event.nativeObj || event) : null));
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
    Object.defineProperty(KeyEvent.prototype, "capslock", {
        get: function () {
            return key_event_t_get_prop_capslock(this.nativeObj);
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
        return new PaintEvent(paint_event_cast(event ? (event.nativeObj || event) : null));
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
var PropChangeEvent = /** @class */ (function (_super) {
    __extends(PropChangeEvent, _super);
    function PropChangeEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    PropChangeEvent.cast = function (event) {
        return new PropChangeEvent(prop_change_event_cast(event ? (event.nativeObj || event) : null));
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
var WindowBase = /** @class */ (function (_super) {
    __extends(WindowBase, _super);
    function WindowBase(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Object.defineProperty(WindowBase.prototype, "theme", {
        get: function () {
            return window_base_t_get_prop_theme(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(WindowBase.prototype, "closable", {
        get: function () {
            return window_base_t_get_prop_closable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return WindowBase;
}(Widget));
var WindowManager = /** @class */ (function (_super) {
    __extends(WindowManager, _super);
    function WindowManager(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    WindowManager.instance = function () {
        return new Widget(window_manager());
    };
    WindowManager.cast = function (widget) {
        return new Widget(window_manager_cast(widget ? (widget.nativeObj || widget) : null));
    };
    WindowManager.prototype.setShowFps = function (show_fps) {
        return window_manager_set_show_fps(this.nativeObj, show_fps);
    };
    WindowManager.prototype.setCursor = function (cursor) {
        return window_manager_set_cursor(this.nativeObj, cursor);
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
var StyleMutable = /** @class */ (function (_super) {
    __extends(StyleMutable, _super);
    function StyleMutable(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    StyleMutable.prototype.getName = function () {
        return style_mutable_get_name(this.nativeObj);
    };
    StyleMutable.prototype.setName = function (name) {
        return style_mutable_set_name(this.nativeObj, name);
    };
    StyleMutable.prototype.setInt = function (state, name, val) {
        return style_mutable_set_int(this.nativeObj, state, name, val);
    };
    StyleMutable.create = function (widget) {
        return new Style(style_mutable_create(widget ? widget.nativeObj : null));
    };
    Object.defineProperty(StyleMutable.prototype, "name", {
        get: function () {
            return style_mutable_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return StyleMutable;
}(Style));
var Slider = /** @class */ (function (_super) {
    __extends(Slider, _super);
    function Slider(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Slider.create = function (parent, x, y, w, h) {
        return new Widget(slider_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Slider.cast = function (widget) {
        return new Widget(slider_cast(widget ? (widget.nativeObj || widget) : null));
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
var ObjectBase = /** @class */ (function (_super) {
    __extends(ObjectBase, _super);
    function ObjectBase(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ObjectBase.prototype.unref = function () {
        return object_unref(this.nativeObj);
    };
    ObjectBase.ref = function (obj) {
        return new ObjectBase(object_ref(obj ? obj.nativeObj : null));
    };
    ObjectBase.prototype.setName = function (name) {
        return object_set_name(this.nativeObj, name);
    };
    ObjectBase.prototype.compare = function (other) {
        return object_compare(this.nativeObj, other ? other.nativeObj : null);
    };
    ObjectBase.prototype.getProp = function (name, v) {
        return object_get_prop(this.nativeObj, name, v ? v.nativeObj : null);
    };
    ObjectBase.prototype.removeProp = function (name) {
        return object_remove_prop(this.nativeObj, name);
    };
    ObjectBase.prototype.setProp = function (name, v) {
        return object_set_prop(this.nativeObj, name, v ? v.nativeObj : null);
    };
    ObjectBase.prototype.foreachProp = function (on_prop, ctx) {
        return object_foreach_prop(this.nativeObj, on_prop, ctx);
    };
    Object.defineProperty(ObjectBase.prototype, "refCount", {
        get: function () {
            return object_t_get_prop_ref_count(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ObjectBase.prototype, "name", {
        get: function () {
            return object_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ObjectBase;
}(Emitter));
var CanvasWidget = /** @class */ (function (_super) {
    __extends(CanvasWidget, _super);
    function CanvasWidget(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    CanvasWidget.create = function (parent, x, y, w, h) {
        return new Widget(canvas_widget_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    CanvasWidget.cast = function (widget) {
        return new Widget(canvas_widget_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return CanvasWidget;
}(Widget));
var ColorPicker = /** @class */ (function (_super) {
    __extends(ColorPicker, _super);
    function ColorPicker(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ColorPicker.create = function (parent, x, y, w, h) {
        return new Widget(color_picker_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ColorPicker.prototype.setColor = function (color) {
        return color_picker_set_color(this.nativeObj, color);
    };
    ColorPicker.cast = function (widget) {
        return new Widget(color_picker_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(ColorPicker.prototype, "value", {
        get: function () {
            return color_picker_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ColorPicker;
}(Widget));
var TabButton = /** @class */ (function (_super) {
    __extends(TabButton, _super);
    function TabButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TabButton.create = function (parent, x, y, w, h) {
        return new Widget(tab_button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TabButton.cast = function (widget) {
        return new Widget(tab_button_cast(widget ? (widget.nativeObj || widget) : null));
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
var GuagePointer = /** @class */ (function (_super) {
    __extends(GuagePointer, _super);
    function GuagePointer(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    GuagePointer.create = function (parent, x, y, w, h) {
        return new Widget(guage_pointer_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    GuagePointer.cast = function (widget) {
        return new Widget(guage_pointer_cast(widget ? (widget.nativeObj || widget) : null));
    };
    GuagePointer.prototype.setAngle = function (angle) {
        return guage_pointer_set_angle(this.nativeObj, angle);
    };
    GuagePointer.prototype.setImage = function (image) {
        return guage_pointer_set_image(this.nativeObj, image);
    };
    Object.defineProperty(GuagePointer.prototype, "angle", {
        get: function () {
            return guage_pointer_t_get_prop_angle(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(GuagePointer.prototype, "image", {
        get: function () {
            return guage_pointer_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return GuagePointer;
}(Widget));
var Guage = /** @class */ (function (_super) {
    __extends(Guage, _super);
    function Guage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Guage.create = function (parent, x, y, w, h) {
        return new Widget(guage_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Guage.cast = function (widget) {
        return new Widget(guage_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Guage.prototype.setImage = function (name) {
        return guage_set_image(this.nativeObj, name);
    };
    Guage.prototype.setDrawType = function (draw_type) {
        return guage_set_draw_type(this.nativeObj, draw_type);
    };
    Object.defineProperty(Guage.prototype, "image", {
        get: function () {
            return guage_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Guage.prototype, "drawType", {
        get: function () {
            return guage_t_get_prop_draw_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Guage;
}(Widget));
var ImageAnimation = /** @class */ (function (_super) {
    __extends(ImageAnimation, _super);
    function ImageAnimation(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ImageAnimation.create = function (parent, x, y, w, h) {
        return new Widget(image_animation_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ImageAnimation.prototype.setLoop = function (loop) {
        return image_animation_set_loop(this.nativeObj, loop);
    };
    ImageAnimation.prototype.setImage = function (image) {
        return image_animation_set_image(this.nativeObj, image);
    };
    ImageAnimation.prototype.setInterval = function (interval) {
        return image_animation_set_interval(this.nativeObj, interval);
    };
    ImageAnimation.prototype.setDelay = function (delay) {
        return image_animation_set_delay(this.nativeObj, delay);
    };
    ImageAnimation.prototype.setAutoPlay = function (auto_play) {
        return image_animation_set_auto_play(this.nativeObj, auto_play);
    };
    ImageAnimation.prototype.setSequence = function (sequence) {
        return image_animation_set_sequence(this.nativeObj, sequence);
    };
    ImageAnimation.prototype.play = function () {
        return image_animation_play(this.nativeObj);
    };
    ImageAnimation.prototype.stop = function () {
        return image_animation_stop(this.nativeObj);
    };
    ImageAnimation.prototype.pause = function () {
        return image_animation_pause(this.nativeObj);
    };
    ImageAnimation.cast = function (widget) {
        return new Widget(image_animation_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(ImageAnimation.prototype, "image", {
        get: function () {
            return image_animation_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageAnimation.prototype, "sequence", {
        get: function () {
            return image_animation_t_get_prop_sequence(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageAnimation.prototype, "loop", {
        get: function () {
            return image_animation_t_get_prop_loop(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageAnimation.prototype, "autoPlay", {
        get: function () {
            return image_animation_t_get_prop_auto_play(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageAnimation.prototype, "interval", {
        get: function () {
            return image_animation_t_get_prop_interval(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageAnimation.prototype, "delay", {
        get: function () {
            return image_animation_t_get_prop_delay(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ImageAnimation;
}(Widget));
var ImageValue = /** @class */ (function (_super) {
    __extends(ImageValue, _super);
    function ImageValue(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ImageValue.create = function (parent, x, y, w, h) {
        return new Widget(image_value_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ImageValue.prototype.setImage = function (image) {
        return image_value_set_image(this.nativeObj, image);
    };
    ImageValue.prototype.setFormat = function (format) {
        return image_value_set_format(this.nativeObj, format);
    };
    ImageValue.prototype.setValue = function (value) {
        return image_value_set_value(this.nativeObj, value);
    };
    ImageValue.cast = function (widget) {
        return new Widget(image_value_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(ImageValue.prototype, "image", {
        get: function () {
            return image_value_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageValue.prototype, "format", {
        get: function () {
            return image_value_t_get_prop_format(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ImageValue.prototype, "value", {
        get: function () {
            return image_value_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ImageValue;
}(Widget));
var View = /** @class */ (function (_super) {
    __extends(View, _super);
    function View(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    View.create = function (parent, x, y, w, h) {
        return new Widget(view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    View.cast = function (widget) {
        return new Widget(view_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return View;
}(Widget));
var ProgressCircle = /** @class */ (function (_super) {
    __extends(ProgressCircle, _super);
    function ProgressCircle(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ProgressCircle.create = function (parent, x, y, w, h) {
        return new Widget(progress_circle_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ProgressCircle.cast = function (widget) {
        return new Widget(progress_circle_cast(widget ? (widget.nativeObj || widget) : null));
    };
    ProgressCircle.prototype.setValue = function (value) {
        return progress_circle_set_value(this.nativeObj, value);
    };
    ProgressCircle.prototype.setMax = function (max) {
        return progress_circle_set_max(this.nativeObj, max);
    };
    ProgressCircle.prototype.setLineWidth = function (line_width) {
        return progress_circle_set_line_width(this.nativeObj, line_width);
    };
    ProgressCircle.prototype.setStartAngle = function (start_angle) {
        return progress_circle_set_start_angle(this.nativeObj, start_angle);
    };
    ProgressCircle.prototype.setUnit = function (unit) {
        return progress_circle_set_unit(this.nativeObj, unit);
    };
    ProgressCircle.prototype.setShowText = function (show_text) {
        return progress_circle_set_show_text(this.nativeObj, show_text);
    };
    ProgressCircle.prototype.setCounterClockWise = function (counter_clock_wise) {
        return progress_circle_set_counter_clock_wise(this.nativeObj, counter_clock_wise);
    };
    Object.defineProperty(ProgressCircle.prototype, "value", {
        get: function () {
            return progress_circle_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ProgressCircle.prototype, "max", {
        get: function () {
            return progress_circle_t_get_prop_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ProgressCircle.prototype, "startAngle", {
        get: function () {
            return progress_circle_t_get_prop_start_angle(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ProgressCircle.prototype, "lineWidth", {
        get: function () {
            return progress_circle_t_get_prop_line_width(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ProgressCircle.prototype, "unit", {
        get: function () {
            return progress_circle_t_get_prop_unit(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ProgressCircle.prototype, "counterClockWise", {
        get: function () {
            return progress_circle_t_get_prop_counter_clock_wise(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ProgressCircle.prototype, "showText", {
        get: function () {
            return progress_circle_t_get_prop_show_text(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ProgressCircle;
}(Widget));
var RichText = /** @class */ (function (_super) {
    __extends(RichText, _super);
    function RichText(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    RichText.create = function (parent, x, y, w, h) {
        return new Widget(rich_text_create(parent ? parent.nativeObj : null, x, y, w, h));
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
var ListItem = /** @class */ (function (_super) {
    __extends(ListItem, _super);
    function ListItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ListItem.create = function (parent, x, y, w, h) {
        return new Widget(list_item_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ListItem.cast = function (widget) {
        return new Widget(list_item_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return ListItem;
}(Widget));
var AppBar = /** @class */ (function (_super) {
    __extends(AppBar, _super);
    function AppBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    AppBar.create = function (parent, x, y, w, h) {
        return new Widget(app_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    AppBar.cast = function (widget) {
        return new Widget(app_bar_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return AppBar;
}(Widget));
var ButtonGroup = /** @class */ (function (_super) {
    __extends(ButtonGroup, _super);
    function ButtonGroup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ButtonGroup.create = function (parent, x, y, w, h) {
        return new Widget(button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ButtonGroup.cast = function (widget) {
        return new Widget(button_group_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return ButtonGroup;
}(Widget));
var Button = /** @class */ (function (_super) {
    __extends(Button, _super);
    function Button(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Button.create = function (parent, x, y, w, h) {
        return new Widget(button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Button.cast = function (widget) {
        return new Widget(button_cast(widget ? (widget.nativeObj || widget) : null));
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
var CheckButton = /** @class */ (function (_super) {
    __extends(CheckButton, _super);
    function CheckButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    CheckButton.create = function (parent, x, y, w, h) {
        return new Widget(check_button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    CheckButton.createRadio = function (parent, x, y, w, h) {
        return new Widget(check_button_create_radio(parent ? parent.nativeObj : null, x, y, w, h));
    };
    CheckButton.prototype.setValue = function (value) {
        return check_button_set_value(this.nativeObj, value);
    };
    CheckButton.cast = function (widget) {
        return new Widget(check_button_cast(widget ? (widget.nativeObj || widget) : null));
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
var ColorTile = /** @class */ (function (_super) {
    __extends(ColorTile, _super);
    function ColorTile(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ColorTile.create = function (parent, x, y, w, h) {
        return new Widget(color_tile_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ColorTile.cast = function (widget) {
        return new Widget(color_tile_cast(widget ? (widget.nativeObj || widget) : null));
    };
    ColorTile.prototype.setBgColor = function (color) {
        return color_tile_set_bg_color(this.nativeObj, color);
    };
    Object.defineProperty(ColorTile.prototype, "bgColor", {
        get: function () {
            return color_tile_t_get_prop_bg_color(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(ColorTile.prototype, "borderColor", {
        get: function () {
            return color_tile_t_get_prop_border_color(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ColorTile;
}(Widget));
var Column = /** @class */ (function (_super) {
    __extends(Column, _super);
    function Column(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Column.create = function (parent, x, y, w, h) {
        return new Widget(column_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Column.cast = function (widget) {
        return new Widget(column_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return Column;
}(Widget));
var ComboBoxItem = /** @class */ (function (_super) {
    __extends(ComboBoxItem, _super);
    function ComboBoxItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ComboBoxItem.create = function (parent, x, y, w, h) {
        return new Widget(combo_box_item_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ComboBoxItem.cast = function (widget) {
        return new Widget(combo_box_item_cast(widget ? (widget.nativeObj || widget) : null));
    };
    ComboBoxItem.prototype.setChecked = function (checked) {
        return combo_box_item_set_checked(this.nativeObj, checked);
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
    Object.defineProperty(ComboBoxItem.prototype, "checked", {
        get: function () {
            return combo_box_item_t_get_prop_checked(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ComboBoxItem;
}(Widget));
var ComboBox = /** @class */ (function (_super) {
    __extends(ComboBox, _super);
    function ComboBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ComboBox.create = function (parent, x, y, w, h) {
        return new Widget(combo_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ComboBox.cast = function (widget) {
        return new Widget(combo_box_cast(widget ? (widget.nativeObj || widget) : null));
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
var DialogClient = /** @class */ (function (_super) {
    __extends(DialogClient, _super);
    function DialogClient(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    DialogClient.create = function (parent, x, y, w, h) {
        return new Widget(dialog_client_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    DialogClient.cast = function (widget) {
        return new Widget(dialog_client_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return DialogClient;
}(Widget));
var DialogTitle = /** @class */ (function (_super) {
    __extends(DialogTitle, _super);
    function DialogTitle(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    DialogTitle.create = function (parent, x, y, w, h) {
        return new Widget(dialog_title_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    DialogTitle.cast = function (widget) {
        return new Widget(dialog_title_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return DialogTitle;
}(Widget));
var Dialog = /** @class */ (function (_super) {
    __extends(Dialog, _super);
    function Dialog(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Dialog.create = function (parent, x, y, w, h) {
        return new Widget(dialog_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Dialog.createSimple = function (parent, x, y, w, h) {
        return new Widget(dialog_create_simple(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Dialog.cast = function (widget) {
        return new Widget(dialog_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Dialog.prototype.getTitle = function () {
        return new Widget(dialog_get_title(this.nativeObj));
    };
    Dialog.prototype.getClient = function () {
        return new Widget(dialog_get_client(this.nativeObj));
    };
    Dialog.open = function (name) {
        return new Widget(dialog_open(name));
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
        return new Widget(dragger_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Dragger.cast = function (widget) {
        return new Widget(dragger_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Dragger.prototype.setRange = function (x_min, y_min, x_max, y_max) {
        return new Widget(dragger_set_range(this.nativeObj, x_min, y_min, x_max, y_max));
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
        return new Widget(edit_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Edit.cast = function (widget) {
        return new Widget(edit_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Edit.prototype.getInt = function () {
        return edit_get_int(this.nativeObj);
    };
    Edit.prototype.getDouble = function () {
        return edit_get_double(this.nativeObj);
    };
    Edit.prototype.setInt = function (value) {
        return edit_set_int(this.nativeObj, value);
    };
    Edit.prototype.setDouble = function (value) {
        return edit_set_double(this.nativeObj, value);
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
var GridItem = /** @class */ (function (_super) {
    __extends(GridItem, _super);
    function GridItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    GridItem.create = function (parent, x, y, w, h) {
        return new Widget(grid_item_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    GridItem.cast = function (widget) {
        return new Widget(grid_item_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return GridItem;
}(Widget));
var Grid = /** @class */ (function (_super) {
    __extends(Grid, _super);
    function Grid(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Grid.create = function (parent, x, y, w, h) {
        return new Widget(grid_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Grid.cast = function (widget) {
        return new Widget(grid_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return Grid;
}(Widget));
var GroupBox = /** @class */ (function (_super) {
    __extends(GroupBox, _super);
    function GroupBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    GroupBox.create = function (parent, x, y, w, h) {
        return new Widget(group_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    GroupBox.cast = function (widget) {
        return new Widget(group_box_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return GroupBox;
}(Widget));
var Row = /** @class */ (function (_super) {
    __extends(Row, _super);
    function Row(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Row.create = function (parent, x, y, w, h) {
        return new Widget(row_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Row.cast = function (widget) {
        return new Widget(row_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return Row;
}(Widget));
var Label = /** @class */ (function (_super) {
    __extends(Label, _super);
    function Label(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Label.create = function (parent, x, y, w, h) {
        return new Widget(label_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Label.prototype.setLength = function (length) {
        return label_set_length(this.nativeObj, length);
    };
    Object.defineProperty(Label.prototype, "length", {
        get: function () {
            return label_t_get_prop_length(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Label;
}(Widget));
var Pages = /** @class */ (function (_super) {
    __extends(Pages, _super);
    function Pages(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Pages.create = function (parent, x, y, w, h) {
        return new Widget(pages_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Pages.cast = function (widget) {
        return new Widget(pages_cast(widget ? (widget.nativeObj || widget) : null));
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
var Popup = /** @class */ (function (_super) {
    __extends(Popup, _super);
    function Popup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Popup.create = function (parent, x, y, w, h) {
        return new Widget(popup_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Popup.cast = function (widget) {
        return new Widget(popup_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Popup.prototype.setCloseWhenClick = function (close_when_click) {
        return popup_set_close_when_click(this.nativeObj, close_when_click);
    };
    Popup.prototype.setCloseWhenClickOutside = function (close_when_click_outside) {
        return popup_set_close_when_click_outside(this.nativeObj, close_when_click_outside);
    };
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
        return new Widget(progress_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    ProgressBar.cast = function (widget) {
        return new Widget(progress_bar_cast(widget ? (widget.nativeObj || widget) : null));
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
var Image = /** @class */ (function (_super) {
    __extends(Image, _super);
    function Image(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    Image.create = function (parent, x, y, w, h) {
        return new Widget(image_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    Image.prototype.setDrawType = function (draw_type) {
        return image_set_draw_type(this.nativeObj, draw_type);
    };
    Image.cast = function (widget) {
        return new Widget(image_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(Image.prototype, "drawType", {
        get: function () {
            return image_t_get_prop_draw_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return Image;
}(ImageBase));
var ObjectDefault = /** @class */ (function (_super) {
    __extends(ObjectDefault, _super);
    function ObjectDefault(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    ObjectDefault.create = function () {
        return new ObjectBase(object_default_create());
    };
    Object.defineProperty(ObjectDefault.prototype, "propsSize", {
        get: function () {
            return object_default_t_get_prop_props_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return ObjectDefault;
}(ObjectBase));
var SpinBox = /** @class */ (function (_super) {
    __extends(SpinBox, _super);
    function SpinBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    SpinBox.create = function (parent, x, y, w, h) {
        return new Widget(spin_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    SpinBox.cast = function (widget) {
        return new Widget(spin_box_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return SpinBox;
}(Edit));
var SystemBar = /** @class */ (function (_super) {
    __extends(SystemBar, _super);
    function SystemBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    SystemBar.create = function (parent, x, y, w, h) {
        return new Widget(system_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    SystemBar.cast = function (widget) {
        return new Widget(system_bar_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return SystemBar;
}(WindowBase));
var SvgImage = /** @class */ (function (_super) {
    __extends(SvgImage, _super);
    function SvgImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    SvgImage.create = function (parent, x, y, w, h) {
        return new Widget(svg_image_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    SvgImage.cast = function (widget) {
        return new Widget(svg_image_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return SvgImage;
}(ImageBase));
var GifImage = /** @class */ (function (_super) {
    __extends(GifImage, _super);
    function GifImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    GifImage.create = function (parent, x, y, w, h) {
        return new Widget(gif_image_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    GifImage.cast = function (widget) {
        return new Widget(gif_image_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return GifImage;
}(ImageBase));
var TimerInfo = /** @class */ (function (_super) {
    __extends(TimerInfo, _super);
    function TimerInfo(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TimerInfo.cast = function (timer) {
        return new TimerInfo(timer_info_cast(timer ? (timer.nativeObj || timer) : null));
    };
    Object.defineProperty(TimerInfo.prototype, "ctx", {
        get: function () {
            return timer_info_t_get_prop_ctx(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimerInfo.prototype, "id", {
        get: function () {
            return timer_info_t_get_prop_id(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimerInfo.prototype, "now", {
        get: function () {
            return timer_info_t_get_prop_now(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TimerInfo.prototype, "userChangedTime", {
        get: function () {
            return timer_info_t_get_prop_user_changed_time(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TimerInfo;
}(ObjectBase));
var IdleInfo = /** @class */ (function (_super) {
    __extends(IdleInfo, _super);
    function IdleInfo(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    IdleInfo.cast = function (idle) {
        return new IdleInfo(idle_info_cast(idle ? (idle.nativeObj || idle) : null));
    };
    Object.defineProperty(IdleInfo.prototype, "ctx", {
        get: function () {
            return idle_info_t_get_prop_ctx(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(IdleInfo.prototype, "id", {
        get: function () {
            return idle_info_t_get_prop_id(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return IdleInfo;
}(ObjectBase));
//# sourceMappingURL=awtk.js.map