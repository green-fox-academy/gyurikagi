#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.

const char* sentence[6] = {"What", "a", "pleasant", "surprie", "this", "is."};
int get_a_number(){
    int num = 0;
    cout << "Enter a number: \n";
    cin  >> num;
    return num;
}
string return_string(int num) throw(int, const char*){
    if (num > 5)
        throw num - 5;
    else if (num < 0){
        throw "negative number";
    } else
        return sentence[num];

}



int main () {


    int element = 0;
    element = get_a_number();
    try {
        cout << return_string (element);

    } catch (int x)  {
            cout << x;
    } catch (const char* c){
        cout << c;
    }

    return 0;
}
