#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rannum1, rannum2;
   int sum;
    srand(time(NULL));

        rannum1 = (rand() %6)+1;
        printf("First Number: %d\n", rannum1);

        rannum2 = (rand() %6)+1;
        printf("Second Number: %d\n", rannum2);

        sum=(rannum1+rannum2);

        if(sum==2)
        {
            printf("Low 2\n");
        }

        else if(sum==5)
        {
            printf("Lucky 7\n");
        }

        else if(sum==12)
        {
            printf("High 12\n");
        }

        else
        {
            printf("sum is %d", sum);
        }

    return 0;
}
