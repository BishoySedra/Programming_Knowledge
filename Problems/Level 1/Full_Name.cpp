#include <iostream>

using namespace std;

void printFullName(string first, string second)
{
    cout << "Your Full Name is " + first + " " + second + "\n";
}

string readFirstName()
{
    string name;
    cout << "Enter Your First Name: ";
    cin >> name;
    return name;
}

string readSecondName()
{
    string name;
    cout << "Enter Your Second Name: ";
    cin >> name;
    return name;
}

int main()
{
    printFullName(readFirstName(), readSecondName());
    system("pause>0");
    return 0;
}