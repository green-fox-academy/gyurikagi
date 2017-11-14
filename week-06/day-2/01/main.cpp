#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;

};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21

  Student st1;
  st1.name = "John";
  st1.age = 21;

  cout << st1.name << " is " << st1.age << " years old. ";

  return 0;
}
