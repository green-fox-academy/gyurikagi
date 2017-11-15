#include "House.h"
#include <iostream>
#include <string>

using namespace std;


House::House (string address, unsigned int area){
    this->address = address;
    this->area = area;
}


unsigned int House::get_price() {
      unsigned int price = area * 400;
      return this->price = price;
    }
