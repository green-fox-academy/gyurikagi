#include <stdio.h>

 /*
 + * Create a function that prints out the fist "N" positive odd numbers.
 + * It should take the "N" number as a parameter, and print the output to the console.
 + *
 + * The output should look like this for 5 as parameter:
 + *   1, 3, 5, 7, 9
 + *
 + * Non-positive "N" numbers should be treated as errors, handle it!
 + */

 void odd_numbers(int);

 int main() {

    int n_number = 0;
   // int first_odd_number = 1;
    printf("Please give me a positive number to print odd numbers. ");
    scanf("%d", &n_number);
    odd_numbers(n_number);
   return 0;
 }

 void odd_numbers(int a) {
    int first_odd_number = 1;
    if (a > 0) {
    for (int i = 0; i < a; i++) {
        printf("%d,  ", first_odd_number);
        first_odd_number = first_odd_number + 2;
    }
    } else printf("Please add a positive number!");
 }
