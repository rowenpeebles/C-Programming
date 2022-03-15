#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    int n;
    struct threeNum num;
    FILE *fptr;

    if ((fptr = fopen("/Users/rowenpeebles/Documents/Dev.Work/Programiz/C.Programming/C.Files/Writing to a Binary File/tobinary.bin", "wb")) == NULL)
    {
        printf("Error!");

        // program exits if the file pointer returns NULL
        exit(1);
    }

    for (n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = 5*n;
        num.n3 = 5*n + 1;

        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }

    fclose(fptr);

    return 0;
}