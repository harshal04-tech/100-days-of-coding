// Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

void convertToUppercase(char str[])
{
    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++)
    {

        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z')
        {

            // Subtract 32 to shift the ASCII value to uppercase
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    // %[^\n] allows scanf to read strings with spaces
    scanf("%[^\n]", text);

    convertToUppercase(text);

    printf("Uppercase string: %s\n", text);

    return 0;
}