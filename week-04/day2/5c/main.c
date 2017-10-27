#include <stdio.h>

typedef struct house {
    int address;
    float price;
    int rooms;
    int area;
};
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

int main() {
    struct house house1;
    struct house house2;
    struct house house3;
    house house1 = {"Link", 123000, 2, 25 };
    house house2 = {"Home", 1740000, 3, 55 };
    house house3 = {"street", 2350000, 4, 55 };


  return 0;
}
