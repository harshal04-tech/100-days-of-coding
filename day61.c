#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;

    // Input: array size
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input: window size
    scanf("%d", &k);

    // Queue to store indices of negative numbers
    int *queue = (int *)malloc(n * sizeof(int));
    int front = 0, rear = 0;

    for (int i = 0; i < n; i++)
    {
        // Add current index if element is negative
        if (arr[i] < 0)
        {
            queue[rear++] = i;
        }

        // Start printing once first window is complete
        if (i >= k - 1)
        {
            // Remove indices that are out of the current window
            while (front < rear && queue[front] < i - k + 1)
            {
                front++;
            }

            // First negative in window, else 0
            if (front < rear)
            {
                printf("%d ", arr[queue[front]]);
            }
            else
            {
                printf("0 ");
            }
        }
    }

    printf("\n");

    free(arr);
    free(queue);
    return 0;
}