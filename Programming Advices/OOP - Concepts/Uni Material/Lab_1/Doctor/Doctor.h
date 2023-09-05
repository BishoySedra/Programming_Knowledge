#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include <string>

using namespace std;

// Doctor => final name,
//           string working day,
//           static int counter

class Doctor
{
private:
    const string _name;
    string _working_day;

public:
    // Static Members
    int static counter;

    // Constructors
    Doctor(string name, string day);

    // Methods
    string getName();
    string getDay();
};

#endif