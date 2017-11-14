#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>

using namespace std;

class Circle
{
public:
    Circle(unsigned int);
    ~Circle();
    float get_circumference ();
    float get_area ();

private:
    unsigned int radius;
};

#endif // CIRCLE_H
