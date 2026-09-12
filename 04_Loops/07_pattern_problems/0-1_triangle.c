//Demonstration of pattern problems using nested loops in C
//0-1 triangle

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print 0-1 triangle ---\n\n");

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
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }

        printf("\n");
    }

    //return statement
    return 0;
}