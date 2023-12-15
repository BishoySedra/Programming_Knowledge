#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void printHalfNumber(int number)
{
    cout << "Half of " << number << " is " << (double)number / 2;
}

int main()
{
    printHalfNumber(readNumber());
    system("pause>0");
    return 0;
}