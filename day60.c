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

    // Har window ka start index i hai
    for (int i = 0; i <= n - k; i++)
    {
        int max = arr[i];

        // Is window ke andar max dhundo
        for (int j = i + 1; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}