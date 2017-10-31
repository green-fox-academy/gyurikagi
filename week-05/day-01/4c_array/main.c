#include <stdio.h>
#include <stdlib.h>

/*
 * Create 9 arrays of characters, each should contain a word.
 * Let it be this: The Quick brown Dog jumps over the Lazy Fox.
 * Create an array of 9 pointers of chractrer type.
 * Make it so, that each pointer points to one of the words. Meaning to one of the original arrays You just created.
 * So You'll have a pointer pointing to each of these original arrays in an array of pointers.
 * Print them out, each in a new line using this array of pointers.
 * Now make it so, that the Fox is Green and he jumps over the lazy dog.
 * Use the existing arrays to achive this.
 * Print it out again.
 */

int main()
{
    char word1[] = "The";
    char word2[] = "Quick";
    char word3[] = "brown";
    char word4[] = "dog";
    char word5[] = "jumps";
    char word6[] = "over";
    char word7[] = "the";
    char word8[] = "lazy";
    char word9[] = "fox";

    char *p_word[9];
    p_word[0] = word1;
    p_word[1] = word2;
    p_word[2] = word3;
    p_word[3] = word4;
    p_word[4] = word5;
    p_word[5] = word6;
    p_word[6] = word7;
    p_word[7] = word8;
    p_word[8] = word9;

    for (int i = 0; i < 9; i++){
        printf("%s\n", p_word[i]);
    }
    printf("\n");
    p_word[3] = word9;
    p_word[8] = word4;

    for (int i = 0; i < 9; i++){
        printf("%s\n", p_word[i]);
    }
   return 0;

}
