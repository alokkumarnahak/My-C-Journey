// Demonstration nested-if statements
// Check whether a number is positive and then determine whether it is even or odd

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Check positive and then even or odd :-\n\n");

    // variable declaration
    int number;

    // input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // logic to determine smallest of three numbers
    if (number > 0)
    {
        printf("Positive ");
        if (number % 2 == 0)
            printf("& Even.");
        else
            printf("& Odd.");
    }
    else
    {
        if (number == 0)
            printf("Zero !!");
        else
            printf("Negative !!");
    }

    // return statement
    return 0;
}