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
```

* 生成资源

```
python ./scripts/update_res.py all
```

> 或者通过 designer 生成资源


* 编译PC版本

```
scons
```

* 编译LINUX FB版本

```
scons LINUX_FB=true
```

> 完整编译选项请参考[编译选项](https://github.com/zlgopen/awtk-widget-generator/blob/master/docs/build_options.md)

## 运行

```
./bin/awtkRun xxxx
```

> 请把 xxxx 换成具体的 js 文件, xxxx对应的js文件需要放在assets/default/raw/scripts目录下。

如：

```
./bin/awtkRun basic
```

## 更新绑定(由本项目的维护人员完成)

```
./sync.sh
```

> 在非 bash 终端（如 Windows 平台的 cmd.exe)，需要根据 sync.sh 的内容手工执行相应的命令。

## 文档

* [AWTK JS API 文档](https://github.com/zlgopen/awtk-binding/tree/master/docs/js)

* [AWTK 脚本绑定原理](https://github.com/zlgopen/awtk/blob/master/docs/script_binding.md)

* [Javascript 绑定原理与示例](https://github.com/zlgopen/awtk-binding/blob/master/docs/binding_js.md)

> 本文以 Linux/MacOS 为例，Windows 可能会微妙差异，请酌情处理。

# 注意事项

如果希望自己的应用程序，同时支持 AWTK-JS 和 AWTK-WEB，还需要注意下列事项：

* 避免直接调用 gc() 函数。

* 避免使用模态对话框。

* 避免使用动态 GIF 图片。

* 避免直接使用 value\_t/color\_t/bitmap\_t/object\_t 等类。


# for iotjs

```
download jerryscript-2.4.0.tar.gz

tar xvf jerryscript-2.4.0.tar.gz -C 3rd/jerryscript/
mv 3rd/jerryscript/jerryscript-2.4.0 3rd/jerryscript/jerryscript
```



