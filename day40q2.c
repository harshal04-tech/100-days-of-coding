// Multiply two matrices
#include <stdio.h>

// Define dimensions using macros for easy testing
#define ROW1 2
#define COL1 3
#define ROW2 3 // Must be equal to COL1 for multiplication to work
#define COL2 2

int main()
{
    // Matrix 1 (2x3)
    int mat1[ROW1][COL1] = {
        {1, 2, 3},
        {4, 5, 6}};

    // Matrix 2 (3x2)
    int mat2[ROW2][COL2] = {
        {7, 8},
        {9, 10},
        {11, 12}};

    // Result matrix (2x2) initialized to 0
    int result[ROW1][COL2] = {0};

    // Matrix multiplication logic
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            for (int k = 0; k < COL1; k++)
            {
                // Dot product calculation
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the resultant matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}