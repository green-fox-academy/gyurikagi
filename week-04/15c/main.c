#include <stdio.h>

void reverse_name(char *name, char *reversed_name){
    int i = 0;
    for ( i = 0; name[i] !=' '; i++)
    printf("%d", i);


}

int main(void)
{
	char name[] = "Gipsz Jakab";

    char reversed[50];

    reverse_name(*name,*reversed);

    //write a function which reverse a name's last name and first name. Use a void function. Put your 'return' value in the second parameter.

}
