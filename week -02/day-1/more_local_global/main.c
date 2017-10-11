#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

int tom_money = 2000;
int mark_money = 3500;
int jerry_money = 1200;

//function for total money
int total_money ()
{
    int total_money = tom_money + mark_money + jerry_money;
    return total_money;
}


int can_they_buy_a_new_tv()
{
    int tv_price = 6950;

    if (total_money()>= tv_price) {
        printf("You can buy the tv, and remainder is %d $\n", total_money()-tv_price);
    }
    else { printf("You need %d $\n", tv_price-total_money());
    }
    return 0;
}

    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it

int can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;

    int cost_of_cake = milk + chocolate + flour + egg + sugar + salt + oven_shape + cream;

    if (total_money()>= cost_of_cake) {
        printf("You can make a cake and total remainder is:  %d $. Everybody pay %d $\n", total_money()-cost_of_cake, cost_of_cake/3);
    } else {printf("You need more money: %d", cost_of_cake-total_money());
    }
    return 0;
    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

int can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;

    int cost_of_breakfast = milk + egg + salt + ham + onion +spice;

    if (total_money() >= cost_of_breakfast) {
        printf("You can make breakfast and total remainder is:  %d $. Everybody pay %d $\n", total_money()-cost_of_breakfast, cost_of_breakfast/3);
    } else {printf("You need more money: %d\n", cost_of_breakfast-total_money());}
    return 0;
    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

//is there any local or global variables we did not use well?
//are we using functions correctly?

int main()
{
    printf("Total money: %d\n", total_money());
    can_they_buy_a_new_tv();
    can_they_make_a_cake();
    can_they_make_ham_and_eggs();
	return 0;

}
