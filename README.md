# C++ worker fixture

A small C++17 CMake project for exercising the Autoscan **C/C++ (cfamily) worker**.

```sh
cmake -S . -B build
cmake --build build
./build/inventory
```

The code has intentional issues, so a successful automatic analysis should report them:

- manual memory management with `new[]` and a memory leak (`main.cpp`)
- an unbounded `strcpy` (`inventory.cpp`)
