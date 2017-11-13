#include <iostream>

using namespace std;

// Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
// Please delete the array before the program exits

int main() {
    int* pointer = NULL;
    pointer = new int[5];
    int tmp = 0;

    for (int i = 0; i < 5; ++i){
        cout << "Enter the element " << i + 1 << endl;
        cin >> tmp;
        *(pointer + i) = tmp;
    }

    cout << "Your array has the next elements: \n";

    for (unsigned int i = 0; i < 5; ++i){
        cout << *(pointer + i) << " , ";
    }

    delete []pointer;
  return 0;
}
