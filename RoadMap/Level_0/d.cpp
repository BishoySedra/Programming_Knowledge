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
    ll k, a, b;
    cin >> k >> a >> b;
    ll prod = 1, dec_a = 0;

    while (a != 0)
    {
        dec_a += prod * (a % 10);
        a /= 10;
        prod *= k;
    }

    ll dec_b = 0;
    prod = 1;
    while (b != 0)
    {
        dec_b += prod * (b % 10);
        b /= 10;
        prod *= k;
    }

    cout << dec_a * dec_b << el;
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