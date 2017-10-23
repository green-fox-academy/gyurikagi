#include <math.h>
#include <stdio.h>
#include <windows.h>

COORD coord = {0,0};
int y = 0;

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

system("pause");
system("cls");
}


void addiction (double a, double b){
  printf(" = %f\n", a + b);
}


 void substraction (double a, double b){
  printf(" = %f\n", a - b);
 }


 void multiplication (double a, double b){
     printf(" = %f\n", a * b);
 }


 void division (double a, double b){
    if (b ==0) {
        printf(" = Division by zero is undefined!");}
    else printf(" = %f\n", a / b );
    }

void squaring (double a, double b) {
    printf(" = %f\n", pow(a,b));
    }

void square_root (double a, double b) {
    printf(" = %f\n", pow(a,(1/b)));
    }

void division_with_remainder ( double a, double b) {
    printf("%f\n", fmod(a, b));
    }

void logarithm  (double a, double b) {
    printf(" = %f\n", log10(b)/ log10(a));
    }


void binaryto(char str[], int new_base)
{  char buffer[40];
   int num_to_convert = strtol(str, NULL, 2);
   if (new_base == 10) {
        int converted_num = itoa(num_to_convert, buffer, new_base);
        printf(" = %s\n", converted_num);
   } else if (new_base == 16) {
        int converted_num = itoa(num_to_convert, buffer, new_base);
        printf(" = %s\n", converted_num);
    } else printf(" = wrong new base");
}



void hexadecto(char str[], int new_base)
{  char buffer[40];
   int num_to_convert = strtol(str, NULL, 16);
   if (new_base == 2) {
        int converted_num = itoa(num_to_convert, buffer, new_base);
        printf(" = %s\n", converted_num);
   } else if (new_base == 10) {
        int converted_num = itoa(num_to_convert, buffer, new_base);
        printf(" = %s\n", converted_num);
   } else printf(" = wrong new base");
}

void decimalto (char str[], int new_base)
{  char buffer[40];
   int num_to_convert = strtol(str, NULL, 10);
   if (new_base == 2){
        int converted_num = itoa(num_to_convert, buffer, 2);
        printf(" = %s\n", converted_num);}
   else if (new_base == 16) {
        int converted_num = itoa(num_to_convert, buffer, new_base);
        printf(" = %s\n", converted_num);}
    else printf(" = wrong new base");
    }

void set_cursor_pos(int x)
{	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clear_screen ()
{   system ("cls");
}

