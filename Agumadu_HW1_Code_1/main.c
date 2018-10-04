#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[50], answer, quit[] = "quit";

    int a =1;

    printf("Enter a word: ");
    scanf(" %s", word);

    if (strcmp(word, quit) == 0)
    {
        return 0;
    }

        printf("Would you like to change the word? y = yes, n = no\n");
        scanf(" %c", &answer );

    while (answer == 'y')
    {
        a++;

            printf("Enter New Word: ");
            scanf(" %s", word);
             if (strcmp(word, quit) == 0)
            {
                printf("New word is %s. You have changed the word %d times\n", word, a);
                break;
            }

            printf("New word is %s. You have changed the word %d times\n", word, a);
            printf("Would you like to change the word? y = yes, n = no\n");
            scanf(" %c", &answer);


        }
    if (answer == 'n')
            {
                return 0;
            }



    return 0;
}
