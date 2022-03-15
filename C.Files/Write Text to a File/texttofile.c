#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;

    // Use appropriate location if you are using MacOS or Linux
    fptr = fopen("/Users/rowenpeebles/Documents/Dev.Work/Programiz/C.Programming/C.Files/Write Text to a File/writetotextfile.txt", "w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}