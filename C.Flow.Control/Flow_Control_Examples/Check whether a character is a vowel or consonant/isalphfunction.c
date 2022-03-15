#include <ctype.h>
#include <stdio.h>

int main()
{
    char c;
    int lowercase_vowel, uppercase_vowel;

    printf("Enter an alphabetical character: ");
    scanf("%c", &c);

    // Evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c== 'i' || c== 'o' || c== 'u');

    // Evaluates to 1 if variable c is an uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c== 'I' || c== 'O' || c== 'U');

    // Show error message if c is not an alphabetical character
    if (!isalpha(c))
    {
        printf("Error! Non-alphabetical character.");
    }

    else if (lowercase_vowel || uppercase_vowel)
    {
        printf("%c is a vowel.", c);
    }

    else
    {
        printf("%c is a consonant.", c);
    }

    return 0;

}