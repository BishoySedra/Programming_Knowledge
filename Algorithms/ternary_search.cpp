#include <iostream>
#include <vector>

int ternary_search_max(const std::vector<double> &arr, int left, int right)
{
    if (left >= right)
    {
        return left;
    }

    int mid1 = left + (right - left) / 3;
    int mid2 = right - (right - left) / 3;

    if (arr[mid1] < arr[mid2])
    {
        return ternary_search_max(arr, mid1 + 1, right);
    }
    else
    {
        return ternary_search_max(arr, left, mid2 - 1);
    }
}

int ternary_search_min(const std::vector<double> &arr, int left, int right)
{

    if (left >= right)
    {
        return left;
    }

    int mid1 = left + (right - left) / 3;
    int mid2 = right - (right - left) / 3;

    if (arr[mid1] > arr[mid2])
    {
        return ternary_search_min(arr, mid1 + 1, right);
    }
    else
    {
        return ternary_search_min(arr, left, mid2 - 1);
    }
}

int main()
{

    while (true)
    {
        int n;
        std::cin >> n;
        std::vector<double> arr(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }
        int index = 0;

        if (arr[1] > arr[0])
        {
            index = ternary_search_max(arr, 0, arr.size() - 1);
            std::cout << "Index of the maximum element: " << index << ", Value: " << arr[index] << std::endl;
        }
        else
        {
            index = ternary_search_min(arr, 0, arr.size() - 1);
            std::cout << "Index of the minimum element: " << index << ", Value: " << arr[index] << std::endl;
        }
    }
    return 0;
}
