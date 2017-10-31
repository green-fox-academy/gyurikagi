#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Create a function that takes two arrays of characters and a number.
 * It should replace the contents of the first array from the given index
 * with the contents of the second array.
 * The function should return a number which tells whether it was successful:
 *    * If all is right it should return 0.
 *    * If the index is out of bounds it should return -1.
 *    * If the inserted content would be longer than the receiving array it should return 1 and leave the array as it is.
 * IMPORTANT: Think about what kind of arguments You need to make this happen and craft the function accordingly.
 *
 * Write code in the main function to test all scenarios and write out the result You need to check whether this works.
 */

 char *new_expression (char *orig, int ln1, char *second, int ln2, int num);

int main()
{   char exp1[] = "Hello sweatheart! You are my best one!";
    char exp2[] = "badabumm";
    int number = 0;
    int ln1 = strlen(exp1);
    int ln2 = strlen(exp2);

    printf("2 original expressions is:\n ");
    for (int i = 0; i < ln1; i++) {
        printf("%c", exp1[i]);
    }
    printf("\n");
     for (int i = 0; i < ln2; i++) {
        printf("%c", exp2[i]);
    }

    printf("\nGive me a number:");
    scanf("%d", &number);

    new_expression (exp1, ln1, exp2, ln2, number);

   /* if (number > ln1)
        return -1;
    else if ((number + ln2) > ln1)
        return 1;
    else {
        for ( int i = 0; i < ln2; i++) {
           strcpy(exp1[number + i], exp2[i]);
        }
    } */

     printf("\n ");
     for (int i = 0; i < ln1; i++) {
        printf("%c", exp1[i]);
    }

    return 0;
}
char *new_expression (char *orig, int ln1, char *second, int ln2, int num){
    if (num > ln1)
        return -1;
    else if ((num + ln2) > ln1)
        return 1;
    else {
       for (int i = 0; i < ln2; i++) {
           orig[i + num] = second[i];

        } return orig;
    }
}
