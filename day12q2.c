// Write a program to calculate electricity bill based on units consumed with these rates:
#include <stdio.h>
int main()
{
    int bill = 0;
    int units;
    printf("enter the number of units : ");
    scanf("%d", &units);
    if (units <= 100)
    {
        bill = units * 5;
        printf("your bill is : %d\n", bill);
    }
    else if (units <= 200)
    {
        bill = units * 7;
        printf("your bill is : %d\n", bill);
    }
    else if (units <= 300)
    {
        bill = units * 10;
        printf("your bill is : %d\n", bill);
    }
    else
    {
        bill = units * 12;
        printf("your bill is : %d\n", bill);
    }
    return 0;
}