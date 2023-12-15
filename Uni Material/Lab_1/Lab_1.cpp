// Built-in Libraries
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

// Classes
#include "Doctor/Doctor.cpp"
#include "Clinic/Clinic.cpp"

using namespace std;

int Doctor::counter = 0;
int Clinic::index = 0;

int main()
{
    Doctor d1("Bishoy", "Saturday");
    Doctor d2("Sedra", "Sunday");
    Doctor d3("Saber", "Saturday");

    Clinic c;
    c.insert_doctor(d1);
    c.insert_doctor(d2);
    c.insert_doctor(d3);
    c.insert_doctor(d3);
    c.insert_doctor(d2);
    c.display_doctors("Saturday");

    return 0;
}