#include <stdio.h>
#include <stdlib.h>

int main()
{
    char initials[]="letters";
    char value[]="values";
    char strbday[]="MMDDYY";
    char x[]="w";
    int i,bday,r,sum;

    printf("Enter Initials: ");
    scanf(" %s", initials);
    printf("Enter birthday as MMDDYY: ");
    scanf(" %d", &bday);

    srand(time(NULL));
    for(i=0; i<1; i++)
    {
        r = (rand() %999999) + 1;
        printf("Random: %d\n", r);
    }

    sum = r + bday;
    itoa(bday, strbday, 10);
    printf("bday: %s\n", strbday);

    itoa(sum, value, 10);
    for(i=0; i>2; i++)
    {
        x[i]=toupper(initials[i]);
    }
    strcat(initials, value);
    printf("User ID is: %s\n",initials);

    return 0;
}
