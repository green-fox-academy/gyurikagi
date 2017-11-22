#include <iostream>
#include "User.h"
#include "ATM.h"
#include <string>

using namespace std;

int main()
{

    ATM v_user;
    User u1("Agnes", 1234, 12345.47, USER);
    User u2("Joe", 2345, 4718.27, USER);
    User u3("Charles", 12345678, 202, ADMINISTRATOR);
    User u4("Dominic", 4567, 6725.47, USER);
    v_user.add_element(u1);
    v_user.add_element(u2);
    v_user.add_element(u3);
    v_user.add_element(u4);
    v_user.richest_user();

    return 0;
}
