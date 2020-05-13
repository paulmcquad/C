/* Demonstrates basic pointer use. */

#include <stdio.h>

/* Declare and initialise an int variable */

int var = 1;

/* Declare a pointer to int */

int *ptr;

int main(int argc, char *argv[]){
	
	/* Initialise ptr to point to var */
	
	ptr = &var;
	
	/* Access var directly and indirectly */
	printf("\nDirect Access, var = %d", var);
	printf("\nIndirect Access, var = %d", *ptr);
	
	/* Display the address of var two ways */
	
	printf("\n\nThe address of var = %p", var);
	printf("\nThe address of var = %p\n", *ptr);
	
	
	return 0;
}