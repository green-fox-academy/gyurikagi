#include <stdio.h>
#include <stdlib.h>

// do struct -which data you can write in list
enum ended_fact {NEW_TASK, ENDED30PERCENT, ENDED60PERCEN, TOTALLY_ENDED};

typedef struct {
    char task [255];
    int prior;
    enum ended_fact ended;
    int deadline;
    char note [255];
}todootasks;

int main()
{
    print_usage();

    /*read to do list from file to an array? - l�tezik m�r a f�jl vagy �jat kell csin�lni?
    get user input - hogyan oldom meg, hogy melyik r�sze struct melyik r�sz�hez megy??
            strtok vessz�ig pl kiv command, ahol sz�k�zig? ?
    write ciklus for working this project - if branches for functions and commands
        - Adds a new task\n\
        -wr  Write current todos to file\n\
        -rd  Read todos from a file\n\
        -l   Lists all the tasks\n\
        -e   Empty the list\n\
        -rm   Removes a task\n\
        -c   Completes a task\n\ - [x]
        -p   Add priority to a task\n\
        -lp  Lists all the tasks by priority
        - exit is kell!!
    - copy list to file
    - close file
    - esc from the program */




    return 0;
}
