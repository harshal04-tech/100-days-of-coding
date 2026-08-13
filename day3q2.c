// Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the a");
    scanf("%d", &a);
    printf("enter the b");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf(" a is %d  b is  %d", a, b);
    return 0;
}