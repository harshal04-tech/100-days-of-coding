
// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first initial
    printf("%c. ", name[0]);

    // Print initials of middle names
    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            // Check if this is not the last word
            if (strchr(name + i + 1, ' ') != NULL)
                printf("%c. ", name[i + 1]);
            else
            {
                // Print the surname in full
                printf("%s", name + i + 1);
                break;
            }
        }
    }

    return 0;
}