#include <iostream>
#include <string>

using namespace std;

class Circle {
private:
    unsigned int radius;
public:
    Circle ( unsigned int radius){
        this->radius = radius;
    }
    float get_circumference (){
        float circumference = 2 * radius * 3.14;
        return circumference;
    }

    float get_area () {
        float area = radius * radius * 3.14;
        return area;

    }
};

int main() {
    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

    Circle cc1 (5);
    cout << "The circumference is: " <<  cc1.get_circumference() << endl;
    cout << "The circumference is: " <<  cc1.get_area();

  return 0;
}
