#!/bin/bash

rm -rf build/jerryscript
mkdir -p build/jerryscript
cd build/jerryscript

cmake ../../jerryscript -DFEATURE_ERROR_MESSAGES=ON -DCMAKE_BUILD_TYPE=Debug -DENABLE_ALL_IN_ONE=ON -DFEATURE_LOGGING=ON -DFEATURE_SYSTEM_ALLOCATOR=OFF -DMEM_HEAP_SIZE_KB=2048 -DFEATURE_CPOINTER_32_BIT=ON
make

cd -
mkdir ../lib
cp -vf build/jerryscript/lib/* ../lib
