#include "User.h"
#include <string>

using namespace std;

User::User (string un, int pin, float balance, Type typedf)
{
    this->un = un;
    this->pin = pin;
    this->balance = balance;
    this->typedf = typedf;
}

User::~User()
{

}
