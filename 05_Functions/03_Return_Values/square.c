// Demonstration of return values in function
// function that returns a square of a number

// preprocessor directive
#include <stdio.h>

// Function declaration
int square(int n);

// main function
int main()
{
    // program description
    printf("--- Function that returns square of a number ---\n\n");

    // variable declaration
    int number;
    int result;

    // input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // calling function
    result = square(number);

    // display output
    printf("Square: %d\n", result);

    // return statement
    return 0;
}

// Function definition
int square(int n)
{
    return n * n;
}
