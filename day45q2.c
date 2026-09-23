// Toggle case of each character in a string.
#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through the string until the null terminator '\0' is reached
    for (int i = 0; str[i] != '\0'; i++)
    {
        // If character is uppercase, convert to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        // If character is lowercase, convert to uppercase
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Toggled string: %s", str);

    return 0;
}