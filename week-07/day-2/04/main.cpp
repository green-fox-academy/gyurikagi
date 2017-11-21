#include <iostream>
using namespace std;

// Create a Class named Integer. It should have one int member variable.
// Create add() methods to it. They should take Integer& parameters.
// Make variations of add() method 1, 2, 3, 4 and 5 arguments respectively.
// All methods should add the value of the parameters to the member variable of this.
//
// Try them out. Write code that demonstrates how they work.
class Integer{
private:
    int num;

public:
    Integer(){
        num = 0;
    }

    Integer(int x){
        num = x;
    }

    int get(){
        return num;
    }

    int add(Integer& a){
        num = num + get();
        return get();
    }

    int add(Integer& a, Integer& b){
        num = num + a.get() + b.get();
        return get();
    }

    int add(Integer& a, Integer& b, Integer& c){
        num = num + a.get() + b.get() + c.get();
        return get();
    }

     int add(Integer& a, Integer& b, Integer& c, Integer& d){
        num = num + a.get() + b.get() + c.get() + d.get();
        return get();
    }

     int add(Integer& a, Integer& b, Integer& c, Integer& d, Integer&e){
        num = num + a.get() + b.get() + c.get() + d.get() + e.get();
        return get();
    }

};
int main() {

    Integer aa(1);
    Integer ab(2);
    Integer ac(3);
    Integer ad(4);
    Integer ae(5);

    cout << aa.add(ab) << endl;
    cout << aa.add(ab, ac) << endl;
    cout << aa.add(ab, ac, ad) << endl;
    cout << aa.add(ab, ac, ad, ae) << endl;

	return 0;
}
