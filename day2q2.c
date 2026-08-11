// Write a program to calculate the area and circumference of a circle given its radius.
// Input 1:
// 7
// Output 1:
// Area=153.94, Circumference=43.96
#include <stdio.h>
int main()
{
    float a;
    printf("enter the radius : ");
    scanf("%f", &a);
    float area;
    area = 3.14 * a * a;
    printf("area is %f\n", area);
    float circumference;
    circumference = 2 * 3.14 * a;
    printf("circumference is %f\n", circumference);
    return 0;
}