#include <stdio.h>
#include <math.h>

typedef struct complex
{
    float real;
    float imag;
} complex;

struct complex addition (complex, complex);
struct complex substraction (complex, complex);
struct complex multiplication (complex, complex);
//TODO: create 3 functions, which calculates the sum, subtraction and multiplication of a complex number.
// you can read about complex number's operations here: https://www.mathsisfun.com/numbers/complex-numbers.html

int main()
{
    complex n1, n2;
    n1.real = 5;
    n1.imag = 7.2;

    n2.real = 6;
    n2.imag = 8.1;

    printf("Additional is %.2f + %.2fi\n", (addition(n1, n2)).real, (addition(n1, n2)).imag);
    printf("Substraction is %.2f + %.2fi\n", (substraction (n1, n2)).real, (substraction (n1, n2)).imag);
    printf("Multiplication is %.2f + %.2fi\n", (multiplication(n1, n2)).real, (multiplication(n1, n2)).imag);
    return 0;
}


struct complex substraction (complex num1, complex num2){
    complex num3 ;
    num3.real = (num1.real - num2.real);
    num3.imag = (num1.imag - num2.imag);
    return num3;
}


struct complex addition (complex num1, complex num2){
    complex num3 ;
    num3.real = (num1.real + num2.real);
    num3.imag = (num1.imag + num2.imag);
    return num3;
}

struct complex multiplication (complex num1, complex num2){
    complex num3 ;
    num3.real = (num1.real * num2.real + num1.imag * num2.imag);
    num3.imag = (num1.real * num2.imag + num1.imag * num2.real);
    return num3;
}
