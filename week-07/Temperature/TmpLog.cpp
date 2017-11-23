#include "TmpLog.h"
#include <iostream>

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
