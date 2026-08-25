// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
    int num, originalNum, remainder, reversedNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    if (originalNum == reversedNum)
    {
        printf("%d is a Palindrome number.\n", originalNum);
    }
    else
    {
        printf("%d is NOT a Palindrome number.\n", originalNum);
    }

    return 0;
}