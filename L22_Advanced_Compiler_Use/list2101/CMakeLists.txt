cmake_minimum_required(VERSION 3.11)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(square list2101.c calc.c calc.h)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
