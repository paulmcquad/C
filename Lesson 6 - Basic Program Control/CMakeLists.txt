cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(dowhilestate dowhilestate.c)
add_executable(forstate forstate.c)
add_executable(nestfor nestfor.c)
add_executable(nestwhile nestwhile.c)
add_executable(while while.c)
add_executable(whilest whilest.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
