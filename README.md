# awtk-js

awtk js bindings.

## 准备

1.获取awtk并编译

```
git clone https://github.com/zlgopen/awtk.git
cd awtk; scons; cd -
```

2.获取awtk-js并编译
```
git clone https://github.com/zlgopen/awtk-js.git
cd awtk-js
git clone https://github.com/jerryscript-project/jerryscript.git 3rd/jerryscript
scons
```

## 更新绑定

```
cd tools/js_gen; node index.js; node jerryscript.js; cd -
cd src; tsc; cd -
```

## 运行

```
./bin/runScript demos/xxxx.js
```

> 请把xxxx.js换成具体的js文件。

## 文档

[js绑定原理与示例](docs/binding_js.md)

> 本文以Linux/MacOS为例，Windows可能会微妙差异，请酌情处理。
