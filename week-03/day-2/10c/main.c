#include <stdio.h>
#include <string.h>

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    /*cleaning string
    for(int i = 0; i < 255; ++i){
        string[i] = '\0';
        }*/
    // scan the sentence
   // scanf("%s", &string);
    int index = 0;
    char character = getchar();
    while (character != '\n') {
        string[index] = character;
		index++;
		character = getchar();
    }
    string[index] = '\0';

    //printf("%s\n", string);

    char *pch;
    pch = strtok(string, " ");
    while (pch != NULL)
    {
        printf("%s\n", pch);
        pch = strtok(NULL, " ");
    }

    //TODO: write a c program which, splits a string to words by space
	//solve the problem with the proper string.h function


    return(0);
}
