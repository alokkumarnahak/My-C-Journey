// Demonstration of matrix operations in C
// transpose of matrix

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- TRANSPOSE OF MATRIX ---\n\n");

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
    int arr1[m][n];

    // matrix element input
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < n; j++)  {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

    // make its transpose
    printf("Transpose of matrix:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < n; j++)  {
            arr2[i][j] = arr1[j][i];
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // return statement
    return 0;
}
