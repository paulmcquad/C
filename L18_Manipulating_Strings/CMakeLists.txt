cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(getaninteger getaninteger.c)
add_executable(stringcat stringcat.c)
add_executable(stringcat2 stringcat2.c)
add_executable(stringcompare stringcompare.c)
add_executable(stringcompare2 stringcompare2.c)
add_executable(stringconversion stringconversion.c)
add_executable(stringcopy stringcopy.c)
add_executable(stringcopy2 stringcopy2.c)
add_executable(stringlen stringlen.c)
add_executable(stringsearch1 stringsearch1.c)
add_executable(stringsearch2 stringsearch2.c)
add_executable(stringsearch3 stringsearch3.c)
add_executable(stringsearch4 stringsearch4.c)
add_executable(stringtodouble stringtodouble.c)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
