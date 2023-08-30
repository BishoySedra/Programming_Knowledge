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
    string _title;
    int _salary;
    string _department;

public:
    // constructors
    Employee(int id, string firstName, string lastName, string email, string phone, string title, int salary, string department);

    // methods
    void print();

    // setters
    void setTitle(string);
    void setSalary(int);
    void setDepartment(string);

    // getters
    string title();
    string department();
    int salary();
};

#endif