#include <stdio.h>
#include <stdlib.h>

enum beh {BAD_BEHAVIOR , GOOD_BEHAVIOR};

int average_of_grade(students);
void print_name(students);
void student_bad_beh(students);

typedef struct {
    char name[30];
    int grade;
    enum beh behaviors;

} students;

int main()
{
  students student[] ={
      {"John", 4, 0},
      {"Jack", 3, GOOD_BEHAVIOR},
      {"Jil", 2, BAD_BEHAVIOR},
      {"Joe", 2, GOOD_BEHAVIOR},
      };

    printf("The average is %d\n", average_of_grade(student));
    print_name(student);
    student_bad_beh(student);

    return 0;
}

int average_of_grade(students stud[]){
    int sum = 0;
    for (int i = 0; i < 4; i++)
        sum = sum + stud[i].grade;
    return sum / 4;
}

void print_name(students *st){
    for (int i = 0; i < 4; i++){
        if (st[i].behaviors == 0){
            printf("%s has bad behavior\n", st[i].name);}
    }
}

void student_bad_beh(students *st){
    for (int i = 0; i < 4; i++){
        if (st[i].behaviors == 0 && st[i].grade > 3){
            printf("%s has bad behavior and grade > 3\n", st[i].name);}
    }
}

//TODO:
//Create a structure called "student":
//name of the student
//number of the student's grade - error handling
//type of the student's behavior in an enumeration ("behaviors"): - BAD_BEHAVIOR , GOOD_BEHAVIOR
//The student's are stored in an array.
// Write a function that returns with the grade's avarage
// write a function that prints out if the student's grade higher than 3 and the behavior is bad:
//"(student's name) you are fuckin amazing, please behave good"
//write a function that counts good behaviors, if they have 5 grades:
//return with the count of students
