#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f_array[10] = {5.6, 8.73, 0.15, 0.99, 1.5, 6.3589, 10.01, -33.0, 0, 15};
    int i_array[10];

    for (int i = 0; i < 10; i++) {
        i_array[i] = f_array [i];
        printf(" %d element of the array is %d\n", i, i_array[i]);
    }

	//TODO: write a program, which copies the values from the given array to an integer array
    //print out the elements of the integer array, with the "%d" format specifier
    //what do you see?

    return 0;
}
