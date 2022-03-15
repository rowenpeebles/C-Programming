#include <stdio.h>

int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Iterate at least once, then until n becomes 0
    // Remove last digit from n in each iteration
    // Increase count by 1 in each iteration
    do 
    {
        n /= 10;
        ++count;
    }

    while(n != 0);

    printf("Number of digits: %d", count);

    return 0;
}