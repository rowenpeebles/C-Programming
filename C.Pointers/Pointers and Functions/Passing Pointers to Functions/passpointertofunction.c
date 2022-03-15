#include <stdio.h>

void addOne(int* ptr)
{
    (*ptr)++; // Adding 1 to *ptr
}

int main()
{
    int* p, i = 10;

    p = &i;

    addOne(p);

    printf("%d", *p); // Value of 11

    return 0;
}