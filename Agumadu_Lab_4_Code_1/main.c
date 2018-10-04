#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int c = 1, i;
    char Mwords[i];

    printf("Enter multiple words separated by spaces.\n");

    for (i = 0; i<=sizeof(Mwords); i++)
    {
        Mwords[i]=getchar();
        if(Mwords[i]==' ')
        {
                c++;
        }
        if (Mwords[i] == '\n')
        {
            break;
        }

    }

    printf("You typed %d words.\n", c);

    return 0;
}
