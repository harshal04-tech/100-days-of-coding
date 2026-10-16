#include <stdio.h>
#include <string.h>

int main()
{
    char s[100005];

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int last[256];
    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int n = strlen(s);
    int start = 0, maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        unsigned char c = s[i];

        if (last[c] >= start)
        {
            start = last[c] + 1;
        }

        last[c] = i;

        if (i - start + 1 > maxLen)
        {
            maxLen = i - start + 1;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}