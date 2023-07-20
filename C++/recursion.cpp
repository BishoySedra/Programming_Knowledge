#include <bits/stdc++.h>

#define boost ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define el "\n"
#define ll long long
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & ~(1 << k))
#define isOn(n, k) ((n >> k) & 1)
#define isPowerOfTwo(n) n && !(n & (n - 1))
#define file                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define interval(arr) arr.begin(), arr.end()

using namespace std;

int fib(int n) // O(2^n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fib(n - 2) + fib(n - 1);
}

int pow(int n, int p) // O(p)
{
    if (p == 0)
    {
        return 1;
    }

    return n * pow(n, p - 1);
}

// Fast Power
int fpow(int n, int p) // O(log(n))
{
    if (p == 0)
        return 1;
    int res = fpow(n, p / 2);
    return ((p & 1) ? res * res * n : res * res);
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << fpow(n, p);
    return 0;
}