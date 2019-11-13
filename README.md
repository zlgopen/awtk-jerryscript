# awtk-jerryscript

ZLG 开源 GUI 引擎 [awtk](https://github.com/zlgopen/awtk) 针对三星开源 JS 引擎 [jerryscript](https://github.com/jerryscript-project/jerryscript) 的绑定。

## 准备

1. 获取 awtk 并编译

```
git clone https://github.com/zlgopen/awtk.git
cd awtk; scons; cd -
```
> AWTK 的编译环境请参考 AWTK 的文档。

2. 获取 awtk-jerryscript 并编译

```
git clone https://github.com/zlgopen/awtk-jerryscript.git
cd awtk-jerryscript
git clone https://github.com/jerryscript-project/jerryscript.git 3rd/jerryscript/jerryscript
scons
```

> 编译 linux-fb 版本，请修改 SConstruct

```
#for pc
#sys.path.insert(0, '../awtk/')

#for linux-fb
sys.path.insert(0, '../awtk-linux-fb/')
```

## 运行

```
./bin/runScript demos/xxxx.js
```

> 请把 xxxx.js 换成具体的 js 文件。

## 更新绑定(由本项目的维护人员完成)

```
./sync.sh
```

> 在非 bash 终端（如 Windows 平台的 cmd.exe)，需要根据 sync.sh 的内容手工执行相应的命令。

## 文档

[AWTK 脚本绑定原理](https://github.com/zlgopen/awtk/blob/master/docs/script_binding.md)

[Javascript 绑定原理与示例](https://github.com/zlgopen/awtk-binding/blob/master/docs/binding_js.md)

> 本文以 Linux/MacOS 为例，Windows 可能会微妙差异，请酌情处理。

## 重要通知

为了让 AWTK-WEB 和 AWTK-JS 对外提供的 API 保持兼容，AWTK-JS 做了下列修改：

* 所有的类均增加前缀 T，以避免 AWTK 的类名和浏览器中的类名冲突。

* print 函数更名为 console.log。


如果希望自己的应用程序，同时支持 AWTK-JS 和 AWTK-WEB，还需要注意下列事项：

* 避免直接调用gc()函数。

* 避免使用模态对话框。

* 避免使用动态 GIF 图片。

* 避免直接使用value\_t/color\_t/bitmap\_t/object\_t等类。
