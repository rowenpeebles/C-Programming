// Concantenate two strings without using 'strcat()'

#include <stdio.h>

int main()
{
    char s1[100] = "Programming ", s2[] = "is awesome!";
    int length, j;

    // Store length of s1 in the length variable
    length = 0;

    while (s1[length] != '\0')
    {
        ++length;
    }

    // Concantenate s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++length)
    {
        s1[length] = s2[j];
    }

    // Terminating the s1 string
    s1[length] = '\0';

    printf("After Concantenation: ");
    puts(s1);

    return 0;
}