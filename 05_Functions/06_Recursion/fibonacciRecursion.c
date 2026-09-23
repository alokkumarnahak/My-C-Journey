// Demonstration of recursion
// Multiple recursive calls
// function to generate Fibonacci numbers using recursion

// preprocessor directive
#include <stdio.h>

// Function declaration
int fibonacci(int n);

// main function
int main()
{
    // variable declaration
    int number;
    int i;

    // user input
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    // output
    printf("\n========== FIBONACCI SERIES ==========\n");

    // loop to display Fibonacci series
    for (i = 0; i < number; i++)
    {
        printf("%d ", fibonacci(i));
    }

    // return statement
    return 0;
}

// Function definition
int fibonacci(int n)
{
    // base condition
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    // recursive function call
    return fibonacci(n - 1) + fibonacci(n - 2);
}