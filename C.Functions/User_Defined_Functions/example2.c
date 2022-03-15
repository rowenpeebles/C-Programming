// Arguments passed but a return value
#include <stdio.h>

void checkPrimeNumber();

int main()
{
    checkPrimeNumber();     // Argument is not passed
    return 0;
}

// Return type is void meaning doesn't return any value
void checkPrimeNumber()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("%d is not a prime number.", n);
    }

    else 
    {
        printf("%d is a prime number.", n);
    }
}
