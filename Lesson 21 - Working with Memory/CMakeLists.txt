cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(callocmem callocmem.c)
add_executable(casting casting.c)

add_executable(freemem freemem.c)
add_executable(memfunctions memfunctions.c)
add_executable(reusingmem reusingmem.c)
add_executable(shiftit shiftit.c)


# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
