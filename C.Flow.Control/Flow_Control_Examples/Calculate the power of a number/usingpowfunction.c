#include <stdio.h>
#include <math.h>

int main()
{
    double base, exp, result;

    printf("Enter a base number: ");
    scanf("%lf", &base);

    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // Calculate the power
    result = pow(base, exp);

    printf("%.1f^ %.1lf = %.2lf", base, exp, result);

    return 0;
}