#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "functions.h"

int main()
{
    char input [256];
    char number1 [10];
    char number2 [10];
    char op [10];

    start_screen();

    //give_numbers_and_operator (number1, op, number2);
    int index = 0;
    char character = getchar();
    while (character != '\n') {
        input[index] = character;
		index++;
		character = getchar();
    }
    input[index] = '\0';

    strcpy(number1, strtok(input , " "));
    strcpy(op, strtok(NULL , " "));
    strcpy(number2, strtok(NULL , " "));

    double num1 = strtod(number1, NULL);
    double num2 = strtod(number2, NULL);

    printf(" num1: %f num2 %f\n", num1, num2);

    addiction(num1, num2);
    substraction (num1, num2);
    multiplication (num1, num2);
    division (num1, num2);
    squaring (num1, num2);
    square_root (num1, num2);
    //printf("Value 8.0 ^ 3 = %lf\n", fpow(num1, num2));;




    //if op == '+'



    // adatbek�r�s

    // megn�zni, melyik parancssort adta be �s ez alapj�n d�nt�si fa

    //clear paranccsal t�rl�s

    //szorz�s
    //oszt�s
    //�sszead�s
    //kivon�s
    //n�gyzetre emel�s
    // n�gyzetgy�k
    // marad�kos oszt�s
    // logaritmus
    // binto - bin�ris -> decim�los
    //hexto hexadec -> dec
    // decto dec -> bin
    // error handling
        // null�val val� oszt�s
        // �rv�nytelen karakterek
    // clear screen
    // esc - l�pjen ki a programb�l, de addig ne

    return 0;
}
