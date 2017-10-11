#include <stdio.h>
#include <stdlib.h>
#include "variables.h"

void greet ();

// define a variable and assign the value `Greenfox` to it in a .h file
// create a function called `greet` that greets it's input parameter
// define more names to greet, call the function multiple times

int main()
{
    greet (STR1);
    greet(STR2);
    greet (STR3);
    return 0;
}

void greet (int var)
{
    printf("Hello %s!\n", var );
}
