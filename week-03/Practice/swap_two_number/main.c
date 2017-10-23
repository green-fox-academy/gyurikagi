#include <stdio.h>
#include <stdlib.h>


void swap_numbers ( int, int);
int main()
{
    int number1 = 0;
    int number2 = 0;

    printf("Please give me the first number. ");
    scanf("%d", &number1);
    printf("Please give me the second number. ");
    scanf("%d", &number2);
    swap_numbers (number1, number2);

    return 0;
}

void swap_numbers ( int a, int b) {
    printf("Before swapping: n1 = %d, n2 = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: n1 = %d, n2 = %d\n", a, b);

}
/*
Write a program in C to swap two numbers using function.
example :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4
After swapping: n1 = 4, n2 = 2
*/
