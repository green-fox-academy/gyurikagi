#include <stdio.h>
#include "functions.h"


/*
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on a given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/

int main()
    {
        int n = give_an_integer ();
        num_plus_ten (n);
        num_minus_ten(n);
        multiple_four (n);
        multiple_two (n);
        return 0;
    }
