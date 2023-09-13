#include <iostream>

using namespace std;

double readNumber()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

void halfOfNumber(double number)
{
    cout << "Half of " << number << " is " << number / 2 << "\n";
}

int main()
{

    halfOfNumber(readNumber());
    system("pause>0");
    return 0;
}