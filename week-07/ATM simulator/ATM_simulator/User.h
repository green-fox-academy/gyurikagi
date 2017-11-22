#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

typedef enum {USER, ADMINISTRATOR} Type;

class User
{
    public:
        User(string un, int pin, float balance, Type typedf);
        ~User();


        string un;
        int pin;
        float balance;
        Type typedf;
    private:




};

#endif // USER_H
