#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user_comm.h"

static number = 0;


int main()
{
    char input [255];
    char command[10];
    char todo[245];

    todootasks tsks[10];

    print_usage();
    do {
    gets(input);
    // examine the space
    if (strstr(input, " ") != NULL) {

    strcpy(command, strtok(input , " "));
    strcpy(todo, strtok(NULL , ""));


    if (strcasecmp(command, "-a") == 0){
        strcpy(tsks[number].task, todo);
        number++;
    } else if (strcasecmp(command, "-rm") == 0){
        strcpy(tsks[number].task, todo);
        number--;}
    else printf("Good luck");

    } else printf("Please use space\n");
    }
    while (strcmp(input, "exit") != 0);

    /*read to do list from file to an struc array? - ha nincs file, akkor majd a végén létrehoz, nem kell itt feltétlen hibakezelés
    get user input - hogyan oldom meg, hogy melyik része struct melyik részéhez megy??
            strtok vesszõig pl,  kiv command, ahol szóközig? ?
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

