#include <stdio.h>

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter it returns -1.
 */

 int get_fibonacci_number (int);

 int fib[51];


 int main() {

     for (int i = 0; i < 51; i++) {
        fib[i] = -1;
     }
    int number = 0;

    printf("Please give me a number\n");
    scanf("%d", &number);

    printf("The %dth fibonacci number is %d", number, get_fibonacci_number (number));

   return 0;
 }

int get_fibonacci_number(int number)
{
    if (number < 0){
        return -1;
    } else {
        if (number == 0)
            return 0;

        else if (number == 1){
            return 1;
        }
        else if (number == 2){
            return 1;}
        else{
           int a = 0;
           int b = 1;
           int c = 0;
           int counter = 0;
        while (counter != number - 1) {
            a = b;
            b = c;
            c = a + b;
            counter++;
        }
        return c;
    }
    }
}
