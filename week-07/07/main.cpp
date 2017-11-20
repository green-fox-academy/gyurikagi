#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;
//Try to run the following code!

int main () {

    try {
    int int_array[5] = {1, 2, 3, 4, 5};
    int length = sizeof(int_array)/sizeof(*int_array);
    int i = 1;

    if (i > length){
        throw runtime_error("The number is bigest than the lengt of array\n");

    }
    cout << int_array[i-1];
    } catch(runtime_error &err) {
        cout << err.what();
    }

    return 0;
}

//The program should compile but crash!
//Create a solution for this problem using try-catch block!
