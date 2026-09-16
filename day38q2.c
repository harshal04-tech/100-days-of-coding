// Check if a matrix is symmetric
#include <stdio.h>

/* A symmetric matrix must be a square, so we only need one SIZE definition */
#define SIZE 3

int main()
{
    /* Initialize a 3x3 square matrix */
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}};

    int isSymmetric = 1; /* Flag variable: 1 means true, 0 means false */

    /* Loop through the rows */
    for (int i = 0; i < SIZE; i++)
    {
        /* We only need to check the upper triangle (j > i) */
        for (int j = i + 1; j < SIZE; j++)
        {

            /* If any mirrored elements don't match, it is not symmetric */
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break; /* Break out of the inner loop */
            }
        }

        /* If a mismatch was already found, break out of the outer loop to save time */
        if (isSymmetric == 0)
        {
            break;
        }
    }

    /* Print the final result based on the flag */
    if (isSymmetric)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}