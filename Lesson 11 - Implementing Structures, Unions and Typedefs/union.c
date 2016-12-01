// union.c -- Example of using more than one union member at a time
#include <stdio.h>

union types {
	char	c;
	int		i;
	long	l;
	float	f;
	double	d;
	
} shared;

void shared_print();

int main(int argc, char *argv[]){
	
	shared.c = '$';
	
	shared_print();
	
	shared.d = 123456789.8765;
	
	shared_print();
	
	return 0;
}

void shared_print(){
	
	printf("\nchar\tc\t=\t%c",   shared.c);
	printf("\nint\ti\t=\t%d",   shared.i);
	printf("\nlong\tl\t=\t%ld",  shared.l);
	printf("\nfloat\tf\t=\t%f",   shared.f);
	printf("\ndouble\td\t=\t%f\n", shared.d);
}