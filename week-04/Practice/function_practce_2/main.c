#include <stdio.h>
#include <stdlib.h>


int sum(int a, int b);


int main()
{   int num1 = 0;
    int num2 = 0;

    printf("Give me two numbers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("The sum of 2 number is %d", sum(num1, num2));

    //get two number with scanf
    //calculate their sum with the function
    return 0;
}
int sum(int a,int b)
{
    //it should return with the sum
    return a + b;
}

