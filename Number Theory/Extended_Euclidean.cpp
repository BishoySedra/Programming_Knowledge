#include <iostream>

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

int fixMod(int a, int b)
{
    return (a % b + b) % b;
}

int GetMultiplicativeInverse(int number, int baseN)
{
    int q,
        a1 = 1,
        a2 = 0,
        a3 = baseN,
        b1 = 0,
        b2 = 1,
        b3 = number;
    int row_index = 1;
    cout << "  q" << " " << "a1" << " " << "a2" << " " << "a3" << " " << "b1" << " " << "b2" << " " << "b3" << el;
    cout << row_index << " ==> " << "-- " << a1 << " " << a2 << " " << a3 << " " << b1 << " " << b2 << " " << b3 << el;
    while (b3 != 0 && b3 != 1)
    {
        q = a3 / b3;

        int temp = a1 - b1 * q;
        a1 = b1;
        b1 = temp;

        temp = a2 - b2 * q;
        a2 = b2;
        b2 = temp;

        temp = a3 - b3 * q;
        a3 = b3;
        b3 = temp;

        row_index++;

        cout << row_index << " ==> " << q << " " << a1 << " " << a2 << " " << a3 << " " << b1 << " " << b2 << " " << b3 << el;
    }

    if (b3 == 1)
    {
        if (b2 < 0)
        {
            b2 = fixMod(b2, baseN);
        }

        return b2;
    }

    return -1;
}

void solve()
{
    int number, baseN;
    cin >> number >> baseN;
    cout << GetMultiplicativeInverse(number, baseN) << el;
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