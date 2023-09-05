#include <iostream>
#include "math.h"

using namespace std;

// rectangle area = side * sqrt(diagonal^2 - side^2)

int main()
{
    double side, diagonal;
    cin >> side >> diagonal;
    cout << side * sqrt((diagonal * diagonal) - (side * side));
    return 0;
}