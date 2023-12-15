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

int maxSubArraySum(int start, int end, vector<int> arr)
{
    if (start >= end)
    {
        return 0;
    }

    int mid = (start + end) / 2,
        firstHalf = maxSubArraySum(start, mid - 1, arr),
        secondHalf = maxSubArraySum(mid + 1, end, arr);
    return max({firstHalf,
                firstHalf + arr[mid] + secondHalf,
                secondHalf});
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

    int sum = 0, bestSum = 0;
    forN(n)
    {
        sum += arr[i];
        bestSum = max(sum, bestSum);
        sum = max(sum, 0);
    }

    cout << bestSum << el;

    cout << maxSubArraySum(0, n, arr);
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