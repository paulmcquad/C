#include <stdio.h>
#define TARGET_AGE 88

int year1, year2;

int calYear(int year1);

int main(int argc, char *argv[]){

    // Ask the user for the birth year
    printf("What year was the person born\n");
    printf("Enter as a 4-digit year(YYYY)\n");
    scanf(" %d", &year1);

    // Calulate the future year and display it
    year2 = calYear(year1);


    printf("Someone born in %d will be %d in %d.\n",
           year1, TARGET_AGE, year2);

    return 0;
}

// The calyear function
int calYear(int year1)
{

    return(year1+TARGET_AGE);
}
