#include <iostream>

int findLargest(int arr[], int start, int end)
{

    if (start == end)
    {
        return start;
    }

    if (start == end - 1)
    {
        if (arr[start] > arr[end])
        {
            return start;
        }
        else
        {
            return end;
        }
    }

    int mid = start + (end - start) / 2;

    int max_1 = findLargest(arr, 0, mid);
    int max_2 = findLargest(arr, mid + 1, end);

    if (arr[max_1] > arr[max_2])
    {
        return max_1;
    }
    else
    {
        return max_2;
    }
}

int main()
{
    // shuffled array
    int arr[] = {6, 7, 8, 0, 1, 2, 3, 4, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    int index = findLargest(arr, start, end);
    std::cout << "The largest element is at index: " << index << std::endl;

    return 0;
}
