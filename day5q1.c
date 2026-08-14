// Write a progr<am to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float p, t, r, n, a, ci, si;
    printf("enter the time : ");
    scanf("%f", &t);
    printf("enter the rate : ");
    scanf("%f", &r);
    printf("enter the principal : ");
    scanf("%f", &p);
    si = (p * r * t) / 100;
    printf("simple interest is :  %f\n", si);
    printf("enter the value of n : ");
    scanf("%f", &n);
    a = p * pow(1 + r / n, n * t);
    ci = a - p;
    printf("compound interst : %f\n", ci);

    return 0;
}