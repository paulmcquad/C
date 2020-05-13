cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(bigyear bigyear.c)
add_executable(ex02-02 ex02-02.c)
add_executable(ex02-04 ex02-04.c)
add_executable(ex02-05 ex02-05.c)
add_executable(list_it list_it.c)


# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
