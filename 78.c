#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char filename[256];
    FILE *fp;
    int ch;
    long vowels = 0, consonants = 0;

    if (argc > 1)
    {
        snprintf(filename, sizeof filename, "%s", argv[1]);
    }
    else
    {
        printf("Enter file name: ");
        if (scanf("%255s", filename) != 1)
            return 1;
    }

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isalpha(ch))
        { /* letters only: digits, spaces, symbols ignored */
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);

    printf("Vowels     : %ld\n", vowels);
    printf("Consonants : %ld\n", consonants);
    return 0;
}