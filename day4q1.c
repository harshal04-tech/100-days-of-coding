// Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the 1st : ");
    scanf("%d", &a);
    printf("enter the 2nd : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
    return 0;
}