#include "TmpLog.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdexcept>


using namespace std;


TmpLog::TmpLog()
{
    open = false;
}

TmpLog::~TmpLog()
{
    //dtor
}

void TmpLog::print_screen(){
cout <<    "Temperature Logger Application\n\
==============================\n\
Commands:\n\
 h        Show command list\n\
 o        Open port\n\
 s        Start logging / Stop logging\n\
 c        Close port\n\
 l        List after error handling\n\
 e        Exit from the program\n" << endl;

}

void TmpLog::open_port()  {
        serial->openPort();
        open = true;

}

void TmpLog::start_stop_log(){
    try {
        string line;
        if (open== false){
            throw runtime_error("Port does not open! First press 'o' !");
        } else {
            while(1){
                serial->readLineFromPort(&line);
                if (line.length() > 0){
                    cout << line << endl;
                    database.push_back(line);
                }
                if (kbhit()){
                    if (getch()== 's'){
                        break;
                    }
                }
            }
        }
    } catch (runtime_error &err) {
        cout << err.what()<< endl;
  }
}

void TmpLog::close_port (){
    serial->closePort();
    open = false;
}

datas TmpLog::get_data_from_line(string input){
    datas datas1;

    getline(cin, input);
    size_t check = input.find_first_not_of("0123456789 -.:");
    if (check != string::npos) {
        throw -1;
    } else {
        if (input.find('.') !=  string::npos) {
            datas1.year =atoi((input.substr (0, input.find('.'))).c_str());
                if ((datas1.year > 2017) || (datas1.year < 0) )
                    throw -1;
            input.erase(0, input.find('.') + 1);
            datas1.month = atoi((input.substr (0, input.find('.'))).c_str());
                if (datas1.month > 12 || datas1.month <0)
                    throw -1;
            input.erase(0, input.find('.') + 1);
            datas1.day = atoi((input.substr (0, input.find(' '))).c_str());
                if (datas1.day > 31 || datas1.day < 0)
                    throw -1;
            input.erase(0, input.find(' ') + 1);
            datas1.hour = atoi((input.substr (0, input.find(':'))).c_str());
                if (datas1.hour > 23 || datas1.hour < 0)
                    throw -1;
            input.erase(0, input.find(':') + 1);
            datas1.minut = atoi((input.substr (0, input.find(':'))).c_str());
                if (datas1.minut > 60 || datas1.minut < 0)
                    throw -1;
            input.erase(0, input.find(':') + 1);
            datas1.sec = atoi((input.substr (0, input.find(' '))).c_str());
                if (datas1.sec > 60 || datas1.sec < 0)
                    throw -1;
            input.erase(0, input.find(' ') + 1);
            datas1.celc = atoi(input.c_str());
            return datas1;
        }
      }
      //cout << "year: " << year<<" "<< month << " " << day << "time: " << hour<<" " << minut<< " " << sec << "celc: " << celc;

    /* catch (...){
        return x;
    }
*/
}
