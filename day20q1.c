// Write a program to find the product of odd digits of a number
#include <stdio.h>

int main()
{
    int num, digit;
    int product = 1;
    int has_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            product = product * digit;
            has_odd = 1;
        }

        num = num / 10;
    }

    if (has_odd == 1)
    {
        printf("Product of odd digits is: %d\n", product);
    }
    else
    {
        printf("There are no odd digits in this number.\n");
    }

    return 0;
}