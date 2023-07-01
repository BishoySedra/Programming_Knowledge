#include <bits/stdc++.h>

#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define el "\n"
#define ll long long
#define tc long long t; cin >> t; while(t--)
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & ~(1<<k))
#define isOn(n, k) ((n>>k)&1)
#define isPowerOfTwo(n) n && !(n & (n-1))

using namespace std;

//// Calculate the factorization of a number
void Factors(vector<long long> &, long long);

//// Calculate Factorial of a number
int fact(int);

//// get the value on specific index from fibonacci sequence
long long fib(int);

//// check if the number is prime or not but maximum value to check is 10^12
bool isPrime(long long);

//// sieve function to generate a boolean array to check the number is a prime or not
int const N = 1e6 + 6;
bool primes[N];

void sieve();

////calculate the greatest common divisor between two numbers
long long gcd(long long, long long);

////calculate the least common multiple between two numbers
long long lcm(long long, long long);

//// initialize a vector
void initializeVector(vector<double> &, long long);

//// GCD function to get the gcd string between two strings
string strGCD(string, string);

//// check if the number is a power of two or not
bool check(long long);

//// sort map using multimap
void sort_map(map<long long, long long> &);

//// sum elements using recursion
long long sum(vector<long long>, long long);

//// log2 function using recursion
double Log2(long long);

//// check divisors of a number
void divisors(vector<long long> &, long long);

//// get all multiples of a number
void multiples(vector<long long> &, long long, long long);

//// fixMod for negative values
inline long long fixMod(long long, long long);

/// sum digits of a number
long long digitSum(long long);

// rotate square matrix
void rotate(vector<vector<int>> &matrix);

//unordered_map<ll, vector<ll>> graph;
//unordered_map<ll, bool> visited;
//
//void DFSRecursive(ll node) {
//    visited[node] = true;
//
//    for (auto neighbour: graph[node]) {
//        if (!visited[neighbour]) {
//            DFSRecursive(neighbour);
//        }
//    }
//
//    cout << node << " ";
//}
//
//void DFSIterative(ll node) {
//    stack<ll> st;
//    st.push(node);
//
//    while (!st.empty()) {
//        ll curr = st.top();
//        st.pop();
//        if (!visited[curr]) {
//            cout << curr << " ";
//            visited[curr] = true;
//        }
//
//        for (auto neighbour: graph[curr]) {
//            if (!visited[neighbour]) {
//                st.push(neighbour);
//            }
//        }
//    }
//}
//
//void BFSIterative(ll node) {
//    queue<ll> q;
//    q.push(node);
//
//    while (!q.empty()) {
//        ll curr = q.front();
//        q.pop();
//        if (!visited[curr]) {
//            cout << curr << " ";
//            visited[curr] = true;
//        }
//
//        for (auto neighbour: graph[curr]) {
//            if (!visited[neighbour]) {
//                q.push(neighbour);
//            }
//        }
//    }
//}

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<ll> pre(n);
    pre[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        pre[i] = pre[i - 1] + arr[i];
    }

    ll q, l, r;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> l >> r;
        if (l == 0) {
            cout << pre[r];
        } else {
            cout << pre[r] - pre[l - 1];
        }
        cout << el;
    }
}

int main() {
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
//    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    speed
    tc solve();
    return 0;
}

//// prime factorization of a number
//void Factors(vector<long long> &arr, long long n) {
//
//    while (n % 2 == 0) {
//        n /= 2;
//        arr.push_back(2);
//    }
//
//    for (int i = 3; i * i <= n; i += 2) {
//        while (n % i == 0) {
//            arr.push_back(i);
//            n /= i;
//        }
//    }
//    if (n > 1) {
//        arr.push_back(n);
//    }
//}

//

////// Calculate Factorial of a number
//int fact(int n) {
//    int x = 1;
//    if (n == 0) {
//        return x;
//    } else {
//        return fact(n - 1) * n;
//    }
//}
//

////// get the value on specific index from fibonacci sequence
//long long fib(int n) {
//    if (n == 1) {
//        return 0;
//    } else if (n == 2) {
//        return 1;
//    } else {
//        long long num1 = 0, num2 = 1, sum;
//        for (int i = 3; n >= i; i++) {
//            sum = num1 + num2;
//            num1 = num2;
//            num2 = sum;
//        }
//        return sum;
//    }
//}
//

////// check if the number is prime or not but maximum value to check is 10^12
//bool isPrime(long long n) { // O(sqrt(n))
//    if (n == 1) {
//        return false;
//    } else {
//        for (int i = 2; i * i <= n; ++i) {
//            if (n % i == 0) {
//                return false;
//            }
//        }
//    }
//    return true;
//}

//// sieve function to generate a boolean array to check the number is a prime or not
//void sieve() {
//    fill(primes, primes + N, true);
//    primes[0] = primes[1] = false;
//
//    for (int i = 2; i * i < N; ++i) {
//        if (isPrime(i)) {
//            for (int m = 2 * i; m < N; m += i) {
//                primes[m] = false;
//            }
//        }
//    }
//}

////calculate the greatest common divisor between two numbers
//long long gcd(long long a, long long b) {
//    if (b == 0) {
//        return a;
//    } else {
//        return gcd(b, a % b);
//    }
//}

////calculate the least common multiple between two numbers
//long long lcm(long long a, long long b) {
//    return a / gcd(a, b) * b;
//}
//

////// initialize a vector
//void initializeVector(vector<double> &arr, long long n) {
//    arr = vector<double>(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//}
//

////// GCD function to get the gcd string between two strings
//string strGCD(string str1, string str2) {
//    if (str2.size() > str1.size()) {
//        return strGCD(str2, str1);
//    } else if (str1.find(str2) != 0) {
//        return "";
//    } else if (str2 == "") {
//        return str1;
//    } else {
//        return strGCD(str1.substr(str2.length()), str2);
//    }
//}
//

////// check if the number is a power of two or not
//bool check(long long num) {
//    while (num > 1) {
//        if (num % 2 == 0) {
//            num /= 2;
//        } else {
//            return false;
//        }
//        if (num == 1) {
//            return true;
//        }
//    }
//    return false;
//}

//
////// sort map using multimap
//void sort_map(map<long long, long long> &mp) {
//    multimap<long long, long long> mmp;
//
//    for (auto it: mp) {
//        mmp.insert({it.second, it.first});
//    }
//}
//

////// sum elements using recursion
//long long sum(vector<long long> arr, long long n) {
//    if (n == 0) {
//        return arr[0];
//    } else {
//        return arr[n] + sum(arr, n - 1);
//    }
//}
//

////// log2 function using recursion
//double Log2(long long n) {
//    if (n == 1) {
//        return 0;
//    } else {
//        return 1 + Log2(n / 2);
//    }
//}

//
////// check divisors of a number
//void divisors(vector<long long> &arr, long long n) {  // O(sqrt(n))
//    int i = 1;
//    for (i = 1; i * i < n; ++i) {
//        if (n % i == 0) {
//            arr.push_back(i);
//        }
//    }
//    if (i * i == n) {
//        arr.push_back(i);
//    }
//}
//
////// get all multiples of a number
//void multiples(vector<long long> &arr, long long x, long long n) { // O(n/x)
//    for (long long i = x; i <= n; i += x) {
//        arr.push_back(i);
//    }
//}
//
////// fixMod for negative values
//long long fixMod(long long a, long long b) {
//    return (a % b + b) % b;
//}

//long long digitSum(long long num) {
//    long long sum = 0;
//    while (num > 0) {
//        sum += num % 10;
//        num /= 10;
//    }
//    return sum;
//}

//void rotate(vector<vector<int>> &matrix) {
//    vector<vector<int>> arr;
//
//    for (int i = 0; i < matrix.size(); i++) {
//        vector<int> temp;
//        for (int j = matrix.size() - 1; j >= 0; j--) {
//            temp.push_back(matrix[j][i]);
//        }
//        arr.push_back(temp);
//    }
//
//    matrix = arr;
//}
