// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float cp, loss, profit, percentage;
    printf("Enter the cost of the product : ");
    scanf("%f", &cp);
    float sp;
    printf("Enter the selling price of the product : ");
    scanf("%f", &sp);
    if (cp > sp)
    {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss");
        printf("Amount: %.2f\n", loss);
        printf("Percentage: %.2f%%\n", percentage);
    }
    if (cp < sp)
    {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit");
        printf("Amount: %.2f\n", profit);
        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}
