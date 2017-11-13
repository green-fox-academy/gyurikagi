#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10
    vector <int> int_vect;
    int_vect.resize(10);
    srand(time(NULL));


   for (unsigned int i = 0; i < int_vect.size(); ++i){
        int_vect[i] = (rand()%10);
    }

    for (unsigned int i = 0; i < 5; ++i) {
        cout << int_vect[i] << endl;
    }

  return 0;
}
