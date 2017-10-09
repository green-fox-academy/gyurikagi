#include <stdio.h>
#include <stdlib.h>
#include "variables.h"

// create a function called `doubling` that doubles it's input parameter
// again the parameters value should be stored in a .h file
void doubles();

int main()
{
    doubles(NUM1);
    doubles(NUM2);
    doubles(NUM3);

    return 0;
}

void doubles (int num)
{
    printf("double of %d is %d\n", num, num*2);
}
