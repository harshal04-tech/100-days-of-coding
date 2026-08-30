// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int num, temp, digit;
    int sum_of_powers = 0;
    int num_digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        temp /= 10;
        num_digits++;
    }

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < num_digits; i++)
        {
            power *= digit;
        }

        sum_of_powers += power;
        temp /= 10;
    }

    if (num == sum_of_powers)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}