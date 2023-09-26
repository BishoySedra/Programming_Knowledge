#include <iostream>

using namespace std;

int main()
{
    // int a = 32, &x = a;
    // // cout << a << "\n";
    // // cout << x << "\n";

    // x = 50;
    // // cout << a << "\n";
    // // cout << x << "\n";

    // int *ptr = &a;
    // cout << ptr << "\n";
    // cout << &a << "\n";

    // a = 100;
    // cout << *ptr << "\n";

    // int **ptr2 = &ptr;
    // cout << **ptr2 << "\n";

    int x = 10;
    void *ptr;

    ptr = &x;

    cout << ptr << "\n";
    cout << *((int *)ptr) << "\n";

    float y = 10.5;

    ptr = &y;

    cout << ptr << "\n";
    cout << *((float *)ptr) << "\n";

    return 0;
}