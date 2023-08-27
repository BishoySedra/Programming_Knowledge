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

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string _firstName;
    string _lastName;
    string _email;
    string _phone;
    string _title;
    int _salary;
    string _department;

public:
    static int ID;
    // constructors
    Employee(string firstName, string lastName, string email, string phone, string title, int salary, string department);

    // methods
    void print();
    void sendEmail(string, string);
    void sendSMS(string);

    // setters
    void setFirstName(string);
    void setLastName(string);
    void setEmail(string);
    void setPhone(string);
    void setTitle(string);
    void setSalary(int);
    void setDepartment(string);

    // getters
    int id();
    string firstName();
    string lastName();
    string fullName();
    string email();
    string phone();
    string title();
    string department();
    int salary();
};

#endif