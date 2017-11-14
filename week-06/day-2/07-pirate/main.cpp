#include <iostream>
#include <string>

using namespace std;

class Pirate {
private:
    string name;
    unsigned int rum;
    unsigned int counter;
public:
    Pirate (string name, unsigned int rum){
        this->name = name;
        this->rum = rum;
        this->counter = 0;
    }
    void drink_rum(){
        this->counter = counter + 1;
    }

    void hows_goin_mate() {
        if (counter >= 5){
            cout << "Arrrr!\n";
        } else {
            cout << "Nothin'\n";
        }
    }

};

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

    Pirate p1 ("John Hook", 1);
    p1.drink_rum();
    p1.drink_rum();
    p1.drink_rum();
    p1.hows_goin_mate();
    p1.drink_rum();
    p1.drink_rum();
    p1.hows_goin_mate();
    p1.drink_rum();
    p1.hows_goin_mate();


  return 0;
}
