#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers (from 0 to %d, one missing):\n", n, n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sum of 0..n
    long long expected = (long long)n * (n + 1) / 2;

    long long actual = 0;
    for (int i = 0; i < n; i++)
    {
        actual += arr[i];
    }

    printf("Missing number: %lld\n", expected - actual);
    return 0;
}