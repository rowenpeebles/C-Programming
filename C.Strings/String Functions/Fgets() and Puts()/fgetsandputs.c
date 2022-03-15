#include <stdio.h>

int main()
{
    char name[30];

    printf("Enter name: ");

    // Read string
    fgets(name, sizeof(name), stdin);

    printf("Your name: ");

    // Display string
    puts(name); 

    return 0;
}