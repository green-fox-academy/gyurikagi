#ifndef TMPLOG_H
#define TMPLOG_H

#include <string>
#include <conio.h>
#include "SerialPortWrapper.h"
 using namespace std;


class TmpLog
{
    public:
        TmpLog();
        ~TmpLog();
        void print_screen();
        void open_port();
        void close_port();

       /* void set_port_name;

*/
    protected:
        string line;
        SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);



    private:
};

#endif // TMPLOG_H
