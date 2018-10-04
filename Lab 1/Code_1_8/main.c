#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    int day;
    int year;

    printf("What is the month?");
    scanf("%d",&month);
    printf("What is the day?");
    scanf("%d",&day);
    printf("What is the year?");
    scanf("%d",&year);

    printf("The date is %d/%d/%d\n", month,day,year);

    return 0;
}
