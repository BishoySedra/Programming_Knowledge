#pragma once

#include <iostream>
#include "../Employee/Employee.h"

using namespace std;

class Developer : public Employee
{
private:
    string _mainProgrammingLanguage;

public:
    Developer(int id, string firstName, string lastName, string email, string phone, string title, string department, string mainProgrammingLanguage, float salary)
        : Employee(id, firstName, lastName, email, phone, title, salary, department)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }

    void setMainProgrammingLanguage(string mainProgrammingLanguage)
    {
        this->_mainProgrammingLanguage = mainProgrammingLanguage;
    }

    string mainProgrammingLanguage()
    {
        return _mainProgrammingLanguage;
    }

    void print()
    {
        cout << "\n info \n";
        cout << "\n----------------------------------\n";
        cout << "\n id: " << id() << "\n";
        cout << "\n first name: " << firstName() << "\n";
        cout << "\n last name: " << lastName() << "\n";
        cout << "\n full name: " << firstName() << " " << lastName() << "\n";
        cout << "\n email: " << email() << "\n";
        cout << "\n phone number: " << phone() << "\n";
        cout << "\n title: " << title() << "\n";
        cout << "\n department: " << department() << "\n";
        cout << "\n main programming language: " << mainProgrammingLanguage() << "\n";
        cout << "\n salary: " << salary() << "\n";
        cout << "\n----------------------------------\n";
    }
};