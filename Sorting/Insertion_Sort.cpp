#include <bits/stdc++.h>

#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void insertionSort(int *arr, int n) // O(n^2)
{

    for (int i = 1; i < n; i++)
    {
        int key = arr[i], j = i - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    speed;

    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}