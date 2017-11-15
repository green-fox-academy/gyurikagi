// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It shoud return the costs of the paingting

#include <iostream>
#include <vector>

using namespace std;

class Shape {
protected:
    float area;
    float price = 250;
public:
    virtual float calc_area () = 0;
    virtual void print_area (){
        cout << "The area :" << calc_area() << endl;
    }
    virtual void get_all_values () = 0;
    virtual void how_much_to_paint(){
        cout << "The paint will cost: " << area * price << "HUF\n";
    }
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
    c0.how_much_to_paint();
    tr0.how_much_to_paint();

    return 0;
}
