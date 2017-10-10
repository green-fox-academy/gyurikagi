#include <stdio.h>
#include <stdlib.h>
#include "parameters.h"

// create a function called `factorio`
// that returns it's input's factorial with and without recursion
// again the parameters value should be stored in a .h file
//
int factorial_without_recursion();
int factorial_with_recursion();

int main()
{

    return 0;
}
int factorial_with_recursion(int i) {
   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);


int factorial_without_recursion (int i)
{
    if (i < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(int j=1; j<=i; j++)
        {
            factorial *= j;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", j, factorial);
    }
    return 0;
}
