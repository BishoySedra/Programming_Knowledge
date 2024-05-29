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

int maxDifferencePair(int *arr, int size, int &firstItem, int &secondItem)
{
    int maxDiff = INT_MIN;

    for (int i = 0, j = 1; j < size; j++)
    {
        if (arr[j] < arr[i])
        {
            i = j;
            continue;
        }

        int diff = arr[j] - arr[i];

        if (diff > maxDiff)
        {
            maxDiff = diff;
            firstItem = arr[i];
            secondItem = arr[j];
        }
    }

    return maxDiff;
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

    int firstItem, secondItem;
    int answer = maxDifferencePair(arr, n, firstItem, secondItem);

    cout << "Max difference: " << answer << " " << firstItem << " " << secondItem << el;
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