#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[15];
    char lname[15];
    int age;
    char newfname []= "John";
    char newlname []= "Doe";
    int newage = 99;

    printf("Enter a First Name?\n");
    scanf(" %s", &fname);
    printf("Enter Last Name?\n");
    scanf(" %s", &lname);
    printf("Enter an Age?\n");
    scanf(" %d", &age);

    printf("First Name: %s Last Name: %s age: %d\n", fname,lname,age);

    printf("First Name: %s Last Name: %s age: %d\n", newfname,newlname,newage);

    return 0;
}
