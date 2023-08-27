//   Class Person:
// 	ID read-only property
// 	FirstName
// 	LastName
// 	Phone
// 	Email

// 	SendEmail(subject,body)
// 	SendSMS(message)

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

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
    // constructors
    Person(int, string, string, string, string);

    // methods
    void print();
    void sendEmail(string, string);
    void sendSMS(string);

    // setters
    void setFirstName(string);
    void setLastName(string);
    void setEmail(string);
    void setPhone(string);

    // getters
    int id();
    string firstName();
    string lastName();
    string fullName();
    string email();
    string phone();
};

#endif