#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (values between 0 and %d):\n", n, n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // visited[x] = 1 means x pehle aa chuka hai
    int *visited = calloc(n + 1, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        if (visited[arr[i]])
        {
            printf("Repeated element: %d\n", arr[i]);
            break;
        }
        visited[arr[i]] = 1;
    }

    free(visited);
    return 0;
}