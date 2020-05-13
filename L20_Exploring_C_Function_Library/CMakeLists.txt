cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(assert assert.c)

add_executable(math math.c)
add_executable(perror perror.c)
add_executable(searchandsort searchandsort.c)
add_executable(searchandsort2 searchandsort2.c)
add_executable(whattime whattime.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
