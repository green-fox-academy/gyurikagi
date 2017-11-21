#include <iostream>
#include <stdexcept>
using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */
int get_fibonacci_number(int);
int fib[51];


int main() {


     for (int i = 0; i < 51; i++) {
        fib[i] = -1;
     }

     try {
    int number = 0;

    cout << "Please give me a number\n";
    cin>> number;

    if (number < 0){
        throw runtime_error("please give me a positive number\n");
    }

    cout << "The " << number << "th fibonacci number is " << get_fibonacci_number (number);
     } catch (runtime_error &err) {
            cout << err.what();

     }

	return 0;
}

int get_fibonacci_number(int number)
{
    if (number < 0){
        return -1;
    } else {
        if (number == 0)
            return 0;

        else if (number == 1){
            return 1;
        }
        else if (number == 2){
            return 1;}
        else{
           int a = 0;
           int b = 1;
           int c = 0;
           int counter = 0;
        while (counter != number - 1) {
            a = b;
            b = c;
            c = a + b;
            counter++;
        }
        return c;
            }
        }
    }
