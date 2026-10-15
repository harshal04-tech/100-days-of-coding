#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 1 || k > n)
    {
        printf("Invalid k\n");
        return 1;
    }

    qsort(arr, n, sizeof(int), cmp);

    printf("%d\n", arr[k - 1]);
    return 0;
}