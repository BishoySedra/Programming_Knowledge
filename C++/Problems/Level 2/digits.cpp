#include <iostream>

using namespace std;

void printReversedDigits(int number)
{
    while (number)
    {
        cout << number % 10 << "\n";
        number /= 10;
    }
}

int sumDigits(int number)
{
    int sum = 0;
    while (number)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void reverseNumber(int &number)
{
    int reversed = 0;

    while (number)
    {
        reversed += number % 10;
        reversed *= 10;
        number /= 10;
    }

    reversed /= 10;

    number = reversed;
}

int countDigit(int number, int digit)
{
    int cnt = 0;
    while (number)
    {
        if (number % 10 == digit)
        {
            cnt++;
        }
        number /= 10;
    }
    return cnt;
}

void printCountAllDigits(int number)
{
    for (int i = 0; i <= 9; i++)
    {
        if (countDigit(number, i))
        {
            cout << "Digit " << i << " Frequency is " << countDigit(number, i) << " Time(s).\n";
        }
    }
}

void printInOrderDigits(int number)
{
    reverseNumber(number);
    printReversedDigits(number);
}

int main()
{

    printInOrderDigits(1234);

    // printCountAllDigits(1223222);

    // cout << countDigit(1223222, 2);

    // int number = 1234;
    // reverseNumber(number);
    // cout << number << "\n";

    // cout << sumDigits(1234);

    // printReversedDigits(1234);

    system("pause>0");
    return 0;
}