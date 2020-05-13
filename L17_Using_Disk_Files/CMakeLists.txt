cmake_minimum_required(VERSION 3.09)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(direct direct.c)
add_executable(endoffile endoffile.c)
add_executable(filecopier filecopier.c)
add_executable(filedeleter filedeleter.c)
add_executable(fileposition fileposition.c)
add_executable(filerenamer filerenamer.c)
add_executable(fscanfnums fscanfnums.c)
add_executable(hello hello.c)
add_executable(numberfile numberfile.c)
add_executable(openfiles openfiles.c)
add_executable(randomfile randomfile.c)
add_executable(tempfilemaker tempfilemaker.c)


# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
