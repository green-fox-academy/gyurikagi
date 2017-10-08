#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{
    int a = 180;
    int b = 371;
    int counter = 0;
    if (a%2!=0) {
        for (int a1 = a; a1 < b+1; a1 += 2)
        {
            printf(" páros %d\n", a1);
            counter ++;

        }
    } else { for (int a2 =a+1; a2 < b + 1; a2 += 2) {
        printf("%d\n", a2);
        counter ++;}
         }
    printf("this is %d odd number between %d and %d", counter, a, b);
	return 0;
}
