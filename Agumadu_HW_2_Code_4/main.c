#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int count_num = 0;
    int count_upper = 0;
    char password[] = "Password";
    while(count_upper == 0 || count_num == 0)
    {
        printf("Enter a password: ");
        scanf(" %s", password);
        for(x = 0; x < strlen(password); x++)
        {

            if(isdigit(password[x]) != 0)
            {
                ++count_num;
            }

            else if(isupper(password[x]) != 0)

            {
                ++count_num;
            }
        }

    if(count_upper >= 1 && count_num >= 1)

    {
        printf("Your password format is correct.\n");
            exit(1);
    }

    else if((count_upper == 0) || (count_num == 0))

    {
        printf("Your password format is wrong. Please enter again.\n");
    }

    }

return 0;
}
