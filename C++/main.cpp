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

void printVector(vector<ll> arr)
{
    for (auto elem : arr)
    {
        cout << elem << " ";
    }
}

void printVectorOfPairs(vector<pair<ll, ll>> pairs)
{
    for (auto pair : pairs)
    {
        cout << pair.first << " " << pair.second << el;
    }
}

ll getDivisors(ll n)
{

    ll i = 1, cnt = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt += 2;
        }
    }

    if (i * i == n)
    {
        cnt++;
    }

    return cnt;
}

void solve()
{
    ll n, num;
    cin >> n;

    vector<ll> arr(n);
    forN(n)
    {
        cin >> arr[i];
    }

    bool isDec = false;
    ll cnt = 0, ans = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (isDec && arr[i] > arr[j])
            {
                cnt++;
            }
            else if (!isDec && arr[i] < arr[j])
            {
                cnt++;
            }
            isDec = !isDec;
            ans = max(cnt, ans);
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