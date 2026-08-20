// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    int cp;
    printf("Enter the cost of the product : ");
    scanf("%d", &cp);
    int sp;
    printf("Enter the selling price of the product : ");
    scanf("%d", &sp);
    if (cp > sp)
    {
        printf("Loss");
    }
    if (cp < sp)
    {
        printf("Profit");
    }

    return 0;
}