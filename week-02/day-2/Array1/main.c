#include <stdio.h>
#include <string.h>

int main() {
    char my_name_array[] = "My name";
    printf("What is your name?\n");
    gets(my_name_array);

    for (int i = 0; i <= strlen(my_name_array); i++){
        printf("%c\n", my_name_array[i]);
    }
	//TODO:
    // Print out the array character-by-character

    return 0;
}
