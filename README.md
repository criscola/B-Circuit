# How to build

Create a new directory `build` and run CMake
```
$ mkdir -p build/debug
$ cmake -DCMAKE_BUILD_TYPE=Debug -H. -Bbuild/debug
```
Finally build with `make`
```
$ cmake --build build/debug
```
