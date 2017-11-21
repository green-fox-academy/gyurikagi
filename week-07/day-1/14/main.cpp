#include <iostream>
#include <ctime>
#include <windows.h>
#include <ctime>

using namespace std;

class Person {
public:
        Person(){
        time_t now = time(0);
        char *dt = ctime(&now);
        cout << dt;

    }
};
// Create a class named Person.
// This class shoud have a constructor which prints out the
// date of the creation of the istance.

int main() {
    Person p1;

    return 0;
}
