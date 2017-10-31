#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.*/
int* make_array (int *a, unsigned int lengt)
{
    for (int i = 0; i < lengt; i++)
    {
        a[i] = rand()%100;
        printf("%d | ", a[i] );
    }
    return a;
}

int *sort_of_element(int *b, unsigned int lengt, int *a)
{
    for (int i = 0; i < lengt; i++)
    {
        a[i] = b [i];
    }
    for (int i = 0; i < lengt; i++)
    {
        for (int j = i+1; j < lengt; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

/*
* Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
* The function should return the index of the number when found or -1 if it's not part of the array.
* IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
*/

int find_a_number(int *a, unsigned int lengt, int num)
{
    for (int i = 0; i < lengt; i++)
    {
        if (a[i] == num)
        {
            printf("The searched number (%d) is %d element of array2", num, i+1);
            return i;
        }
    }
    printf("The searched number (%d) is not on the array2", num);
    return -1;

}




/*
* In the main function create an unsorted array filled with random numbers, Make it 50 long.
* Try 2 scenarios:
*    * In the first: You pick a random element in the unosrted array and check at which index it is after the array is sorted.
*    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
* Print out what You need to check these.
*/



int main()
{
    int array[5];
    int array2[5];
    int number = 0;
    srand(time(NULL));

    unsigned int ln = sizeof(array)/sizeof(array[0]);
    make_array (array, ln);

    sort_of_element (array, ln, array2);

    printf("\n");
    for (int i = 0; i < ln; i++)
    {
        printf("%d | ", array2[i] );
    }
    printf("\n Give me a number ");
    scanf("%d", &number);
    printf("searching number: %d\n", number);
    find_a_number(array2, ln, number);
    return 0;
}
