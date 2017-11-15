#ifndef PIRATE_H
#define PIRATE_H
#include <string>

using namespace std;


class Pirate
{
    public:
        Pirate(string);
        ~Pirate();
        void drink_rum();
        void hows_goin_mate();
    private:
        string name;
        unsigned int counter;

};

#endif // PIRATE_H
