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

    protected:
        string line;
        bool open;
        SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);
        vector <string> database;
        struct datas {
            int year;
            int month;
            int day;
            int hour;
            int minut;
            int sec;
            int celc;
        } ;


    private:

        public:
        TmpLog();
        ~TmpLog();
        void print_screen();
        void open_port();
        void close_port();
        void start_stop_log();
        datas get_data_from_line();

       /* void set_port_name;
*/
};

#endif // TMPLOG_H
