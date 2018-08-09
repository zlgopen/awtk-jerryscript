const fs = require('fs')

function isScriptable(obj) {
  return obj.annotation && obj.annotation.scriptable;
}

function isFake(obj) {
  return obj.annotation && obj.annotation.fake;
}

function isStatic(obj) {
  return obj.annotation && obj.annotation.static;
}

function isReadOnly(obj) {
  return obj.annotation && !obj.annotation.writable;
}

function isPrivate(obj) {
  return obj.annotation && obj.annotation.private;
}

function isCustom(obj) {
  return obj.annotation && obj.annotation.scriptable == 'custom';
}

function isConstructor(obj) {
  return obj.annotation && obj.annotation.constructor === true;
}

function isCast(obj) {
  return obj.annotation && obj.annotation.cast
}

function isEnumString(obj) {
  return obj.annotation && obj.annotation.string === true;
}

class JsGenerator {
  constructor() {
    this.result = '';
    this.json = [];
  }

  toJsClassName(name) {
    name = name.replace(/_t$/, '');
    name = name.replace(/(^|_)[a-z]/g, r => {
      if (r.length > 1) {
        r = r.substr(1);
      }

      return r.toUpperCase();
    });

    return name;
  }

  getClassInfo(name) {
    const json = this.json;

    for (let i = 0; i < json.length; i++) {
      let iter = json[i];
      if (iter.type === 'class' && iter.name === name) {
        return iter;
      }
    }

    return null;
  }

  genClassChain(name) {
    let str = '';
    let info = this.getClassInfo(name);

    while (info) {
      str += '/' + info.name;
      if (!info.parent) {
        break;
      }
      info = this.getClassInfo(info.parent);
    }

    return str;
  }

  genDecl(index, type, name) {
    let str = '';
    str += `  ${type} ${name} = `;
    if (index < 0) {
      if (type.indexOf('*') >= 0) {
        str += 'NULL;\n';
      } else {
        str += '0;\n';
      }
    } else {
      if (type.indexOf('char*') >= 0) {
        str += `(${type})luaL_checkstring(L, ${index+1});\n`;
      } else if (type.indexOf('wchar_t*') >= 0) {
        str += `(${type})lua_touserdata(L, ${index+1});\n`;
      } else if (type.indexOf('void*') >= 0) {
        if (name !== 'ctx') {
          str += `(${type})lua_touserdata(L, ${index+1});\n`;
        } else {
          str += ' NULL;\n';
        }
      } else if (type.indexOf('*') >= 0) {
        const type_name = type.replace(/\*/g, '');
        str += `(${type})tk_checkudata(L, ${index+1}, "${type_name}");\n`;
      } else if (type.indexOf('float') >= 0 || type.indexOf('double') >= 0) {
        str += `(${type})luaL_checknumber(L, ${index+1});\n`;
      } else if (type.indexOf('bool_t') >= 0) {
        str += `(${type})lua_toboolean(L, ${index+1});\n`;
      } else if (type.indexOf('func_t') >= 0) {
        str += `(${type})lua_tocfunction(L, ${index+1});\n`;
      } else {
        str += `(${type})luaL_checkinteger(L, ${index+1});\n`;
      }
    }

    return str;
  }

  genParamsDecl(m) {
    let str = '';
    let returnType = m.return.type;

    if (returnType != 'void') {
      str = this.genDecl(-1, returnType, 'ret');
    }

    m.params.forEach((iter, index) => {
      str += this.genDecl(index, iter.type, iter.name);
    })

    return str;
  }

  genReturnData(type, name) {
    let str = '';
    if (type.indexOf('char*') >= 0) {
      str = `  lua_pushstring(L,(char*)(${name}));\n\n`;
      str += '  return 1;\n';
    } else if (type.indexOf('wchar_t*') >= 0) {
      str = `  lua_pushlightuserdata(L,(void*)(${name}));\n\n`;
      str += '  return 1;\n';
    } else if (type.indexOf('*') >= 0) {
      const typeName = type.replace(/\*/g, "");
      str += `  return tk_newuserdata(L, (void*)${name}, "${this.genClassChain(typeName)}", "awtk.${typeName}");\n`;
    } else if (type.indexOf('int') >= 0) {
      str = `  lua_pushinteger(L,(lua_Integer)(${name}));\n\n`;
      str += '  return 1;\n';
    } else if (type.indexOf('bool_t') >= 0) {
      str = `  lua_pushboolean(L,(lua_Integer)(${name}));\n\n`;
      str += '  return 1;\n';
    } else {
      str = `  lua_pushnumber(L,(lua_Number)(${name}));\n\n`;
      str += '  return 1;\n';
    }

    return str;
  }

  genCallMethod(cls, m) {
    const ret_type = m.return.type;
    let str = ret_type == 'void' ? '  ' : '  ret = '
    str += `(${ret_type})${m.name}(`;
    m.params.forEach((iter, index) => {
      if (index > 0) {
        str += ', ' + iter.name;
      } else {
        str += iter.name;
      }
    })

    str += ');\n';

    str += '\n';
    if (ret_type == 'void') {
      str += '  return 0;\n';
    } else {
      if (isConstructor(m) || isCast(m)) {
        str += this.genReturnData(`${cls.name}*`, 'ret');
      } else {
        str += this.genReturnData(ret_type, 'ret');
      }
    }

    return str;
  }

  genMethod(cls, m) {
    const args_nr = m.params.length;
    let str = `static int wrap_${m.name}(lua_State* L) {\n`;
    str += this.genParamsDecl(m);
    str += this.genCallMethod(cls, m);
    str += '}\n\n';

    return str;
  }

  genSetProperty(index, cls, p) {
    let str = '';
    if (index === 0) {
      str += `  if(strcmp(name, "${p.name}") == 0) {\n`;
    } else {
      str += `  else if(strcmp(name, "${p.name}") == 0) {\n`;
    }
    if (p.readonly) {
      str += `    log_debug("${p.name} is readonly\\n");\n`;
      str += `    return 0;\n`;
    } else {
      str += '  ' + this.genDecl(2, p.type, p.name);
      str += `    obj->${p.name} = ${p.name};\n`;
      str += `    return 1;\n`;
    }
    str += '  }\n';

    return str;
  }

  genGetProperty(index, cls, p) {
    let str = '';
    if (index === 0) {
      str += `  if(strcmp(name, "${p.name}") == 0) {\n`;
    } else {
      str += `  else if(strcmp(name, "${p.name}") == 0) {\n`;
    }
    str += '  ';
    str += this.genReturnData(p.type, `obj->${p.name}`);
    str += '  }\n';

    return str;
  }

  methodToShortName(clsName, m) {
    const methodName = m.alias || m.name;

    return methodName.replace(clsName.replace(/_t$/, '') + "_", '')
  }

  genSetProp(cls) {
    let str = '';
    const clsName = cls.name;

    str += `static int wrap_${clsName}_set_prop(lua_State* L) {\n`;
    str += this.genDecl(0, cls.name + '*', "obj");
    str += this.genDecl(1, "const char*", "name");
    str += '  (void)obj;\n';
    str += '  (void)name;\n';

    let hasSetProps = false;
    cls.properties.forEach((p, index) => {
      if (!isReadOnly(p) && !isFake(p)) {
        str += this.genSetProperty(index, cls, p);
        hasSetProps = true;
      }
    });

    if (hasSetProps) {
      str += `  else {\n`;
    }
    if (cls.parent) {
      str += `    return wrap_${cls.parent}_set_prop(L);\n`;
    } else if (hasSetProps) {
      str += `    log_debug("%s: not supported %s\\n", __FUNCTION__, name);\n`;
      str += `    return 0;\n`;
    }
    if (hasSetProps) {
      str += `  }\n`;
    } else if(!cls.parent) {
      str += `  log_debug("%s: not supported %s\\n", __FUNCTION__, name);\n`;
      str += `  return 0;\n`;
    }

    str += `}\n\n`;

    return str;
  }

  genGetProp(cls) {
    let str = '';
    const clsName = cls.name;

    str += `static int wrap_${clsName}_get_prop(lua_State* L) {\n`;
    str += this.genDecl(0, cls.name + '*', "obj");
    str += this.genDecl(1, "const char*", "name");
    str += `  const luaL_Reg* ret = find_member(${cls.name}_member_funcs, name);\n\n`;

    str += '  (void)obj;\n';
    str += '  (void)name;\n';
    str += '  if(ret) {\n';
    str += '    lua_pushcfunction(L, ret->func);\n';
    str += '    return 1;\n';
    str += '  }\n';

    cls.properties.forEach((p, index) => {
      if (!isFake(p)) {
        str += this.genGetProperty(index, cls, p);
      }
    });

    str += `  else {\n`;
    if (cls.parent) {
      str += `    return wrap_${cls.parent}_get_prop(L);\n`;
    } else {
      if (cls.name === 'widget_t') {
        str += `    widget_t* child = widget_lookup(obj, name, FALSE);\n`;
        str += `    if(child != NULL) {\n`;
        str += `      return tk_newuserdata(L, (void*)child, "/widget_t", "awtk.widget_t");\n`;
        str += `    }\n`;
      }
      str += `    log_debug("%s: not supported %s\\n", __FUNCTION__, name);\n`;
      str += `    return 0;\n`;
    }
    str += `  }\n`;

    str += `}\n\n`;

    return str;
  }

  genClassInit(cls) {
    let str = '';
    const clsName = cls.name;

    str += `static void ${cls.name}_init(lua_State* L) {\n`;
    str += '  static const struct luaL_Reg static_funcs[] = {\n'
    cls.methods.forEach(m => {
      const name = this.methodToShortName(cls.name, m);
      if (isConstructor(m) || isStatic(m) || isCast(m)) {
        str += `    {"${name}", wrap_${m.name}},\n`;
      }
    });

    str += `    {NULL, NULL}\n`;
    str += '  };\n\n'


    if (!isFake(cls)) {
      str += '  static const struct luaL_Reg index_funcs[] = {\n'
      str += `    {"__index", wrap_${clsName}_get_prop},\n`;
      str += `    {"__newindex", wrap_${clsName}_set_prop},\n`;
      str += `    {NULL, NULL}\n`;
      str += '  };\n\n'

      str += `  luaL_newmetatable(L, "awtk.${cls.name}");\n`;
      str += `  lua_pushstring(L, "__index");\n`;
      str += '  lua_pushvalue(L, -2);\n';
      str += '  lua_settable(L, -3);\n';
      str += `  luaL_openlib(L, NULL, index_funcs, 0);\n`;
    }

    str += `  luaL_openlib(L, "${this.toJsClassName(cls.name)}", static_funcs, 0);\n`;

    str += '  lua_settop(L, 0);\n';
    str += '}\n';

    return str;
  }

  genMethods(cls) {
    let str = '';
    const clsName = cls.name;

    cls.methods.forEach(m => {
      if (!isPrivate(m) && !isCustom(m)) {
        str += this.genMethod(cls, m);
      }
    });

    if (!cls.annotation.fake) {
      str += `\nstatic const struct luaL_Reg ${cls.name}_member_funcs[] = {\n`
      cls.methods.forEach(m => {
        const name = this.methodToShortName(cls.name, m);
        if (!isConstructor(m) && !isStatic(m) && !isCast(m)) {
          str += `  {"${name}", wrap_${m.name}},\n`;
        }
      });
      str += `  {NULL, NULL}\n`;
      str += '};\n\n'
    }

    return str;
  }

  genClass(cls) {
    let str = '';

    str += this.genMethods(cls);
    if (!cls.annotation.fake) {
      str += this.genSetProp(cls);
      str += this.genGetProp(cls);
    }
    str += this.genClassInit(cls);

    return str;
  }

  genEnum(cls) {
    let str = `static void ${cls.name}_init(lua_State* L) {\n`;
    let isConstString = isEnumString(cls);

    str += '  lua_newtable(L);\n';
    str += `  lua_setglobal(L, "${this.toJsClassName(cls.name)}");\n`;
    str += `  lua_getglobal(L, "${this.toJsClassName(cls.name)}");\n\n`;

    const clsNamePrefix = cls.prefix;
    cls.consts.forEach(iter => {
      const name = iter.name.replace(clsNamePrefix, "");

      str += `  lua_pushstring(L, "${name}");\n`
      if(isConstString) {
        str += `  lua_pushstring(L, ${iter.name});\n`;
      } else {
        str += `  lua_pushinteger(L, ${iter.name});\n`;
      }
      str += `  lua_settable(L, -3); \n\n`;
    });

    str += '}\n\n';

    return str;
  }

  genOne(cls) {
    if (cls.type == 'class') {
      return this.genClass(cls);
    } else if (cls.type == 'enum') {
      return this.genEnum(cls);
    } else {
      return '';
    }
  }

  genInit(json) {
    let result = '';

    return result;
  }

  genGlobals(json) {
    let str = '';

    json.forEach(iter => {
      if (iter.type == 'method') {
      }
    });

    return str;
  }

  filterScriptableJson(ojson) {
    let json = ojson.filter(isScriptable);

    json.forEach(iter => {
      if (iter.methods) {
        iter.methods = iter.methods.filter(isScriptable);
      }

      if (iter.properties && iter.properties.length) {
        iter.properties = iter.properties.filter(isScriptable);
      }
    })

    fs.writeFileSync('filter.json', JSON.stringify(json, null, '  '));

    return json;
  }

  genJsonAll(ojson) {
    let result = '';
    let json = this.filterScriptableJson(ojson);
    this.json = json;
    result += this.genGlobals(json);

    json.forEach(iter => {
      result += this.genOne(iter);
    });

    result += this.genInit(json);

    this.result = result;
  }

  genAll(filename) {
    const json = JSON.parse(fs.readFileSync(filename).toString());
    this.genJsonAll(json);
  }

  saveResult(filename) {
    fs.writeFileSync(filename, this.result);
  }

  static gen() {
    const gen = new JsGenerator();
    const input = '../../../awtk/tools/idl_gen/idl.json';
    const output = '../../src/awtk.js';

    gen.genAll(input);
    gen.saveResult(output);
  }
}

JsGenerator.gen();
