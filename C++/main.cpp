#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <iomanip>

#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define el "\n"
#define ll long long
#define tc       \
    long long t; \
    cin >> t;    \
    while (t--)
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & ~(1 << k))
#define isOn(n, k) ((n >> k) & 1)
#define isPowerOfTwo(n) n && !(n & (n - 1))

using namespace std;

ll rec(vector<ll> &arr, ll start)
{
    if (start == arr.size())
    {
        return 0;
    }

    return arr[start] + rec(arr, start + 1);
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double ans = static_cast<double>(rec(arr, 0) / arr.size());
    cout << fixed << setprecision(6) << ans << el;
}

int main()
{
    speed;
    solve();
    return 0;
}