#include <stdio.h>
#include <stdlib.h>

int main()
{

    char fname;
    char lname;
    int fnumber;
    float fdecimal;

    printf("What is first name initial?\n");
    scanf(" %c",&fname);
    printf("What is last name initial?\n");
    scanf(" %c",&lname);
    printf("What is favorite number?\n");
    scanf(" %d",&fnumber);
    printf("Write a decimal number as x.xxx\n");
    scanf(" %f",&fdecimal);

    //printf("\n");

    printf("First Initial is %c\n", fname); //lname,fnumber, fdecimal);
    printf("Last Initial is %c\n", lname);
    printf("Favorite Number is %d\n", fnumber);
    printf("Decimal Number is %f", fdecimal);

    return 0;
}
