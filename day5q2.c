// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h> // 1 hrs=3600 1 min=60 sec
int main()
{
    int s, h, rs, m, st;
    printf("enter seconds : ");
    scanf("%d", &s);
    h = s / 3600;
    rs = s % 3600;
    m = rs / 60;
    st = rs % 60;
    printf("Hours : %d Minute : %d  seconds : %d ", h, m, st);
    return 0;
}