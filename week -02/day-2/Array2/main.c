#include <stdio.h>
#include <string.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";


    for (int i = 0; i <= strlen(char_array); i++){
        printf("%c\n", char_array[i]);
    }
    for (int j= 0; j <= strlen(char_array_the_same); j++) {
        printf("%c", char_array_the_same[j]);
    }
	//TODO:
    // Print out the two arrays character-by-character

	//TODO:
    // What is the difference between the arrays?

    return 0;
}
