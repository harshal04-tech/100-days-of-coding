// Write a program to input three numbers and find the largest among them using if–else.
`
#include <stdio.h> int main()
{
    int a, b, c;
    printf("enter the 1st \n 2nd \n 3rd number : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("a is the greatest number");
    else if (b > c && b > a)
        printf("b is the greatest number");
    else
    {
        printf("c is the greatest number");
    }
    return 0;
}