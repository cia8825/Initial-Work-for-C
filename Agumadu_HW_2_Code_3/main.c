#include <stdio.h>
#include <stdlib.h>

int main()
{
        int size = 12;
    char word[size];
    int x;
    printf("Type words with spaces and press enter.\n");
    for(x = 0; x <= size; x++)
    {
        word[x] = getchar();

        if(word[x] == '\n')
        {
            break;
        }
    }

    printf("You typed: %s \n", word);
    return 0;
}

