#include <iostream>
#include <string>
#include "Person/Person.cpp"
#include "Employee/Employee.cpp"

using namespace std;

class Developer : public Person
{
private:
    string _title;
    string _department;
    string _mainProgrammingLanguage;
    float _salary;

public:
    Developer(int id, string firstName, string lastName, string email, string phone, string title, string department, string mainProgrammingLanguage, float salary)
        : Person(id, firstName, lastName, email, phone)
    {
        _title = title;
        _department = department;
        _mainProgrammingLanguage = mainProgrammingLanguage;
        _salary = salary;
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
        cout << "\n title: " << _title << "\n";
        cout << "\n department: " << _department << "\n";
        cout << "\n main programming language: " << _mainProgrammingLanguage << "\n";
        cout << "\n salary: " << _salary << "\n";
        cout << "\n----------------------------------\n";
    }
};

int main()
{
    Developer developer(1, "Bishoy", "Sedra", "bishosedra@gmail.com", "01280432898", "Coding Instructor", "IS", "C++", 5000);
    developer.print();
    return 0;
}