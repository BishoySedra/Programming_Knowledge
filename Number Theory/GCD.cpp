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
#define forN(n) for (int i = 0; i < n; i++)

using namespace std;

int gcd(int a, int b)
{
    // checking negativity
    if (a < 0 || b < 0)
    {
        a = abs(a);
        b = abs(b);
    }

    // swapping
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // base case
    if (a % b == 0)
    {
        return b;
    }

    return gcd(b, a % b);
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << el;
}

int main()
{
    // file;
    boost;
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}