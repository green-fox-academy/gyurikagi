#ifndef TMPLOG_H
#define TMPLOG_H

#include <string>
#include <conio.h>
#include <vector>
#include <stdexcept>
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
        void start_stop_log();

       /* void set_port_name;
*/
    protected:
        string line;
        bool open;
        SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);
        vector <string> database;


    private:
};

#endif // TMPLOG_H
