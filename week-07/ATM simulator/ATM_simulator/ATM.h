#ifndef ATM_H
#define ATM_H
#include "User.h"
#include <vector>
#include <string>

using namespace std;


class ATM
{
    public:
        ATM();
        ~ATM();
        void add_element(User user);
        void richest_user();
        void add_money();

    protected:

    private:
        vector<User> v_user;
        unsigned int all_money;

};

#endif // ATM_H
