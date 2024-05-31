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

void solve()
{
    ll arraySize;
    cin >> arraySize;

    vector<ll> myArray(arraySize), desiredArray(arraySize + 1);

    forN(arraySize)
    {
        cin >> myArray[i];
    }

    forN(arraySize + 1)
    {
        cin >> desiredArray[i];
    }

    int lastElement = desiredArray[arraySize];
    bool isCalculated = false;
    ll cnt = 0;

    forN(arraySize)
    {
        cnt += abs(myArray[i] - desiredArray[i]);
    }

    ll minDiff = LLONG_MAX;
    forN(arraySize)
    {
        bool isBetween1 = lastElement >= desiredArray[i] && lastElement <= myArray[i];
        bool isBetween2 = lastElement <= desiredArray[i] && lastElement >= myArray[i];
        if (lastElement == myArray[i] || lastElement == desiredArray[i] || isBetween1 || isBetween2)
        {
            minDiff = 0;
            break;
        }

        ll diff1 = abs(lastElement - myArray[i]);
        ll diff2 = abs(lastElement - desiredArray[i]);
        minDiff = min(minDiff, min(diff1, diff2));
    }

    cout << cnt + minDiff + 1 << el;
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