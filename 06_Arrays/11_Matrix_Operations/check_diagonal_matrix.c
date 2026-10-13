// Demonstration of matrix operations in C
// diagonal matrix check 

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- DIAGONAL MATRIX ---\n\n");

    // variable declaration
    int m;

    // user input
    printf("Enter a square matrix.\n");
    printf("Enter no. of rows & columns: ");
    scanf("%d", &m);

    // valid size check
    if(m < 1)  {
        printf("Invalid size !\n");
        return 1;
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

    // checks diagonal matrix
    for(int i = 0; i < m; i++)  {
        for(int j = 0; j < m; j++)  {
            if(i == j) {
                continue;
            }
            else if(arr[i][j] != 0)  {
                printf("It is not a diagonal matrix.");
                return 0;
            }
        }
    }
    printf("It is a diagonal matrix.");

    // return statement
    return 0;
}
