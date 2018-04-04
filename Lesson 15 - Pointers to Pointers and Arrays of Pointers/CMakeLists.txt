cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(message message.c)
add_executable(message2 message2.c)
add_executable(multiarray multiarray.c)
add_executable(multiarraymath multiarraymath.c)
add_executable(multiarraysize multiarraysize.c)
add_executable(ptrmulti ptrmulti.c)
add_executable(sort sort.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
