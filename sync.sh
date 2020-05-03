#!/bin/bash

cp -vf ../awtk-binding/tools/code_gen/js/output/tk_jerryscript.c src/c
cp -vf ../awtk-binding/share/js/custom.c src/c

. format.sh
