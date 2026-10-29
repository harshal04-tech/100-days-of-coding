#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *in = fopen("input.txt", "r");
    if (in == NULL)
    {
        perror("Error opening input.txt");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL)
    {
        perror("Error opening output.txt");
        fclose(in);
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF)
    {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);

    printf("Done! Check output.txt\n");
    return 0;
}