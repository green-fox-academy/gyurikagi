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

    factorial_without_recursion(NUM1);
    factorial_with_recursion(NUM1);
    printf("Factorial of %d = %d with recursion\n", NUM1, factorial_with_recursion(NUM1));
    factorial_without_recursion(NUM2);
    factorial_with_recursion(NUM2);
    printf("Factorial of %d = %d with recursion\n", NUM2, factorial_with_recursion(NUM2));
    return 0;
}
int factorial_with_recursion(int num)
{   int result = 0;
    if(num >= 1) {
       result = num * (factorial_with_recursion(num - 1));
       return result;
    } else {return 1;}
}


int factorial_without_recursion (int num)
{
    int result = 1;   // show error if the user enters a negative integer
    if (num > 0)
        {
            for (int c = 1; c <= num; c++ ) {
                result = result * c;
            }
            printf("Factorial of %d = %d without recursion\n", num, result);
        }
       else {
        printf("Error! Factorial of a negative number doesn't exist.");
       }
    return result;
}

