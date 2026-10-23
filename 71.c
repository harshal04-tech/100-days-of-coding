#include <stdio.h>

#include <ctype.h>
#include <string.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    // File ko write mode me open karo
    fp = fopen("info.txt", "w");

    // Check karo file properly open hui ya nahi
    if (fp == NULL)
    {
        printf("Error: File open nahi ho payi!\n");
        return 1;
    }

    // User se input lo
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // fgets newline bhi store karta hai, use hata do
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == '\n')
        {
            name[i] = '\0';
            break;
        }
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    // File me data likho
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    // File close karo
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}