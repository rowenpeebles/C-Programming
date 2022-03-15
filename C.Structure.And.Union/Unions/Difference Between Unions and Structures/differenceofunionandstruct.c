#include <stdio.h>

// Struct memory is the memory of all elements combined
// Union memory is the size of the largest element, elements share memory

union unionJob
{
    // Defining a union
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob
{
    char name[32];
    float salary;
    int workerNo;
} sJob;

int main()
{
    printf("Size of union = %d bytes", sizeof(uJob));
    printf("\nSize of structure = %d bytes", sizeof(sJob));

    return 0;
}