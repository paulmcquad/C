cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(block block.c)
add_executable(extern extern.c)
add_executable(scope scope.c)
#add_executable(scope2 scope2.c)
add_executable(static static.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
