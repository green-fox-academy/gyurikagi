#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.

class ParentClass {
public:
    string do_stg(){
        string s = "Parentstring\n";
        return s;
    }

    virtual string do_stg_virt() {
        string s = "Virtual parentstring\n";
        return s;
    }
};
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.

class ChildClass : public ParentClass {
public:
    string do_stg(){
        string s = "Childrenstring\n";
        return s;
    }

    string do_stg_virt() {
        string s = "Virtual parentstring\n";
        return s;
    }
};

// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a ponter.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*


int main() {
    ParentClass *a = new ChildClass;
    cout << a->do_stg();
    cout << a->do_stg_virt();

    cout <<"-------------------------------\n";
    cout << ((ChildClass*)a)->do_stg();
    cout << ((ChildClass*)a)->do_stg_virt();


    return 0;
};
