// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int odd = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}