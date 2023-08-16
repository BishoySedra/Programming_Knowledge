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
    ll n, num;
    cin >> n;

    unordered_map<ll, vector<ll>> mp;
    forN(n)
    {
        cin >> num;
        mp[num].push_back(i + 1);
    }

    if (mp.size() != 3)
    {
        cout << 0 << el;
        return;
    }

    // the maximum number of teams
    size_t cnt = LONG_MAX;
    for (auto it : mp)
    {
        cnt = min(cnt, (it.second).size());
    }

    cout << cnt << el;
    forN(cnt)
    {
        cout << mp[1].back() << " " << mp[2].back() << " " << mp[3].back() << el;
        mp[1].pop_back();
        mp[2].pop_back();
        mp[3].pop_back();
    }
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