// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n;
    int product = 1;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("The product of even numbers from 1 to %d is: %d\n", n, product);

    return 0;
}