cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(clearing clearing.c)
add_executable(clearing2 clearing2.c)

add_executable(fgets fgets.c)
add_executable(getch getch.c)
add_executable(getch2 getch2.c)

add_executable(getchar getchar.c)
add_executable(getchar2 getchar2.c)
add_executable(printfdemo printfdemo.c)

add_executable(putchar putchar.c)
add_executable(putchar2 putchar2.c)
add_executable(puts puts.c)
add_executable(scanfdemos scanfdemos.c)
add_executable(stream stream.c)


# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
