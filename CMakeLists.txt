cmake_minimum_required(VERSION 3.20)
project(test_worker_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inventory src/main.cpp src/inventory.cpp)
target_include_directories(inventory PRIVATE include)
