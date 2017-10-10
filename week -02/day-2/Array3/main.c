#include <stdio.h>
#include <string.h>


int main() {
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73};
    printf("the content of int_array: %d, %d, %d, %d, %d.\n", int_array[0], int_array[1],int_array[2],int_array[3], int_array[4]);
	printf("the content of float_array");
    for (int i = 0; i < 4; i++) {
        printf("%.3f ", float_array[i]);
    }
	//TODO:
    // Print out the content of the arrays

    return 0;
}
