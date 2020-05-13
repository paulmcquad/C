cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(ascii ascii.c)
add_executable(chartest chartest.c)
add_executable(getback getback.c)
add_executable(gets gets.c)
add_executable(input input.c)
add_executable(memalloc memalloc.c)
add_executable(put put.c)


# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
