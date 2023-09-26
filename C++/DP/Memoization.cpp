#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// fib memoization
// unordered_map<long long, long long> memo;
// long long fib(long long n)
// {
//     if (memo[n])
//     {
//         return memo[n];
//     }

//     if (n <= 2)
//     {
//         return 1;
//     }

//     memo[n] = fib(n - 1) + fib(n - 2);

//     return memo[n];
// }

// gridTraveler memoization
map<pair<int, int>, long long> grid;
long long gridTraveler(int n, int m)
{
    if (grid[{m, n}])
    {
        return grid[{m, n}];
    }

    if (n == 1 && m == 1) // base case 1
    {
        return 1;
    }

    if (n == 0 || m == 0) // base case 2
    {

        return 0;
    }

    grid[{m, n}] = gridTraveler(n - 1, m) + gridTraveler(n, m - 1); // state & transition
    grid[{n, m}] = grid[{m, n}];
    return grid[{m, n}];
}

// canSum memoization
unordered_map<long long, bool> memo;
bool canSum(long long target, const vector<long long> &numbers)
{
    if (memo.find(target) != memo.end())
        return memo[target];
    if (target == 0)
        return true;
    if (target < 0)
        return false;

    for (auto num : numbers)
    {
        long long newTarget = target - num;
        if (canSum(newTarget, numbers))
        {
            memo[target] = true;
            return true;
        }
    }

    memo[target] = false;
    return false;
}

void countStairsIterative(int n)
{
    vector<long long> stairs(n + 1);
    stairs[0] = 1;
    stairs[1] = 1;
    stairs[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        stairs[i] = stairs[i - 1] + stairs[i - 2] + stairs[i - 3];
    }

    cout << stairs[n] << "\n";
}

int main()
{
    // fib test cases
    // // cout << fib(6) << "\n";
    // // cout << fib(5) << "\n";
    // // cout << fib(4) << "\n";
    // cout << fib(50) << "\n";
    // cout << fib(1000) << "\n";

    // =============================

    // gridTraveler test cases
    // cout << gridTraveler(1, 1) << "\n";
    // cout << gridTraveler(2, 3) << "\n";
    // cout << gridTraveler(3, 2) << "\n";
    // cout << gridTraveler(3, 3) << "\n";
    // cout << gridTraveler(3, 4) << "\n";
    // cout << gridTraveler(4, 3) << "\n";
    // cout << gridTraveler(18, 18) << "\n";
    // cout << gridTraveler(100, 100) << "\n";

    // =============================

    // canSum test cases
    // cout << canSum(3, {1, 2}) << "\n";
    // cout << canSum(3, {1, 3}) << "\n";
    // cout << canSum(7, {2, 4}) << "\n";
    // cout << canSum(8, {3, 5, 4}) << "\n";
    // cout << canSum(300, {7, 14}) << "\n";

    // int n;
    // cin >> n;
    // countStairsIterative(n);

    int n, m;
    cin >> n >> m;
    int grid[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int dp[100][100];
    dp[n - 1][m - 1] = grid[n - 1][m - 1];
    for (int r = n - 1; r >= 0; r--)
    {
        for (int c = m - 1; c >= 0; c--)
        {
            int a = -1, b = a;
            if (r == n - 1 && c == m - 1)
            {
                continue;
            }

            if (r + 1 < n)
            {
                a = dp[r + 1][c];
            }

            if (c + 1 < m)
            {
                b = dp[r][c + 1];
            }
            dp[r][c] = min(a, b) + grid[r][c];
        }
    }

    cout << "===========================\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}