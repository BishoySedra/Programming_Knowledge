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

bool readRecommendationExisting()
{
    bool hasRecommendation;
    cout << "Do you have a recommendation? ";
    cin >> hasRecommendation;
    return hasRecommendation;
}

string checkHiring(int age, bool hasDriverLicense, bool hasRecommendation)
{
    if (hasRecommendation)
    {
        return "Hired";
    }

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
    printStatus(checkHiring(readAge(), readDriverLicenseExisting(), readRecommendationExisting()));
    system("pause>0");
    return 0;
}