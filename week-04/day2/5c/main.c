#include <stdio.h>

typedef struct {
    char *address;
    float price;
    int rooms;
    int area;
} house;
// TODO:
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters

// TODO:
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a pointer to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
float sqrprice(house *house);

int main() {
    house array [] ={
     {"Béke tér", 1230, 2, 25 },
     {"Váci út", 1740000, 3, 55 },
     {"Petõfi utca", 2350000, 4, 55 },
    };
    for (int i = 0; i < (sizeof(array)/sizeof(array[0])); i++) {
         if (sqrprice(&array[i])==1)
            printf("Buy this house: %d\n", i+1);
        else
            printf("Do not buy this house: %d\n", i+1);}


  return 0;
}

float sqrprice (house *house) {
    if ((house->price)/(house->area) > 401) {
        return 1; }
    else
        return 0;
}
