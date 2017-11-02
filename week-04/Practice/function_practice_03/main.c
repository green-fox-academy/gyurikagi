#include <stdio.h>
#include <stdlib.h>


/*
//---------------------------------------------------------------------------------------------------------------------
write a function which calculate and print!! the factorial (n!) (define N to 5 at first, 5! is 120)
//---------------------------------------------------------------------------------------------------------------------

*/
int factorial_with_recursion(int);

int main()
{   int number = 0;
    printf("Give me a number:");
    scanf("%d", &number);
    factorial_with_recursion(number);

    return 0;
}

int factorial_with_recursion(int num) {

    int result = 1;   // show error if the user enters a negative integer
    if (num > 0)
        {
            for (int c = 1; c <= num; c++ ) {
                result = result * c;
            }
            printf("Factorial of %d = %d without recursion\n", num, result);
        }
       else {
        printf("Error! Factorial of a negative number doesn't exist.");
       }
    return result;
}
