// Demonstration of recursion
// function to calculate factorial using recursion

// preprocessor directive
#include <stdio.h>

// Function declaration
int factorial(int n);

// main function
int main()
{
    // variable declaration
    int number;
    int result;

    // user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // function call
    result = factorial(number);

    // output
    printf("Factorial  : %d\n", result);

    // return statement
    return 0;
}

// Function definition
int factorial(int n)
{
    // base condition
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // recursive function call
    return n * factorial(n - 1);
}
