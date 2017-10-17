#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	float val;
	char str[5];
	strcpy(str, "3.14");
    val = atof(str);
    printf("%s\n", (int)str);
    printf("%f", val);

	//TODO: print out the value of pi, first as a string, then a float value.

	return(0);
}
