
#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {

    int *pointer = NULL;
    int counter = 0;
    cout << "Give me a number \n";
    cin >> counter;
    pointer = new int [counter];
    int tmp = 0;

    for (unsigned int i = 0; i < counter; ++i){
        cout << "Enter the next element of array:\n";
        cin >> tmp;
        *(pointer + i) = tmp;
    }
    float avg = 0;
    for ( unsigned int i = 0; i < counter; ++i){
        avg = avg + *(pointer + i);
    }

    cout << "The average is " << (float)(avg / counter);

    delete []pointer;
  return 0;
}
