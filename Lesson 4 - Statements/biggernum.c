#include <stdio.h>

int x, y;

int main(int argc, char *argv[]){
	
	printf("\nEnter two numbers: ");
	scanf("%d %d", &x, &y);
	printf("\n\n%d is bigger\n",(x>y)?x:y);
	return 0;
}