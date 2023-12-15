#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void printNumber(int res)
{
    cout << res << "\n";
}

void swap(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int n1 = readNumber();
    int n2 = readNumber();

    swap(n1, n2);

    printNumber(n1);
    printNumber(n2);

    system("pause>0");
    return 0;
}