
// Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char longest[100] = "";
    char word[100];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (1)
    {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n')
        {
            word[j++] = sentence[i];
        }
        else
        {
            word[j] = '\0';

            if (strlen(word) > maxLength)
            {
                maxLength = strlen(word);
                strcpy(longest, word);
            }

            j = 0;

            if (sentence[i] == '\0' || sentence[i] == '\n')
            {
                break;
            }
        }

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}