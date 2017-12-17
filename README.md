![](https://travis-ci.org/criscola/B-Circuit.svg?branch=master)

# How to build

## Linux
There is a build script under `etc/linux-build.sh`.
Currently the script *may* work under OSX since no linux specific tools are
used, but it might not work in the future.

## Other \*NIX
Create a new directory `build/debug` and run CMake
```
$ mkdir -p build/debug
$ cmake -DCMAKE_BUILD_TYPE=Debug -H. -Bbuild/debug
```
Finally build with `make`
```
$ cmake --build build/debug
```

## Windows MinGW
Create a new directory `build/debug` and run CMake
```
cmake -DCMAKE_BUILD_TYPE=Debug -H. -G "MinGW Makefiles" -Bbuild/debug
```
