// Print each character of a string on a new line.
#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    // %[^\n] allows scanf to read strings with spaces until the user hits Enter
    scanf("%[^\n]", str);

    printf("Characters on new lines:\n");

    // Iterate through the string until the null terminator is reached
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}