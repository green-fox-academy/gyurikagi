#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number  = 0;
    int index = 0;
    int helper = 0;
    int helper2 = 0;
    double armstrong = 0;
    // give me a number
    printf("Give me a number!\n");
    scanf("%d", &number);

    // count characters in this number
    do {
        pow(10, index);
        index++;
    } while ( pow(10, index) <= number);

    // calculate "Armstrong number"

    for (int j = 0; j < index; ++j)
    {
        helper = (number/pow(10, j));
        helper2 = helper%10;
        armstrong = armstrong + pow(helper2, index);
    }
    // compare your number with "armstrong" number
        if (number == armstrong) {
            printf("Your number is an Armstrong number");
        } else printf("Your number is not an Armstrong number");

    return 0;
}
