#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void isPalindrome(char str[]);

int main()
{
    char word[]="string";

    printf("Type a word: ");
    scanf(" %s", word);
    isPalindrome(word);

    return 0;
}

void isPalindrome(char str[])
{
    int a=0;
    int b = strlen(str)-1;

    while(b>a);
    {
        if(str[a++] != str[b--])
        {
            printf(" %s is Not a Palindrome", str);
            return;
        }
    }
    printf(" %s is palindrome", str);
}
