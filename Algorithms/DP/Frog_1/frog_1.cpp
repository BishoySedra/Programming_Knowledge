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

vector<ll> stones;
const int N = 1e5;
ll mem[N + 1];

ll getMinCost(ll stoneIndex, ll stonesNumber)
{
    if (stoneIndex == stonesNumber - 1)
    {
        return 0;
    }

    if (mem[stoneIndex] != -1)
    {
        return mem[stoneIndex];
    }

    ll cost1 = abs(stones[stoneIndex] - stones[stoneIndex + 1]) + getMinCost(stoneIndex + 1, stonesNumber);
    ll cost2 = LLONG_MAX;
    if (stoneIndex + 2 < stonesNumber)
    {
        cost2 = abs(stones[stoneIndex] - stones[stoneIndex + 2]) + getMinCost(stoneIndex + 2, stonesNumber);
    }

    return mem[stoneIndex] = min(cost1, cost2);
}

void solve()
{
    ll stonesNumber;
    cin >> stonesNumber;

    stones.resize(stonesNumber);

    forN(stonesNumber)
    {
        cin >> stones[i];
    }

    cout << getMinCost(0, stonesNumber) << el;
}

int main()
{
    // file;
    boost;
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     memset(mem, -1, sizeof mem);
    //     solve();
    // }
    memset(mem, -1, sizeof mem);
    solve();
    return 0;
}
