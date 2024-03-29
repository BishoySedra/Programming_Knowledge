#include <iostream>
#include <vector>
#include <unordered_map>

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

int getTheMajority(vector<int> arr, int start_1, int end_1, int start_2, int end_2)
{
    unordered_map<int, int> number_freq;
    for (int i = start_1; i <= end_1; i++)
    {
        number_freq[arr[i]]++;
    }

    for (int i = start_2; i <= end_2; i++)
    {
        number_freq[arr[i]]++;
    }

    unordered_map<int, int>::iterator it = number_freq.begin();
    int required = arr.size() / 2;
    while (it != number_freq.end())
    {
        if ((*it).second > required)
        {
            return (*it).first;
        }
    }

    return -1;
}

int MajorityElement(vector<int> arr, int start, int end)
{

    // base case
    if (start == end)
    {
        return arr[start];
    }

    // divide
    int mid = start + (end - start) / 2;

    // conquer
    MajorityElement(arr, start, mid);
    MajorityElement(arr, mid + 1, end);

    // combine
    return getTheMajority(arr, start, mid, mid + 1, end);
}

void solve()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << MajorityElement(arr, 0, arr.size() - 1) << el;
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