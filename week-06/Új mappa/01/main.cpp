#include <iostream>
#include <vector>

using namespace std;

class Shape {
public:
    float area;
    virtual float calc_area () = 0;
    virtual void print_area (){
        cout << "The area :" << calc_area() << endl;
    }
};

class Circle: public Shape {
private:
    float rad;
    float area;
public:
    Circle(float rad) {
        this->rad = rad;
    }
    float calc_area(){
     this->area = rad * rad * 3.14;
     return area;
    }

};

class Triangle : public Shape {
private:
    float base;
    float height;
    float area;
public:
    Triangle (float base, float height) {
        this->base = base;
        this->height = height;
    }

    float calc_area(){
        area = base * height / 2;
        return area;
    }



};

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)

int main()
{
    Circle c0(3);
    c0.print_area();
    Triangle tr0(4, 5);
    tr0.print_area();

    return 0;
}
