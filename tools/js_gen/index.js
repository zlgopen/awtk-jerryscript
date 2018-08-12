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

function isReadable(obj) {
  return obj.annotation && obj.annotation.readable;
}

function isWritable(obj) {
  return obj.annotation && obj.annotation.writable;
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

const gJerryScriptFuncArgs = `(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  )`;

class JerryscriptGenerator {
  constructor() {
    this.result = '';
  }

  toClassName(name) {
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

  genParamDecl(index, type, name) {
    let result = '';
    result += `  ${type} ${name} = `;
    if (index < 0) {
      if (type.indexOf('*') >= 0) {
        result += 'NULL;\n';
      } else {
        result += '0;\n';
      }
    } else {
      if (type.indexOf('char*') >= 0) {
        result += `(${type})jerry_get_utf8_string(args_p[${index}]);\n`;
      } else if (type.indexOf('wchar_t*') >= 0) {
        result += `(${type})jerry_get_wstring(args_p[${index}]);\n`;
      } else if (type.indexOf('void*') >= 0) {
        if (name !== 'ctx') {
          result += `(${type})jerry_get_pointer(args_p[${index}], "${type}");\n`;
        } else {
          result += ' NULL;\n';
        }
      } else if (type.indexOf('*') >= 0) {
        const type_name = type.replace(/\*/g, '');
        result += `(${type})jerry_get_pointer(args_p[${index}], "${type}");\n`;
      } else if (type.indexOf('float') >= 0 || type.indexOf('double') >= 0) {
        result += `(${type})jerry_get_number_value(args_p[${index}]);\n`;
      } else if (type.indexOf('bool_t') >= 0) {
        result += `(${type})jerry_get_boolean_value(args_p[${index}]);\n`;
      } else if (type.indexOf('func_t') >= 0 || type.indexOf('visit_t') >= 0) {
        result += `(${type})jerry_get_pointer(args_p[${index}], "${type}");\n`;
      } else {
        result += `(${type})jerry_get_number_value(args_p[${index}]);\n`;
      }
    }

    return result;
  }

  genParamsDecl(m) {
    let result = '';
    let returnType = m.return.type;

    if (returnType != 'void') {
      result = this.genParamDecl(-1, returnType, 'ret');
    }

    m.params.forEach((iter, index) => {
      result += this.genParamDecl(index, iter.type, iter.name);
    })

    return result;
  }

  genReturnData(type, name) {
    let result = '\n';
    if (type.indexOf('char*') >= 0) {
      result += `  return jerry_create_string_from_utf8((const jerry_char_t*)${name});\n`;
    } else if (type.indexOf('wchar_t*') >= 0) {
      result += `  return jerry_create_string_from_wstring(${name});\n`;
    } else if (type.indexOf('*') >= 0) {
      const typeName = type.replace(/\*/g, "");
      result += `  return jerry_create_pointer(${name}, "${type}");\n`;
    } else if (type.indexOf('int') >= 0) {
      result += `  return jerry_create_number(${name});;\n`;
    } else if (type.indexOf('bool_t') >= 0) {
      result += `  return jerry_create_boolean(${name});;\n`;
    } else {
      result += `  return jerry_create_number(${name});;\n`;
    }

    return result;
  }

  genCallMethod(cls, m) {
    let result = `${m.name}${this.genParamList(m, true)}`;
    let clsName = this.toClassName(cls.name);

    if (isConstructor(m) || isCast(m)) {
      result = `   return new ${clsName}(${result});\n`;
    } else if(m.return.type === 'widget_t*') {
      result = `   return new Widget(${result});\n`;
    } else {
      result = `   return ${result};\n`;
    }

    return result;
  }

  camelCase(name) {
    if (name.indexOf('_') > 0) {
      name = name.replace(/(_)[a-z]/g, r => {
        if (r.length > 1) {
          r = r.substr(1);
        }

        return r.toUpperCase();
      });
    }

    return name;
  }

  toFuncName(clsName, mName) {
    let prefix = clsName.replace(/_t$/, '');
    let name = mName.replace(prefix + '_', '');

    return this.camelCase(name);
  }

  genParamListOrg(m) {
    let result = '';
    m.params.forEach((iter, index) => {
      if (index === 0) {
        result += iter.name;
      } else {
        if (result) {
          result += ', ';
        }
        result += iter.name;
      }
    });

    return '(' + result + ')';
  }

  genParamList(m, call) {
    let result = '';
    let isNormalMethod = !isCast(m) && !isStatic(m) && !isConstructor(m);

    m.params.forEach((iter, index) => {
      if (index === 0) {
        if (isNormalMethod) {
          if (call) {
            result += 'this.nativeObj';
          }
        } else {
          if (call && iter.name === 'parent') {
            result += 'parent ? parent.nativeObj : null';
          } else {
            result += iter.name;
          }
        }
      } else {
        if (result) {
          result += ', ';
        }
        result += iter.name;
      }
    });

    return '(' + result + ')';
  }

  genFuncImpl(cls, m) {
    let result = '';
    const name = this.toFuncName(cls.name, m.alias || m.name);

    if (isConstructor(m) || isCast(m) || isStatic(m)) {
      result += ' static'
    }

    result += ` ${name}${this.genParamList(m, false)} {\n`;
    result += this.genCallMethod(cls, m);
    result += ' }\n\n'

    return result;
  }

  genOneClass(cls) {
    let result = '';
    let isConstString = isEnumString(cls);
    let clsName = this.toClassName(cls.name);

    result = `class ${clsName}`;
    if (cls.parent) {
      result += ` extends ${this.toClassName(cls.parent)} {\n`
    } else {
      result += ' {\n';
    }

    result += ' public nativeObj;\n';
    result += ' constructor(nativeObj) {\n';
    if (cls.parent) {
      result += '   super(nativeObj);\n';
    } else {
      result += '   this.nativeObj = nativeObj;\n';
    }
    result += ' }\n\n';

    if (cls.methods) {
      cls.methods.forEach(iter => {
        result += this.genFuncImpl(cls, iter);
      });
    }

    if (cls.properties) {
      cls.properties.forEach((p) => {
        if (isWritable(p)) {
          result += this.genSetProperty(cls, p);
        }

        if (isReadable(p)) {
          result += this.genGetProperty(cls, p);
        }
      });
    }

    if (cls.consts) {
      cls.consts.forEach(iter => {
        const name = iter.name;
        const shortName = name.replace(cls.prefix, "");
        result += ` public static ${shortName} = ${name}();\n`
      });
    }

    result += '}\n\n';
    return result;
  }


  getSetPropertyFuncName(cls, p) {
    return `${cls.name}_set_prop_${p.name}`;
  }

  getGetPropertyFuncName(cls, p) {
    return `${cls.name}_get_prop_${p.name}`;
  }

  genSetProperty(cls, p) {
    let result = '';
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getSetPropertyFuncName(cls, p);

    result += ` set ${name}(value) {\n`;
    result += `   ${funcName}(this.nativeObj, value);\n`;
    result += ' }\n\n'

    return result;
  }

  genGetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getGetPropertyFuncName(cls, p);

    result += ` get ${name}() {\n`;
    result += `   return ${funcName}(this.nativeObj);\n`;
    result += ' }\n\n'

    return result;
  }

  genOne(cls) {
    if (cls.type == 'class' || cls.type == 'enum') {
      return this.genOneClass(cls);
    } else {
      return '';
    }
  }

  filterScriptableJson(ojson) {
    let json = ojson.filter(isScriptable);

    json.forEach(iter => {
      if (iter.methods && iter.methods.length) {
        iter.methods = iter.methods.filter(isScriptable);
      }

      if (iter.properties && iter.properties.length) {
        iter.properties = iter.properties.filter(isScriptable);
      }
    })

    fs.writeFileSync('filter.json', JSON.stringify(json, null, '  '));

    return this.reorderJson(json);
  }

  reorderJson(json) {
    json.sort((a, b) => {
      if (a.type !== 'class') {
        return -1;
      }

      if (a.parent && b.parent) {
        return 0;
      }

      if (a.parent) {
        return 1;
      }

      if (b.parent) {
        return -1;
      }

      return 0;
    });

    return json;
  }

  genFuncsDecl(json) {
    let result = '';

    json.forEach(cls => {
      if (cls.methods) {
        cls.methods.forEach(m => {
          result += `declare function ${m.name}${this.genParamListOrg(m)};\n`
        });
      }

      if (cls.properties) {
        cls.properties.forEach(p => {
          if (isReadable(p)) {
            const funcName = this.getGetPropertyFuncName(cls, p);
            result += `declare function ${funcName}(nativeObj);\n`;
          }

          if (isWritable(p)) {
            const funcName = this.getSetPropertyFuncName(cls, p);
            result += `declare function ${funcName}(nativeObj, value);\n`;
          }
        });
      }

      if (cls.consts) {
        cls.consts.forEach(c => {
          const name = c.name;
          result += `declare function ${name}();\n`
        });
      }
    });

    return result;
  }

  genJsonAll(ojson) {
    let result = '';
    let json = this.filterScriptableJson(ojson);

    result += this.genFuncsDecl(json);

    json.forEach(iter => {
      result += this.genOne(iter);
    });

    this.result = result;
  }

  genAll(filename) {
    this.genJsonAll(JSON.parse(fs.readFileSync(filename).toString()));
  }

  saveResult(filename) {
    fs.writeFileSync(filename, this.result);
  }

  static gen() {
    const gen = new JerryscriptGenerator();
    const input = '../../../awtk/tools/idl_gen/idl.json';
    const output = '../../src/awtk.ts';

    gen.genAll(input);
    gen.saveResult(output);
  }
}

JerryscriptGenerator.gen();
