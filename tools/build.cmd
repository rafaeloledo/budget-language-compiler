@echo off

rm -rf build
mkdir build
cd build
cmake -S .. -B . -GNinja
cmake --build . --config Release
