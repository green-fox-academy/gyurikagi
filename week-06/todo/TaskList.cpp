#include "TaskList.h"
#include <vector>
#include <string>

using namespace std;

TaskList::TaskList(string Task)
{
    v_task.push_back(Task);
}

TaskList::~TaskList()
{
    //dtor
}


