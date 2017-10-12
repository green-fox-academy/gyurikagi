#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char expr[20];
    int index = 0;

    // Give me an expression
    printf("Give me an expression! (max length:20 character) \n");

    //hold this expression in an array - named expr
    char character = getchar();
    while (character != '\n') {
		expr[index] = character;
		index++;
		character = getchar();
	}
	expr[index] = 0;
    // print exp, and exp backwards
    printf("Polindrome is the next:\n");

    int length = strlen(expr);
    for (int i = 0; i < length; ++i) {
        printf("%c", expr[i]);
    }
    for (int j = length-1; j >= 0; --j) {
        printf("%c", expr[j]);
    }
    printf("\n");

    //print new exp


    return 0;
}
