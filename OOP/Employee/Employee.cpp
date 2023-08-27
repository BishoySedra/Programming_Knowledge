#include "Employee.h"
#include <iostream>

using namespace std;

int Employee::ID = 0;

Employee::Employee(string firstName, string lastName, string email, string phone, string title, int salary, string department)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_email = email;
    this->_phone = phone;
    this->_department = department;
    this->_title = title;
    this->_salary = salary;
    ID++;
}

void Employee::setFirstName(string firstName)
{
    this->_firstName = firstName;
}

void Employee::setLastName(string lastName)
{
    this->_lastName = lastName;
}

void Employee::setEmail(string email)
{
    this->_email = email;
}

void Employee::setPhone(string phone)
{
    this->_phone = phone;
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

int Employee::id()
{
    return ID;
}

string Employee::firstName()
{
    return _firstName;
}

string Employee::lastName()
{
    return _lastName;
}

string Employee::fullName()
{
    return _firstName + " " + _lastName;
}

string Employee::email()
{
    return _email;
}

string Employee::phone()
{
    return _phone;
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

void Employee::sendEmail(string subject, string body)
{
    cout << "\nThe email is successfully sent to " << email() << "\n";
    cout << "Subject: " << subject << "\n";
    cout << "Body: " << body << "\n";
}

void Employee::sendSMS(string msg)
{
    cout << "\nThe message is successfully sent to " << phone() << "\n";
    cout << "message: " << msg << "\n";
}