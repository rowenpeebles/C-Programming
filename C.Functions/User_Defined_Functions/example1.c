// Arguments passed but no return value
#include <stdio.h>

int addNumbers(int a, int b);   // Function prototype
int main()
{
    int n1, n2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum = addNumbers(n1, n2);     // Calling a user defined function

    printf("Sum = %d", sum);

    return 0;
}

int addNumbers(int a, int b)    // Function definition
{
    int result;
    result = a + b;
    return result;
}