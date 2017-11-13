#include <iostream>

using namespace std;


namespace Mark {
    string name = "Mark";
    int age = 31;
    int number = 4;
}

namespace Maria {
    string name = "Maria";
    int age = 27;
    int number = 7;
}

int sum_of_ages (){
    int sum = Mark::age + Maria::age;
    return sum;
}
int main()
{
    int sum_of_ages ();
    cout << sum_of_ages();
    return 0;
}


// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// create a function that can add the two age, and returns it

