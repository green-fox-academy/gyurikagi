#ifndef USER_COMMUNICATION.H
#define USER_COMMUNICATION.H

enum ended_fact {NEW_TASK, ENDED30PERCENT, ENDED60PERCEN, TOTALLY_ENDED};

typedef struct {
    char task [255];
    int prior;
    enum ended_fact ended;
    int deadline;
    char note [255];
}todootasks;


void print_usage ();
//todootasks add_new_task (char);


#endif // USER_COMM
