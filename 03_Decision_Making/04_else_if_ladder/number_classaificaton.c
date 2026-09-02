// Demonstration else-if-ladder statements
// Number Classification

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Number Classification :-\n\n");

    // variable declaration
    int number;

    // input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // logic
    if (number < 0)
    {
        printf("Negative");
    }
    else if (number > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Zero");
    }

    // return statement
    return 0;
}