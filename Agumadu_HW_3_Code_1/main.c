#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum=0, a=0, b=0, c=0, d=0, f=0;
    int grades [10] = {80,75,99,78,100,55,69,45,89,73};
    float avg=0;

    for(i=0; i<=10; i++)
    {
        sum=sum+grades[i];
    }

    avg=sum/10;
    printf("The average is a %.2f\n", avg);

    for(i=0; i<=10; i++)
    {
        if (grades[i] >= 90 && grades[i] <= 100)
        {
            a++;
        }

        else if(grades[i] >= 80 && grades[i] <= 89)
        {
            b++;
        }

        else if(grades[i]  >= 70 && grades[i] <= 79)
        {
            c++;
        }
        else if(grades[i] >= 60 && grades[i] <= 69)
        {
            d++;
        }

        else
        {
            f++;
        }
    }

    printf("There are %d As\n", a);
    printf("There are %d Bs\n", b);
    printf("There are %d Cs\n", c);
    printf("There are %d Ds\n", d);
    printf("There are %d Fs\n", f);

    return 0;
}
