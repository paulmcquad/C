#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int radius, area;

int main(int argc, char *argv[]) {
	
		printf("Enter radius (i.e. 10): ");
		scanf("%d", &radius);
		area = (int) (M_PI * radius * radius);
		printf("\n\nArea = %d\n", area);
		
    return 0;
}
