#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <set>

#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define el "\n"
#define ll long long
#define tc       \
    long long t; \
    cin >> t;    \
    while (t--)
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & ~(1 << k))
#define isOn(n, k) ((n >> k) & 1)
#define isPowerOfTwo(n) n && !(n & (n - 1))

using namespace std;

void solve()
{
    vector<int> arr({1, 2, 3, 4, 5});
    arr.erase(arr.begin() + 2);
    arr.erase(arr.end() - 2);

    for (auto elem : arr)
    {
        cout << elem << " ";
    }
}

int main()
{
    speed;
    solve();
    return 0;
}