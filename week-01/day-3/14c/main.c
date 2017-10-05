#include <stdio.h>

/*
modify the previous program to print the table reverse order
for example:
Fahrenheit       Celsius
300               148.9
280               137.8
260               126.7
240               115.6
...
print out at least 10 lines
*/

int main() {
    for (float f = 300; f > 110; f=f-20)
    {
         float b = ((f-32)/9*5);
    printf("%.0f Fahrenheit equal to %.2f celsius\n", f, b);
    }
	return 0;
}
