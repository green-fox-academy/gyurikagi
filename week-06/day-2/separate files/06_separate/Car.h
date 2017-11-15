#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
    public:
        Car(string, float);
        ~Car();
        void run (float);
    private:
        string type;
        float km;
};

#endif // CAR_H
