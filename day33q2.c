// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int insertSorted(int arr[], int currentSize, int capacity, int key)
{

    if (currentSize >= capacity)
    {
        printf("Error: Array is full.\n");
        return currentSize;
    }

    int i;

    for (i = currentSize - 1; (i >= 0 && arr[i] > key); i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = key;

    return currentSize + 1;
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int currentSize = 5;
    int key = 25;

    currentSize = insertSorted(arr, currentSize, capacity, key);

    for (int i = 0; i < currentSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}