#ifndef TASKLIST_H
#define TASKLIST_H
#include <vector>
#include <string>
#include "Tasks.h"

using namespace std;
class TaskList
{
    public:
        TaskList(string);

        virtual ~TaskList();

    protected:
        typedef struct {
            string task;
            int priority;
            int deadline;
        } Tasks;
        vector <Tasks> v_task;

    private:
};

#endif // TASKLIST_H
