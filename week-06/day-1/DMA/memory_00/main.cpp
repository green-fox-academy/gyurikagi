#include <iostream>

using namespace std;

namespace variables {
    string *name;
    int *age;
    int *slice_of_pizza_you_can_eat;
}
// store your personal data in Variables
// string name, int age, int slice_of_pizza_you_can_eat
// allocate memory dynamically for these variables
// create a sentense using these variables
// free the allocated memory

int main() {

    using namespace variables;
    name = new string ("Agnes");
    age = new int (31);
    slice_of_pizza_you_can_eat = new int (4);

    cout << "The " << *age << " years old " << *name << " can eat " << *slice_of_pizza_you_can_eat << " slice of pizza.";
    delete name;
    delete age;
    delete slice_of_pizza_you_can_eat;

  return 0;
}
