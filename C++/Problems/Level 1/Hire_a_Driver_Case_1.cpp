#include <iostream>

using namespace std;

int readAge()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    return age;
}

bool readDriverLicenseExisting()
{
    bool hasDriverLicense;
    cout << "Do You have a driver license? ";
    cin >> hasDriverLicense;
    return hasDriverLicense;
}

string checkHiring(int age, bool hasDriverLicense)
{
    if (age > 21 && hasDriverLicense)
    {
        return "Hired";
    }

    return "Rejected";
}

void printStatus(string status)
{
    cout << status + "\n";
}

int main()
{
    printStatus(checkHiring(readAge(), readDriverLicenseExisting()));
    system("pause>0");
    return 0;
}