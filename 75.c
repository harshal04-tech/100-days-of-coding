#include <stdio.h>
#include <string.h>

int main()
{
    char fileName[100], text[500];
    FILE *fp;

    printf("Enter file name: ");
    scanf("%99s", fileName);

    // scanf ke baad bacha hua newline hata do
    getchar();

    // Pehle check karo ki file exist karti hai ya nahi
    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("Error: File '%s' exist nahi karti.\n", fileName);
        return 1;
    }
    fclose(fp);

    // Ab append mode mein kholo
    fp = fopen(fileName, "a");
    if (fp == NULL)
    {
        printf("Error: File '%s' ko append mode mein nahi khol sakte.\n", fileName);
        return 1;
    }

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    // Agar line mein newline nahi hai toh add kar do
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] != '\n')
    {
        fputc('\n', fp);
    }

    fputs(text, fp);

    printf("Text successfully append ho gaya!\n");

    fclose(fp);
    return 0;
}