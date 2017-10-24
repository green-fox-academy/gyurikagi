#include <stdio.h>

int main() {
    int number = 1234;
    //TODO:
    // print the memory address of the variable
    printf("%p\n", &number);

    //2c
    //TODO:
    // print the value of number using the "number_pointer"
    int* number_pointer = &number;
    printf("%p\n", number_pointer);

    // 3c
    //TODO:
    // update the value of number variable to 42 using the "number_pointer"
    * number_pointer = 42;
    printf("%d\n", number);


    return 0;
}
