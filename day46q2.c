// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

char firstRepeatingLowercase(const char *str)
{
    // Array to store the frequency of all 26 lowercase alphabets
    // Initialized to 0
    int count[26] = {0};

    // Step 1: Traverse the string and count frequencies
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Only process lowercase alphabets
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++; // Map 'a' to index 0, 'b' to 1, etc.
        }
    }

    // Step 2: Traverse the string again from left to right
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            // The first character we hit that has a count > 1 is our answer
            if (count[str[i] - 'a'] > 1)
            {
                return str[i];
            }
        }
    }

    // Return null character if no repeating lowercase alphabet is found
    return '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char result = firstRepeatingLowercase(str);

    if (result != '\0')
    {
        printf("The first repeating lowercase alphabet is: '%c'\n", result);
    }
    else
    {
        printf("No repeating lowercase alphabets found.\n");
    }

    return 0;
}