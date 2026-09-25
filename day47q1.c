// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <stdbool.h> Required for bool, true, false

bool areAnagrams(char *str1, char *str2)
{
    // 1. If lengths are different, they cannot possibly be anagrams
    if (strlen(str1) != strlen(str2))
    {
        return false;
    }

    // 2. Array to store frequencies for all 256 ASCII characters
    int count[256] = {0};

    // 3. Traverse both strings simultaneously
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++; // Increase count for str1
        count[(unsigned char)str2[i]]--; // Decrease count for str2
    }

    // 4. If they are anagrams, every single bin will be exactly 0
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return false; // Found a mismatch
        }
    }

    return true;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline added by fgets

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline added by fgets

    if (areAnagrams(str1, str2))
    {
        printf("The strings are anagrams of each other.\n");
    }
    else
    {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}