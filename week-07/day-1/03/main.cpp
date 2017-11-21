#include <iostream>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throws a bulit-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {

    try {
        int a = 0;
        int b = 0;

        cout << "Enter a number: \n";
        cin >> a;
        cout << "Enter a number: \n";
        cin >> b;


        if (b == 0){
            throw runtime_error("Error: Dividen by zero\n");
        }
        int c = a / b;
        cout << a << " divided by " << b << " is " << c << endl;

    } catch (runtime_error &err) {
        cout << err.what() << endl;
    }



	return 0;
}
