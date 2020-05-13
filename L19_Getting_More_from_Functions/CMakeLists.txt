cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(differentarguments differentarguments.c)
add_executable(pointerreturn pointerreturn.c)
add_executable(typecast typecast.c)
add_executable(variableaverage variableaverage.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
