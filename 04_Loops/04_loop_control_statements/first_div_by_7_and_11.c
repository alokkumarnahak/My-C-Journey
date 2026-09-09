//Demonstration of loop control statements in C
//first number divisible by both 7 and 11

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to find first number divisible by both 7 and 11 ---\n\n");
    
    //variable declaration
    int n;
    int i;

    //input from user
    printf("Enter N: ");
    scanf("%d", &n);

    //logic
    for (i = 2; i <= n; i++)
    {
        if (i % 7 == 0 && i % 11 == 0)
        {
            printf("First number divisible by both 7 and 11 : %d\n", i);
            break;
        }
    }
    if (i > n)
    {
        printf("No number found.\n");
    }

    //return statement
    return 0;
}
