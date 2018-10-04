#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int EvenNum;
    int TotalEvenNum = 0;

    printf("Enter a number greater than 1: ");
    scanf("%d", &number);

    if (number < 1)
    {
        printf("Follow the instruction. Enter a number greater than 1.\n");
        printf("Good bye!!!");
        return 0;
    }

    for(EvenNum=0;EvenNum<=number; EvenNum+=2)
    {
        TotalEvenNum+=EvenNum;
    }

    printf("The sum of all even numbers from from 0 to %d is %d", number, TotalEvenNum);

    return 0;
}
