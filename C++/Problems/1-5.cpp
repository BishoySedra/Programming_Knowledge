#include <iostream>
#include <string>

using namespace std;

enum numberType
{
    Odd = 1,
    Even = 2
};

int readNumber()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

numberType checkNumberType(int number)
{
    if (number % 2 == 0)
    {
        return numberType::Even;
    }

    return numberType::Odd;
}

void printNumberType(numberType type)
{
    if (type == numberType::Even)
    {
        cout << "Your number is even!\n";
    }
    cout << "Your number is odd!\n";
}

string readName()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    return name;
}

void printName(string name)
{
    cout << "Hello, my name is: " << name << "\n";
}

int main()
{
    printNumberType(checkNumberType(readNumber()));
    return 0;
}