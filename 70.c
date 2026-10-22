#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toSentenceCase(char *str)
{
    int capitalizeNext = 1; // string ke start mein capital chahiye

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (capitalizeNext && isalpha((unsigned char)str[i]))
        {
            str[i] = toupper((unsigned char)str[i]);
            capitalizeNext = 0;
        }
        else
        {
            str[i] = tolower((unsigned char)str[i]);
        }

        // sentence khatam hone ke baad agla letter capital hoga
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            capitalizeNext = 1;
        }
    }
}

int main()
{
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // newline hata do
    str[strcspn(str, "\n")] = '\0';

    toSentenceCase(str);

    printf("Sentence case: %s\n", str);
    return 0;
}