#include <iostream>

using namespace std;

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()
namespace person {
    string name = "Agnes";
    int age = 31;
    int number = 4;
}

int main()
{
    using namespace person;
    cout << name << endl << age << endl << number;

    return 0;
}
