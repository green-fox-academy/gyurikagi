#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main() {

    try {
        int a = 0;
        int b = 0;

        cout << "Enter a number: \n";
        cin >> a;
        cout << "Enter a number: \n";
        cin >> b;


        if (b == 0){
            throw 'e';
        }
        int c = a / b;
        cout << a << " divided by " << b << " is " << c << endl;

    } catch (char x){
        cout << "Error message: " << x << endl;
    }


	return 0;
}
