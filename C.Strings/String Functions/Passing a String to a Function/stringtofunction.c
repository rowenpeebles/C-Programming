#include <stdio.h>

void displayString(char str[]);

int main()
{
    char str[50];

    printf("Enter String: ");

    fgets(str, sizeof(str), stdin);

    // Passing string to a function
    displayString(str);

    return 0;
}

void displayString(char str[])
{
    printf("String Output: ");

    puts(str);
}