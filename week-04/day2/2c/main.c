
#include <stdio.h>

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  enum CarType type;
  double km;
  double gas;
};

void make_new_car (struct Car b ){

    if (b.type == 3) {
    printf("Cartype %d km %.f Km", b.type, b.km);}
    else printf("Cartype %d km %.f Km gas %.f", b.type, b.km, b.gas);
}
// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main() {

    enum CarType type;
    struct Car baby = {3, 100, 20};
   /* baby.type = TESLA;
    baby.km = 100;
    baby.gas = 20;*/
    make_new_car (baby);

  return 0;
}
