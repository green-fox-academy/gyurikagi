#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

// Create a simple program which has a time lock
// The program shoul ask for a user input, but the user only has
// 10 seconds to reply, if the user falis (reaches the time limit)
// the program should print out: "faild, it took you too much time"
// This program cloud be the engine of a quiz game.

int main() {
    string name;
    clock_t start_time = clock();
    cout << "Enter your name: \n";

    clock_t startTime = clock(); //Start timer
    double passed_time;
    double seconds_to_delay = 3;
    cout << "Time to delay: " << seconds_to_delay << endl;
    bool flag = true;
        while (flag){
        passed_time   = (clock() - startTime) / CLOCKS_PER_SEC;
        if((passed_time >= seconds_to_delay))
    {
    cout << passed_time << " seconds have passed" << endl;
      flag = false;
      }
        }

   return 0;

}
