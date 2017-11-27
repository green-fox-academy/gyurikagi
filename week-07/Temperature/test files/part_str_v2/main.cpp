#include <iostream>
#include <sstream>
#include <string>
#include <time.h>

using namespace std;

struct temperature_record{
    long int timestamp;
    int temperature;
};

temperature_record parseString(string line){

	int temperature;
	string date, time;

	time_get();

	istringstream exampleStream(line);
	exampleStream >> date >> time >> temperature;
	if (exampleStream.fail()) {
		throw "Invalid string format!";
	}
	tm parsedDateTime;

	string dateTime = date + " " + time;
	if (strptime(dateTime.c_str(), "%Y.%m.%d %H:%M:%S", &parsedDateTime) == NULL) {
		throw "Invalid string format!";
	}

	if (-273 > temperature || 1000 < temperature) {
		throw "Temperature is out of range!";
	}

	long timestamp = mktime(&parsedDateTime);

	temperature_record rec;
	rec.temperature = temperature;
	rec.timestamp = timestamp;
	return rec;
}
