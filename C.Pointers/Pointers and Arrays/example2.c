#include <stdio.h>

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int* ptr;

    // Ptr is assigned to the address of the third element 'x[2]'
    ptr = &x[2];

    printf("*ptr = %d \n", *ptr); // value of 3
    printf("*(ptr + 1) = %d \n", *(ptr + 1)); // value of 4
    printf("*(ptr - 1) = %d", *(ptr - 1)); // value of 2

    return 0;
}