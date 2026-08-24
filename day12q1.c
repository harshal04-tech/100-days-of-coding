// Write a program to calculate library fine based on late days as follows:
#include <stdio.h>

int main()
{
    int days;
    int fine = 0;

    printf("Enter late days: ");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Total fine: Rs %d\n", fine);
    }
    else if (days <= 10)
    {
        fine = 10 + ((days - 5) * 4); // First 5 days ka 10 rupees
        printf("Total fine: Rs %d\n", fine);
    }
    else if (days <= 30)
    {
        fine = 30 + ((days - 10) * 6); // First 10 days ka 30 rupees (10 + 20)
        printf("Total fine: Rs %d\n", fine);
    }
    else
    {
        printf("Membership Cancelled.\n");
    }

    return 0;
}