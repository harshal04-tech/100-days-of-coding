#include <stdio.h>

int main()
{
    int n, k;
    printf("Array ka size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Array ke elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("k ki value: ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("k valid nahi hai\n");
        return 0;
    }

    int windowSum = 0;
    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }
    int maxSum = windowSum;

    for (int i = k; i < n; i++)
    {
        windowSum = windowSum + arr[i] - arr[i - k];
        if (windowSum > maxSum)
        {
            maxSum = windowSum;
        }
    }

    printf("Maximum sum = %d\n", maxSum);
    return 0;
}