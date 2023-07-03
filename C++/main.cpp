#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define el "\n"
#define ll long long
#define tc       \
    long long t; \
    cin >> t;    \
    while (t--)  \
    {            \
    }

#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & ~(1 << k))
#define isOn(n, k) ((n >> k) & 1)
#define isPowerOfTwo(n) n && !(n & (n - 1))
#define file                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;

void solve()
{
    int n, k, num;
    cin >> n >> k;

    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int end = k;
    while (end <= dq.size()) // O(n-1)
    {
        cout << *max_element(dq.begin(), dq.begin() + end) << " ";
        dq.pop_front();
    }
    cout << el;
}

int main()
{
    // file;
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
