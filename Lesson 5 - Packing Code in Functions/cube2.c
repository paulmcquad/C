// Demostrates a simple function
#include <stdio.h>

long cube(long x);

long input, answer;

int main(int argc, char *argv[]){
	
	printf("Enter an integer value: ");
	scanf("%ld", &input);
	answer = cube(input);
	/* Note: &ld is the conversion specifier for 
	   a long integer */
	printf("\nThe cube of %ld is %ld.\n", input, answer);
		
	return 0;
}

// Function: cube() - Calculates the cubed value of a variable
long cube(long x){
	
	return(x * x * x);
}