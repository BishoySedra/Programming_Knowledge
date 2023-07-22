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

vector<ll> getDivisors(ll n) // O(sqrt(n))
{
    vector<ll> res;

    ll i = 1;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            res.push_back(i);
            res.push_back(n / i);
        }
    }

    if (i * i == n)
    {
        res.push_back(i);
    }

    return res;
}

void printVector(vector<ll> v)
{
    for (auto elem : v)
    {
        cout << elem << " ";
    }
}

void solve()
{
    ll n, num;
    cin >> n;

    unordered_map<ll, ll> mp;
    forN(n) // O(n * sqrt(num)) overall
    {
        cin >> num;

        vector<ll> arr = getDivisors(num); // O(sqrt(num))
        for (auto elem : arr)
        {
            mp[elem]++;
        }
    }

    ll cnt = 0;
    for (auto it : mp)
    {
        if (it.second == n)
        {
            cnt++;
        }
    }

    cout << cnt;
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