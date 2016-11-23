#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int age;
    printf("Please enter your age ");
    scanf("%d",&age);
    if (age > 18)
        printf("You're older than 18");
    if (age == 18)
        printf("You're 18!!");
    if (age < 18)
        printf("You're younger than 18");

 return 0;
}
