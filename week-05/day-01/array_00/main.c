#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers _in_the_array_ an print them out again.
 */
int main()
{
    int array [5];
    srand(time(NULL));
    int size = (sizeof(array)/sizeof(array[0]));
    for (int i = 0; i < size; i++){
        array[i] = (rand()%100);
        printf("%d | ", array[i]);

    } printf("\n");


    for (int i = 0; i <= size/2-1; i++){
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    for (int i = 0; i < size; i++){
        printf("%d | ", array[i]);
    }

    return 0;
}
