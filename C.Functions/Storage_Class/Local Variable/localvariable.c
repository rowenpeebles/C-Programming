#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; ++i)
    {
        printf("C Programming");
    }

    // Error: i is not declared at this point
    printf("%d", i);
    return 0;
}

// This program returns an error. This is because i is declared
// Inside the for loop, and is only accessible within it.