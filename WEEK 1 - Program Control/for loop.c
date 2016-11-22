#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(int argc, char *argv[]){

    for(count; count <= 20; count++) {
        printf("Hello world! %d\n", count);
    }

//    printf("%d \n", 32); /// integer
//    printf("%ld \n", 121313313); /// large integer
//    printf("%f \n", 32.4); /// float
//    printf("%lf \n", 3224524534.564); /// large float
//    printf("%c \n", 'R'); /// char
//    printf("%s \n", "Hello World!"); /// string
//    printf("%x \n", 17); /// Hex

    return 0;
}
