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
    int n, m;
    cin >> n;

    vector<ll> arr1(n);
    forN(n)
    {
        cin >> arr1[i];
    }

    sort(interval(arr1));

    cin >> m;

    int num;
    forN(m)
    {
        cin >> num;
        int index = upper_bound(interval(arr1), num) - arr1.begin();
        cout << index << el;
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