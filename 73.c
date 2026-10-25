#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *fp;
    int ch;
    long chars = 0, words = 0, lines = 0;
    int inWord = 0; // 1 agar abhi kisi word ke andar hain

    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening info.txt");
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;

        if (ch == '\n')
        {
            lines++;
        }

        if (isspace(ch))
        {
            inWord = 0; // space/newline/tab pe word khatam
        }
        else if (!inWord)
        {
            inWord = 1; // naye word ki shuruaat
            words++;
        }
    }

    // Agar last line mein '\n' nahi hai, to bhi usse ek line count karo
    if (chars > 0 && lines == 0)
    {
        lines = 1;
    }
    else if (chars > 0)
    {
        fseek(fp, -1, SEEK_END);
        if (fgetc(fp) != '\n')
        {
            lines++;
        }
    }

    fclose(fp);

    printf("Characters: %ld\n", chars);
    printf("Words     : %ld\n", words);
    printf("Lines     : %ld\n", lines);

    return EXIT_SUCCESS;
}