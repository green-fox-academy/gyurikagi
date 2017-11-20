#include <iostream>
#include <stdexcept>

using namespace std;

// Create a function which throws a built-in exception
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
        throw runtime_error("ERROR: dividen by 0 - no result");
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
     catch (runtime_error &err) {
        cout << err.what();
     }
	return 0;
}
