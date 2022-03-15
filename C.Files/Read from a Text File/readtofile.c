#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;

    if ((fptr = fopen("/Users/rowenpeebles/Documents/Dev.Work/Programiz/C.Programming/C.Files/Read from a Text File/readtotextfile.txt", "r")) == NULL)
    {
        printf("Error!");

        // Program exits if the file pointer returns NULL
        exit(1);
    }

    fscanf(fptr, "%d", &num);

    printf("Value of n=%d", num);

    fclose(fptr);

    return 0;
}