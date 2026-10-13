// Demonstration of matrix operations in C
// identity matrix check 

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- IDENTITY MATRIX ---\n\n");

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

    if(m != n)  {
        printf("Enter a square matrix.");
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

    // checks identity matrix
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < n; j++)  {
            if(i == j)  {
                if(arr[i][j] != 1)    {
                printf("It is not an identity matrix.");
                return 0;
                }
            }
            else    {
                if(arr[i][j] != 0) {
                printf("It is not an identity matrix.");
                return 0;
                }
            }
        }
    }
    printf("It is an identity matrix.");


    // return statement
    return 0;
}
