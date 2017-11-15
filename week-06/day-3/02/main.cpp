// Countinue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)

#include <iostream>
#include <vector>

using namespace std;

class Shape {
protected:
    float area;
public:
    virtual float calc_area () = 0;
    virtual void print_area (){
        cout << "The area :" << calc_area() << endl;
    }
    virtual void get_all_values () = 0;
};

class Circle: public Shape {
private:
    float rad;
public:
    Circle(float rad) {
        this->rad = rad;
    }
    float calc_area(){
     area = rad * rad * 3.14;
     return area;
    }
    void get_all_values(){
        cout << "The radius of circle is: " << rad << " end the area is: " << area << endl;
    }
};

class Triangle : public Shape {
private:
    float base;
    float height;
public:
    Triangle (float base, float height) {
        this->base = base;
        this->height = height;
    }

    float calc_area(){
        area = base * height / 2;
        return area;
    }
    void get_all_values(){
        cout << "The base of triangle is: " << base << ", the heigh is: " << height << " end the area is: " << area << endl;
    }
};

int main()
{
    Circle c0(3);
    c0.print_area();
    Triangle tr0(4, 5);
    tr0.print_area();
    c0.get_all_values();
    tr0.get_all_values();

    return 0;
}
