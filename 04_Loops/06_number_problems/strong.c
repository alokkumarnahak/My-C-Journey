//Demonstration of number problems using loops in C
//Strong number

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to check Strong number ---\n\n");

    //variable declaration
    int n;
    int original;
    int digit;
    int factorial;
    int sum = 0;
    int i;

    //input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //storing original number
    original = n;

    //logic
    while (n > 0)
    {
        digit = n % 10;

        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        n = n / 10;
    }

    //checking Strong number
    if (sum == original)
    {
        printf("%d is a Strong number.\n", original);
    }
    else
    {
        printf("%d is not a Strong number.\n", original);
    }

    //return statement
    return 0;
}
