#include <stdio.h>

/*
create a program which converts the fahrenheit to celsius
the output should look like this:
Fahrenheit       Celsius
  0               -17.8
 20                -6.7
 40                 4.4
 60                15.6
...
print out at least 10 lines
*/

int main() {
    //float a = 0;
    for (float a = 0; a<200; a=a+20)
    {
       float b = ((a-32)/9*5);
    printf("%.0f Fahrenheit equal to %.2f celsius\n", a, b);
    }

	return 0;
}
