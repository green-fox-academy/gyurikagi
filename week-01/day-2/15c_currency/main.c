#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a program which can tell how to pay an exact amount of money
for example 45670 Ft, is the amount (store this as an integer)
and the output should be:
2-20000Ft
1-5000Ft
1-500Ft
1-100Ft
1-50Ft
1-20Ft
*/

/*
Take care of the rounding (when giving back 5 coins):
1, 2 - 0 down
3, 4 - 5 up
6, 7 - 5 down
8, 9 - 0 up
*/

int main()
{
    int amount_of_money = 57547;
        int rounded_amount = (amount_of_money%10);
    //printf("%d", rounded_amount);
    {
    switch (rounded_amount) {
    case 1 : amount_of_money= amount_of_money-1;
        break;
    case 2 : amount_of_money = amount_of_money - 2;
        break;
    case 3 : amount_of_money = amount_of_money + 2;
        break;
    case 4: amount_of_money = amount_of_money + 1;
        break;
    case 6 : amount_of_money =  amount_of_money - 1;
            break;
    case 7 : amount_of_money = amount_of_money - 2;
        break;
    case 8 : amount_of_money =  amount_of_money +2;
        break;
    case 9 : amount_of_money =  amount_of_money + 1;
        break;}
        printf("%d", amount_of_money);


    }

   /* do {
        rest20th = amount_of_money%20000;
        printf("You can pay with %d * 20 000\n", amount_of_money/20000);

    }

    if (amount_of_money%20000==0) {
        printf("you will pay %d * 20 000", amount_of_money%20000);
    } else {
        amount_of_money = amount_of_money%20000;
        if (amount_of_money%10000==0) {
            printf("you will pay %d * 20 000, %d * 10 000", amount_of_money/20000, (amount_of_money-(amount_of_money/20000))%10000);
        } else {printf("Yoo need more");}
    }
*/
    return 0;
}
