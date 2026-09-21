// Reverse a string.
#include <stdio.h>

void reverseString(char str[])
{
    int length = 0;

    // Step 1: Find the length of the string manually
    while (str[length] != '\0')
    {
        length++;
    }

    // Step 2: Initialize two pointers
    int left = 0;
    int right = length - 1;

    // Step 3-5: Swap characters from the outside in
    while (left < right)
    {
        // Temporarily store the left character
        char temp = str[left];

        // Overwrite left with right
        str[left] = str[right];

        // Overwrite right with the stored left character
        str[right] = temp;

        // Move pointers toward the center
        left++;
        right--;
    }
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    // %[^\n] allows reading strings with spaces
    scanf("%[^\n]", text);

    reverseString(text);

    printf("Reversed string: %s\n", text);

    return 0;
}