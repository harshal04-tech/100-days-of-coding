// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long num, temp;
    int digitCount[10] = {0};
    int i, digit;
    int maxCount = 0, maxDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    temp = num;

    if (temp < 0)
    {
        temp = -temp;
    }

    do
    {
        digit = temp % 10;
        digitCount[digit]++;
        temp = temp / 10;
    } while (temp > 0);

    for (i = 0; i < 10; i++)
    {
        if (digitCount[i] > maxCount)
        {
            maxCount = digitCount[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is %d (occurs %d times).\n", maxDigit, maxCount);

    return 0;
}