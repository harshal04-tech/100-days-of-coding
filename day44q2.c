// Replace spaces with hyphens in a string.
#include <stdio.h>

void replaceSpaces(char str[])
{
    // Iterate through the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++)
    {

        // If the current character is a space
        if (str[i] == ' ')
        {
            // Replace it with a hyphen
            str[i] = '-';
        }
    }
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    // %[^\n] allows scanf to read strings with spaces
    scanf("%[^\n]", text);

    replaceSpaces(text);

    printf("Modified string: %s\n", text);

    return 0;
}