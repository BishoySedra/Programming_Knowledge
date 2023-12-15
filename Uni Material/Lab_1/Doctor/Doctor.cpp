#include <iostream>
#include "Doctor.h"

using namespace std;

Doctor::Doctor(string name, string day) : _name(name), _working_day(day)
{
    counter++;
}

string Doctor::getName()
{
    return _name;
}

string Doctor::getDay()
{
    return _working_day;
}
