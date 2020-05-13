// Demonstrates a simple while statement 

#include <stdio.h>
const int MAXCOUNT = 20;
int count;

int main(int argc, char *argv[]){
	
	// Print the numbers 1 through 20
	
	count = 1;
	
	while(count <= MAXCOUNT){
		printf("%d\n", count);
		count++;
	}
	return 0;
}
