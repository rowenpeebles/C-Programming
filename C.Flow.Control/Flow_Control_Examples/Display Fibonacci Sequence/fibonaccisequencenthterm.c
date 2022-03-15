#include <stdio.h>

int main()
{
    int i, n;

    // Initialise first and second terms
    int t1 = 0, t2 = 1;

    // Initialise the next term (3rd term)
    int nextTerm = t1 + t2;

    // Get no. of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms t1 and t2
    printf("Fibonnaci Series: %d, %d, ", t1, t2);

    // Print 3rd to nth terms
    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", nextTerm);

        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}