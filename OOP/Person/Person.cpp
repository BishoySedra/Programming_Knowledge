#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(int id, string firstName, string lastName, string email, string phone)
{
    this->_id = id;
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_email = email;
    this->_phone = phone;
}

void Person::setFirstName(string firstName)
{
    this->_firstName = firstName;
}

void Person::setLastName(string lastName)
{
    this->_lastName = lastName;
}

void Person::setEmail(string email)
{
    this->_email = email;
}

void Person::setPhone(string phone)
{
    this->_phone = phone;
}

int Person::id()
{
    return _id;
}

string Person::firstName()
{
    return _firstName;
}

string Person::lastName()
{
    return _lastName;
}

string Person::fullName()
{
    return _firstName + " " + _lastName;
}

string Person::email()
{
    return _email;
}

string Person::phone()
{
    return _phone;
}

void Person::print()
{
    cout << "\n info \n";
    cout << "\n----------------------------------\n";
    cout << "\n id: " << id() << "\n";
    cout << "\n first name: " << firstName() << "\n";
    cout << "\n last name: " << lastName() << "\n";
    cout << "\n full name: " << firstName() << " " << lastName() << "\n";
    cout << "\n email: " << email() << "\n";
    cout << "\n phone number: " << phone() << "\n";
    cout << "\n----------------------------------\n";
}

void Person::sendEmail(string subject, string body)
{
    cout << "\nThe email is successfully sent to " << email() << "\n";
    cout << "Subject: " << subject << "\n";
    cout << "Body: " << body << "\n";
}

void Person::sendSMS(string msg)
{
    cout << "\nThe message is successfully sent to " << phone() << "\n";
    cout << "message: " << msg << "\n";
}