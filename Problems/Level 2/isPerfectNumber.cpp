#include <iostream>
#include <vector>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

vector<int> divisors(int n)
{
    vector<int> res;
    int i = 1;

    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res.push_back(i);
            if (i != 1)
            {
                res.push_back(n / i);
            }
        }
    }

    if (i * i == n)
    {
        res.push_back(i);
    }

    return res;
}

void printVector(vector<int> v)
{
    for (auto elem : v)
    {
        cout << elem << " ";
    }
}

int sumVector(vector<int> v)
{
    int sum = 0;
    for (auto elem : v)
    {
        sum += elem;
    }
    return sum;
}

bool isPerfect(int number)
{
    if (number == 1)
    {
        return false;
    }
    return number == sumVector(divisors(number));
}

void print_perfects_from_1_to_n(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isPerfect(i))
        {
            cout << i << "\n";
        }
    }
}



int main()
{
    print_perfects_from_1_to_n(readNumber());
    // cout << isPerfect(28) << "\n";
    // cout << isPerfect(12) << "\n";
    system("pause>0");
    return 0;
}