#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf(" %d", &age);
    float discount = 0;

    (age > 33 && age < 65) ? (discount += .25) : (discount += 1.25);

    printf("discount is %.2f", discount);

    return 0;
}
