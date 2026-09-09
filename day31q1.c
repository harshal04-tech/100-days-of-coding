// Search for an element in an array using linear search.
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, key;
    int found = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            printf("Element %d found at index %d (Position %d).\n", key, i, i + 1);
            break;
        }
    }

    if (found == 0)
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}