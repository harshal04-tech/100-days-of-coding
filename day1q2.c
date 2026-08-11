// Write a program to input two numbers and display their sum, difference, product, and quotient.
// Input 1:
// 10 2
// Output 1:
// Sum=12, Diff=8, Product=20, Quotient=5
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the 1st number : ");
    scanf("%d", &a);
    printf("enter the 2nd number : ");
    scanf("%d", &b);
    int sum;
    sum = a + b;
    printf("%d\n", sum);
    int diff;
    diff = a - b;
    printf("%d\n", diff);
    int product;
    product = a * b;
    printf("%d\n", product);
    int quotient;
    quotient = a / b;
    printf("%d\n", quotient);
    return 0;
}