//Demonstration of nested loops in C
//hollow square pattern

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print hollow square pattern ---\n\n");

    //variable declaration
    int n;
    int i;
    int j;

    //input from user
    printf("Enter N: ");
    scanf("%d", &n);

    //logic
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    //return statement
    return 0;
}