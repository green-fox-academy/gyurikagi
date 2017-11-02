#include <stdio.h>
#include <stdlib.h>
int sum(void); //function declaration


int main()
{
    printf("The sum of two number is : %d", sum());
    //print out your sum
    return 0;
}
int sum(void) // function definition
{
    int a=10000;
    int b=20000;

    return a + b;
}


/*
//---------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b);
int main()
{
    //get two number with scanf
    //calculate their sum with the function
    return 0;
}
int sum(int a,int b)
{
    //it should return with the sum
    return ;
}
//---------------------------------------------------------------------------------------------------------------------
write a function which calculate and print!! the factorial (n!) (define N to 5 at first, 5! is 120)
//---------------------------------------------------------------------------------------------------------------------

*/
