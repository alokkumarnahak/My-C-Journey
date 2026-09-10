//Demonstration of nested loops in C
//increasing number triangle

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print increasing number triangle ---\n\n");

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
            printf("%d ", j);
        }

        printf("\n");
    }

    //return statement
    return 0;
}
