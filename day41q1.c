// Count characters in a string without using built-in length functions.
#include <stdio.h>

int countCharacters(char str[])
{
    int count = 0;

    // Iterate through the array until the null terminator is reached
    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    // %[^\n] allows scanf to read strings with spaces until the user hits Enter
    scanf("%[^\n]", text);

    int length = countCharacters(text);

    printf("The number of characters is: %d\n", length);

    return 0;
}