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

void solve()
{
    double num, digit;
    cin >> num;
    digit = int((num - int(num)) * 10);
    // cout << digit;
    if (digit >= 0 && digit <= 2)
    {
        cout << int(num) << '-';
        return;
    }
    if (digit >= 3 && digit <= 6)
    {
        cout << int(num);
        return;
    }
    if (digit >= 7 && digit <= 9)
    {
        cout << int(num) << '+';
        // cout << int(num);
        return;
    }
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