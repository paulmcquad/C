// Demostrates if and else statements and some of C's relational operators

#include <stdio.h>
const int CURRENT_YEAR = 2016;

int birth_year, age;

int main(int argc, char *argv[]){
    
    printf("Enter the year you were born: ");
    scanf("%d", &birth_year);
    
    // Two tests to calculate whether the user was a leap year birtht
    
    if (birth_year % 4 == 0)
        printf("You were born in a leap year\n");
    else
        printf("You weren't born in a leap year\n");
    
    age = CURRENT_YEAR - birth_year;
    
    // Can check on voting age as well as  drinking age
    
    if (age >= 18)
        printf("You can vote this year!\n");
    if (age <= 21)
        printf("It is illegal for you to drink alcohol\n");
    
    return 0;
}
