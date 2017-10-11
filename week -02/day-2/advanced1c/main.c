#include <stdio.h>

int main()
{   // initializing variables
    int arr[50];
    int lengt_of_array = 0;
    int deleted_element = 0;
    // ask for input
    printf("Give me the size of array: \n");
    scanf("%d", &lengt_of_array);
    // creating original array
    for (int j = 0; j <lengt_of_array; j++) {
        arr [j] = rand();
    }
    // print the original array
    for (int i = 0; i < lengt_of_array; i++) {
        printf("%d,\t", arr[i]);
    }
    //ask which element should be deleted
    printf("Delete the next element:");
    scanf("%d", &deleted_element);

    if (deleted_element > lengt_of_array) {
        printf("It is bigger than the length of array");
    }
    else

        { for (int a = 0; a < deleted_element-1; a++) {
        arr[a] = arr [a];
    }
    for (int a = deleted_element; a < lengt_of_array; a++) {
        arr [a-1] = arr [a];
    }
    //print the new array
       for (int c = 0; c < lengt_of_array-1; c++) {
        printf("%d,\t", arr[c]);
    }
    }


    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting

    return 0;
}
