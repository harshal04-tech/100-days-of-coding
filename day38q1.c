// Add two matrices
#include <stdio.h>

#define ROWS 2
#define COLS 3

int main()
{
    int matrix1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}};

    int matrix2[ROWS][COLS] = {
        {7, 8, 9},
        {10, 11, 12}};

    int sum[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Result of Matrix Addition (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}