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

vector<int> coins;
const int MAX_SUM = 1000;
const int MAX_COINS_CNT = 1000;
int mem[MAX_SUM][MAX_COINS_CNT];

int coinChange(int targetSum, int coinsCount)
{
    if (targetSum == 0)
    {
        return 1;
    }

    if (coinsCount == -1)
    {
        return 0;
    }

    if (mem[targetSum][coinsCount] != -1)
    {
        return mem[targetSum][coinsCount];
    }

    // take the coin
    int take = 0;
    if (coins[coinsCount - 1] <= targetSum)
    {
        take = coinChange(targetSum - coins[coinsCount - 1], coinsCount);
    }

    int leave = coinChange(targetSum, coinsCount - 1);

    return mem[targetSum][coinsCount] = take + leave;
}

int coinChangeTabulation(int targetSum, int coinsCount)
{
    int dp[MAX_SUM + 1][MAX_COINS_CNT + 1];

    for (int coinIndex = 0; coinIndex < coinsCount; coinIndex++)
    {
        dp[0][coinIndex] = 1;
    }

    for (int sum = 1; sum <= targetSum; sum++)
    {
        for (int coinIndex = 1; coinIndex <= coinsCount; coinIndex++)
        {
            // take the coin
            int take = 0;
            if (coins[coinIndex - 1] <= targetSum)
            {
                take = dp[sum - coins[coinIndex - 1]][coinIndex];
            }

            int leave = dp[sum][coinIndex - 1];
            dp[sum][coinIndex] = take + leave;
        }
    }

    return dp[targetSum][coinsCount];
}

void solve()
{
    int targetSum, coinsCount;
    cin >> targetSum >> coinsCount;

    coins.resize(coinsCount);
    memset(mem, -1, sizeof mem);

    forN(coinsCount)
    {
        cin >> coins[i];
    }

    cout << coinChange(targetSum, coinsCount) << el;
    // cout << coinChangeTabulation(targetSum, coinsCount) << el;
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