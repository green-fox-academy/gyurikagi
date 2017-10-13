#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static double armstrong = 0;

int main()
{
    int number  = 0;
    int index = 0;
    double helper = 0;
    // give me a number
    printf("Give me a number!\n");
    scanf("%d", &number);

    // count caharacter in this number
    do {
        pow(10, index);
        index++;
    } while ( pow(10, index) <= number);
    printf("Your number has %d digits", index);
    // calculate "Armstrong number"

    for (int j = 0; j <= index; ++j)
    {
        helper = (number/pow(10, j))%10;
        armstrong = pow(helper, index);

    }



    return 0;
}
