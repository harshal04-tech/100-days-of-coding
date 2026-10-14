#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
        return 1;

    int x, curr, best;
    scanf("%d", &x);
    curr = best = x;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        curr = (curr + x > x) ? curr + x : x; // extend subarray ya naya start
        if (curr > best)
            best = curr;
    }

    printf("%d\n", best);
    return 0;
}