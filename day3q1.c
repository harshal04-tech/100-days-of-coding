// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float c, f;
    printf("enter temp in c : ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("%f", f);
    return 0;
}