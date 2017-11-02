#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Create a function that takes an array of array of characters and returns an array of integers each representing the
 * lenght of the given character array in the first array.
 * Say your input is this: {"Good", "Morning", "Vietnam"}
 * Your output should be this: {4, 7, 7}.
 * HINT: strings are terminated with a special character: '\0'.
 * So, "Good" as an array of characters would look like this: {'G', 'o', 'o', 'd', '\0'}.
 *
 * In the main function create code that demonstrates that Your function works approrpiately.
 */
void array_of_length(char**, int*, int);



int main()
{
    char *array[]= {"Good", "Morning", "Vietnam"};
    int length = sizeof(array)/sizeof(array[0]);
    int lengt_arr[length];
//    int *p_lengt_arr = NULL;
    printf("%d\n", length);

 /*  for (int i = 0; i < length; i++) {
        lengt_arr[i] = strlen(array[i]);
        printf("%d |", lengt_arr[i]);
   }
   printf("\n");*/
   array_of_length(array, lengt_arr, length);

    for (int i = 0; i < length; ++i){
        printf("%d |", lengt_arr[i]);
    }

    return 0;
}

void array_of_length(char *arr[], int int_array[], int ln){

    for (int i = 0; i < ln; i++) {
        int_array[i] = strlen(arr[i]);

}
}
