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

// prime factorization
vector<int> PF(ll n)
{
    vector<int> res;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
    {
        res.push_back(n);
    }
    return res;
}

void print_vector(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << el;
}

void solve()
{
    int n;
    cin >> n;

    string word;
    cin >> word;

    map<string, int> substring_to_count;
    forN(n)
    {

        if (i + 1 == n)
        {
            continue;
        }

        string sub = word.substr(i, 2);

        substring_to_count[sub]++;
    }

    map<int, string> negative_count_to_substring;
    for (auto it : substring_to_count)
    {
        negative_count_to_substring[-it.second] = it.first;
    }

    cout << negative_count_to_substring.begin()->second << el;
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