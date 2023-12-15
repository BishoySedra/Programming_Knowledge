#include <iostream>
#include "Clinic.h"

using namespace std;

Clinic::Clinic()
{
    _doctors.reserve(3);
}

void Clinic::insert_doctor(Doctor doctor)
{
    if (index > 2)
    {
        cout << "The Clinic if full of doctors!\n";
        return;
    }
    _doctors.push_back(doctor);
    index++;
    cout << "The Counter " << index << "\n";
}

void Clinic::display_doctors(string given_day)
{
    for (int i = 0; i <= index; i++)
    {
        if (_doctors[i].getDay() == given_day)
        {
            cout << _doctors[i].getName() << "\n";
        }
    }
}
