// Demonstration of recursion and iteration
// function to calculate factorial using recursion and loop

// preprocessor directive
#include <stdio.h>

// Function declarations
int factorialRecursive(int n);
int factorialIterative(int n);

// main function
int main()
{
    // variable declaration
    int number;
    int recursiveResult;
    int iterativeResult;

    // user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // function calls
    recursiveResult = factorialRecursive(number);
    iterativeResult = factorialIterative(number);

    // output
    printf("\n========== FACTORIAL COMPARISON ==========\n");
    printf("Number              : %d\n", number);
    printf("Recursive Result    : %d\n", recursiveResult);
    printf("Iterative Result    : %d\n", iterativeResult);
    printf("==========================================\n");

    // return statement
    return 0;
}

// Function definition
// factorial using recursion
int factorialRecursive(int n)
{
    // base condition
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // recursive function call
    return n * factorialRecursive(n - 1);
}

// Function definition
// factorial using iteration
int factorialIterative(int n)
{
    // variable declaration
    int i;
    int result = 1;

    // loop to calculate factorial
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    // return statement
    return result;
}
