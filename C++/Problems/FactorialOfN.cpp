#include <iostream>

using namespace std;

int fact(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int readNumber()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

int main()
{
    cout << fact(readNumber());
    system("pause>0");
    return 0;
}