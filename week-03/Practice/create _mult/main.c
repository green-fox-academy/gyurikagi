#include <stdio.h>

 /*
 + * Create a function that prints a multiplication table with a given base number.
 + * It should take the base number as a parameter, and print the output to the console.
 + *
 + * The output should look like this for 5 as base:
 + *   1 * 5 = 5
 + *   2 * 5 = 10
 + *   3 * 5 = 15
 + *   4 * 5 = 20
 + *   5 * 5 = 25
 + *   6 * 5 = 30
 + *   7 * 5 = 35
 + *   8 * 5 = 40
 + *   9 * 5 = 45
 + *   10 * 5 = 50
 + *
 + * Non-positive base numbers should be treated as errors, handle it!
 + */

 int main() {

    int base = 0;

    printf("Give the base of multiplication table: ");
    scanf("%d", &base);

    multiple_table (base);

   return 0;
 }

 void multiple_table (int a) {
    if (a > 0) {
    for (int i = 1; i < 11; i++){
        printf("%d\t *\t %d\t = %d\n", i, a, i*a);
    }
    }
    else printf("Please add positive base");
 }
