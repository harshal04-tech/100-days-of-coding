#include <stdio.h>

// Menu choices ke liye enum
enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int choice;
    double a, b, result;

    printf("=== Calculator Menu ===\n");
    printf("%d. ADD\n", ADD);
    printf("%d. SUBTRACT\n", SUBTRACT);
    printf("%d. MULTIPLY\n", MULTIPLY);
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (choice)
    {
    case ADD:
        result = a + b;
        printf("Result: %.2f\n", result);
        break;

    case SUBTRACT:
        result = a - b;
        printf("Result: %.2f\n", result);
        break;

    case MULTIPLY:
        result = a * b;
        printf("Result: %.2f\n", result);
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}