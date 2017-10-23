#ifndef FUNCTIONS.H
#define FUNCTIONS.H
#include <windows.h>

extern int y;
extern COORD coord;

void start_screen ();
void addiction (double, double);
void substraction (double, double);
void division (double, double);
void squaring (double, double);
void square_root (double, double);
void division_with_remainder (double, double);
void logarithm  (double, double);
void clear_screen ();
void set_cursor_pos(int);
void binaryto(char str[], int new_base);
void hexadecto(char str[], int new_base);
void decimalto (char str[], int new_base);


#endif // FUNCTIONS
