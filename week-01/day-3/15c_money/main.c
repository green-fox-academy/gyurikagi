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
    int amount_of_money = 57575;
    int rounded_amount = amount_of_money%10;
    int paper20th = amount_of_money - amount_of_money%20000;
  //  int paper10th = (amount_of_money - paper20th)%10000;
    // round the amount
    switch (rounded_amount) {
        case 1:
        case 6:
            amount_of_money =  amount_of_money - 1;
            break;
        case 2:
        case 7:
            amount_of_money = amount_of_money - 2;
            break;
        case 3:
        case 8:
            amount_of_money = amount_of_money +2;
            break;
        case 4:
        case 9:
            amount_of_money = amount_of_money +1;
            break;
    }
            if (amount_of_money%20000==0) {
                printf("%d - 20 000 Ft\n", paper20th/20000);
            }
            else   { printf("%d - 20 000 Ft need more\n", paper20th/20000);}


    return 0;


}
