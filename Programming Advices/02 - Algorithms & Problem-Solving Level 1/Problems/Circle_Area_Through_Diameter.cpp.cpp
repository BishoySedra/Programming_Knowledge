#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// circle area = (pi * d^2) / 4

int main()
{
    const double PI = acos(-1);
    double diameter;
    cin >> diameter;
    cout << fixed << setprecision(2) << (PI * (diameter * diameter)) / 4 << "\n";
    return 0;
}