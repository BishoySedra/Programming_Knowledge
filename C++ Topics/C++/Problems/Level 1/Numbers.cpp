#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void print_from_1_to_n(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\n";
    }
}

void print_from_n_to_1(int n)
{
    for (int i = n; i >= 1; i--)
    {
        cout << i << "\n";
    }
}

enum numberType
{
    Even = 1,
    Odd = 2

};

numberType even_or_odd(int number)
{
    if (number & 1)
    {
        return numberType::Odd;
    }

    return numberType::Even;
}

int odd_sum_from_1_to_n(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (even_or_odd(i) == numberType::Odd)
        {
            sum += i;
        }
    }
    return sum;
}

int even_sum_from_1_to_n(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (even_or_odd(i) == numberType::Even)
        {
            sum += i;
        }
    }
    return sum;
}

long long fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

void readUntilPositiveNumber()
{
    do
    {
        int number = readNumber();

        if (number < 0)
        {
            cout << "Please Enter a positive number!\n";
            continue;
        }

        cout << fact(number);
        return;

    } while (true);
}

long long powerOfTwo(int n)
{
    return n * n;
}

long long powerOfThree(int n)
{
    return powerOfTwo(n) * n;
}

long long powerOfFour(int n)
{
    return powerOfThree(n) * n;
}

long long powerOfM(int number, int m)
{
    long long res = 1;

    for (int i = 0; i < m; i++)
    {
        res *= number;
    }

    return res;
}

void readUntilMinus99()
{
    long long sum = 0;
    do
    {
        int number = readNumber();

        if (number == -99)
        {
            cout << sum << "\n";
            return;
        }

        sum += number;

    } while (true);
}

bool isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void readATMPinThreeTimes()
{
    int times = 3, correct_pin = 1234, balance = 7500;
    do
    {
        int pin = readNumber();

        if (pin != correct_pin)
        {
            cout << "Wrong PIN!\nYou have " << times << " Times\nPlease Enter the correct PIN!\n";
            times--;

            if (!times)
            {
                cout << "Card is locked!";
                return;
            }

            continue;
        }

        cout << "Your Balance is: " << balance << "\n";
        return;
    } while (true);
}

int main()
{
    readATMPinThreeTimes();
    // cout << isPrime(readNumber()) << "\n";
    // cout << isPrime(readNumber()) << "\n";
    // cout << isPrime(readNumber()) << "\n";
    // readUntilMinus99();
    // cout << powerOfM(2, 4) << "\n";
    // cout << powerOfTwo(3) << "\n";
    // cout << powerOfThree(3) << "\n";
    // cout << powerOfFour(3) << "\n";
    // readUntilPositiveNumber();
    // cout << even_sum_from_1_to_n(10);
    // cout << odd_sum_from_1_to_n(10);
    system("pause>0");
    return 0;
}