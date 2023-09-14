#include <iostream>

using namespace std;

void printName(string name)
{
    cout << "Your Name is " << name << "\n";
}

string readName()
{
    string name;
    cout << "Enter Your Name: ";
    cin >> name;
    return name;
}

int main()
{
    printName(readName());
    system("pause>0");
    return 0;
}