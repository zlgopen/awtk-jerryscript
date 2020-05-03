#!/bin/bash

cp -rf ../awtk/demos/assets .
cp -rf ../awtk/scripts/update_res_app.py scripts/update_res.py

rm -rf src/assets*.*

cp -vf ../awtk-binding/demos/js/* assets/default/raw/scripts
cp -vf ../awtk-binding/tools/code_gen/js/output/awtk.js* assets/default/raw/scripts

python scripts/update_res.py clean
python scripts/update_res.py all
