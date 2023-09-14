#include <iostream>

using namespace std;

enum numberType
{
    Even = 1,
    Odd = 2

};

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

numberType even_or_odd(int number)
{
    if (number & 1)
    {
        return numberType::Odd;
    }

    return numberType::Even;
}

void printType(numberType number)
{
    if (number == numberType::Even)
    {
        cout << "Your number is even\n";
        return;
    }
    cout << "Your number is odd\n";
}

int main()
{
    printType(even_or_odd(readNumber()));
    system("pause>0");
    return 0;
}