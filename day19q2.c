// Write a program to find the sum of digits of a number.
#include <stdio.h>

int main()
{
    int num, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of the digits is: %d\n", sum);

    return 0;
}