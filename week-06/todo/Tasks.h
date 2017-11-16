#ifndef TASKS_H
#define TASKS_H
#include <iostream>
#include <string>

using namespace std;


class Tasks
{
    public:
        Tasks(string task);
        virtual ~Tasks();
        void print_task();



    protected:



    private:
        string task;
        int priority;
        int deadline;

};

#endif // TASKS_H
