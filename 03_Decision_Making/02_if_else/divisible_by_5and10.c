// Demonstration if-else statements
// Program to check divisible by both 5 and 10

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Program to check divisible by both 5 and 10 :-\n\n");

    // variable declaration
    int number;

    // input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // logic
    if ((number % 5 == 0) && (number % 10 == 0))
    {
        printf("This number is divisible by both 5 & 10.");
    }
    else
    {
        printf("This number is not divisible by both 5 & 10.");
    }

    // return statement
    return 0;
}