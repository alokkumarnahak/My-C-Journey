// Demonstration of types of functions
// function with no argument and return value

// preprocessor directive
#include <stdio.h>

// Function declaration
int getNumber();

// main function
int main()
{
    // variable declaration
    int number;

    // function call
    number = getNumber();

    // output
    printf("\n========== RESULT ==========\n");
    printf("Returned Number : %d\n", number);
    printf("============================\n");

    // return statement
    return 0;
}

// Function definition
int getNumber()
{
    // variable declaration
    int n;

    // user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // return statement
    return n;
}
