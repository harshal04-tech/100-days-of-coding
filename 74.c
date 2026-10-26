#include <stdio.h>
#include <stdlib.h>

int main()
{
    char srcName[100], destName[100];
    FILE *src, *dest;
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", srcName);

    printf("Enter destination file name: ");
    scanf("%99s", destName);

    // Source file ko read mode mein kholo
    src = fopen(srcName, "r");
    if (src == NULL)
    {
        printf("Error: Cannot open source file '%s'\n", srcName);
        return 1;
    }

    // Destination file ko write mode mein kholo
    dest = fopen(destName, "w");
    if (dest == NULL)
    {
        printf("Error: Cannot open destination file '%s'\n", destName);
        fclose(src);
        return 1;
    }

    // Character by character copy
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}