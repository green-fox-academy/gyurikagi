#ifndef ATM_H
#define ATM_H
#include "User.h"
#include <vector>


class ATM
{
    public:
        ATM();
        ~ATM();

    protected:

    private:
        vector<User> bankAc;

};

#endif // ATM_H
