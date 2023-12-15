#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(int id, string firstName, string lastName, string email, string phone, string title, int salary, string department)
{
    this->_id = id;
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_email = email;
    this->_phone = phone;
    this->_department = department;
    this->_title = title;
    this->_salary = salary;
}

void Employee::setTitle(string title)
{
    this->_title = title;
}

void Employee::setSalary(int salary)
{
    this->_salary = salary;
}

void Employee::setDepartment(string dept)
{
    this->_department = dept;
}

string Employee::title()
{
    return _title;
}

string Employee::department()
{
    return _department;
}

int Employee::salary()
{
    return _salary;
}

void Employee::print()
{
    cout << "\n info \n";
    cout << "\n----------------------------------\n";
    cout << "\nid: " << id() << "\n";
    cout << "\nfirst name: " << firstName() << "\n";
    cout << "\nlast name: " << lastName() << "\n";
    cout << "\nfull name: " << firstName() << " " << lastName() << "\n";
    cout << "\nemail: " << email() << "\n";
    cout << "\nphone number: " << phone() << "\n";
    cout << "\ntitle: " << title() << "\n";
    cout << "\ndepartment: " << department() << "\n";
    cout << "\nsalary: " << salary() << "\n";
    cout << "\n----------------------------------\n";
}