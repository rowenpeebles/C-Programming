#include <stdio.h>

// First way to create a union variable
union car
{
    char name[50];
    int price;
};

int main()
{
    union car car1, car2, *car3;

    return 0;
}

// Second way to create a union varaible
union car
{
    char name[50];
    int price;
} car1, car2, *car3;