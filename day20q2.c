// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (int i = 0; binary[i] != '\0'; i++)
    {

        if (binary[i] == '0')
        {
            binary[i] = '1';
        }

        else if (binary[i] == '1')
        {
            binary[i] = '0';
        }

        else
        {
            printf("Invalid input. Please enter only 0s and 1s.\n");
            return 1;
        }
    }

    printf("1's complement is: %s\n", binary);

    return 0;
}