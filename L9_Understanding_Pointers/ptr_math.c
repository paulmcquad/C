/* ptr_math.c -- Demonstrates using pointer arithmetic to 
   access array elements with pointer notation. */

#include <stdio.h>
#define MAX 10

// Declare and initialise an integer array

int i_array[MAX] = { 0,1,2,3,4,5,6,7,8,9 };

// Declare a pointer to int and a int variable

int *i_ptr, count;

// Declare and initialise an float array

float f_array[MAX] = { .0, .1, .2, .3, .4, .5, .6, .7, .8, .9 };

// Declare a pointer to float
float *f_ptr;


int main(int argc, char *argv[]){
	
	/* initialise the pointers */
	
	i_ptr = i_array;
	f_ptr = f_array;
	
	/* Print the array elements. */
	
	for(count = 0; count < MAX; count++)
		printf("%d\t%f\n", *i_ptr++, *f_ptr++);	
	
	return 0;
}