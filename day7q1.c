// Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the year : ");
    scanf("%d", &n);
    if (n % 4 == 0)
    {
        printf("the year is leap year : ");
    }
    else
    {
        printf("the year is not leap year : ");
    }
    return 0;
}