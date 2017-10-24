#include <stdio.h>
#include <string.h>

void string_copy(char *new_string, char *source) {
    strcpy(new_string, source);
    printf("%s", new_string);
}

int main()
{
    char my_string[] = "to be copied";
    char dest[50];

   //TODO: write a function, which copies a string to the 'dest' array, then print out in string format.
    string_copy(dest, my_string);
    return 0;
}
