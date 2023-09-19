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

list<short> readList()
{
    short n, num;
    cin >> n;

    list<short> numbers;
    forN(n)
    {
        cin >> num;
        numbers.push_back(num);
    }

    return numbers;
}

void printFinalScores(list<short> numbers)
{
    int s = 0, d = 0;
    auto start = numbers.begin(),
         end = numbers.end();
    end--;
    while (!numbers.empty())
    {
        if (*start > *end)
        {
            s += *start;
            numbers.erase(start);
        }
        else
        {
            s += *end;
            numbers.pop_back();
        }

        start = numbers.begin();
        end = numbers.end();
        end--;

        if (!numbers.empty())
        {

            if (*start > *end)
            {
                d += *start;
                numbers.erase(start);
            }
            else
            {
                d += *end;
                numbers.pop_back();
            }

            start = numbers.begin();
            end = numbers.end();
            end--;
        }
    }

    cout << s << " " << d << el;
}

void solve()
{
    printFinalScores(readList());
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