#include <stdio.h>
#include <string.h>

// Create struct with person1 variable
struct Person
{
    char name[50];
    int citiNo;
    float salary;
}

person1;

int main()
{
    // Assign value to name of person1
    strcpy(person1.name, "Rowen Peebles");

    // Assign values to other person1 variables
    person1.citiNo = 1994;
    person1.salary = 2500;

    // Print struct variables
    printf("Name: %s\n", person1.name);
    printf("Citizenship Number: %d\n", person1.citiNo);
    printf("Salary: %.2f", person1.salary);

    return 0;
}