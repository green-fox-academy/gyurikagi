#include <iostream>
#include <stdexcept>
#include <string>6


using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {
    try {
        int a = 0;
        int b = 0;
        cout << "Enter a number: \n";
        cin >> a;
        cout << "Enter a number: \n";
        cin >> b;

        if (b == 0) {
            throw -1;

        int c = a / b;
        cout << a << " divided by " << b << " = " << c << endl;


        }

    } catch (int x){
        cout << "ERROR MESSAGE:" << x << endl;
    }

	return 0;
}
