#include <iostream>
#include <algorithm>
#include <unordered_map>
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

// binary search recursive

int binarySearch(int *arr, int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[mid] > target)
    {
        return binarySearch(arr, start, mid - 1, target);
    }

    return binarySearch(arr, mid + 1, end, target);
}

int main()
{
    speed;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, 0, n - 1, 9) << el;
    return 0;
}