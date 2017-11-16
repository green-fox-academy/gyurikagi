#ifndef TASKS_H
#define TASKS_H
#include <iostream>

using namespace std;


class Tasks
{
    public:
        Tasks();
        virtual ~Tasks();


    protected:



    private:
        string task;
        int priority;
        int deadline;
};

#endif // TASKS_H
