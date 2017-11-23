#include <iostream>
#include <string>
#include <vector>

#include "TmpLog.h"

#include "SerialPortWrapper.h"

using namespace std;


int main()
{
    string userinput;


    // port name
  /*  vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;

    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    } */
    TmpLog tmp;
    tmp.print_screen();

    do {
        cin >> userinput;
        cin.ignore();
        if (userinput == "h"){
        tmp.print_screen();

        } else if (userinput == "o") {
            tmp.open_port();
        } else if (userinput == "c"){
           tmp.close_port();
        }

    } while (userinput != "e");

        // connection

     /*   SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);
        serial->openPort();
        string line;
        while(1){
        serial->readLineFromPort(&line);
        if (line.length() > 0){
        cout << line << endl;
        }
        }
        serial->closePort();*/
    return 0;
}



