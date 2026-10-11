// Demonstration of 2D array in C
// find maximum and minimum elements

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- MAXIMUM & MINIMUM ELEMENT ---\n\n");

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

    int max = arr[0][0];
    int min = arr[0][0];

    // logic
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    // printing output
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    // return statement
    return 0;
}
