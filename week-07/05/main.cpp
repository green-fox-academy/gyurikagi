#include <iostream>
using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws


int get_a_number(){
    int num = 0;
    cout << "Enter a number: \n";
    cin  >> num;
    return num;
}

void testDivisor (int nm){
     if (nm == 0) {
        throw 'e';
     }
}

int main() {
     try {
        int a = 0;
        int b = 0;

        a = get_a_number();
        b = get_a_number();
        testDivisor (b);

        cout<< a << " divided by " << b << " is " << a/b << endl;
     }
     catch (char c) {
        cout << "ERROR:" << c << endl;
     }

	return 0;
}
