#include "Car.h"
#include <string>
#include <iostream>

using namespace std;

Car::Car(string type, float km){
    this->type = type;
    this->km = km;

}

Car::~Car()
{
    cout << "Have a nice day";
}

void Car::run (float number) {
    this->km = km + number;
    cout << "The new km is: " << km << endl;
}
