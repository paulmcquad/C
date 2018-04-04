cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(breaking breaking.c)
add_executable(contin contin.c)
add_executable(fallthru fallthru.c)
add_executable(gotoIt gotoIt.c)
add_executable(menu menu.c)
add_executable(menu2 menu2.c)
add_executable(switch1 switch1.c)
add_executable(switch2 switch2.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
