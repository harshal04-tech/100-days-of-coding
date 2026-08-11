// Write a program to input two numbers and display their sum.
// Input 1:
// 3 4
// Output 1:
// Sum = 7
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the 1st number : ");
    scanf("%d", &a);
    printf("enter the 2nd number : ");
    scanf("%d", &b);
    int c = a + b;
    printf("%d", c);
}