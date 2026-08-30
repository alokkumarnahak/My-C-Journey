// Demonstration if-else statements
// Program to check even or odd

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Program to check even or odd :-\n\n");

    // variable declaration
    int number;

    // input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // logic
    if (number % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    // return statement
    return 0;
}
