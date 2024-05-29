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

// ==================== FINDING KS top-bottom approach "MEMOIZATION" ====================
vector<int> weights;
vector<int> prices;
const int MAX_WEIGHT = 1000;
const int MAX_ITEMS_COUNT = 1000;
long long mem[MAX_ITEMS_COUNT][MAX_WEIGHT];

long long KSMemoization(int itemsCount, int remainingWeight)
{
    if (itemsCount == 0 || remainingWeight == 0)
    {
        return 0;
    }

    if (mem[itemsCount][remainingWeight] != -1)
    {
        return mem[itemsCount][remainingWeight];
    }

    // take the item
    long long op1 = -1;
    if (weights[itemsCount - 1] <= remainingWeight)
    {
        op1 = prices[itemsCount - 1] + KSMemoization(itemsCount - 1, remainingWeight - weights[itemsCount - 1]);
    }

    // don't take the item
    long long op2 = KSMemoization(itemsCount - 1, remainingWeight);

    return mem[itemsCount][remainingWeight] = max(op1, op2);
}
// ==================== FINDING KS top-bottom approach "MEMOIZATION" ====================

// ==================== FINDING KS bottom-top approach "TABULATION" ====================

long long dp[MAX_ITEMS_COUNT + 1][MAX_WEIGHT + 1];
long long KSTabulation(int itemsCount, int remainingWeight)
{
    for (int itemIndex = 0; itemIndex <= itemsCount; itemIndex++)
    {
        dp[itemIndex][0] = 0;
    }

    for (int weight = 0; weight <= remainingWeight; weight++)
    {
        dp[0][weight] = 0;
    }

    for (int itemIndex = 1; itemIndex <= itemsCount; itemIndex++)
    {
        for (int weight = 1; weight <= remainingWeight; weight++)
        {
            int take = -1;
            if (weights[itemIndex - 1] <= weight)
            {
                take = prices[itemIndex - 1] + dp[itemIndex - 1][weight - weights[itemIndex - 1]];
            }

            int leave = dp[itemIndex - 1][weight];

            dp[itemIndex][weight] = max(take, leave);
        }
    }

    return dp[itemsCount][remainingWeight];
}

// ==================== FINDING KS bottom-top approach "TABULATION" ====================

void solve()
{
    // ==================== FINDING KS top-bottom approach "MEMOIZATION" ====================
    int itemsCount, maxWeight;
    cin >> itemsCount >> maxWeight;

    weights.resize(itemsCount + 1);
    prices.resize(itemsCount + 1);
    memset(mem, -1, sizeof mem);

    forN(itemsCount)
    {
        cin >> weights[i] >> prices[i];
    }

    cout << "Max Profit I've gain = " << KSMemoization(itemsCount, maxWeight) << el;
    cout << "Max Profit I've gain = " << KSTabulation(itemsCount, maxWeight) << el;
    // ==================== FINDING KS top-bottom approach "MEMOIZATION" ====================
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