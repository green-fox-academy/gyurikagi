#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{
    int a = 179;
    int b = 371;
    if (!(a%2)) {
        for (a; a < b+1; a += 2)
        {
            printf("%d\n", a+1);
        }
    } else { for (a+1; a < b + 1; a += 2) {
        printf("%d\n", a);}
         }

	return 0;
}
