// Demostrates a simple function
#include <stdio.h>
#include <math.h>

long input, answer;

int main(int argc, char *argv[]){
	
	printf("Enter an integer value: ");
	scanf("%ld", &input);
	answer = pow(input, 3);
	/* Note: &ld is the conversion specifier for 
	   a long integer */
	printf("\nThe cube of %ld is %ld.\n", input, answer);
		
	return 0;
}