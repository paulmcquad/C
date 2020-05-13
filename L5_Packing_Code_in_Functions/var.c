/* Demonstrates local variables */

#include <stdio.h>

int x = 1, y = 2;

void demo(void);

int main(int argc, char *argv[]){
	
	printf("\nBefore calling demo(), x = %d and y = %d.", x, y);
	demo();
	printf("\nAfter calling demo(), x = %d and y = %d.", x, y);

	

	return 0;
}

void demo(void){
	/* Declare and initialise two local variables. */
	
	int x = 88, y = 99; 
	/* Display their values */
	
	printf("\nWithin demo(), x = %d and y = %d.", x, y);
}