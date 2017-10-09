#include <stdio.h>
#include <stdlib.h>
#include "parameters.h"

// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file
int add_numbers ();
int main()
{
    printf("%d + %d + %d equal to %d", NUM1, NUM2, NUM3, add_numbers(NUM1, NUM2, NUM3));
    return 0;
}

int add_numbers (int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
