cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(cube cube.c)
add_executable(cube2 cube2.c)
add_executable(cube3 cube3.c)
add_executable(halfof halfof.c)
add_executable(recurse recurse.c)
add_executable(roomassign roomassign.c)
add_executable(var var.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
