#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    //TODO:
    // Get the user's name with gets
    puts("What is your name? ");
    gets(buffer);
    //TODO:
    // Print it out with puts
    printf("You are ");
    puts(buffer);
    printf("\n");
    //TODO:
    // Get the user's pet name with getch
    printf("What is your pet's name? Push Enter, when you finished typing");
    int i = 0;
    char character = getch();
    while (character != '\r') {
		buffer[i] = character;
		i++;
		character = getch();
    }
    buffer[i] = 0;
    printf("Your pet's name: ");
    puts(buffer);
    //TODO:
    // Print it out

    return 0;
}
