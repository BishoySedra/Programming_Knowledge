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

// using struct
void solve1()
{

    struct hero
    {
        string name;
        int a, v, s;
    };

    bool cmp(hero first, hero second)
    {
        if (first.a != second.a)
        {
            return first.a > second.a;
        }

        if (first.v != second.v)
        {
            return first.v > second.v;
        }

        if (first.s != second.s)
        {
            return first.s < second.s;
        }

        return first.name < second.name;
    }

    ll n;
    cin >> n;
    vector<hero> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].a >> arr[i].v >> arr[i].s;
    }

    sort(arr.begin(), arr.end(), cmp);
    // sort(arr.begin(), arr.end(), cmp2);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].name << el;
    }
}

// using pairs
void solve2()
{
#define hero pair<string, pair<int, pair<int, int>>>

    bool cmp(hero a, hero b)
    {
        if (a.second.first != b.second.first)
        {
            return a.second.first > b.second.first;
        }

        if (a.second.second.first != b.second.second.first)
        {
            return a.second.second.first > b.second.second.first;
        }

        if (a.second.second.second != b.second.second.second)
        {
            return a.second.second.second < b.second.second.second;
        }

        return a.first < b.first;
    }

    void solve()
    {
        int n;
        cin >> n;
        vector<pair<string, pair<int, pair<int, int>>>> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second.first >> arr[i].second.second.second;
        }

        sort(arr.begin(), arr.end(), cmp);
        // sort(arr.begin(), arr.end(), cmp2);

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i].first << el;
        }
    }
}

int main()
{
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    speed;
    solve1();
    return 0;
}