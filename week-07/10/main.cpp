#include <iostream>
#include <stdexcept>

using namespace std;

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

int get_a_number(){
    int num = 0;
    cout << "Enter a number: \n";
    cin  >> num;
    return num;
}

void odd_numbers(int a) {
    int odd_number = 1;
    if (a > 0) {
    for (int i = 0; i < a; i++) {
        cout << odd_number << ", " ;
        odd_number = odd_number + 2;
    }
    }
}

int main() {
    try {
     int num = get_a_number();
     if (num < 1) {
        throw runtime_error("Give me a positive number\n");
     }
     odd_numbers(num);
    }
    catch (runtime_error &err) {
        cout << err.what();

    }



  return 0;
}
