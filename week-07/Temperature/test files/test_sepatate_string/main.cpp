#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdexcept>
#include <cstring>

using namespace std;

int main()
{   string input;
    int year;
    int month;
    int day;
    int hour;
    int minut;
    int sec;
    int celc;
    try {
    getline(cin, input);
    size_t check = input.find_first_not_of("0123456789 -.:");
    if (check != string::npos) {
        throw -1;
    } else {
        if (input.find('.') !=  string::npos) {
            year =atoi((input.substr (0, input.find('.'))).c_str());
                if ((year > 2017) || (year < 0) )
                    throw -1;
            input.erase(0, input.find('.') + 1);
            month = atoi((input.substr (0, input.find('.'))).c_str());
                if (month > 12 || month <0)
                    throw -1;
            input.erase(0, input.find('.') + 1);
            day = atoi((input.substr (0, input.find(' '))).c_str());
                if (day > 31 || day < 0)
                    throw -1;
            input.erase(0, input.find(' ') + 1);
            hour = atoi((input.substr (0, input.find(':'))).c_str());
                if (hour > 23 || hour < 0)
                    throw -1;
            input.erase(0, input.find(':') + 1);
            minut = atoi((input.substr (0, input.find(':'))).c_str());
                if (minut > 60 || minut < 0)
                    throw -1;
            input.erase(0, input.find(':') + 1);
            sec = atoi((input.substr (0, input.find(' '))).c_str());
                if (sec > 60 || sec < 0)
                    throw -1;
            input.erase(0, input.find(' ') + 1);
            celc = atoi(input.c_str());
        }
      }
      cout << "year: " << year<<" "<< month << " " << day << "time: " << hour<<" " << minut<< " " << sec << "celc: " << celc;
    } catch (int x){
        return x;
    }

    return 0;
}
