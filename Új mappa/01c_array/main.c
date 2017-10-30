#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
 * Create an array of 5 integers, fill it with random numbers.
 * Create an other of 7 integers.
 * Copy the contents of the first array into the second one in a way,
 * that the first and the last numbers of the second array are both 42,
 * and it contains all the elements of the first array.
 */
int main()
{   int arr1[5];
    int arr2[7];
    srand(time(NULL));
    printf("First array is: ");
     for (int i = 0; i < 5; i++){
        arr1[i] = (rand()%100);
        printf("%d | ", arr1[i]);
    }
    printf("\nSecond array is: ");

     for (int i = 0; i < 7; i++){
        arr2[i] = (rand()%100);
        printf("%d | ", arr2[i]);
    }
    arr2[0] = 42;
    arr2[6] = 42;
    for (int j = 0; j < 5; j++) {
        arr2[1+j] = arr1[j];
    }
     printf("\n The new second array is :");
     for (int i = 0; i < 7 ; i++)
        printf("%d | ", arr2[i]);

    return 0;
}
