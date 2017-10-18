void start_screen ()
{
 printf("\t \CLI Calculator \n \
====================================\n\
usage: [number] [operation] [number]\n\
Commands:\n\
 +	summation\n\
 -	subtraction\n\
 *	multiplication\n\
 /	division\n\
 %	division with remainder\n\
 ^	squaring\n\
 <	square root\n\
 log	logarithm\n\
 binto	binary to hex or dec\n\
 hexto	hexadecimal to bin or dec\n\
 decto	decimal to bin or hex,\n\
 ====================================\n\
 exit	exiting from the program\n\
 clear	clear the screen\n\
 help	print usage\n\
 ==================================== \n\
 Hit enter to start!\n\
 ==================================== \n\
This program only work with two numbers\n");
}

/*
int give_numbers_and_operator ()
{
    int index = 0;
    char character = getchar();
    while (character != 32) {
        string[index] = character;
		index++;
		character = getchar();
    }
    string[index] = '\0';
}

    char *pch;
    pch = strtok(string, " ");
    while (pch != NULL)
    {
        printf("%s\n", pch);
        pch = strtok(NULL, " ");
    } */

//----------------------------------------------//

void clear_screen ()
{
    system ("cls");
}

//---------------------------------------------//
