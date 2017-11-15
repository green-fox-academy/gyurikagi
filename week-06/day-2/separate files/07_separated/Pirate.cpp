#include "Pirate.h"
#include <string>
#include <iostream>

using namespace std;

Pirate::Pirate(string name)
{
    this->name = name;
    this->counter = 0;
}

Pirate::~Pirate() {
    cout << "Have a nice day!";
}

void Pirate::drink_rum() {
    this->counter = counter + 1;
    }


 void Pirate::hows_goin_mate() {
        if (counter >= 5){
            cout << "Arrrr!\n";
        } else {
            cout << "Nothin'\n";
        }
    }
