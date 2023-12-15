#ifndef CLINIC_H
#define CLINIC_H

#include <iostream>
#include <string>
#include <vector>
#include "../Doctor/Doctor.h"

using namespace std;

// Clinic => private Array of 3 Doctors
//           function insertDoctor => add and print the counter after each insertion
//           void display_doctors(given_day) => prints all the names of doctors

class Clinic
{
private:
    vector<Doctor> _doctors;

public:
    static int index;

    Clinic();
    void insert_doctor(Doctor doctor);
    void display_doctors(string given_day);
};

#endif