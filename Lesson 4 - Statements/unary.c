/* Demonstrates unary operator prefix and postfix modes */

#include <stdio.h>

int a, b;

int main(int argc, char *argv[]){

    /* Set a and b both equal to 0 */

    a = b = 0;
    
    // Start with the incremental operator //
    // Print them, decrementing each time. //
    
    /* Use prefix mode for b, postfix mode for a */
    
    printf("Count up!");
    printf("\nPost  Pre");
    printf("\n%d    %d", a++, ++b);
    printf("\n%d    %d", a++, ++b);
    printf("\n%d    %d", a++, ++b);
    printf("\n%d    %d", a++, ++b);
    printf("\n%d    %d\n", a++, ++b);
    
    printf("\nCurrent values of a and b:\n");
    printf("%d       %d\n\n\n", a, b);
    

    printf("Count down!");
    printf("\nPost  Pre");
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d\n", a--, --b);

    return 0;
}

