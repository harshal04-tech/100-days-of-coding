// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a portion of a string
void reverse(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in the sentence
void reverseWords(char *sentence)
{
    char *wordStart = NULL;
    char *temp = sentence;

    while (*temp)
    {
        if ((wordStart == NULL) && !isspace(*temp))
        {
            wordStart = temp; // mark the beginning of a word
        }
        if (wordStart && (isspace(*temp) || *(temp + 1) == '\0'))
        {
            // mark the end of the word
            char *wordEnd = (isspace(*temp)) ? (temp - 1) : temp;
            reverse(wordStart, wordEnd);
            wordStart = NULL;
        }
        temp++;
    }
}

int main()
{
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    reverseWords(sentence);

    printf("Reversed words: %s\n", sentence);

    return 0;
}