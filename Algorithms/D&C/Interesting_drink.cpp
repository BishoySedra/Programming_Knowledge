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

int binarySearch(vector<int> arr, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] <= target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return start;
}

void solve()
{
    int shopsNumber;
    cin >> shopsNumber;

    vector<int> shops(shopsNumber);
    forN(shopsNumber)
    {
        cin >> shops[i];
    }

    // sorting the array
    sort(interval(shops));

    int daysNumber;
    cin >> daysNumber;
    while (daysNumber--)
    {
        int dayBudget;
        cin >> dayBudget;

        int foundIndex = binarySearch(shops, 0, shopsNumber - 1, dayBudget);
        cout << foundIndex << el;
    }
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