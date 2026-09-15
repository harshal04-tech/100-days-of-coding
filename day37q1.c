// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

#define ROWS 3
#define COLS 4

int main()
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int rowSums[ROWS] = {0};

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            rowSums[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("Row %d sum = %d\n", i, rowSums[i]);
    }

    return 0;
}