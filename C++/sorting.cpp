#include <iostream>
#include <algorithm>
#include <unordered_map>

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

// merge two sorted arrays
void merge(int *a, int sizeA, int *b, int sizeB) // O(sizeA + sizeB)
{

    int *target = new int[sizeA + sizeB];
    int idxA = 0, idxB = 0, idxC = 0;

    while (idxA < sizeA && idxB < sizeB)
    {
        target[idxC++] = ((a[idxA] < b[idxB]) ? a[idxA++] : b[idxB++]);
    }

    while (idxA < sizeA)
    {
        target[idxC++] = a[idxA++];
    }

    while (idxB < sizeB)
    {
        target[idxC++] = b[idxB++];
    }

    // to use with mergeSort function
    for (int i = 0; i < sizeA + sizeB; i++)
    {
        // a[i] = target[i];
        // to print directly after sorting
        cout << target[i] << " ";
    }

    delete[] target;
}

// testing merge function
void testMerge()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 8};
    int arr2[] = {6, 7, 8, 9, 10, 11, 20};

    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, sz1, arr2, sz2);
}

// divide & conquer algo to sort using merge
void mergeSort(int *arr, int n) // O( n log(n) )
{

    if (n < 2)
    {
        return;
    }

    int half = n / 2;

    mergeSort(arr, half);                   // sorts the first half
    mergeSort(arr + half, n - half);        // sorts the second half
    merge(arr, half, arr + half, n - half); // combines two sorted array into one array
}

// testing mergeSort
void testMergeSort()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// solve pair-sum problem in O(n)
void pairSumProblemSolve() // O(n)
{
    int n, target;
    cin >> n >> target;
    int *arr = new int[n];
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        int rem = target - arr[i];
        if ((rem == arr[i] && freq[rem] > 1) || (rem != arr[i] && freq[rem]))
        {
            cout << rem << el;
            cout << "YES";
            return;
        }
    }

    cout << "No";
}

int main()
{
    speed;
    return 0;
}