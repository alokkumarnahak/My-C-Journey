//Demonstration of pattern printing using loops in C
//inverted right-angled star triangle

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print inverted right-angled star triangle ---\n\n");

    //variable declaration
    int n;

    //input from user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    //logic
    for (int i = n; i >= 1; i--)
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
