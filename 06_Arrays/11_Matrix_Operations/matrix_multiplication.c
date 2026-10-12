// Demonstration of matrix operations in C
// matrix multiplication

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- MATRIX MULTIPLICATION ---\n\n");

    // variable declaration
    int m, n, o, p;

    // user input
    printf("\nMatrix 1:\n");
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);

    printf("\nMatrix 2:\n");
    printf("Enter no. of rows: ");
    scanf("%d", &o);
    printf("Enter no. of columns: ");
    scanf("%d", &p);

    if(n != o)  {
        printf("The number of columns in the first matrix must equal ");
        printf("the number of rows in the second matrix.\n");
        return 1;
    }

    // matrix declaration
    int arr1[m][n];
    int arr2[o][p];
    int arr3[m][p];

    // taking input
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < n; j++)  {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < o; i++)  {
        for(int j = 0; j < p; j++)  {
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }

    // matrix multiplication
    printf("Matrix after multiplication:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < p; j++)  {
            arr3[i][j] = 0;
            for(int k = 0; k < n; k++)  {
                arr3[i][j] += (arr1[i][k] * arr2[k][j]) ;
            }
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    // return statement
    return 0;
}
