#include <iostream>
#include <string>
#include <vector>

#include "SerialPortWrapper.h"

using namespace std;

void print_screen();

int main()
{   string userinput;


    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;

    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }
    print_screen();
    cin >> userinput;
    if (userinput == "h"){
        print_screen();
    } else if (userinput == "o") {

        }
        // connection

        SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);
        serial->openPort();
        string line;
        while(1){
        serial->readLineFromPort(&line);
        if (line.length() > 0){
        cout << line << endl;
        }
        }
        serial->closePort();
    return 0;
}


void print_screen(){
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
