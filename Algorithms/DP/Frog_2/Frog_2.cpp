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

ll getMinCost(ll stoneIndex, ll stonesNumber, ll timesNumber)
{
    if (stoneIndex == stonesNumber - 1)
    {
        return 0;
    }

    if (mem[stoneIndex] != -1)
    {
        return mem[stoneIndex];
    }

    ll cost = LLONG_MAX;
    for (int i = 1; i <= timesNumber; i++)
    {
        if (stoneIndex + i < stonesNumber)
        {
            ll round_cost = abs(stones[stoneIndex] - stones[stoneIndex + i]) + getMinCost(stoneIndex + i, stonesNumber, timesNumber);
            cost = min(cost, round_cost);
        }
    }

    return mem[stoneIndex] = cost;
}

void solve()
{
    ll stonesNumber, timesNumber;
    cin >> stonesNumber >> timesNumber;

    stones.resize(stonesNumber);

    forN(stonesNumber)
    {
        cin >> stones[i];
    }

    cout << getMinCost(0, stonesNumber, timesNumber) << el;
}

int main()
{
    // file;
    // boost;
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
