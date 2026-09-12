//Demonstration of pattern printing using loops in C
//Right-angled star triangle

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print right-angled star triangle ---\n\n");

    //variable declaration
    int n;

    //input from user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    //logic
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    //return statement
    return 0;
}
