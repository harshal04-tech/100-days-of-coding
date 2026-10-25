#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char line[256];

    // File ko read mode mein open karo
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening info.txt");
        return EXIT_FAILURE;
    }

    // fgets() NULL return karta hai jab EOF aa jaye (ya error ho)
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}