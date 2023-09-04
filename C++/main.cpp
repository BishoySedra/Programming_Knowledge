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

bool is_valid(ll num)
{
    ll sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum == 10;
}

void printVector(vector<ll> arr)
{
    for (auto elem : arr)
    {
        cout << elem << " ";
    }
    cout << el;
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    n %= LLONG_MAX;
    cout << ((n % x == 0) ? "YES\n" : "NO\n");
}

int main()
{
    // file;
    boost;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}