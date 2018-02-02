#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_expression (char str[]);
void anagram_exam(char base[], char second[]);
char clean_char_array(char word[]);



int main()
{
    char expression1[255];
    char expression2[255];

    //cleaning expressions
    clean_char_array(expression1);
    clean_char_array(expression2);

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

    //compare sorted expressions ( if statement - write the answer
    anagram_exam(expression1, expression2);

    return 0;
}
//make a function sorting expression
void sort_expression (char str[])
{
    int temporary = 0;
    int length = strlen(str);

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            if (str[i] < str[j]) {
                temporary = str [i];
                str [i] = str [j];
                str [j] = temporary;
            }
        }
    }

}
// this function examine, that two string is an anagram or not
void anagram_exam(char base[], char second[])
{   //first short expressions
    sort_expression (base);
    sort_expression(second);
    if (strcmp(base, second) == 0 ) {
        printf("This is Anagrama");
        } else {
        printf("This is not Anagrama");
        }
}

char clean_char_array(char word[])
{
    for(int i = 0; i < sizeof(word); ++i){
        word[i] = '\0';
        }
    return word;
}

