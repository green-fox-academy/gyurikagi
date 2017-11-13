#include <iostream>

using namespace std;
// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born
namespace person {
    string name = "Agnes";
    int age = 31;
    int number = 4;
}

int birth_year () {
    int year = 2017 - person::age;
    return year;
}


int main()
{
    cout << "You were born in "<< birth_year();

    return 0;
}
