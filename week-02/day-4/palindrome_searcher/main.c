#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // give me an expression -maybe later

    char word[] = "abbabba";
    int length = strlen(word);

    //
    for (int i = 0; i < length/2; i++)
    {
         if ( word[i] != word[length-1-i]) {
            printf("This is not palindrome\n");
            break;
         }
    }
    printf("This is a palindrome\n");



    return 0;
}
