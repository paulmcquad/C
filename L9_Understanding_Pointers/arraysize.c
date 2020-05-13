/* Demonstrates the relationship between addresses and */
/* elements of arrays of different data types. */

#include <stdio.h>

/* Declare a counter and three arrays. */
int ctr;
short array_s[10];
float array_f[10];
double array_d[10];


int main(int argc, char *argv[]){
	
	/* Print the table heading */
	
	printf("\t\tShort\t\t\t\tFloat\t\t\t\tDouble");
	
	printf("\n======================================");
	printf("========================================");
	printf("========================================");

	
	/* Print the addresses of each array element */
	
	for (ctr = 0; ctr < 10; ctr++){
		printf("\nElement %d:\t%p\t\t%p\t\t%p", ctr,
		&array_s[ctr], &array_f[ctr], &array_d[ctr]);
	}

	printf("\n======================================");
	printf("========================================");
	printf("========================================\n");
		
	return 0;
}