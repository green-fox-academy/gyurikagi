#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = rand() % 100 + 1;
    int counter = 0;
    int guess = 0;
    // scan a number
    printf("I've the number between 1-100. You have 5 lives.\n");
    scanf("%d", &guess);
    // scan solutions and compare with number
    while  (counter < 5) {
    if (guess < number) {
        printf("Too low. You have %d life. give me a number\n", 5-counter);
        counter++;
        scanf("%d", &guess);
    } else if  (guess > number) {
        printf("Too high. You have %d life. give me a number\n", 5-counter);
        counter++;
        scanf("%d", &guess);
    }
    else {printf("Congratulation! You won!");
    break;}
    }
    //answer, when you lost
    if (counter == 5) {printf("You lost");}

    return 0;
}
