#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

// Function prototype
void display(struct student s);

int main()
{
    struct student s1;

    printf("Enter name: ");

    // Read string input from the user until \n is entered
    // \n is discarded
    scanf("%[^\n]%*c", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    display(s1); // Passing struct as an argument

    return 0;
}

void display(struct student s)
{
    printf("\nDisplaying Information\n");
    printf("Name: %s", s.name);
    printf("\nAge: %d", s.age);
}