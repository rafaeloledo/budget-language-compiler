@echo off

rm -rf build
mkdir build
cd build
cmake -S .. -B . > nul
cmake --build . --config Release > nul
