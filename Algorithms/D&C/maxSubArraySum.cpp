#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <algorithm>

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

int max_sum(vector<int> arr, int start, int mid, int end)
{

    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = start; i <= mid; i++)
    {
        sum += arr[i];
        left_sum = max(left_sum, sum);
    }

    sum = 0;
    int right_sum = 0;
    for (int i = mid; i <= end; i++)
    {
        sum += arr[i];
        right_sum = max(right_sum, sum);
    }

    return max(((left_sum + right_sum) - arr[mid]), max(left_sum, right_sum));
}

int maxSubArraySum(int start, int end, vector<int> arr)
{
    if (start >= end)
    {
        return arr[start];
    }

    // divide
    int mid = start + (end - start) / 2;

    // conquer
    int firstHalf = maxSubArraySum(start, mid - 1, arr);
    int secondHalf = maxSubArraySum(mid + 1, end, arr);
    int combined = max_sum(arr, start, mid, end);

    return max(firstHalf, max(combined, secondHalf));
}

int greedy_solution(vector<int> arr)
{
    int sum = 0, bestSum = 0;
    forN(arr.size())
    {
        sum += arr[i];
        bestSum = max(sum, bestSum);
        sum = max(sum, 0);
    }

    return bestSum;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    forN(n)
    {
        cin >> arr[i];
    }

    cout << greedy_solution(arr) << "\n";
    cout << maxSubArraySum(0, n - 1, arr) << "\n";
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