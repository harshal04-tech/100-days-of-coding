// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
// Input 1:
// 5 10
// Output 1:
// Area=50, Perimeter=30
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the length : ");
    scanf("%d", &a);
    printf("enter the breath  : ");
    scanf("%d", &b);
    int area;
    area = a * b;
    printf("%d", area);
    int perimeter;
    perimeter = 2 * (a + b);
    printf("%d", perimeter);
    return 0;
}