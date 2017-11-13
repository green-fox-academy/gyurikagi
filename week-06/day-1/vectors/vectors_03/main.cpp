#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    vector <int> my_v;
    my_v.resize(20);

	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	for (unsigned int i = 0; i < my_v.size(); ++i) {
        my_v[i] = rand()%11;
	}
	//print the items of the vector
	for (unsigned int i = 0; i < my_v.size(); ++i){
        cout << my_v[i] << ", ";
	}

	cout << "New vector is: \n";
  //remove the even numbers, then print the items again
    for (unsigned  int i = 0; i < my_v.size(); ++i) {
        for (unsigned  int i = 0; i < my_v.size(); ++i) {
            if (my_v[i] % 2 == 0){
                my_v.erase(my_v.begin() + i);
            }
        }
    }

    for (unsigned int i = 0; i < my_v.size(); ++i){
        cout << my_v[i] << ", ";
	}


  return 0;
}
