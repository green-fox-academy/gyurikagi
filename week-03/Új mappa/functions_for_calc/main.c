#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    float number1 = 0.0f;
    float number2 = 0.0f;
    int op = 0;

    start_screen();
    //give_numbers_and_operator (number1, op, number2);

    scanf("%f", &number1);
    scanf("%c", &op);
    scanf("%f", &number2);
    printf("number 1 is %f, operator %c, num2 is %f", number1, op, number2);

    //if op == '+'



    // adatbekérés

    // megnézni, melyik parancssort adta be és ez alapján döntési fa

    //clear paranccsal törlés

    //szorzás
    //osztás
    //összeadás
    //kivonás
    //négyzetre emelés
    // négyzetgyök
    // maradékos osztás
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
