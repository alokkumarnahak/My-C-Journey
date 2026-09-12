//Demonstration of pattern problems using nested loops in C
//diamond pattern

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print diamond pattern ---\n\n");

    //variable declaration
    int n;
    int i;
    int j;

    //input from user
    printf("Enter N: ");
    scanf("%d", &n);

    //logic

    //upper half
    for (i = 1; i <= n; i++)
    {
        //print spaces
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        //print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    //lower half
    for (i = n - 1; i >= 1; i--)
    {
        //print spaces
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        //print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    //return statement
    return 0;
}
