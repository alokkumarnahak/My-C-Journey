//Demonstration of pattern printing using loops in C
//pyramid pattern

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print pyramid pattern ---\n\n");

    //variable declaration
    int n;

    //input from user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    //logic
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n*2 - 1; j++)
        {
            if(j > n - i  && j < n + i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    //return statement
    return 0;
}
