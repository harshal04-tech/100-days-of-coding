// Find the sum of array elements
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, sum = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of all array elements = %d\n", sum);

    return 0;
}