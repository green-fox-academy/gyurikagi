#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    unsigned int sum_grade;
    unsigned int counter;
public:
    Student(string name) {
        this->name = name;
        this->sum_grade = 0;
        this->counter = 0;
    }

    void add_grade (){
        int number;
        cout << "Please enter a grade: ";
        cin >> number;
        if (0 < number  && number < 6){
            this->sum_grade = sum_grade + number;
            this->counter = counter + 1;
        } else
            cout << "Please give me a number from 1 to 5!\n";
    }

    void get_average() {
        float avg = sum_grade / counter;
        cout << "The average of the grades is : " << avg << endl;
    }
};


int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades
    Student st1 ("John");
    st1.add_grade();
    st1.add_grade();
    st1.add_grade();
    st1.get_average();



  return 0;
}
