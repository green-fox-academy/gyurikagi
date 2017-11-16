#ifndef TASKLIST_H
#define TASKLIST_H
#include <vector>
#include <string>
#include "Tasks.h"

using namespace std;
class TaskList
{
    public:
        TaskList();

        virtual ~TaskList();

    protected:
        vector <Tasks> v_task;

    private:
};

#endif // TASKLIST_H
