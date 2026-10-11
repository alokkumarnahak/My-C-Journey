// Row sums
// Column sums

// Demonstration of 2D array in C
// row and column sums

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- ROW & COLUMN SUMS ---\n\n");

    // variable declaration
    int m, n, allSum = 0;

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

    // logic

    printf("Sum of\n");
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        printf("Row %d:", i + 1);

        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
            allSum += arr[i][j];
        }

        printf("%d", sum);
        printf("\n");
    }

    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        printf("Column %d:", j + 1);

        for (int i = 0; i < m; i++)
        {
            sum += arr[i][j];
        }

        printf("%d", sum);
        printf("\n");
    }
    printf("All elements: %d",allSum);

    // return statement
    return 0;
}
