#include <stdio.h>
#include <stdlib.h>

int main()
{
    char expression1[255];
    char expression2[255];

    //cleaning expression1 array
     for(int i = 0; i < 255; ++i){
            expression1[i] = '\0';
        }

    //cleaning expression2 array
     for(int i = 0; i < 255; ++i){
            expression2[i] = '\0';
        }
    // Give me your first expression and press enter
    printf("\n Give me your first expression and press enter!\n");
    //Put this expression in an array name is expression1
    int index1 = 0;
	char character1 = getchar();
	while (character1 != '\n') {
		expression1[index1] = character1;
		index1++;
		character1 = getchar();
	}
	expression1[index1] = 0;

    // Give me your second expression and press enter
    printf("\n Give me your second expression and press enter!\n");
    //Put this expression in an array name is expression1
    int index2 = 0;
	char character2 = getchar();
	while (character2 != '\n') {
		expression2[index2] = character2;
		index2++;
		character2 = getchar();
	}
	expression2[index2] = 0;
    //sort expression1

    //sort expression2

    //compare sorted expressions ( if statement - write the answer
    return 0;
}
//make a function sorting expression
//void sort_expression ()
