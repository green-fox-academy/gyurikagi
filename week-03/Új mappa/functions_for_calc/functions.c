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

int give_numbers_and_operator (int a, int b, int c)
{
    int first_number (int a )
    {scanf("%d", &a);
        return a;}
    int operator_needed ( int b){
        scanf("%d", &b);
        return b;}
    int second_number (int c) {
        scanf("%d", &c);
    return c; }
}

//----------------------------------------------//

void clear_screen ()
{
    system ("cls");
}

//---------------------------------------------//
