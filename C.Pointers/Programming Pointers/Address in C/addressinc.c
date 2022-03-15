#include <stdio.h>

int main()
{
    int var = 5;

    printf("Var: %d\n", var);

    // Notice the use of & before var
    printf("Address of Var: %p", &var);

    return 0;
}