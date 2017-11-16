#include <iostream>
#include "Tasks.h"
#include <string>

using namespace std;

void print_help ();
void spaces(string);


int main()
{
    print_help ();

    string input;
    string command;

    string task;


    getline(cin, input);
    cout << input << endl;
    //string pos = );
    spaces(input);
    if (input.find(' ') !=  string::npos) {
        command = input.substr (0, input.find(' '));
        task = input.substr(input.find(' ') + 1);
     } else cout << "Does not contain any spaces!";

     cout << "Command: " << command <<" task: " << task << "input: " << input;

    return 0;
}


void print_help () {
 cout << "Todo application\n\
====================\n\
Commands:\n\
 -a   Adds a new task\n\
 -wr  Write current todos to file\n\
 -rd  Read todos from a file\n\
 -l   Lists all the tasks\n\
 -e   Empty the list\n\
 -rm   Removes a task\n\
 -c   Completes a task\n\
 -p   Add priority to a task\n\
 -lp  Lists all the tasks by priority\n";
}

void spaces(string input){
    if (input.find (' ') != string::npos){
        cout  << "Contains at least one space!" << endl;
    } else {
        cout  << "Does not contain any spaces!" << endl;
        }
}

//function for slice the input for command and the other;



