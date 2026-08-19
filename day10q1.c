// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("enter side a, b and c : ");
    scanf("%f\n %f\n %f\n ", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a == b && b == c)
        {
            printf("equilateral triangle ");
        }
        else if (a != b || b == c || a == c)
        {
            printf("isoceles triangle ");
        }
        else
        {
            printf("scalene traingle ");
        }
    }
    else
    {
        printf("Invalid input! Those side lengths cannot form a triangle");
    }
    return 0;
}