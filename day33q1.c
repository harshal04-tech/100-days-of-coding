// Search in a sorted array using binary search.
#include <stdio.h>

int binarySearchRecursive(int arr[], int left, int right, int target)
{
    if (left > right)
    {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] > target)
    {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }

    return binarySearchRecursive(arr, mid + 1, right, target);
}

int main()
{
    int arr[] = {3, 9, 14, 19, 25, 31, 42, 57, 63};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 42;

    int result = binarySearchRecursive(arr, 0, size - 1, target);

    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found in the array\n");
    }

    return 0;
}