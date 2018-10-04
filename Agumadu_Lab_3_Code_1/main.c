#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    char yn ;
    char hl ;
    int l = 1;
    int h = 50;
    int guess;
    int count;

    guess = (l+h)/2;
    count=0;
    printf("Enter an integer number between 1 and 50: \n");
    scanf(" %d", &input);
    printf("Is your number %d y = yes n = no \n", guess);
    scanf(" %c", &yn);

    while (yn != 'y')
    {
        printf("Too High or Too Low?\n");
        scanf(" %c", &hl);
        if (hl == 'h')
        {
            h = guess;
            guess = (l+h)/2;
        }

        if (hl == 'l')
        {
            l = guess;
            guess = (l+h)/2;
        }
        printf("Is your number %d y = yes n = no\n", guess);
        scanf(" %c", &yn);
        count++;
    }

    if (yn != 'n')
    {
        printf("Your number is %d. It took %d attempt(s) to guess", guess, count);
    }

    return 0;
}
