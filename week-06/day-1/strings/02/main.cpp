#include <iostream>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{
    string name = "Agnes";
    int age = 31;
    double heigh = 1.65;
    bool married = false;

    cout << name << endl << age << endl << heigh << endl;
    if (married) {
        cout << "Married";
    } else {
        cout << "Not married";
     }

    return 0;
}
