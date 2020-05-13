cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(agechecker agechecker.c)
add_executable(agechecker2 agechecker2.c)
add_executable(biggernum biggernum.c)
add_executable(ex04-02 ex04-02.c)
add_executable(logicalorder logicalorder.c)
add_executable(relational relational.c)
add_executable(seconds seconds.c)
add_executable(unary unary.c)


# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
