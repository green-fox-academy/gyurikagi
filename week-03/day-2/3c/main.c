#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 54325;
    char buffer[20];
    itoa(a, buffer, 2);
    printf("Binary value of %d = %s\n", a, buffer);

    itoa(a, buffer, 10);
    printf("Decimal value of %d = %s\n",a, buffer);

    itoa(a, buffer, 16);
    printf("Hexadecimal value of %d = %s\n",a, buffer);


    //TODO: make an integer to string conversion with itoa(), first in binary, then decimal format
    // Store the string in buffer

    return 0;
}
