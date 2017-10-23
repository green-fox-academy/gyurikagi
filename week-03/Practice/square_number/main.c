#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double square_number (double);

int main()
{
    double i = 0;
    printf("Give me a number: ");
    scanf("%lf", &i);
    printf("Square of %.f is %.f", i, square_number(i));
    return 0;
}

double square_number (double a){
    double result = pow(a, 2);
    return result;
}

/*Write a program in C to find the square of any number using the function.
example :
Input any number for square : 20
Expected Output : 400 */
