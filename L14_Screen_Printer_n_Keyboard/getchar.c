/* Demonstrates the getchar() function. */

#include <stdio.h>

int main(int argc, char *argv[]){

   int ch;

   while ((ch = getchar()) != '\n')
        putchar(ch);

   return 0;
}

