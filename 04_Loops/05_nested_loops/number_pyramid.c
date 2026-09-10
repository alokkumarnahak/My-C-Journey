//Demonstration of nested loops in C
//number pyramid

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print number pyramid ---\n\n");

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
        //print spaces
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        //print increasing numbers
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        //print decreasing numbers
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    //return statement
    return 0;
}
