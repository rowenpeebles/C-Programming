#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, number, originalNumber, rem, count = 0;
    double result = 0.0;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);

    // Swap numbers if high < low
    if (high < low)
    {
        high += low;
        low = high - low;
        high -= low;
    }

    // Iterate number from (low + 1) to (high - 1)
    // in each iteration, check if number is Armstrong
    for (number = low + 1; number < high; ++number)
    {
        originalNumber = number;

        // Number of digits calculation
        while (originalNumber != 0)
        {
            originalNumber /= 10;
            ++count;
        }

        originalNumber = number;

        // Result contains sum of nth power of individual digits
        while (originalNumber != 0)
        {
            rem = originalNumber % 10;
            result += pow(rem, count);
            originalNumber /= 10; 
        }

        // Check if number is equal to the sum of nth power of individual digits
        if ((int)result == number)
        {
            printf("%d ", number);
        }

        // Resetting the values
        count = 0;
        result = 0;
    }

    return 0;
}