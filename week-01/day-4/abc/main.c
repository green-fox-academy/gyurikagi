#include <stdio.h>
#include <stdlib.h>

//writing ABC with loop like this : aAbBcC...zZ

int main()
{
    char c = 'a';

    for(c;  c <= 'z'; ++c)

      printf("%c%c", c , c-32);

	return 0;
}
