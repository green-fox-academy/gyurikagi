#include "Tasks.h"
#include <iostream>
#include <string>

using namespace std;

Tasks::Tasks(string task)
{
    this->task = task;
}

Tasks::~Tasks()
{

}

void Tasks:: print_task(){
 cout << task;
}

