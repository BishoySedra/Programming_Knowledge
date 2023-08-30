#include <iostream>
#include <string>
#include "Person/Person.cpp"

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

int main()
{
    Developer developer(10, "Bishoy", "Sedra", "sfsdf@gamil.com", "012156456", "Instructor", "IS", "C++", 5000);
    developer.print();
    return 0;
}