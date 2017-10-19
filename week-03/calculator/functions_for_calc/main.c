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

    if ((strcasecmp(input, "exit") == 0))
        printf("no this function yet");
    else if ((strcasecmp(input, "clear") == 0))
        printf("no this function yet");
    else if ((strcasecmp(input, "help") == 0))
        printf("no this function yet");
    else if ((strcasecmp(input, "esc") == 0)) // ezt javítani!!!
        printf("no this function yet");
    else
    {
    strcpy(number1, strtok(input , " "));
    strcpy(op, strtok(NULL , " "));
    strcpy(number2, strtok(NULL , " "));

    double num1 = strtod(number1, NULL);
    double num2 = strtod(number2, NULL);

    printf(" num1: %f num2 %f\n", num1, num2);
    if (strcasecmp(op, "+") == 0)
        addiction(num1, num2);
    else if  (strcasecmp(op, "-") == 0)
        substraction (num1, num2);
    else if ((strcasecmp(op, "*") == 0))
        multiplication (num1, num2);
    else if ((strcasecmp(op, "/") == 0))
        division (num1, num2);
    else if ((strcasecmp(op, "^") == 0))
        squaring (num1, num2);
    else if ((strcasecmp(op, "<") == 0))
        square_root (num1, num2);
    else if ((strcasecmp(op, "%") == 0))
        division_with_remainder (num1, num2);
    else if ((strcasecmp(op, "log") == 0))
         logarithm  (num1, num2);

    else if ((strcasecmp(op, "binto") == 0))
        printf("no this function yet");
    else if ((strcasecmp(op, "hexto") == 0))
        printf("no this function yet");
    else if ((strcasecmp(op, "decto") == 0))
        printf("no this function yet");
    }

    //clear paranccsal törlés

    // logaritmus
    // binto - bináris -> decimálos
    //hexto hexadec -> dec
    // decto dec -> bin
    // error handling
        // nullával való osztás
        // érvénytelen karakterek
    // clear screen
    // esc - lépjen ki a programból, de addig ne

    return 0;
}
