#include <stdio.h>

int main()
{
    // pc is a pointer variable and c is an int variable
    int* pc, c;

    // Assigns value of 22 to c, so 22 is stored in c memory location
    c = 22;

    printf("Address of C: %p\n", &c);
    printf("Value of C: %d\n\n", c); // 22

    // Assigns the address of c to the pointer pc
    pc = &c;

    printf("Address of pointer PC: %p\n", pc);
    printf("Content of pointer PC: %d\n\n", *pc); // 22

    // Assigns the value 11 to c memory address
    c = 11;

    printf("Address of pointer PC: %p\n", pc);
    printf("Content of pointer PC: %d\n\n", *pc); // 11

    // Changes the value at the memory location pointed to by pc to 2
    *pc = 2;

    printf("Address of C: %p\n", &c);
    printf("Value of C: %d\n\n", c); // 2

    return 0;
}