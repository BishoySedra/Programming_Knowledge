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

int maxSequenceSum(int *arr, int n, int &start_pos, int &end_pos)
{
    int maxSum = INT_MIN, tempSum = 0;
    forN(n)
    {
        if (start_pos == -1)
        {
            start_pos = i;
        }

        tempSum += arr[i];

        if (tempSum > maxSum)
        {
            maxSum = tempSum;
            end_pos = i;
        }

        if (tempSum < 0)
        {
            tempSum = 0;
            start_pos = -1;
        }
    }
    return maxSum;
}

void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    forN(n)
    {
        cin >> arr[i];
    }

    int start_pos = 0, end_pos = -1;
    int result = maxSequenceSum(arr, n, start_pos, end_pos);

    cout << result << el;
    cout << "Start position: " << start_pos << " End position: " << end_pos << el;
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