# How to build

## *nix
Create a new directory `build/debug` and run CMake
```
$ mkdir -p build/debug
$ cmake -DCMAKE_BUILD_TYPE=Debug -H. -Bbuild/debug
```
Finally build with `make`
```
$ cmake --build build/debug
```

## Windows
### MinGW
Create a new directory `build/debug` and run CMake
```
cmake -DCMAKE_BUILD_TYPE=Debug -H. -G "MinGW Makefiles" -Bbuild/debug
```

### MSVC++
Untested