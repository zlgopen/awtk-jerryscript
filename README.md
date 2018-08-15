# awtk-js

awtk js bindings.

## 一、准备

```
git clone https://github.com/zlgopen/awtk.git
git clone https://github.com/zlgopen/awtk-js.git
cd awtk-js
git clone https://github.com/jerryscript-project/jerryscript.git 3rd/jerryscript
```


## 二、更新绑定

```
cd tools/js_gen
node index.js 
node jerryscript.js
```

## 三、编译

```
cd 3rd/;./build.sh; 
```

```
scons
```

## 四、运行

```
./bin/runScript demos/xxxx.js
```

> 请把xxxx.js换成具体的js文件。

## 文档

[js绑定原理与示例](docs/binding_js.md)

