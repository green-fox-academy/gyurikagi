#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int make_array (int *a, unsigned int lengt){
    for (int i = 0; i < lengt; i++) {
        a[i] = rand()%100;
        printf("%d | ", a[i] );
    } return a;
}

int sort_of_element (int *b, unsigned int length) {
    for (int i = 0; i < length; ++i) {
        for (int j = i+1; j < length; j++){
            if (b[i] > b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
                }
            }
        } return b;
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
   make_array (array, ln);
   sort_of_element (array, ln);
   printf("\n");
   for (int i = 0; i < ln; i++) {
        printf("%d | ", array[i] );
    }


    return 0;
}
