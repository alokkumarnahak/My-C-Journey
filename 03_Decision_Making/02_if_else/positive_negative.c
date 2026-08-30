// Demonstration if-else statements
// Program to check positive or negative

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Program to check positive or negative :-\n\n");

    // variable declaration
    int number;

    // input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // logic
    if (number == 0)
    {
        printf("Zero !");
        return 0; // if number is zero then the program terminates here
    }
    if (number > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }

    // return statement
    return 0;
}