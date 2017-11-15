#include <iostream>
#include <vector>

using namespace std;

// Create a Car class.
// Create the following private variables : age, kms_runed, manufacturer, number_of_seats
// use proper variable types.
// Implement a method which has one parameter, and increases the kms_runed variable by its parameter value.
// Implement a method which can add a person to a car, if the number of persons in the car reached
// the value of number of seats in the car it should tell you that 'The car is full!' or something like that.
// Inherite at least two car models and try out the methods you have created.
class Car {
protected:
    unsigned int age;
    unsigned int kms_runed;
    string  manufacturer;
    unsigned int person_in_car;
    unsigned int number_of_seats;

public:
     Car(unsigned int age, unsigned int kms_runed, string manufacturer, unsigned int number_of_seats){
        this->age = age;
        this->kms_runed = kms_runed;
        this->manufacturer = manufacturer;
        this->number_of_seats = number_of_seats;
        person_in_car = 0;
    }

    unsigned int add_person() {
        if (person_in_car < number_of_seats){
            person_in_car++;
        } else
            cout << "The car is full!\n";
        return person_in_car;
    }

    unsigned int get_numb_of_seets () {
        return number_of_seats;
    }
};

class Fiveseets : public Car {

public:
    Fiveseets (unsigned int age, unsigned int kms_runed, string manufacturer) : Car(age, kms_runed, manufacturer, 5)
    {

    }
};

int main()
{
    Car car1(15, 1527, "Mazda", 2);
    for (unsigned int i = 0; i < (car1.get_numb_of_seets()) + 1; ++i){
        car1.add_person();
    }

    Fiveseets fs1(5, 127000, "Volvo");
    fs1.add_person();
    fs1.add_person();
    fs1.add_person();
    fs1.add_person();
    fs1.add_person();
    fs1.add_person();




    return 0;
}
