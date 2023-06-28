#include <iostream>
#include <algorithm>
#include <vector>

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
    string word;
    ll As = 0, Cs = As, Bs = As;
    cin >> word;
    As += count(word.begin(), word.end(), 'A');
    Bs += count(word.begin(), word.end(), 'B');
    Cs += count(word.begin(), word.end(), 'C');
    cout << (((Bs - As) == Cs) ? "YES" : "NO") << el;
}

int countMagicalIndices(const vector<int> &a)
{
    int n = a.size();
    int magicalIndices = 0;

    for (int x = 2; x < n; x++)
    {
        bool condition1 = true;
        bool condition2 = true;

        // Check condition 1: ay <= ax for each y (1 <= y < x)
        for (int y = 1; y < x; y++)
        {
            if (a[y] > a[x])
            {
                condition1 = false;
                break;
            }
        }

        // Check condition 2: ax <= az for each z (x < z <= n)
        for (int z = x + 1; z <= n; z++)
        {
            if (a[x] > a[z])
            {
                condition2 = false;
                break;
            }
        }

        if (condition1 && condition2)
        {
            magicalIndices++;
        }
    }

    return magicalIndices;
}

int main()
{
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    
    speed;
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int magicalIndices = countMagicalIndices(a);
    cout << magicalIndices << endl;

    return 0;
}
