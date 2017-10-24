#include <stdio.h>

int my_strlen(char *string) {
  int i =0;
  for (i = 0; i < string[i] !='\0'; i++);
  return i;
}

int main()
{
	char my_string[50] = "Hello world!";
	//TODO: implement your own strlen function.

	printf("The length of string: %d", my_strlen(my_string));

	return 0;
}
