#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"

void printer ();
// Create a function called `printer`
// which prints the input parameters
// can have multiple number of arguments
// store your variables in a .h file

int main()
{
    printer (NUM1, NUM2);
    return 0;
}

void printer (int num1, int num2) {
    printf("%d * %d equal to %d", NUM1, NUM2, NUM1*NUM2);}
