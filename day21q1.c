// Write a program to swap the first and last digit of a number
#include <stdio.h>

int main()
{
    int num, temp;
    int first, last, middle;
    int mult = 1;
    int swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10)
    {
        printf("Swapped number is: %d\n", num);
        return 0;
    }
    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
        mult = mult * 10;
    }
    first = temp;

    last = num % 10;
    middle = (num % mult) / 10;

    swapped = (last * mult) + (middle * 10) + first;

    printf("Swapped number is: %d\n", swapped);

    return 0;
}