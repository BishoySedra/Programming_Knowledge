#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int maxOfTwo(int n1, int n2)
{
    if (n1 >= n2)
    {
        return n1;
    }
    return n2;
}

void printNumber(int res)
{
    cout << res;
}

int maxOfThree(int n1, int n2, int n3)
{
    int max = maxOfTwo(n1, n2);
    if (max >= n3)
    {
        return max;
    }
    return n3;
}

int main()
{
    printNumber(maxOfTwo(readNumber(), readNumber()));
    system("pause>0");
    return 0;
}