/* Demonstrates a simple for statement */

#include <stdio.h>
const int MAXCOUNT = 20;
int count;

int main(int argc, char *argv[]){
	
	for(count = 1; count <= MAXCOUNT; count++)
		printf("%d\n", count);

	return 0;
}