// Demonstration of types of functions
// function with argument and no return value

// preprocessor directive
#include <stdio.h>

// Function declaration
void displaySquare(int n);

// main function
int main()
{
    // variable declaration
    int number;

    // user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // function call
    displaySquare(number);

    // return statement
    return 0;
}

// Function definition
void displaySquare(int n)
{
    // variable declaration
    int square;

    // calculate square
    square = n * n;

    // output
    printf("\n========== SQUARE ==========\n");
    printf("Number : %d\n", n);
    printf("Square : %d\n", square);
    printf("============================\n");
}
