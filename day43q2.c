// Check if a string is a palindrome
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char str[])
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

    // Step 3-6: Compare characters from the outside in
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false; // Mismatch found, not a palindrome
        }

        // Move pointers toward the center
        left++;
        right--;
    }

    return true; // Loop finished with no mismatches
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    // %[^\n] allows reading strings with spaces
    scanf("%[^\n]", text);

    if (isPalindrome(text))
    {
        printf("\"%s\" is a palindrome.\n", text);
    }
    else
    {
        printf("\"%s\" is not a palindrome.\n", text);
    }

    return 0;
}