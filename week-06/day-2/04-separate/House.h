#ifndef HOUSE_H
#define HOUSE_H
#include <string>

using namespace std;


class House {
public:
    House (string address, unsigned int area);
    unsigned int get_price();
private:
    string address;
    unsigned int area;
    unsigned int price;

};

#endif // HOUSE_H
