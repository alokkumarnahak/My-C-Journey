// Demonstration of matrix operations in C
// matrix substraction

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- MATRIX SUBSTRACTION ---\n\n");

    // variable declaration
    int m, n;

    // user input
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);

    if(m < 1 || n < 1)  {
        printf("Invalid size !\n");
        return 1;
    }

    // matrix declaration
    int arr1[m][n];
    int arr2[m][n];
    int arr3[m][n];

    printf("\nMatrix 1:\n");
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < n; j++)  {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < n; j++)  {
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix after substraction:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < n; j++)  {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    // return statement
    return 0;
}
