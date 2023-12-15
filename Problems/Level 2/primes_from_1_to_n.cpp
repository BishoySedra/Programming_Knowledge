#include <iostream>

using namespace std;

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

void print_primes_from_1_to_n(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << "\n";
        }
    }
}

int main()
{
    print_primes_from_1_to_n(10);
    system("pause>0");
    return 0;
}