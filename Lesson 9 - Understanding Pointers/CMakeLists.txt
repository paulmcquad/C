cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(arraypass arraypass.c)
add_executable(arraypass2 arraypass2.c)
add_executable(arraysize arraysize.c)
add_executable(pointer pointer.c)
add_executable(ptr_math ptr_math.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
