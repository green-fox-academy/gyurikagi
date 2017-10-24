#include <stdio.h>

void swap(int *a, int *b) {
    int temporary = *a;
    *a = *b;
    *b = temporary;
}

int main()
{
	int x, y;
	x = 5;
	y = 8;
 	printf("Before Swapping\nx = %d\ny = %d\n", x, y);

	//TODO: write a function which swaps the values of x and y. Then print out the values of x and y.
	swap(&x, &y);
    printf("After Swapping\nx = %d\ny = %d\n", x, y);

	return 0;
}
