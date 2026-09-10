// Merge two arrays.

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], mergedArr[200];
    int n1, n2, i, j;

    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements for the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++)
    {
        mergedArr[i] = arr1[i];
    }

    for (j = 0; j < n2; j++)
    {
        mergedArr[i] = arr2[j];
        i++;
    }

    printf("\nMerged array:\n");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", mergedArr[i]);
    }

    printf("\n");
    return 0;
}