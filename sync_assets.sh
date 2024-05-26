#!/bin/bash

cp -rf ../awtk/design .

cp -vf ../awtk-binding/demos/js/* design/default/scripts
cp -vf ../awtk-binding/tools/code_gen/js/output/awtk.js* design/default/scripts
cp -vf ../awtk-binding/tools/code_gen/js/output/awtk.js* src/js

python3 scripts/update_res.py clean
python3 scripts/update_res.py all
