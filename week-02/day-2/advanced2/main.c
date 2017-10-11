#include <stdio.h>
#include <limits.h>

int main()
{
	int number_array[8] = {48, 59, 2, -8, 55, 56, 78, 12};
    int max = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < 7; i++)
    {
         if (max < number_array [i]) {
            max2 = max;
            max = number_array [i];
         }
    }
    printf("The largest element is %d, second largest is %d\n", max, max2);
	//TODO:
	// Write a C program to find the two largest element in an array using only 1 for loop
	// From <limits.h> use INT_MIN: this is the least integer

	return 0;
}
