// Demonstration of recursion
// function to calculate sum of natural numbers using recursion

// preprocessor directive
#include <stdio.h>

// Function declaration
int sum(int n);

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
    result = sum(number);

    // output
    printf("Sum: %d\n", result);

    // return statement
    return 0;
}

// Function definition
int sum(int n)
{
    // base condition
    if (n == 0)
    {
        return 0;
    }

    // recursive function call
    return n + sum(n - 1);
}