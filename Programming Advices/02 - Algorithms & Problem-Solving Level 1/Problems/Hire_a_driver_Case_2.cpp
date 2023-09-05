#include <iostream>

using namespace std;

int main()
{
    int age;
    bool hasDriverLicense, hasRecommendations;

    cout << "Enter Your Age? ";
    cin >> age;

    cout << "Has a driver license? ";
    cin >> hasDriverLicense;

    cout << "Has Recommendations? ";
    cin >> hasRecommendations;

    cout << ((hasRecommendations || age > 21 && hasDriverLicense) ? "Hired" : "Rejected");
    return 0;
}