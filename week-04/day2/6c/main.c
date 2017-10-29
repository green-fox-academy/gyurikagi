#include <stdio.h>

struct Pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
};

// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

int sum_of_gold (struct Pirate pirates[], int ln);
// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
float average_gold (struct Pirate pir[], int ln);

// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg
char *richest_wooden_leg(struct Pirate pir[], int ln);


int main() {
    struct Pirate pirates[] = {
        {"Jack", 0, 18},
        {"Uwe", 1, 8},
        {"Hook", 1, 12},
        {"Halloween kid", 0, 0},
        {"Sea Wolf", 1, 14},
        {"Morgan", 0, 1}
    };
    int length = sizeof(pirates)/sizeof(pirates[0]);
    printf("The sum of the gold is: %d\n", sum_of_gold (pirates, length));
    printf("The average gold / pirate is %.2f\n", average_gold (pirates, length));
    printf("The richest pirate with wood leg is %s\n", richest_wooden_leg(pirates, length));
    return 0;
}

int sum_of_gold (struct Pirate pir[], int ln){
    int gold = 0;
    for (int i = 0; i < ln; i++)
        gold =gold + pir[i].gold_count;
    return gold;
    }


float average_gold (struct Pirate pir[], int ln){
    float average = (float)sum_of_gold (pir, ln)/(float)ln;
    return average;
}

char *richest_wooden_leg(struct Pirate pirates[], int ln) {
    int wealth = 0;
    char *nm;
    for (int i = 0; i < ln; i++){
    if (pirates[i].has_wooden_leg ==1 && pirates[i].gold_count > wealth){
        wealth = pirates[i].gold_count;
        nm = pirates[i].name;}
    }
    return nm;
}
