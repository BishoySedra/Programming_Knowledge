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

ll fixMod(ll a, ll b)
{
    return (a % b + b) % b;
}

vector<ll> getDivisors(ll n) // O(sqrt(n))
{
    vector<ll> res;
    ll i = 1;

    for (i = 1; i * i < n; ++i)
    {
        if (n % i == 0)
        {
            res.push_back(i);
            res.push_back(n / i);
        }
    }

    if (i * i == n)
    {
        res.push_back(i);
    }

    return res;
}

vector<ll> getMultiples(ll n, ll x) // O(n/x)
{
    vector<ll> res;

    for (ll i = x; i <= n; i += x)
    {
        res.push_back(i);
    }

    return res;
}

bool isPrime(ll n) // O(sqrt(n))
{
    if (n == 0 || n == 1)
    {
        return false;
    }

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int const N = 1e6 + 6;
bool primes[N];

void sieve()
{
    fill(primes, primes + N, true);
    primes[0] = primes[1] = false;
    for (ll i = 2; i * i < N; ++i)
    {
        if (primes[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                primes[j] = false;
            }
        }
    }
}

void printVector(vector<ll> v)
{
    for (auto elem : v)
    {
        cout << elem << " ";
    }
}

void solve()
{
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