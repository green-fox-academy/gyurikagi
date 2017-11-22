#include <iostream>
#include <string>
using namespace std;

// Take the Integer class from the previous exercise and add two methods:
// One which takes an Integer& parameter and adds the value of it to the member variable of this.
// One which takes an int and adds the value of it to the member variable of this.
//
// Write code which uses them both and Prints out the results respectively.

class Integer{
private:
    int num;
public:
    Integer(){
        num = 0;
    }

    Integer(int a){
        num = a;
    }

    int get(){
        return num;
    }


    int add(int a){
        num = num + a;
        return get();

    }


    int add(Integer& a){
        num = num + a.get();
        return get();
    }


};



int main() {

    Integer a;
    int b = 7;
    Integer c(3);
    Integer d(9);

    cout << c.get() << endl;;
    cout << a.get() << endl;;
    cout << a.add(b) << endl;
    cout << a.add(c) << endl;
    cout << c.add(d) << endl;




	return 0;
}
