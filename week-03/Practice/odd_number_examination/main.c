#include <stdio.h>
#include <stdlib.h>


void odd_number (int);


int main()
{   int number = 0;
    printf("Give me a number: ");
    scanf("%d", &number);
    odd_number (number);
    return 0;
}

void odd_number (int a) {
    if  (a % 2 != 0)
        printf("The entered number is odd.");
    else printf("The entered number is even.");
}

/*
Write a program in C to check a given number is even or odd using the function.
example :
Input any number : 5
Expected Output :

 The entered number is odd.
*/
