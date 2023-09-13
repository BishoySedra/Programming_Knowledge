#include <iostream>

using namespace std;

int readAge()
{
    int age;

    cout << "Enter Your Age? ";

    cin >> age;

    return age;
}

bool readHasDriverLicense()
{
    bool hasDriverLicense;

    cout << "Has a driver license? ";
    cin >> hasDriverLicense;
    return hasDriverLicense;
}

void hireDriver(int age, bool hasDriverLicense)
{
    cout << ((age > 21 && hasDriverLicense) ? "Hired\n" : "Rejected\n");
}

int main()
{
    hireDriver(readAge(), readHasDriverLicense());

    system("pause>0");
    return 0;
}