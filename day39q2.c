// Find the sum of main diagonal elements for a square matrix

#include <stdio.h>

#define N 3

int sumMainDiagonal(int matrix[N][N])
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += matrix[i][i];
    }

    return sum;
}

int main()
{
    int mat[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Sum of the main diagonal: %d\n", sumMainDiagonal(mat));

    return 0;
}