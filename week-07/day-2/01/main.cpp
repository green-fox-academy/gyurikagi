#include <iostream>
using namespace std;

// create a function that adds two integers.
// Create an other function of the same name that takes 3 integers and returns the result of adding these 3 integers.
// Write code that uses both after one an other and prints out the results in a new line each.
// For input use 1 and 2, then 1, 2 and 3.
int add_numb(int x, int y){
    return x + y;
}

int add_numb(int x, int y, int z){
    return x + y + z;
}

int main() {

    int a = 1;
    int b = 2;
    int c = 3;

    cout << "Add 2 numbers: " << add_numb(a, b) << endl;
    cout << "Add 3 numbers: " << add_numb(a, b, c) << endl;


	return 0;
}
