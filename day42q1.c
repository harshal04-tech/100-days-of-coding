// Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char str[])
{
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // Convert character to lowercase for easier comparison
        char ch = tolower(str[i]);

        // Check if the character is an alphabet letter
        if (ch >= 'a' && ch <= 'z')
        {
            // Check if it is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                // If it's a letter but not a vowel, it must be a consonant
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    // %[^\n] allows scanf to read strings with spaces until the user hits Enter
    scanf("%[^\n]", text);

    countVowelsAndConsonants(text);

    return 0;
}