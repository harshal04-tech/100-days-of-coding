#include <stdio.h>

int main()
{
    int m, n;

    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Dono arrays me se chhota element merged me daalte jao
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            merged[k++] = a[i++];
        }
        else
        {
            merged[k++] = b[j++];
        }
    }

    // Agar a me elements bache hain
    while (i < m)
    {
        merged[k++] = a[i++];
    }

    // Agar b me elements bache hain
    while (j < n)
    {
        merged[k++] = b[j++];
    }

    for (int x = 0; x < m + n; x++)
    {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}