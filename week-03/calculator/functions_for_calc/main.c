#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "functions.h"

int main()
{
    char input [45];
    char number1 [15];
    char number2 [15];
    char op [15];

    start_screen();

    do {
    //give_numbers_and_operator (number1, op, number2);
        int x = 0;
        int index = 0;
        char character = getchar();
        while (character != '\n') {
            input[index] = character;
            index++;
            character = getchar();

          /* if ((character !='37') || (character !='42') || (character !='43') || ('46'>= character) || ('57' <=character <='97') || (character >='122'))
               { set_cursor_pos(x);
                printf(" = Bad character input");
                y++;
                break;} */

        }
        input[index] = '\0';

        x = strlen(input);

        if ((strcasecmp(input, "exit") == 0)) {
            printf("Have a nice day!");
            exit(0);}
        else if ((strcasecmp(input, "clear") == 0)) {
           clear_screen ();
           y = 0;}
        else if ((strcasecmp(input, "help") == 0)){
           start_screen ();
           y = 0;}
        else
        {   strcpy(number1, strtok(input , " "));
            strcpy(op, strtok(NULL , " "));
            strcpy(number2, strtok(NULL , " "));

            double num1 = strtod(number1, NULL);
            double num2 = strtod(number2, NULL);
            int numb1 = atoi(number1);
            int numb2 = atoi(number2);

            if (strcasecmp(op, "+") == 0) {
                set_cursor_pos(x);
                addiction(num1, num2);
                y++;}
            else if  (strcasecmp(op, "-") == 0) {
                set_cursor_pos(x);
                substraction (num1, num2);
                y++; }
            else if ((strcasecmp(op, "*") == 0)) {
                set_cursor_pos(x);
                multiplication (num1, num2);
                y++;}
            else if ((strcasecmp(op, "/") == 0)) {
                set_cursor_pos(x);
                division (num1, num2);
                y++; }
            else if ((strcasecmp(op, "^") == 0)) {
                set_cursor_pos(x);
                squaring (num1, num2);
                y++;}
            else if ((strcasecmp(op, "<") == 0)) {
                set_cursor_pos(x);
                square_root (num1, num2);
                y++;}
            else if ((strcasecmp(op, "%") == 0)) {
                set_cursor_pos(x);
                division_with_remainder (num1, num2);
                y++;}
            else if ((strcasecmp(op, "log") == 0)){
                set_cursor_pos(x);
                logarithm  (num1, num2);
                y++;}
            else if ((strcasecmp(op, "binto") == 0)) {
                set_cursor_pos(x);
                binaryto ( number1, num2);
                y++;}
            else if ((strcasecmp(op, "hexto") == 0)) {
                set_cursor_pos(x);
                hexadecto(number1, numb2);
                y++;}
            else if ((strcasecmp(op, "decto") == 0)) {
                set_cursor_pos(x);
                decimalto (number1, numb2);
                y++;}
            else {
                set_cursor_pos(x);
                printf("= Invalid operands.");
                y++;}
            }
        }
        while (strcmp(input, "exit") != 0);

    // error handling
        // érvénytelen karakterek
        // spacek helye


    return 0;
}
