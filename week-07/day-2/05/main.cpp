#include <iostream>
using namespace std;

// Take the Integer class from the previous exercise.
// Create 3 constructors for them:
// One empty which sets the member varibale to 0;
// A copy constructor, that takes an Integer& argument
// A third one which takes an int as argument and makes the member variable equal to the int it took.
//
// Write code that uses these and prints out the value of the member variable of the integers created.
// (You will have to create a get method to do this appropriately.)


class Integer{
private:
    int num;

public:
    Integer(){
        num = 0;
    }

    Integer(Integer& x){
        num = x.get();
    }

    Integer(int x){
        num = x;
    }

    int get(){
        return num;
    }




};

int main() {

    Integer a(3);
    cout << a.get() << endl;
    Integer b;
    cout << b.get() << endl;
    Integer c(a);
    cout << c.get() << endl;


	return 0;
}
