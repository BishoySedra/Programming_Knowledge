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

void solve()
{
    ll daysNumber;
    cin >> daysNumber;

    vector<ll> A_Activities(daysNumber), B_Activities(daysNumber), C_Activities(daysNumber);
    for (ll i = 0; i < daysNumber; i++)
    {
        cin >> A_Activities[i] >> B_Activities[i] >> C_Activities[i];
    }

    vector<ll> dp_A(daysNumber), dp_B(daysNumber), dp_C(daysNumber);

    dp_A[0] = A_Activities[0];
    dp_B[0] = B_Activities[0];
    dp_C[0] = C_Activities[0];

    for (int day = 1; day < daysNumber; day++)
    {
        dp_A[day] = A_Activities[day] + max(dp_B[day - 1], dp_C[day - 1]);
        dp_B[day] = B_Activities[day] + max(dp_A[day - 1], dp_C[day - 1]);
        dp_C[day] = C_Activities[day] + max(dp_A[day - 1], dp_B[day - 1]);
    }

    cout << max({dp_A[daysNumber - 1], dp_B[daysNumber - 1], dp_C[daysNumber - 1]}) << el;
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