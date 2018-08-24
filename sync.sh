#!/bin/bash

cd tools/js_gen; node index.js; node jerryscript.js; cd -
cd src; tsc; cd -
