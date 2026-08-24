// Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n;
    int factorial = 1;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}