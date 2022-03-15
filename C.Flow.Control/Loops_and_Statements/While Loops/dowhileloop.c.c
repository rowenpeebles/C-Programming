#include <stdio.h>

// Program to add numbers until the user enters 0
int main()
{
   double number, sum = 0;

   // The body of the loop is executed at least once
   do
   {
       printf("Enter a number: ");
       scanf("%lf", &number);

       sum += number;
   } 
   
   while (number != 0.0);

   printf("Sum = %.2lf", sum);

   return 0; 
}