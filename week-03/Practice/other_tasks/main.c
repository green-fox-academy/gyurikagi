#include <stdio.h>


char is_prime(int);

int main()
{
    int number;

    printf("Please enter a number.\n");
    scanf("%d", &number);

    if (is_prime(number) == 2)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

	return 0;
}

char is_prime(int num)
{
    int counter = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            counter++;
    }

    if (counter == 2)
        return 2;
}


/*
Write a program in C to check whether a number is a prime number or not using the function.
example :
Input a positive number : 5
Expected Output :

The number 5 is a prime number. */
