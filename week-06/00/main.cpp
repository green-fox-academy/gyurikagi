#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolen variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{
    string name = "Agnes";
    int age = 31;
    bool coffe = true;

    cout << name << endl << age << endl << "Likes coffe: ";

    if (coffe) {
        cout << "true";
    } else {
      cout << "false";
      }
    return 0;
}

