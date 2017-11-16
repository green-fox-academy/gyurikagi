#include "Tasks.h"
#include <iostream>

using namespace std;

Tasks::Tasks( string task, int priority, int deadline)
{
    this->task = task;
    this->priority = priority;
    this->deadline = deadline;
}

Tasks::~Tasks()
{

}


