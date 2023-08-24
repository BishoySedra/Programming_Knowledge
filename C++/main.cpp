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
    forN(n)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        if (arr[0] == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << el;
        return;
    }

    ll validCnt = 0, invalidCnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i] - arr[i - 1]) <= 1)
        {
            validCnt++;
        }
        else
        {
            invalidCnt++;
        }
    }

    if (validCnt > invalidCnt)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << el;
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