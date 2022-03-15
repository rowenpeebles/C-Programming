#include <stdio.h>

int main()
{
    int low, high, i, flag, temp;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    // Swap numbers if low is greater than high
    if (low > high)
    {
        temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
        flag = 0;

        // Ignore numbers less than 2
        if (low <= 1)
        {
            ++low;
            continue;
        }

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

        ++low;
    }

    return 0;
}