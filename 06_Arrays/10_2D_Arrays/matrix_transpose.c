// Demonstration of 2D array in C
// transpose of matrix

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- MATRIX TRANSPOSE ---\n\n");

    // variable declaration
    int m, n;

    // matrix size input
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);

    // valid size check
    if (m < 1 || n < 1)
    {
        printf("Error: Invalid matrix dimensions!\n");
        return 1;
    }

    // array declaration
    int arr[m][n];

    // input matrix
    printf("Matrix input:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // display original matrix
    printf("\nOriginal matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // display transpose of matrix
    printf("\nTranspose of the matrix1:\n");

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // return statement
    return 0;
}
