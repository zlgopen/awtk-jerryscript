rm -rf build/jerryscript
mkdir -p build/jerryscript
cd build/jerryscript
cmake ../../jerryscript
make
cd -
cp -vf build/jerryscript/lib/* ../lib
