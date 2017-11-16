#include <iostream>
#include "Tasks.h"

using namespace std;

void print_help ();


int main()
{
    print_help ();
    Tasks t1("Bay 5 l milk", 2, 20171012);
    cout << "Hello world!" << endl;
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
