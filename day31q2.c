// Reverse an array without taking extra space
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, temp;
    int start, end;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    start = 0;
    end = n - 1;

    while (start < end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}