// Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

void removeVowels(char *str)
{
    int i = 0; // Read pointer
    int j = 0; // Write pointer

    while (str[i] != '\0')
    {
        // Check if the current character is a vowel (both lower and uppercase)
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {

            // If it's not a vowel, write it to the j-th position
            str[j] = str[i];
            j++;
        }
        i++; // Always advance the read pointer
    }

    // Null-terminate the new, shorter string
    str[j] = '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    // fgets is safer than scanf("%s") because it reads spaces and prevents buffer overflow
    fgets(str, sizeof(str), stdin);

    // Optional: Remove the trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    removeVowels(str);

    printf("String without vowels: %s\n", str);

    return 0;
}
