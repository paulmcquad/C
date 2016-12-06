// macrorepl.c -- Demonstrates the # operator in macro expansion

#include <stdio.h>

#define OUT(x) printf(#x " is equal to %d.\n", x)

int main(int argc, char *argv[]){
	
	int value = 123;
	OUT(value);

	return 0;
}

