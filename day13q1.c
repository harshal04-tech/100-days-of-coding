// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int n1, n2;
    char operator;
    printf("enter the operator (+,-,*,/,%%) : ");
    scanf(" %c", operator);
    printf("enter the n1 annd  n2 : ");
    scanf("%d %d", &n1, &n2);
    switch (operator)
    {
    case '+':
        printf("Result: %d\n", n1 + n2);
        break;

    case '-':
        printf("Result: %d\n", n1 - n2);
        break;

    case '*':
        printf("Result: %d\n", n1 * n2);
        break;

    case '/':
        if (n2 != 0)
        {
            printf("Result: %d\n", n1 / n2);
        }
        else
        {
            printf("Error: Division by zero is not allowed!\n");
        }
        break;

    case '%':
        if (n2 != 0)
        {
            printf("Result: %d\n", n1 % n2);
        }
        else
        {
            printf("Error: Division by zero is not allowed!\n");
        }
        break;

    default:
        printf("Error: Invalid operator entered!\n");
    }

    return 0;
}