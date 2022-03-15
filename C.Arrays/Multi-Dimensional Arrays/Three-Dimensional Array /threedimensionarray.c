// Program to store and print 12 values entered by the user

#include <stdio.h>

int main()
{
    int test [1][2][3];

    printf("Enter 12 Values:\n");
    
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                scanf("%d", &test[i][j][k]);
            }
        }
    }

    // Printing values with proper index
    printf("\nDisplaying Values:\n");
    
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                printf("Test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
            }
        }
    }

    return 0;
}
