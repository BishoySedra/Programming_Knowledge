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

ll compute(string number, ll index, ll size)
{
    // split the string into two parts
    string first, second;

    if (number[index] == '0')
    {
        first = number.substr(0, index + 1);
        second = number.substr(index + 1, size);
    }
    else
    {
        first = number.substr(0, index);
        second = number.substr(index, size);
    }

    // convert the strings into integers
    int num1 = 0, num2 = 0;
    try
    {
        num1 = stoll(first);
        num2 = stoll(second);
    }
    catch (const std::invalid_argument &e)
    {
        // cout << first << " " << second << el;
        // cout << num1 << " " << num2 << el;
        // cout << "Answer: " << num1 + num2 << el;
    }

    return num1 + num2;
}

void solve()
{
    ll n;
    cin >> n;

    string number;
    cin >> number;

    ll l = 0, r = n - 1, answer = LLONG_MAX;
    while (l < n)
    {
        answer = min(answer, compute(number, l, n));
        l++;
    }

    while (r >= 0)
    {
        answer = min(answer, compute(number, r, n));
        r--;
    }

    cout << answer << el;

    cout << "=================" << el;
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