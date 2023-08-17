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
    ll n;
    cin >> n;

    vector<ll> arr(n);
    unordered_map<ll, ll> freq;
    unordered_map<ll, bool> found;
    forN(n)
    {
        cin >> arr[i];
        found[arr[i]] = true;
    }

    sort(interval(arr));

    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (found[arr[i]])
        {
            ans += arr[i];
            found[arr[i] + 1] = false;
            found[arr[i] - 1] = false;
        }
    }

    cout << ans << el;
}

int main()
{
    file;
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