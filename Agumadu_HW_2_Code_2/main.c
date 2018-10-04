#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[]="input";
    int x;
    printf("Type a word with lower and upper case letters:\n");
    scanf(" %s", word);
    for(x=0;x<strlen(word);x++)
    {
        if(isupper(word[x])!=0)
        {
            word[x]=tolower(word[x]);
        }
        if(islower(word[x])!=0)
        {
            word[x]=toupper(word[x]);
        }
    }
    printf("Replaced upper and lowercase: %s\n", word);
    return 0;
}
