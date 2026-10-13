// Demonstration of matrix operations in C
// identity matrix check 

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- IDENTITY MATRIX ---\n\n");

    // variable declaration
    int m;

    // user input
    printf("Enter a square matrix.\n");
    printf("Enter no. of rows & columns: ");
    scanf("%d", &m);

    // valid size check
    if(m < 1)  {
        printf("Invalid size !\n");
    }

    // matrix declaration
    int arr[m][m];

    // matrix element input
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < m; j++)  {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // checks identity matrix
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < m; j++)  {
            if(i == j)  {
                if(arr[i][j] != 1)    {
                printf("It is not an identity matrix.");
                return 0;
                }
            }
            else if(arr[i][j] != 0) {
                printf("It is not an identity matrix.");
                return 0;
            }
        }
    }
    printf("It is an identity matrix.");

    // return statement
    return 0;
}
