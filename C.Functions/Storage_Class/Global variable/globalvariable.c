#include <stdio.h>

void display();

int n = 5;  // Global variable stated

int main()
{
    ++n;

    display();
    return 0;
}

void display()
{
    ++n;
    printf("n = %d", n);
}