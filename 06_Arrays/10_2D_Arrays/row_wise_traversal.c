// Demonstration of 2D array in C
// row wise traversal

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- ROW-WISE TRAVERSAL ---\n\n");

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

    // display the 2D array
    printf("Row-wise traversal:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    // return statement
    return 0;
}
