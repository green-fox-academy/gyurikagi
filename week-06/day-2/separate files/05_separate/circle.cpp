#include "circle.h"
#include <iostream>
#include <string>

using namespace std;


Circle::Circle(unsigned int radius){
    this->radius = radius;
}

Circle::~Circle() {
    cout << "Have a nice day!";
}

float Circle::get_circumference (){
        float circumference = 2 * radius * 3.14;
        return circumference;
    }

float Circle::get_area () {
        float area = radius * radius * 3.14;
        return area;

    }
