#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int make_array (int *a, unsigned int ln){
    for (int i = 0; i < ln; i++) {
        a[i] = rand()%100;
        printf("%d | ", a[i] );
    } return a;
}
/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */
int main()
{
    int array[5];
    srand(time(NULL));

   unsigned int ln = sizeof(array)/sizeof(array[0]);

   make_array ( array, ln);

   /* for (int i = 0; i < ln; i++) {
        array[i] = rand()%100;
        printf("%d | ", array[i] );
    } */



    return 0;
}
