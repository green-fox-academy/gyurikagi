#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Human {
    public:
    virtual void travelling (){
        cout << "The human walking\n";
    }
};

class Superhuman : public Human {
public:
        void travelling(){
        cout << "Flying\n";
        }
};

class Aquaman: public Human {
public:
    void travelling(){
        cout << "Aquahuman: riding with dolphins\n";
    }
};


// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called travelling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.

int main()
{   Human hm;
    Superhuman sh;
    hm.travelling();
    sh.travelling();
    Aquaman ah;
    ah.travelling();

    return 0;
}
