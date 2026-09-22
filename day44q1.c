// Count spaces, digits, and special characters in a string.
#include <stdio.h>

void countCategories(char str[])
{
    int spaces = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        // Check if it is a digit
        if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        // Check if it is a space
        else if (str[i] == ' ')
        {
            spaces++;
        }
        // Check if it is an alphabet letter (do nothing)
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            continue;
        }
        // If it's not a digit, space, or letter, it is a special character
        else
        {
            special++;
        }
    }

    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special Characters: %d\n", special);
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    // %[^\n] allows reading strings with spaces
    scanf("%[^\n]", text);

    countCategories(text);

    return 0;
}