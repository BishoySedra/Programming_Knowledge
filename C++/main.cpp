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
    ll n, m;
    cin >> n >> m;

    string name, ip;
    unordered_map<string, string> mp;
    forN(n)
    {
        cin >> name >> ip;
        mp[ip] = name;
    }

    forN(m)
    {
        cin >> name >> ip;
        string modified_ip = ip.substr(0, ip.size() - 1);
        cout << name << " " << ip << " #" << mp[modified_ip] << el;
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