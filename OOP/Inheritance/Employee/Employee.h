//   Class Employee:
// 	ID read-only property
// 	FirstName
// 	LastName
//  Title
// 	Phone
// 	Email
//  Salary
//  Department

// 	SendEmail(subject,body)
// 	SendSMS(message)

#pragma once

#include <iostream>
#include "../Person/Person.h"

using namespace std;

class Employee : public Person
{
private:
    string _title;
    int _salary;
    string _department;

public:
    Employee(int id, string firstName, string lastName, string email, string phone, string title, int salary, string department)
        : Person(id, firstName, lastName, email, phone)
    {
        this->_department = department;
        this->_title = title;
        this->_salary = salary;
    }

    void setTitle(string title)
    {
        this->_title = title;
    }

    void setSalary(int salary)
    {
        this->_salary = salary;
    }

    void setDepartment(string dept)
    {
        this->_department = dept;
    }

    string title()
    {
        return _title;
    }

    string department()
    {
        return _department;
    }

    int salary()
    {
        return _salary;
    }

    void print()
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
};