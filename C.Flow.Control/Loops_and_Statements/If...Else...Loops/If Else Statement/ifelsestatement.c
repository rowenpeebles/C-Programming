#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if (number%2 == 0)
    {
        printf("%d is an even integer.", number);
    }
    else
    {
        printf("%d is an odd number.", number);
    }

    return 0;
}