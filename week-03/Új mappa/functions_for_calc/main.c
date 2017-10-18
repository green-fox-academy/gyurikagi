#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    int number1 = 0;
    int number2 = 0;
    int op = 0;

    start_screen();
   // give_numbers_and_operator (number1, op, number2);
    scanf("%d", &number1);
    scanf("%d", &op);
    scanf("%d", &number2);
    printf("%d, %d, %d", number1, op, number2);

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
