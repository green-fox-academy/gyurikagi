#include <iostream>
#include <string>
#include "circle.h"

using namespace std;


int main() {
    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

    Circle cc1(5);
    cout << "The circumference is: " <<  cc1.get_circumference() << endl;
    cout << "The circumference is: " <<  cc1.get_area() << endl;

  return 0;
}
