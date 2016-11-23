#include <stdio.h>

int main(int argc, char *argv[]){

   int age, year, month; //Declaring variables as integer
   printf("Enter Your Age in Years and Months\n"); //Asking user to input his age
   scanf("%d %d", &year, &month); //Storing user's age in two different variables
   age=(year*365)+(month*30); //Calculating age in days
   printf("Your Age in Days is %d\n", age); //Displaying output

    return 0;
}
