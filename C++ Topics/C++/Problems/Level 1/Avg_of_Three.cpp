#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int sumOfThree(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}

double avgOfThree(int n1, int n2, int n3)
{
    return (double)sumOfThree(n1, n2, n3) / 3;
}

void printNumber(double res)
{
    cout << res;
}

int main()
{
    printNumber(avgOfThree(readNumber(), readNumber(), readNumber()));
    system("pause>0");
    return 0;
}