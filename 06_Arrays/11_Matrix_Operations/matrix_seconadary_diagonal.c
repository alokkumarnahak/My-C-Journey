// Demonstration of matrix operations in C
// secondary diagonal of matrix

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- SECONDARY DIAGONAL OF MATRIX ---\n\n");

    // variable declaration
    int m, n;

    // user input
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);

    // valid size check
    if(m < 1 || n < 1)  {
        printf("Invalid size !\n");
        return 1;
    }

    // matrix declaration
    int arr[m][n];

    // matrix element input
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < n; j++)  {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // prints secondary diagonal
    printf("Secondary diagonal elements of matrix:\n");
    for(int j = n - 1; j >= 0; j--)  {
        for(int i = 0; i < m; i++)  {
            if(i+j == n - 1)    {
                printf("%d ", arr[i][j]);
            }
        }
    }

    // return statement
    return 0;
}
