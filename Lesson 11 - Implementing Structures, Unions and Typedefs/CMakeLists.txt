cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(arrayrecords arrayrecords.c)
add_executable(arraystruct arraystruct.c)
add_executable(pointerstep pointerstep.c)
add_executable(simplestruct simplestruct.c)
add_executable(struct struct.c)
add_executable(structfunc structfunc.c)
add_executable(union union.c)
add_executable(union2 union2.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
