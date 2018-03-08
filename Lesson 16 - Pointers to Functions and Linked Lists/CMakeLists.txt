cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(linkdemo linkdemo.c)
add_executable(linklist linklist.c)
add_executable(passptr passptr.c)
add_executable(ptrfunc ptrfunc.c)
add_executable(ptrfunc2 ptrfunc2.c)
add_executable(ptrsort ptrsort.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
