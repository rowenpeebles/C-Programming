// Program to take 5 values from the user and store them in an array
// and print the elements stored in the array

#include <stdio.h>

int main()
{
    int values[5];

    printf("Enter 5 integers: ");

    // Taking input and storing it in an array
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &values[i]);
    }

    printf("Displaying integers: \n");

    // Printing elements of an array
    for (int i = 0; i < 5; ++i)
    {
        printf("%d\n", values[i]);
    }

    return 0;
}
