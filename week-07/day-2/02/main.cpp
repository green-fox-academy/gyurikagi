#include <iostream>
using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.
string stringchain(string a, string b){
    return a + b;
}

string stringchain(string a, string b, string c){
    return a + b + c;
}

string stringchain(string a, string b, string c, string d){
    return a + b + c + d;
}


int main() {

    string first = "Hello";
    string second = " World!";
    string third = " Xmas";
    string fourth = "-time.";

    cout << stringchain(first, second) << endl;
    cout << stringchain(first, second, third) << endl;
    cout << stringchain(first, second, third, fourth) << endl;


	return 0;
}
