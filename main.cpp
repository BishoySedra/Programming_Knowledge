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

const int MOD = 1e9 + 7;

long long countDiceCombinations(int targetSum)
{
    vector<long long> dp(targetSum + 1, 0);

    dp[0] = 1;

    for (int sum = 1; sum <= targetSum; sum++)
    {
        for (int diceValue = 1; diceValue <= 6; diceValue++)
        {
            if (sum - diceValue >= 0)
            {
                dp[sum] += (dp[sum - diceValue] % MOD);
            }
        }
    }

    return dp[targetSum];
}

void solve()
{
    int sum;
    cin >> sum;
    cout << countDiceCombinations(sum) % MOD << el;
}

int main()
{
    // file;
    boost;
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     // memset(mem, -1, sizeof mem);
    //     solve();
    // }
    solve();
    return 0;
}
