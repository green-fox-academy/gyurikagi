#include <math.h>
#include <stdio.h>



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
//-------------------------------------//

void addiction (double a, double b){
  printf("%f\n", a + b);
}


 void substraction (double a, double b){
  printf("%f\n", a - b);
 }




 void multiplication (double a, double b){
     printf("%f\n", a * b);
 }


 void division (double a, double b){
    printf("div is %f\n", a / b );
    }

void squaring (double a, double b) {
    printf("%f\n", pow(a,b));
    }

void square_root (double a, double b) {
    printf("%f\n", pow(a,(1/b)));
    }

void division_with_remainder ( double a, double b) {
    printf("%f\n", fmod(a, b));
    }

void logarithm  (double a, double b) {
    printf("%f\n", log10(b)/ log10(a));
    }

void clear_screen ()
{
    system ("cls");
}

//---------------------------------------------//
