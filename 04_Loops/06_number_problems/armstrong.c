//Demonstration of number problems using loops in C
//Armstrong number

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to check Armstrong number ---\n\n");

    //variable declaration
    int n;
    int original;
    int digit;
    int sum = 0;

    //input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //storing original number
    original = n;

    //logic
    while (n > 0)
    {
        digit = n % 10;

        sum = sum + (digit * digit * digit);

        n = n / 10;
    }

    //checking Armstrong number
    if (sum == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    //return statement
    return 0;
}