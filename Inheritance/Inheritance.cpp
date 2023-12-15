#include <iostream>
#include <string>
#include "Person/Person.h"
#include "Employee/Employee.h"
#include "Developer/Developer.h"

using namespace std;

int main()
{
    Developer developer(1, "bishoy", "sedra", "dkslfjsdl", "01280432898", "Coding Instructor", "IS", "C++", 5000);
    developer.print();
    return 0;
}