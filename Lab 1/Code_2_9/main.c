#include <stdio.h>
#include <stdlib.h>

int main()
{
    char month[9] = "February";
	char day[] = "Sunday";

	printf("Month is %s\n", month);
	printf("Day is %s\n", day);
    strcpy(month, "May");
    printf("New month is %s\n", month);

    return 0;
}
