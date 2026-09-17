// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

#define N 3

bool areDiagonalElementsDistinct(int matrix[N][N])
{

    for (int i = 0; i < N; i++)
    {

        for (int j = i + 1; j < N; j++)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int mat1[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int mat2[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 1}};

    if (areDiagonalElementsDistinct(mat1))
    {
        printf("Matrix 1: Diagonal elements are distinct.\n");
    }
    else
    {
        printf("Matrix 1: Diagonal elements are NOT distinct.\n");
    }

    if (areDiagonalElementsDistinct(mat2))
    {
        printf("Matrix 2: Diagonal elements are distinct.\n");
    }
    else
    {
        printf("Matrix 2: Diagonal elements are NOT distinct.\n");
    }

    return 0;
}