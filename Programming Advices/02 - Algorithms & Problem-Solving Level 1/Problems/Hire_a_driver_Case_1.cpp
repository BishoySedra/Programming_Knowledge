#include <iostream>

using namespace std;

int main()
{
    int age;
    bool hasDriverLicense;

    cout << "Enter Your Age? ";
    cin >> age;

    cout << "Has a driver license? ";
    cin >> hasDriverLicense;

    cout << ((age > 21 && hasDriverLicense) ? "Hired" : "Rejected");
    return 0;
}