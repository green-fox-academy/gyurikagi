#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>


using namespace std;

//create an integer vector with the size of 5 and print the 3rd element of it

int main() {
    vector <int> int_vect;
    srand(time(NULL));

    for (unsigned int i = 0; i < 5; ++i) {
        int_vect.push_back(rand()%101);
    }
    cout <<"all elements of vector: \n";
    for (unsigned int i = 0; i < 5; ++i) {
        cout << int_vect[i] << endl;
    }
    cout <<"Third element of vector is: ";
    cout << int_vect[2] << endl;


  return 0;
}
