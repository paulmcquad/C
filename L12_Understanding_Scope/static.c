// static.c -- Demonstrates automatic and static local variables
#include <stdio.h>

void func1(void);

int main(int argc, char *argv[]){
	
	int count;
	
	for(count = 0; count < 20; count++){
		printf("At iteration %d; ", count);
		func1();
	}
	
	return 0;
}

void func1(void){
	static int x = 0;
	int y = 0;
	
	printf("x = %d, y = %d\n", x++, y++);
}