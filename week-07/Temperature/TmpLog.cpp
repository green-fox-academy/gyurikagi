#include "TmpLog.h"
#include <iostream>

using namespace std;


TmpLog::TmpLog()
{
    //ctor
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


}

void TmpLog::start_stop_log(){
    string line;
    while(1){
    serial->readLineFromPort(&line);
    if (line.length() > 0){
    cout << line << endl;
    }
    }

}


void TmpLog::close_port (){
    serial->closePort();
}
