cmake_minimum_required(VERSION 3.14)
project(constexpr_map LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Header-only library
add_library(constexpr_map INTERFACE)
target_include_directories(constexpr_map INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Example executable
add_executable(example examples/main.cpp)
target_link_libraries(example PRIVATE constexpr_map)