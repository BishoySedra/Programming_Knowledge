#include <iostream>
#define el "\n"

using namespace std;

int main()
{
    cout << "Enter Your Age: ";

    int age;
    cin >> age;

    int days = age * 365;

    cout << "You live " << el;
    cout << days << " Days" << el;
    cout << days * 24 << " Hours" << el;
    cout << days * 24 * 60 << " Minutes" << el;
    cout << days * 24 * 60 * 60 << " Seconds" << el;
    return 0;
}