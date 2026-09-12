// Insert an element in an array at a given position.
#include <stdio.h>

int insertAtIndex(int arr[], int currentSize, int capacity, int index, int element)
{

    if (currentSize >= capacity)
    {
        printf("Error: Array is at maximum capacity.\n");
        return currentSize;
    }

    if (index < 0 || index > currentSize)
    {
        printf("Error: Invalid insertion index.\n");
        return currentSize;
    }

    for (int i = currentSize; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;

    return currentSize + 1;
}

int main()
{
    int arr[10] = {10, 20, 40, 50, 60};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int currentSize = 5;

    int indexToInsert = 2;
    int elementToInsert = 30;

    currentSize = insertAtIndex(arr, currentSize, capacity, indexToInsert, elementToInsert);

    for (int i = 0; i < currentSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}