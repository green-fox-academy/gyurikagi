#include <stdio.h>
#include <stdlib.h>

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
    int amount_of_money = 57549;
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
    return 0;
}
