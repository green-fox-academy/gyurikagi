#include "ATM.h"
#include <vector>
#include "User.h"
#include <string>
#include <iostream>

using namespace std;

ATM::ATM()
{

}

ATM::~ATM()
{
    //dtor
}

void ATM::add_element(User x){
    v_user.push_back(x);
}

/*void ATM::lengt (vector <User> x){
    cout << x.size();
}*/
void ATM::richest_user(){
    float bal = 0;
    string name = " ";
    for (unsigned int i = 0; i < 4; ++i){
        if (v_user[i].balance > bal) {
            bal = v_user[i].balance;
            name = v_user[i].un;
        }
    } cout << "The richest person is: " << name << endl;
}
