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
    ll buttons, bulbs;
    cin >> buttons >> bulbs;

    ll number_of_bulbs;
    unordered_map<ll, bool> bulb_map;
    forN(buttons)
    {
        cin >> number_of_bulbs;

        ll bulb_number;
        for (int j = 0; j < number_of_bulbs; j++)
        {
            cin >> bulb_number;
            bulb_map[bulb_number] = true;
        }
    }

    for (int i = 1; i <= bulbs; i++)
    {
        if (bulb_map.find(i) == bulb_map.end())
        {
            cout << "NO" << el;
            return;
        }
    }

    cout << "YES" << el;
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