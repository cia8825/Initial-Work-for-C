#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare (int *a, int *b);
void pwrFunc(int *LargeNumber);

int main()
{
    int number1, number2, result;

    printf("Enter a number: ");
    scanf(" %d", &number1);

    printf("Enter another number: ");
    scanf(" %d", &number2);

    result = compare(&number1, &number2);
    pwrFunc(&result);

    return 0;
}

int compare(int *a, int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    else if (*b > *a)
    {
        return *b;
    }
    else
    {
        return printf("The numbers are equal.\n");
    }
}

void pwrFunc(int *LargeNumber)
{
    int power = 0;
    power = pow(*LargeNumber, 4);
    printf("%d to the 4th power is %d\n", *LargeNumber, power);
}
