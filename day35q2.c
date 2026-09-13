// Rotate an array to the right by k positions.
#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k)
{
    if (n == 0)
        return;

    k = k % n;

    if (k == 0)
        return;

    reverse(arr, 0, n - 1);

    reverse(arr, 0, k - 1);

    reverse(arr, k, n - 1);
}

int main()
{
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    if (k < 0)
    {
        printf("Rotation count must be positive.\n");
        return 1;
    }

    rotateRight(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}