#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];
    int count[26] = {0};

    scanf("%1000s", s);
    scanf("%1000s", t);

    // Length alag hai to anagram ho hi nahi sakte
    if (strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return 0;
    }

    // s ke characters ke liye +1, t ke characters ke liye -1
    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Agar koi bhi count non-zero hai, to frequencies match nahi karti
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}