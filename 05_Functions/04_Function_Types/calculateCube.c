// Demonstration of types of functions
// function with argument and return value

// preprocessor directive
#include <stdio.h>

// Function declaration
int calculateCube(int n);

// main function
int main()
{
    // variable declaration
    int number;
    int cube;

    // user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // function call
    cube = calculateCube(number);

    // output
    printf("\n========== CUBE ==========\n");
    printf("Number : %d\n", number);
    printf("Cube   : %d\n", cube);
    printf("==========================\n");

    // return statement
    return 0;
}

// Function definition
int calculateCube(int n)
{
    // variable declaration
    int result;

    // calculate cube
    result = n * n * n;

    // return statement
    return result;
}
