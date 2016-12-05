/* The assert() macro. */

#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[]){
	
    int x;

    printf("\nEnter an integer value: ");
    scanf("%d", &x);

    assert(x != 0);

    printf("You entered %d.\n", x);
	
    return 0;
}

