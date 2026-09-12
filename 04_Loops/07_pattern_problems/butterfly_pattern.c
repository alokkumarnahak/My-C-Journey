//Demonstration of pattern problems using nested loops in C
//butterfly pattern

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print butterfly pattern ---\n\n");

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
        //print left stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        //print spaces
        for (j = 1; j <= 2 * (n - i); j++)
        {
            printf("  ");
        }

        //print right stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    //lower half
    for (i = n - 1; i >= 1; i--)
    {
        //print left stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        //print spaces
        for (j = 1; j <= 2 * (n - i); j++)
        {
            printf("  ");
        }

        //print right stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    //return statement
    return 0;
}
