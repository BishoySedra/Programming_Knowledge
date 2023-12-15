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

int fib(int n) // O(2^n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fib(n - 2) + fib(n - 1);
}

int pow(int n, int p) // O(p)
{
    if (p == 0)
    {
        return 1;
    }

    return n * pow(n, p - 1);
}

// Fast Power
int fpow(int n, int p) // O(log(n))
{
    if (p == 0)
        return 1;
    int res = fpow(n, p / 2);
    return ((p & 1) ? res * res * n : res * res);
}

string reverse(string word, int index)
{
    if (!index)
    {
        return "";
    }

    return word[index] + reverse(word, index - 1);
}

unordered_map<char, bool> isVowel;

void fillIsVowel()
{
    string vowels("aeiouAEIOU");
    for (char letter : vowels)
    {
        isVowel[letter] = true;
    }
}

int countVowels(string word, int index)
{
    if (index == word.size())
    {
        return 0;
    }

    if (isVowel[word[index]]) // state
    {
        return 1 + countVowels(word, index + 1);
    }

    return countVowels(word, index + 1); // transition
}

ll fact(ll n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

ll getMax(vector<ll> nums, ll index, ll mux)
{
    if (index == nums.size()) // base case
    {
        return mux;
    }

    mux = max(mux, nums[index]); // state

    return getMax(nums, index + 1, mux); // transition
}

ll sum(vector<ll> nums, int index)
{
    if (index == nums.size())
    {
        return 0;
    }

    return nums[index] + sum(nums, ++index);
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    forN(n)
    {
        cin >> arr[i];
    }
    cout << fixed << setprecision(6) << sum(arr, 0) / static_cast<double>(n);
    return 0;
}