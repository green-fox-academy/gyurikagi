#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int number_of_solders = 0;

    printf("Give me the number of people:\n");
    scanf("%d", &number_of_solders);
    int i = 0;

    do {
        pow(2, i);
        i++;
    } while ( pow(2, i) <= number_of_solders);

   // int winner = (number_of_solders - index)*2+1;
    if (pow(2, i-1) == number_of_solders) {
        printf("The survivor is the first one");
    } else {
        int winner = (number_of_solders - pow(2, i-1))*2+1;
        printf("The survivor is %d", winner);}

    return 0;
}
