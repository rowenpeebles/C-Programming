#include <stdio.h>
#include <string.h>

// Struct typedef person
typedef struct Person
{
    char name[50];
    int citNo;
    float salary;
} 

person;

int main()
{
    // Create Person variable
    person p1;

    // Assign value to name of p1
    strcpy(p1.name, "Rowen Peebles");

    // Assign values to other p1 variables
    p1.citNo = 1994;
    p1.salary = 13350;

    // Print struct variables
    printf("Name: %s\n", p1.name);
    printf("Citizenship No: %d\n", p1.citNo);
    printf("Salary: %.2f", p1.salary);

    return 0;
}