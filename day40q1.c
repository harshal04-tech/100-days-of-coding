// Perform diagonal traversal of a matrix.
#include <stdio.h>

#define N 3 // Define the size of the square matrix

void diagonalTraversal(int matrix[N][N])
{
    // A matrix of size N x N has 2*N - 1 diagonals
    for (int k = 0; k < 2 * N - 1; k++)
    {

        // Determine the starting row and column for the current diagonal
        int row = (k < N) ? 0 : k - N + 1;
        int col = (k < N) ? k : N - 1;

        // Traverse downwards-left along the diagonal
        while (row < N && col >= 0)
        {
            printf("%d ", matrix[row][col]);
            row++; // Move down
            col--; // Move left
        }
        printf("\n"); // New line for the next diagonal
    }
}

int main()
{
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    /*
       Expected Output:
       1
       2 4
       3 5 7
       6 8
       9
    */

    printf("Matrix Diagonal Traversal:\n");
    diagonalTraversal(matrix);

    return 0;
}