@echo off

rm -rf build
mkdir build
cd build
cmake -S .. -B . -GNinja -DCMAKE_CXX_COMPILER_LAUNCHER=ccache --log-level=WARNING
cmake --build . --config Release
