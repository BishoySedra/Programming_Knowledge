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

// ==================== FINDING FIBONACCI NUMBER top-bottom approach "MEMOIZATION" ====================

vector<long long> mem;
const int MOD = 1000000007;
long long fibMemoization(int n)
{
    // base case
    if (n <= 1)
    {
        return n % MOD;
    }

    // check if the current value already stored
    if (mem[n] != -1)
    {
        return mem[n] % MOD;
    }

    // if not calculate it then store it
    return mem[n] = (fibMemoization(n - 1) % MOD + fibMemoization(n - 2) % MOD) % MOD;
}

// ==================== FINDING FIBONACCI NUMBER top-bottom approach "MEMOIZATION" ====================

// ==================== FINDING FIBONACCI NUMBER bottom-top approach "TABULATION" ====================

int dp[1001];
long long fibTabulation(int n)
{
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

// ==================== FINDING FIBONACCI NUMBER bottom-top approach "TABULATION" ====================

void solve()
{
    // ==================== FINDING FIBONACCI NUMBER top-bottom approach "MEMOIZATION" ====================
    int n1;
    cin >> n1;
    mem.assign(n1 + 1, -1);
    cout << fibMemoization(n1) % MOD << el;
    // ==================== FINDING FIBONACCI NUMBER top-bottom approach "MEMOIZATION" ====================

    // ==================== FINDING FIBONACCI NUMBER bottom-top approach "TABULATION" ====================
    int n2;
    cin >> n2;
    cout << fibTabulation(n2) << el;
    // ==================== FINDING FIBONACCI NUMBER bottom-top approach "TABULATION" ====================
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