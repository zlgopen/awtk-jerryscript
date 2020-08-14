import os
import scripts.app_helper as app

ARGUMENTS['FONT'] = 'default_full'
helper = app.Helper(ARGUMENTS);

TK_JERRYSCRIPT_ROOT = os.path.join(helper.APP_ROOT, '3rd/jerryscript/')

TK_JS_JERRYSCRIPT_DIRS = [
  TK_JERRYSCRIPT_ROOT,
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-ext/include'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-ext/arg'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-ext/common'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-ext/debugger'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-ext/handler'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-ext/module'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/include'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/ecma'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/ecma/base'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/ecma/builtin-objects'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/ecma/operations'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/jcontext'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/jrt'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/parser'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/parser/js'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/parser/regexp'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/vm'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/api'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/debugger'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/lit'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/jmem'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/profiles'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-port/default/include'),
  os.path.join(TK_JERRYSCRIPT_ROOT, 'jerryscript/jerry-core/ecma/builtin-objects/typedarray'),
]

APP_CPPPATH = TK_JS_JERRYSCRIPT_DIRS
APP_LIBS = ['awtk-jerryscript', 'jerryscript']
APP_CCFLAGS = '-DPATH_MAX=256 -DJERRY_ESNEXT=0 '

helper.add_libs(APP_LIBS).add_ccflags(APP_CCFLAGS).add_cpppath(APP_CPPPATH).call(DefaultEnvironment)

SConscriptFiles = ['3rd/jerryscript/SConscript', 'src/SConscript']
SConscript(SConscriptFiles)
