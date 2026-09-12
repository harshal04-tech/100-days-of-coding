// Delete an element from an array.
#include <stdio.h>

int deleteElement(int arr[], int currentSize, int target)
{
    int i, targetIndex = -1;

    for (i = 0; i < currentSize; i++)
    {
        if (arr[i] == target)
        {
            targetIndex = i;
            break;
        }
    }
    if (targetIndex == -1)
    {
        printf("Error: Element %d not found in the array.\n", target);
        return currentSize;
    }

    for (i = targetIndex; i < currentSize - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return currentSize - 1;
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int currentSize = 5;
    int targetToDelete = 30;

    currentSize = deleteElement(arr, currentSize, targetToDelete);

    for (int i = 0; i < currentSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}