#include <iostream>

using namespace std;

int main()
{
    int a = 32, &x = a;
    // cout << a << "\n";
    // cout << x << "\n";

    x = 50;
    // cout << a << "\n";
    // cout << x << "\n";

    int *ptr = &a;
    cout << ptr << "\n";
    cout << &a << "\n";

    a = 100;
    cout << *ptr << "\n";

    int **ptr2 = &ptr;
    cout << **ptr2 << "\n";

    return 0;
}