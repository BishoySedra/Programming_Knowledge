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

bool readHasRecommendations()
{
    bool hasRecommendations;

    cout << "Has Recommendations? ";

    cin >> hasRecommendations;

    return hasRecommendations;
}

void hireDriver(int age, bool hasDriverLicense, bool hasRecommendations)
{
    cout << ((hasRecommendations || (age > 21 && hasDriverLicense)) ? "Hired" : "Rejected");
}

int main()
{
    hireDriver(readAge(), readHasDriverLicense(), readHasRecommendations());
    system("pause>0");
    return 0;
}