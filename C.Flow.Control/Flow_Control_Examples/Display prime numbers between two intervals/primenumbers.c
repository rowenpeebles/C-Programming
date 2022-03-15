#include <stdio.h>

int main() 
{
    int low, high, i, flag;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);

    // Iteration until low is not equal to high
    while (low < high)
    {
        flag = 0;

        // Ignore numbers less than 2
        if (low <= 1)
        {
            ++low;
            continue;
        }

        // If low is a non-prime number, flag will be 1
        for (i = 2; i <= low / 2; ++i)
        {
            if (low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d ", low);
        }

        // To check prime for the next number
        // Increase low by 1
        ++low;
    }
    return 0;
}