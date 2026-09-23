// Count frequency of a given character in a string
#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int count = 0;

    printf("Enter a string: ");
    // fgets is used instead of scanf to safely capture strings with spaces
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find its frequency: ");
    scanf("%c", &ch);

    // Iterate through the string until the null character '\0' is reached
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
        {
            ++count;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}