//   Class Person:
// 	ID read-only property
// 	FirstName
// 	LastName
// 	Phone
// 	Email

// 	SendEmail(subject,body)
// 	SendSMS(message)

#pragma once

#include <iostream>

using namespace std;

class Person
{
private:
    int _id;
    string _firstName;
    string _lastName;
    string _email;
    string _phone;

public:
    Person(int id, string firstName, string lastName, string email, string phone)
    {
        this->_id = id;
        this->_firstName = firstName;
        this->_lastName = lastName;
        this->_email = email;
        this->_phone = phone;
    }

    void setFirstName(string firstName)
    {
        this->_firstName = firstName;
    }

    void setLastName(string lastName)
    {
        this->_lastName = lastName;
    }

    void setEmail(string email)
    {
        this->_email = email;
    }

    void setPhone(string phone)
    {
        this->_phone = phone;
    }

    int id()
    {
        return _id;
    }

    string firstName()
    {
        return _firstName;
    }

    string lastName()
    {
        return _lastName;
    }

    string fullName()
    {
        return _firstName + " " + _lastName;
    }

    string email()
    {
        return _email;
    }

    string phone()
    {
        return _phone;
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
        cout << "\n----------------------------------\n";
    }

    void sendEmail(string subject, string body)
    {
        cout << "\nThe email is successfully sent to " << email() << "\n";
        cout << "Subject: " << subject << "\n";
        cout << "Body: " << body << "\n";
    }

    void sendSMS(string msg)
    {
        cout << "\nThe message is successfully sent to " << phone() << "\n";
        cout << "message: " << msg << "\n";
    }
};