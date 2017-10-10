#include <stdio.h>

int main()
{
    int arr[50];
    int lengt_of_array = 0;
    printf("Give me the size of array: ");
    scanf("%d", &lengt_of_array);

    for (int j = 0; j <lengt_of_array; j++) {
        arr [j] = rand();
    }
    for (int i = 0; i < lengt_of_array; i++) {
        printf("%d,\t", arr[i]);
    }


    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting

    return 0;
}
